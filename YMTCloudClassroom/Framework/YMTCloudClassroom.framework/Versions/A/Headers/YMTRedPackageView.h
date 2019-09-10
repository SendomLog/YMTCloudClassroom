//
//  YMTRedPackageView.h
//  AFNetworking
//
//  Created by SendomZhang on 2/9/2019.
//

#import <UIKit/UIKit.h>

@class YMTRedPackageGetCount;

NS_ASSUME_NONNULL_BEGIN

@interface YMTRedPackageView : UIView

- (instancetype)initWithBeginTimer:(NSTimeInterval)beginTimer redPackageRainTimer:(NSTimeInterval)rainTimer;

- (void)hiddenRedPackage;

/// 如何获取红包数量策略类
@property (nonatomic, strong, readwrite) YMTRedPackageGetCount *getCountTool;

@end

NS_ASSUME_NONNULL_END
