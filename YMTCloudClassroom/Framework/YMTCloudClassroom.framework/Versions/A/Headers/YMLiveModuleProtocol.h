//
//  YMLiveModuleProtocol.h
//  YMLiveSDK
//
//  Created by mystarains on 2019/8/9.
//  Copyright © 2019 YiMi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YMLiveFrameContentView.h"
#import "YMLiveEnum.h"

NS_ASSUME_NONNULL_BEGIN

@protocol YMLiveModuleDataSource <NSObject>

@required

- (UIView *)canvasForUid:(NSUInteger)uid;

@end

@protocol YMLiveModuleDelegate <NSObject>

@optional

- (void)onUserEnter:(NSUInteger)uid;
- (void)onUserLeave:(NSUInteger)uid;
- (void)onUserTimeout:(NSUInteger)uid;
- (void)receiveRemoteFirstFrame:(NSUInteger)uid;
- (void)receiveLocalFirstFrame;
- (void)reportSpeakers:(NSDictionary *)speakers;
- (void)onEnterRoomFailure:(NSInteger)errorCode;
- (void)onAudioQuality:(NSDictionary *)audioQuality;
- (void)onClientRoleChanged:(YMLiveUserType)oldRole newRole:(YMLiveUserType)newRole;

@end

@protocol YMLiveModuleProtocol <NSObject>

- (YMLiveFrameContentView *)getAudioVeideoView;

/**
 设置本地视频渲染视图
 
 @param uid 用户id
 @param view 视图
 */
- (void)setupLocalVideoWithUid:(NSString *)uid withView:(UIView *)view;

/**
 设置远程视频渲染视图
 
 @param uid 用户id
 @param view 视图
 */
- (void)setupRemoteVideoWithUid:(NSString *)uid withView:(UIView *)view;

#pragma mark -- 控制器
/**
 销毁控制器
 */
- (void)destoryManager;

#pragma mark -- 进出房间
/**
 进入房间
 @param channel 渠道
 @param appId 渠道的appid
 @param roomId 房间号
 @param userId 用户id
 @param userType 用户类型
 @param params 其他参数；各渠道传不同的内容（key/value）
 声网 需要字段 key:token
 腾讯V2需要字段 key:userSig record_id uc_biz_type
 
 */
- (void)enterRoom:(YMLiveChannel)channel
            appId:(NSString *)appId
           roomId:(NSString *)roomId
           userId:(NSString *)userId
         userType:(YMLiveUserType)userType
           params:(NSDictionary *)params;

- (void)setClientRole:(YMLiveUserType)userType;

/**
 离开房间
 @param channel 音视频渠道
 */
- (void)leaveRoom:(YMLiveChannel)channel;

#pragma mark -- 音频控制
/**
 是否开启音频模块
 @param enable 开启/关闭
 */
- (void)enableAudio:(BOOL)enable;

/**
 是否推送音频流
 @param enable 开启/关闭
 */
- (void)enableAudioPush:(BOOL)enable;

#pragma mark -- 视频控制
/**
 开启视频模块
 @param enable 开启/关闭
 */
- (void)enableVideo:(BOOL)enable;

/**
 是否发送本地视频流
 @param enable 开启/关闭
 */
- (void)enableLocalVideoPush:(BOOL)enable;

/**
 开启/关闭 美颜
 @param enable 开启/关闭
 */
- (void)enableBeauty:(BOOL)enable;


@end

NS_ASSUME_NONNULL_END
