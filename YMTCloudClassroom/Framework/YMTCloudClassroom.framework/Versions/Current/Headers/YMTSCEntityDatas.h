//
//  YMTSCEntityDatas.h
//  YiMiLib
//
//  Created by 顾鹏凌 on 2018/11/21.
//  Copyright © 2018 YiMi. All rights reserved.
//

#import "YMTSCServerHeader.h"

//消息模型
@interface YMTSCSendMsgEntity : NSObject
@property(nonatomic, strong) NSData *encryptContext; //加密字串
@property(nonatomic, strong) NSString *context;      //明文
@property(nonatomic, assign) BOOL isRealTime;        //是否实时消息

@property(nonatomic, assign) NSInteger tag;
@property(nonatomic, assign) NSInteger mn;
@property(nonatomic, strong, readonly) NSDictionary *fixDictionary; //解析后的字典
@property(nonatomic, assign) YMTSCCommandConvertType type;       //消息类型
@property(nonatomic, strong) id content;                            //消息
@property(nonatomic, assign, readonly) NSInteger userId;            //接受者id

@property(nonatomic, copy) NSString *lessonId;
@property(nonatomic, copy) NSString *uid;
@property(nonatomic, assign) BOOL isSendMsg; //是否是发送的消息

// view层是否需要处理本条消息
@property(nonatomic, assign) BOOL shouldRouteToView;

@end

//服务器选择模型
@interface YMTSCServerIpModel : NSObject
@property(nonatomic, copy) NSString *ip;
@property(nonatomic, copy) NSString *port;
@property(nonatomic, assign) BOOL isTCPUsed;
@property(nonatomic, assign) NSUInteger tryCount;
@property(nonatomic, copy) NSString *httpPort;

@end

@interface YMTSCEntityDatas : NSObject

/**
 根据原始字符串

 @param context 原始字符串
 @return 解析后的字典
 */
+ (NSDictionary *)readDicFromContext:(NSString *)context;

/**
 根据原始字串获取tag

 @param context 原始字符串
 @return tag
 */
+ (NSInteger)readTagFromContext:(NSString *)context;

/**
 根据 cmd 转换 type 类型

 @param cmd 字符串cmd命令
 @return 对应type类型
 */
+ (YMTSCCommandConvertType)readTypeFromCmd:(NSString *)cmd;

/**
 根据 type 转换 cmd 字符串

 @param type 相应的消息类型
 @return 对应的cmd字符串
 */
+ (NSString *)readCmdFromType:(YMTSCCommandConvertType)type;

@end
