//
//  YMTChatMessageHandler.h
//  YMTBigClassRoom_Example
//
//  Created by mystarains on 2019/9/6.
//  Copyright © 2019 zhangqian. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>

NS_ASSUME_NONNULL_BEGIN


static NSString *kJSFuncWebGetToken = @"webGetToken";
static NSString *kJSFuncWebLoadFinshed = @"webLoadFinished";
static NSString *kJSFuncHaveNewMessage = @"haveNewMessage";

@protocol YMTChatMessageHandlerDelegate <NSObject>

- (void)webGetToken:(_Nullable id)info;

- (void)webLoadFinished:(_Nullable id)info;

- (void)haveNewMessage;

@end

@interface YMTChatMessageHandler : NSObject<WKScriptMessageHandler>

@property (nonatomic, weak) id<YMTChatMessageHandlerDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
