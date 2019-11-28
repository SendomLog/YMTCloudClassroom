//
//  XYZSystemInfo.h
//  YiMiApp
//
//  Created by xieyan on 15/9/25.
//  Copyright (c) 2015年 xieyan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZSystemInfo : NSObject

// 获取设备当前网络IP地址 不包含流量的
+ (NSString *)getIpAddresses;
// 获取设备当前网络IP地址 包含流量的
+ (NSString *)getIPAddress:(BOOL)preferIPv4;
+ (NSString *)getCarrierInfo;
+ (NSString *)getAppBuildVersion;//2202
+ (NSString *)getAppVersion;//2.2.2202
+ (NSString *)getDeviceModel;
+ (NSString *)fetchSSIDInfo;
+ (NSString *)getIDFA;  //QOSSDK

+ (NSString *)getSysInfo;
+ (NSString *)getTimeStemp;
//@"yyyy-MM-dd HH:mm:ss"
+ (NSString *)getNowTimeFor_Time;

+ (BOOL )isAboveiPhoneX;

@end
