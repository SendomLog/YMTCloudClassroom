//
//  WhiteBoardView.h
//  YMWhiteBoardSDK
//
//  Created by mystarains on 2019/7/16.
//

#import <UIKit/UIKit.h>
#import "YMDrawTool.h"
#import "YMDrawTrailModel.h"

#define IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, YMDrawEvent) {
    YMDrawEvent_Began = 0,
    YMDrawEvent_Move,
    YMDrawEvent_End
};

typedef void (^SplitTrailEndBlock)(YMDrawTrailModel *model);
typedef void (^RectagleStrokeEndBlock)(CGRect rect);

@interface YMWhiteBoardView : UIView

@property (strong, nonatomic)  NSMutableArray *dataSource;//轨迹数据源

@property (nonatomic, strong) UIColor *lineColor;
@property (nonatomic, assign) CGFloat lineWidth;
@property (nonatomic, assign) YMDrawToolType toolType;

@property(nonatomic, copy) SplitTrailEndBlock splitTrailEndBlock;//绘制结束回调
@property(nonatomic, copy) RectagleStrokeEndBlock rectagleStrokeEndBlock;//图形绘制回调（目前只有截图选择的矩形）


@property (nonatomic, assign) CGPoint currentRatePoint;//比例点
@property (nonatomic, assign) WhiteBoardCursorViewType cursorType;
@property (nonatomic, copy) void(^cursorMoved)(CGFloat pointX,CGFloat pointY);

/**
 *  手写板事件
 */
- (void)handleTouchEvent:(int)event point:(CGPoint)point previous:(CGPoint)previous;
- (void)handlePendoSuspendedEvent:(CGPoint)point;
/**
 *  清空画笔
 */
- (void)clearTrails;

/**
 *  撤销上一步
 */
- (void)undoPreviousTrail;

@end

NS_ASSUME_NONNULL_END
