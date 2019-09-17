//
//  YMDrawTrailModel.h
//  YMWhiteBoardSDK
//
//  Created by mystarains on 2019/7/17.
//  Copyright © 2019 YiMi. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface YMDrawTrailModel : NSObject

@property (assign, nonatomic) CGFloat width;
// 线宽类型 0 1 2 代表小 中 大
@property (copy, nonatomic) NSString *widthType;
//color为空代表橡皮
@property (strong, nonatomic, nullable) UIColor *color;
@property (strong, nonatomic) NSMutableArray<NSValue*> *pointArray;
@property (copy, nonatomic) NSString *offsetY;

@property (copy, nonatomic) NSString *orderNum;
@property (copy, nonatomic) NSString *user;

@end

NS_ASSUME_NONNULL_END
