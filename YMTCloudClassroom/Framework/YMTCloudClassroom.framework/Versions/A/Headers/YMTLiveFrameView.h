//
//  YMTLiveFrameView.h
//  YMTBigClassRoom_Example
//
//  Created by mystarains on 2019/9/3.
//  Copyright © 2019 zhangqian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YMTLiveChildView.h"

NS_ASSUME_NONNULL_BEGIN

@interface YMTLiveFrameView : UIView

/**
 根据uid获取渲染视频的本地图层
 */
- (UIView *)canvasViewForUid:(NSUInteger)uid;

/**
 根据uid获取对应的子视图
 */
- (YMTLiveChildView *)childViewForUid:(NSUInteger)uid;

/**
 用户加入添加视图
 */
- (void)addChildFrameViewForUid:(NSUInteger)uid userRole:(YMLiveRoleType)roleType;

/**
 用户离开移除视图
 */
- (void)removeChildFrameViewForUid:(NSUInteger)uid;

/**
 用户离开保留位置
 */
- (void)resetChildViewForUid:(NSUInteger)uid;

@end

NS_ASSUME_NONNULL_END
