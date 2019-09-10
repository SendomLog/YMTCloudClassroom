//
//  YMWhiteBoardDelegate.h
//  teacher
//
//  Created by mystarains on 2019/7/22.
//  Copyright © 2019 YiMi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class YMDrawTrailModel;

@protocol YMWhiteBoardDelegate <NSObject>

/**
 回调控制中心 zoomScrollLayerDidScale，白板Ctrl实现：发送缩放指令
 @param zoomScale 缩放系数
 @param offset 偏移点
 */
- (void)zoomScrollView:(UIScrollView *)scrollView didScale:(CGFloat)zoomScale offset:(CGPoint)offset;

/**
 回调控制中心 zoomScrollLayerDidScroll，白板Ctrl实现：发送滑动指令
 @param scrollView 滚动视图
 */
- (void)zoomScrollLayerDidScroll:(UIScrollView *)scrollView;

/**
 回调控制中心 cursorPointDidMoved，白板Ctrl实现：发送教鞭指令
 @param point 位移点
 */
- (void)cursorPointDidMoved:(CGPoint)point;

/**
 轨迹
 @param model 轨迹模型
 */
- (void)trailDidDraw:(YMDrawTrailModel*)model;
/**
 截图
 @param rect 截图选择区域
 */
- (void)screenshotDidselectedRect:(CGRect)rect;


@end

NS_ASSUME_NONNULL_END
