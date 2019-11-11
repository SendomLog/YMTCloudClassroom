//
//  YMWhiteBoardDataSourceManager.h
//  YMTBigClassRoom_Example
//
//  Created by mystarains on 2019/10/15.
//  Copyright © 2019 zhangqian. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YMWhiteBoardDataSourceManager : NSObject

@property (assign, nonatomic) NSInteger currentPage;

@property (assign, nonatomic, readonly) NSInteger totalPage;

@property (nonatomic, copy) void(^refreshBlock)(NSMutableDictionary *graphsDictionary,NSMutableDictionary *trailsDictionary);

@property (nonatomic, copy) void(^pageChangeBlock)(NSInteger pageCount, NSInteger pageIndex);

/**
 在当前页后面添加一定数量的空白页

 @param pageCount 添加的数量
 @return 是否执行成功
 */
- (BOOL)insertPageAtCurrentPage:(NSUInteger)pageCount;

/**
 从最后页追加页数

 @param pageCount 页数
 */
- (void)appendPageCount:(NSUInteger)pageCount;

/**
 插入一页

 @param pageIndex 插入位置
 @return 是否执行成功
 */
- (BOOL)insertPage:(NSInteger)pageIndex;


/**
 插入一页，如果插入的位置超过数组大小，则增加页数

 @param pageIndex 插入位置
 @return 是否执行成功
 */
- (BOOL)insertPageFillWithBlankPage:(NSInteger)pageIndex;

/**
 清除第几页数据

 @param pageIndex 要清除的位置
 @return 是否执行成功
 */
- (BOOL)clearPageAtIndex:(NSInteger)pageIndex;

/**
 删除页数

 @param pageIndex 删除的位置
 @return 是否执行成功
 */
- (BOOL)deletePageAtIndex:(NSInteger)pageIndex;

/**
 跳转第几页

 @param pageIndex 跳转的页数
 @return 是否执行成功
 */
- (BOOL)gotoPage:(NSInteger)pageIndex;

/**
 跳转第几页,如果跳转页码大于当前白板页数就添加空白页
 
 @param pageIndex 跳转的页数
 @return 是否执行成功
 */
- (BOOL)gotoPageFillWithBlankPage:(NSInteger)pageIndex;

/**
 清除所有内容
 */
- (void)clearAllContent;

/**
 更新内容
 */
- (void)update;

@end

NS_ASSUME_NONNULL_END
