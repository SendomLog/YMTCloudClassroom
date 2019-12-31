//
//  YMWebViewMessageHandler.h
//  YMTBigClassRoom_Example
//
//  Created by mystarains on 2019/9/6.
//  Copyright © 2019 zhangqian. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>

NS_ASSUME_NONNULL_BEGIN


static NSString *kWVJSFuncWebGetToken = @"webGetToken";
static NSString *kWVJSFuncWebLoadFinshed = @"webLoadFinished";
static NSString *kWVJSFuncHaveNewMessage = @"haveNewMessage";
static NSString *kWVJSFuncWebReportClose = @"webReportClose";
static NSString *kWVJSFuncWebReportSuccess = @"webReportSuccess";

@protocol YMWebViewMessageHandlerDelegate <NSObject>

- (void)webGetToken:(_Nullable id)info;

- (void)webLoadFinished:(_Nullable id)info;

- (void)haveNewMessage;

- (void)webReportClose:(_Nullable id)info;

- (void)webReportSuccess:(_Nullable id)info;

@end

@interface YMWebViewMessageHandler : NSObject<WKScriptMessageHandler>

@property (nonatomic, weak) id<YMWebViewMessageHandlerDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
