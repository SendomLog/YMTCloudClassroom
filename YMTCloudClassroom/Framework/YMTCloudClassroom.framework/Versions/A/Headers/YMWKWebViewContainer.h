//
//  YMWKWebViewContainer.h
//  YMTCloudClassroom
//
//  Created by mac on 2019/12/3.
//

#import <WebKit/WebKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol YMWKWebViewContainerDelegate <NSObject>

- (void)webReportClose;
- (void)webReportSuccess;
- (void)haveNewMessage;
- (void)webGetToken:(id _Nullable)info;
- (void)webLoadFinished:(id _Nullable)info;

@end

@interface YMWKWebViewContainer : NSObject

@property (nonatomic, strong) WKWebView *ymWebView;

@property (nonatomic,weak)id <YMWKWebViewContainerDelegate>delegate;

/*
 * 原生与H5交互
 */
- (void)evaluateYimiNativeJS:(NSString *)js;

/*
* 所加载的URL
*/
- (void)loadURL:(NSString *)url;

/*
* 销毁
*/
- (void)destroy;

/*
* 是否允许物理交互
*/
- (void)setCanTouch:(BOOL)can;

@end

NS_ASSUME_NONNULL_END
