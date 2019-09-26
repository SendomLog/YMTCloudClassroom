//
//  YMTLiveChildView.h
//  YMTBigClassRoom_Example
//
//  Created by mystarains on 2019/9/2.
//  Copyright © 2019 zhangqian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YMLiveViewConfig.h"

NS_ASSUME_NONNULL_BEGIN

@interface YMTLiveChildView : UIView

- (UIView *)getCanvasView;

- (void)setRoleType:(YMLiveRoleType)roleType;

- (void)setVolume:(CGFloat)volume;

- (void)setMicState:(YMLiveUserMicState)micState;

- (void)setUserCameraStatus:(YMLiveUserCameraState)userCameraStatus;

- (void)setUserName:(NSString *)name;

@end

NS_ASSUME_NONNULL_END
