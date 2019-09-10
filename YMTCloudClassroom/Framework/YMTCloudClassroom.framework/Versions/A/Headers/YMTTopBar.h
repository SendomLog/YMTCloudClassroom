//
//  YMTTopBar.h
//  bigclass
//
//  Created by SendomZhang on 6/9/19.
//  Copyright © 2019 com.sendom.www. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^YMTTopBarExitBlock)(void);

NS_ASSUME_NONNULL_BEGIN

@interface YMTTopBar : UIView

/// 退出按钮回调
@property (nonatomic, copy, readwrite) YMTTopBarExitBlock exitBlock;

@end

NS_ASSUME_NONNULL_END
