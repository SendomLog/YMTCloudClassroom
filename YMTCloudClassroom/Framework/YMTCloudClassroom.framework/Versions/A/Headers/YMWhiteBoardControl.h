//
//  YMWhiteBoardControl.h
//  YMWhiteBoardSDK
//
//  Created by mystarains on 2019/7/16.
//  Copyright © 2019 YiMi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YMWhiteBoardView.h"
#import "YMWhiteBoardDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface YMWhiteBoardControl : NSObject

@property (nonatomic, strong) YMWhiteBoardView *whiteBoardView;

@property (nonatomic, copy) NSString *boardId;
@property (nonatomic, assign) BOOL userInteractionEnabled;
@property (nonatomic, weak) id<YMWhiteBoardDelegate> delegate;
@property (nonatomic, strong) NSMutableDictionary *dataSource;
@property (nonatomic, strong) NSMutableDictionary *dicAllDataSource;
@property (nonatomic, strong) NSMutableDictionary *dataSourceGraph;

@property (nonatomic, strong) UIColor *lineColor;
@property (nonatomic, assign) CGFloat lineWidth;
@property (nonatomic, assign) YMDrawToolType toolType;

@property(nonatomic, assign) CGPoint scrollOffset;
@property(nonatomic, assign) float realHeight;


@property (nonatomic, assign) CGPoint currentRatePoint;//比例点
@property (nonatomic, assign) WhiteBoardCursorViewType cursorType;

/**
 是否重置layer
 */
@property(nonatomic, assign) BOOL isResetting;

/**
 *  拼接需要绘制的点到数据源
 */
- (id<YMDrawTool>)appendTrailModel:(YMDrawTrailModel *)model groupId:(NSString *)groupId needRemember:(BOOL)needRemember;

/**
 *  根据点集绘图
 *
 *  @param model   点集模型
 */
- (void)drawTrail:(YMDrawTrailModel*)model groupId:(NSString*)groupId;

/**
 *  根据点集绘椭圆
 *
 *  @param dicArr   点集模型
 */
- (void)drawEllipseTrail:(NSDictionary *)dicArr groupId:(NSString*)groupId;

/**
 *  根据点集绘多边形
 *
 *  @param dicArr   点集模型
 */
- (void)drawPolygonTrail:(NSDictionary *)dicArr groupId:(NSString*)groupId;

/**
 *  绘制图片
 *
 *  @param pointDic   点集模型
 */
- (void)drawImage:(UIImage *)drawImage pointDic:(NSDictionary *)pointDic groupId:(NSString*)groupId;


/**
 *  更新图片
 *
 @param drawImage 图片数据
 @param itemId    唯一标识ID
 @param groupId   分组ID
 */
- (void)updateImage:(UIImage *)drawImage itemId:(NSString *)itemId groupId:(NSString*)groupId;


/**
 *  撤销上一步轨迹
 *
 */
-(void)undoPreviousTrailWithGroupId:(NSString *)groupId;

/**
 *  清空画笔
 */
-(void)clearTrailsWithGroupId:(NSString*)groupId;

/**
 *  根据偏移量重新绘制
 */
- (void)setNeedsDisplay;

/**
 *  手绘板事件
 */
- (void)handleTouchEvent:(int)event point:(CGPoint)point previous:(CGPoint)previous;

/**
 *  撤销指定的所有轨迹
 */
- (void)cleanSpecifiedTrail:(NSString *)groupId;

/**
 *  指定笔迹是否存在
 */
- (BOOL)existSpecifiedTrail:(NSString *)groupId;

/**
 删除图形图片
 
 @param itemId itemId description
 */
- (void)deleGraph:(NSString *)itemId deleteBySelf:(BOOL)flag;

- (void)handleTouchEvent:(CGPoint)point previous:(CGPoint)previous;
- (void)handlePendoSuspendedEvent:(CGPoint)point;


@end

NS_ASSUME_NONNULL_END
