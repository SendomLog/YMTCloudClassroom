//
//  YMTHTTPSessionManager.h
//  YMTCloudClassroom_Example
//
//  Created by SendomZhang on 6/8/2019.
//  Copyright © 2019 zhangqian. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NSDictionary *_Nullable(^YMTHTTPSessionManagerParametersModify)(NSDictionary *parameters);

typedef id _Nullable (^YMTHTTPSessionManagerResultModify)(id _Nullable object, NSError *__autoreleasing *_Nullable error);

@interface YMTHTTPSessionManager : NSObject

/// env string
@property (nonatomic, copy, readwrite) NSString *envString;

/// 参数处理
@property (nonatomic, copy, readwrite) YMTHTTPSessionManagerParametersModify parametersModify;

/// 参数处理
@property (nonatomic, copy, readwrite) YMTHTTPSessionManagerResultModify resultSuccessModify;

+ (instancetype)shareManager;

- (nullable NSURLSessionDataTask *)fetch:(NSString *)URLString
                            parameters:(nullable id)parameters
                              progress:(nullable void (^)(NSProgress *progress))progress
                                 result:(nullable void (^)(NSURLSessionDataTask *task, id _Nullable responseObject, NSError *error))result;

@end

NS_ASSUME_NONNULL_END
