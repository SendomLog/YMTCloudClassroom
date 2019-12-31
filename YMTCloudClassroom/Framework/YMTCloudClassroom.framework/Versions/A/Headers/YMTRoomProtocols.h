//
//  YMTRoomProtocols.h
//  YiMiApp
//
//  Created by xieyan on 16/7/27.
//  Copyright © 2016年 xieyan. All rights reserved.
//

#ifndef YMTRoomProtocols_h

#define YMTRoomProtocols_h

#import "YMTCourseWareModel.h"

/**
 *  数据层协议
 */
@protocol YMTRoomDataProtocol <NSObject>

/**
 *  刷新页信息，比如跳到下一页
 */
@property(copy, nonatomic, setter=setRefreshPageBlock:) void (^refreshPageBlock)(id<YMTRoomDataProtocol> DB, NSMutableDictionary *drawData, NSMutableDictionary *drawOldData, YMTCourseWareModel *courseWare);
- (void)setRefreshPageBlock:(void (^)(id<YMTRoomDataProtocol> DB, NSMutableDictionary *drawData, NSMutableDictionary *drawOldData, YMTCourseWareModel *courseWare))refreshPageBlock;

@end
#endif /* YMTRoomProtocols_h */
