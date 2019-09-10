//
//  YMCoursewareInfo.h
//  YiMiApp
//
//  Created by Caffrey on 2019/5/22.
//  Copyright © 2019 YiMi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YMTCoursewarePageInfo.h"

NS_ASSUME_NONNULL_BEGIN


/**
 课件类型

 - YMCoursewareTypeUndefined: 未定义的类型
 - YMCoursewareTypeImage: 普通图片课件
 - YMCoursewareTypeStructure: 结构化课件
 - YMCoursewareTypeHTML: H5课件
 */
typedef NS_ENUM(NSUInteger, YMCoursewareType) {
    YMCoursewareTypeUndefined,
    YMCoursewareTypeImage,
    YMCoursewareTypeStructure,
    YMCoursewareTypeHTML,
};

/** 课件信息 */
@interface YMTCoursewareInfo : NSObject
/** 课件ID */
@property (nonatomic, copy) NSString *courseWareId;
/** 课堂ID */
@property (nonatomic, copy) NSString *lessonId;
/** h5课件的url */
@property (nonatomic, copy) NSString *h5Url;
/** 课件类型 1普通课件/2结构化/3h5 */
@property (nonatomic, copy) NSString *courseWareType;
/** 当前在第几页 */
@property (nonatomic, assign) NSInteger currentPageNo;
/** 课件每页的信息 */
@property (nonatomic, copy) NSArray<YMTCoursewarePageInfo *> *pageInfos;

/** 用户token */
@property (nonatomic, copy) NSString *token;
/** 课件类型 */
@property (readonly, assign) YMCoursewareType type;

/** 获取当前对象对应的json字符串 */
- (NSString *)jsonString;

@end

NS_ASSUME_NONNULL_END
