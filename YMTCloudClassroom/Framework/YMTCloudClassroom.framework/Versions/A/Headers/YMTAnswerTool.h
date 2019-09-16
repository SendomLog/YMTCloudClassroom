//
//  YMTAnswerTool.h
//  YMTBigClassRoom_Example
//
//  Created by mystarains on 2019/9/11.
//  Copyright © 2019 zhangqian. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "YMTAnswerConfig.h"

NS_ASSUME_NONNULL_BEGIN

@interface YMTAnswerTool : NSObject

+ (void)startAnswerWithItemId:(NSString *)itemId optionList:(NSArray *)items countDownTime:(NSTimeInterval)interval result:(YMTAnswerResult)result;

+ (void)stopAnswerWithItemId:(NSString *)itemId type:(YMAnswerType)type;

@end

NS_ASSUME_NONNULL_END
