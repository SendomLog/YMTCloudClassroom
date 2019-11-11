//
//  YMTSingleGroupDB.h
//  YiMiApp
//
//  Created by xieyan on 16/7/26.
//  Copyright © 2016年 xieyan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YMTRoomProtocols.h"
@interface YMTSingleGroupDB : NSObject <YMTRoomDataProtocol>
/**
 *  画写板的数据源
 */
@property(strong, nonatomic) NSMutableArray *pageArrayDraw;
@property(strong, nonatomic) NSMutableArray *pageArrayOldDraw;

/**
 *  课件数据源
 */
@property(strong, nonatomic) NSMutableArray *pageArrayCourseWare;

@property(assign, nonatomic) NSInteger currentPage;
@property(assign, nonatomic, readonly) NSInteger totalPage;
/** 记录某页的动画播放播放步骤 key：页面 value: 步骤 */
@property(nonatomic, strong) NSMutableDictionary *animatStepDic;

/**
 当前页的课件数据
 */
- (YMTCourseWareModel *)getCurrentCourseWareModel;

/**
 当前页的课件数据

 @param pageIndex 页码
 */
- (YMTCourseWareModel *)getCurrentCourseWareModelWithPageIndex:(NSInteger)pageIndex;

/**
 *  加页基础方法
 *
 *  @param pageIndex  在第几页插入，从0开始计算，在最后追加页也用这个,,  -1在最后加页
 *  @param courseWare 课件  可以传空
 */
#define YMTSingleGroupDBLastPage (-1)
- (void)appendPageAtCurrentPageWithArray:(NSMutableArray *)array;
- (void)insertPageWithArray:(NSMutableArray *)array withEmptyPage:(BOOL)needEmptyPage;
- (void)insertPage:(NSInteger)pageIndex courseWare:(YMTCourseWareModel *)courseWare;

- (void)replacePage:(NSInteger)pageIndex courseWare:(YMTCourseWareModel *)courseWare;

- (void)deletePage:(NSInteger)pageIndex;

- (void)gotoPage:(NSInteger)pageIndex;

@property(copy, nonatomic) void (^pageTurnDirection)(BOOL forward);

- (void)clearAllContent;

- (void)update;

- (void)deleteTrails_CourseWare:(NSInteger)index;
@end
