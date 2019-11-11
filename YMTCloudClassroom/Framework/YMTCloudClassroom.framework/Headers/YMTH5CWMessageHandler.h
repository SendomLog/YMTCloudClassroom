//
//  YMH5CWMessageHandler.h
//  teacher
//
//  Created by Caffrey on 2019/6/13.
//  Copyright © 2019 YiMi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>

NS_ASSUME_NONNULL_BEGIN

static NSString *kJSFuncWebSetPlantInfo = @"webSetPlantInfo";
static NSString *kJSFuncWebGetToken = @"webGetToken";
static NSString *kJSFuncWebLoadFinshed = @"webLoadFinshed";

@protocol YMH5CWMessageHandlerDelegate <NSObject>

- (void)webSetPlantInfo:(_Nullable id)info;

- (void)webGetToken:(_Nullable id)info;

- (void)webLoadFinshed:(_Nullable id)info;

@end



@interface YMTH5CWMessageHandler : NSObject<WKScriptMessageHandler>

@property (nonatomic, weak) id<YMH5CWMessageHandlerDelegate> delegate;



@end

NS_ASSUME_NONNULL_END
