//
//  YMTColumnInfoModel.h
//  YiMiLib
//
//  Created by CoderZQ on 2018/2/26.
//  Copyright © 2018年 YiMi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YMTSDWorkDetailModel.h"

@interface YMTColumnInfoLessonDoc : NSObject

/** 原始资源url */
@property(nonatomic, copy) NSString *originUrl;
/** 文件类型 */
@property(nonatomic, copy) NSString *docType;
/** 切图后的url */
@property(nonatomic, strong) NSArray *images;
/** 切图后的图片总数 */
@property(nonatomic, copy) NSString *imagesCount;
/** 文件名字 */
@property(nonatomic, copy) NSString *name;

/** 手动添加 存储讲义id */
@property(nonatomic, copy) NSString *ID;

@end

@interface YMTItemsResourceContents : NSObject

/** 资源Id */
@property(nonatomic, copy) NSString *resourceId;
/** 资源内容 */
@property(nonatomic, copy) NSString *content;
/** 资源类型 0=学习目标，1=知识梳理，5=自定义资源 */
@property(nonatomic, copy) NSString *resourceType;
/** 底图对象 */
@property(nonatomic, strong) YMTBaseImage *baseImage;
/** 原始图片 */
@property(nonatomic, copy) NSString *originImage;
/** 轨迹图片 */
@property(nonatomic, copy) NSString *historyImage;
/** 资源顺序 */
@property(nonatomic, copy) NSString *orderNo;

@end

@interface YMTColumnInfoItems : NSObject

/** 栏目id */
@property(nonatomic, copy) NSString *itemId;
/** 栏目的名字 */
@property(nonatomic, copy) NSString *itemName;
/** 0讲义栏目资源类型值、1讲义栏目例题类型值、2讲义栏目练习类型值 */
@property(nonatomic, copy) NSString *itemType;
/** 序号 */
@property(nonatomic, copy) NSString *orderNo;
/** 栏目对应的资源集合,讲义栏目类型为0时 */
@property(nonatomic, strong) NSArray *resourceContents;
/** 栏目对应的题目集合,讲义栏目类型为1时 */
@property(nonatomic, strong) NSArray *questionInfos;

/** 自我创建属性 图片名 */
@property(nonatomic, copy) NSString *picName;
/** 自我创建属性 高亮图片名 */
@property(nonatomic, copy) NSString *picNameSel;
/** 自我创建属性 是否选中 默认为NO */
@property(nonatomic, assign) BOOL isSel;

@end

@interface YMTColumnInfoModel : NSObject

/** 类型为新讲义时取这个list */
@property(nonatomic, strong) NSArray *items;
/** 类型为旧讲义栏目时取该对象 */
@property(nonatomic, strong) YMTColumnInfoLessonDoc *lessonDoc;
/** 讲义类型：1新讲义；2旧课件；100 存于erp的旧讲义 和2一样处理*/
@property(nonatomic, copy) NSString *type;

/** 讲义名称 */
@property(nonatomic, copy) NSString *planName;
/** 讲义ID */
@property(nonatomic, copy) NSString *planId;

@end
