//
//  YMTTopBar.h
//  APro
//
//  Created by 黄鹏飞 on 2019/9/11.
//  Copyright © 2019 com.hpf. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

#define ISIPAD UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad ? 1 : 0

@protocol  YMTTopBarDelegate <NSObject>

- (void)exitTopBarDelegate;

@end

@interface YMTTopBar : UIView

@property (nonatomic, weak) id<YMTTopBarDelegate> delegate;

- (void)setupWithTitle:(NSString *)title state:(NSString *)state cupNum:(NSString *)cupNum score:(NSString *)score;
@end

NS_ASSUME_NONNULL_END
