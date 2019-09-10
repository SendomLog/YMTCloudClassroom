//
//  YMCloudRoomFrameChildView.h
//  student
//
//  Created by peanut on 2018/11/29.
//  Copyright © 2018年 YiMi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YMLiveViewConfig.h"

@interface YMLiveFrameChildView : UIView

- (UIView *)getCanvasView;

- (void)setRoleType:(YMLiveRoleType)roleType;

- (void)setVolume:(CGFloat)volume;

- (void)setMicState:(YMLiveUserMicState)micState;

- (void)setUserCameraStatus:(YMLiveUserCameraState)userCameraStatus;

- (void)setUserName:(NSString *)name;

@end
