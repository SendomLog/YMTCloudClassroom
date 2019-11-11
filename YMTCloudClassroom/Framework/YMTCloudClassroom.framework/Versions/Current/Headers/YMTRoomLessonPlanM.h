//
//  YMTRoomLessonPlanM.h
//  YiMiLib
//
//  Created by YangXiansen on 2018/2/26.
//  Copyright © 2018年 YiMi. All rights reserved.
//  讲义列表模型

#import <Foundation/Foundation.h>
#import "YMTColumnInfoModel.h"

@interface YMTRoomLessonPlanM : NSObject
/** 讲义id */
@property(copy, nonatomic) NSString *ID;
/** 讲义名称 */
@property(copy, nonatomic) NSString *planName;
/** 讲义类型：1新讲义；2旧课件；3音视频 100 存于erp的旧讲义 和2一样处理 */
@property(copy, nonatomic) NSString *planType;
/** 讲义描述 */
@property(copy, nonatomic) NSString *planDesc;
/** 预讲义Id */
@property(copy, nonatomic) NSString *prePlanId;
/** 创建人 */
@property(copy, nonatomic) NSString *createName;
/** 讲义状态：0新建，1已读 */
@property(copy, nonatomic) NSString *planStatus;

/** 讲义的具体信息 */
@property(nonatomic, strong) YMTColumnInfoModel *planInfo;

@end
