//
//  YMTSideButtonbar.h
//  YMTBigClassRoom_Example
//
//  Created by mystarains on 2019/9/6.
//  Copyright © 2019 zhangqian. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN


typedef NS_ENUM(NSUInteger, YMTSideButtonType) {
    YMTSideButtonTypeDevice       = 0,
    YMTSideButtonTypeChat         = 1,
    YMTSideButtonTypeHandUp       = 2
};

@protocol YMTSideButtonbarDelegate <NSObject>

- (void)sideBarButtonDidClicked:(UIButton *)sender type:(YMTSideButtonType)buttonType;

@end


@interface YMTSideButtonbar : UIView

@property (nonatomic, weak) id<YMTSideButtonbarDelegate> delegate;
@property (nonatomic, assign) BOOL handButtonHidden;
@property (nonatomic, assign) BOOL handButtonSelected;

@end

NS_ASSUME_NONNULL_END
