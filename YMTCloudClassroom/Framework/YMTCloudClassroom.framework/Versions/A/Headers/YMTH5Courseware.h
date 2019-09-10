//
//  YMH5Courseware.h
//  YiMiLib
//
//  Created by Caffrey on 2019/5/22.
//  Copyright © 2019 YiMi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YMTCoursewareProtocol.h"

NS_ASSUME_NONNULL_BEGIN

/** H5课件组件 */
@interface YMTH5Courseware : NSObject<YMCoursewareProtocol>
@property (nonatomic, weak) id<YMCoursewareCallback> callback;
@end

NS_ASSUME_NONNULL_END
