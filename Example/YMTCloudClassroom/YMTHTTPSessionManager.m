//
//  YMTHTTPSessionManager.m
//  YMTCloudClassroom_Example
//
//  Created by SendomZhang on 6/8/2019.
//  Copyright © 2019 zhangqian. All rights reserved.
//

#import "YMTHTTPSessionManager.h"

#import "YMTHTTPURLModel.h"

#import <AFNetworking/AFNetworking.h>

@interface YMTHTTPSessionManager ()

/// session manager
@property (nonatomic, strong, readwrite) AFHTTPSessionManager *httpManager;

/// url dic
@property (nonatomic, strong, readwrite) NSDictionary *URLDictionary;

/// fetch method array
@property (nonatomic, strong, readwrite) NSArray <NSString *> *methodsArray;

@end

@implementation YMTHTTPSessionManager

static YMTHTTPSessionManager *_sessionManager;

+ (instancetype)shareManager {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sessionManager = [YMTHTTPSessionManager new];
        _sessionManager.httpManager = [AFHTTPSessionManager manager];
        _sessionManager.httpManager.requestSerializer = [AFHTTPRequestSerializer serializer];
    });
    return _sessionManager;
}

- (NSDictionary *)modifyParameters:(id)parameters {
    if (![parameters isKindOfClass:[NSDictionary class]]) {
        return nil;
    }
    if (!self.parametersModify) {
        return parameters;
    }
    
    return self.parametersModify(parameters);
}

- (YMTHTTPURLModel *)modifyURL:(NSString *)URLString {
    if (!URLString) {
        return nil;
    }
    NSDictionary *urlDic = self.URLDictionary[@"path"][URLString];
    if (!urlDic) {
        return nil;
    }
    YMTHTTPURLModel *model = [YMTHTTPURLModel new];
    
    [model setValuesForKeysWithDictionary:urlDic];
    
    model.domain = self.URLDictionary[@"domain"][model.domain][self.envString];
    
    return model;
}

- (NSURLSessionDataTask *)fetch:(NSString *)URLString parameters:(id)parameters progress:(void (^)(NSProgress * _Nonnull))progress result:(nullable void (^)(NSURLSessionDataTask * _Nonnull task, id _Nullable responseObject, NSError * _Nonnull error))result {
    
    YMTHTTPURLModel *model = [self modifyURL:URLString];
    
    if (!model) {
        return nil;
    }
    
    NSDictionary *para = [self modifyParameters:parameters];
    NSString *url = [model.domain stringByAppendingString:model.path];
    
    NSUInteger idx = [self.methodsArray indexOfObject:model.method];

    id success = ^(NSURLSessionDataTask * _Nonnull task, id _Nullable response) {
        NSError *error = nil;
        id object = response;
        if (self.resultSuccessModify) {
            object = self.resultSuccessModify(response, &error);
        }
        result(task, object, error);
    };
    
    id failure = ^(NSURLSessionDataTask * _Nonnull task, NSError * _Nonnull error) {
        result(task, nil, error);
    };
    
    if (model.requestSerializer.length) {
        [self.httpManager.requestSerializer setValue:model.requestSerializer forHTTPHeaderField:@"Content-Type"];
    }
    
    switch (idx) {
        case 0:
            return [_httpManager GET:url parameters:para progress:progress success:success failure:failure];
            break;
        case 1:
            return [_httpManager POST:url parameters:para progress:progress success:success failure:failure];
            break;
        default:
            return nil;
            break;
    }
}

- (NSDictionary *)URLDictionary {
    if (!_URLDictionary) {
        NSString *filePath = [[NSBundle bundleForClass:self.class] pathForResource:@"APIjson" ofType:@"json"];
        NSData *data = [NSData dataWithContentsOfFile:filePath];
        if (data) {
            _URLDictionary = [NSJSONSerialization JSONObjectWithData:data options:kNilOptions error:nil];
        }else {
            _URLDictionary = [NSDictionary dictionary];
        }
    }
    return _URLDictionary;
}

- (NSArray<NSString *> *)methodsArray {
    if (!_methodsArray) {
        _methodsArray = @[@"GET", @"POST"];
    }
    return _methodsArray;
}

- (NSString *)envString {
    if (!_envString) {
        _envString = @"";
    }
    return _envString;
}
    
@end
