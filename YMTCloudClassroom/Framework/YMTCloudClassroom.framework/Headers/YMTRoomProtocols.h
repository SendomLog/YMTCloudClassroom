//
//  YMTRoomProtocols.h
//  YiMiApp
//
//  Created by xieyan on 16/7/27.
//  Copyright © 2016年 xieyan. All rights reserved.
//

#ifndef YMTRoomProtocols_h

#define YMTRoomProtocols_h
//#import "XYDrawLayer.h"
//#import "XYCourseWareLayer.h"

#import "YMTCourseWareModel.h"

/**
 *  解析层协议
 *
 */
//typedef NS_ENUM(NSInteger, YMTCommandConvertType) {
//    YMTCommandConvertTypeNone,
//    /**
//     *  教师端，学生端，控制选项
//     */
//
//    //control
//    YMTCommandConvertType_control_Magicface,           //魔法表情
//    YMTCommandConvertType_control_ZoomInOut,           //放大缩小
//    YMTCommandConvertType_control_Cursor,              //教鞭
//    YMTCommandConvertType_control_FinishClass,         //完成课程
//    YMTCommandConvertType_control_Settinginfo,         //音视频设置信息
//    YMTCommandConvertType_control_AVControl,           //播放器音视频控制
//    YMTCommandConvertType_control_ChangeAudioResponse, //学生端切换通道响应
//
//    YMTCommandConvertType_control_OpenAnswerParsing,  //打开答案解析命令
//    YMTCommandConvertType_control_CloseAnswerParsing, //关闭答案解析命令
//    YMTCommandConvertType_control_OpenCorrect,        //打开批改窗体 （学生，老师都可以发送）
//    YMTCommandConvertType_control_Correct,            //批改命令（老师端发送,老师被抢麦后是接收）
//    YMTCommandConvertType_control_CloseCorrect,       //关闭批改面板
//    YMTCommandConvertType_control_Network,
//    YMTCommandConvertType_control_CloseDoSyncAnswerBorad,  // 老师关闭手写答题版
//    YMTCommandConvertType_control_OpenDoSyncAnswerBorad,   // 老师打开手写答题版
//    YMTCommandConvertType_control_syncWriteReportFinished, // 填写课堂报告
//
//    //auth
//    YMTCommandConvertType_auth_RequestAudioAuth,  // 申请麦克风权限
//    YMTCommandConvertType_auth_ResponseAudioAuth, // 响应申请麦克风权限
//    YMTCommandConvertType_auth_GotoPage,          //翻页授权
//    YMTCommandConvertType_auth_GotoPageRequest,   //请求翻页
//    YMTCommandConvertType_auth_ExitRequest,       //请求推出教室
//    YMTCommandConvertType_auth_Exit,              //退出授权
//    YMTCommandConvertType_auth_Control,           //学生端操作授权
//    YMTCommandConvertType_auth_EnterRoomRequest,  //B学生请求加入课堂
//    YMTCommandConvertType_auth_EnterRoom,         //是否授权B加入课堂
//
//    YMTCommandConvertType_auth_FinishReq,  //是否授权结束课程（学生使用）
//    YMTCommandConvertType_auth_FinishResp, //授权结束课程反馈（老师用）
//
//    YMTCommandConvertType_auth_SwitchMicrophone, //上麦老师填写试听课报告后转麦发送
//
//    //draw
//    YMTCommandConvertType_draw_Trail,    //橡皮画笔
//    YMTCommandConvertType_draw_Undo,     //撤消
//    YMTCommandConvertType_draw_Redo,     //反撤消
//    YMTCommandConvertType_draw_Clear,    //清屏操作
//    YMTCommandConvertType_draw_Courware, //课件
//    YMTCommandConvertType_draw_Picture,  //照片
//
//    YMTCommandConvertType_draw_Polygon, //多边形
//    YMTCommandConvertType_draw_Ellipse, //椭圆
//
//    YMTCommandConvertType_draw_AnswerQuestionTrack, // 学生教室内答题同步书写轨迹到老师的命令
//
//    //3.0 教室新命令
//    YMTCommandConvertType_draw_LessonPlan,           //新增点击讲义发送命令
//    YMTCommandConvertType_draw_Column,               //新增点击栏目发送命令
//    YMTCommandConvertType_draw_Question,             //新增发送练习题命令
//    YMTCommandConvertType_draw_QuestionAnswer,       //新增提交练习题命令
//    YMTCommandConvertType_draw_AutoPicture,          //新增传递自动转图片之后发送的讲义图片命令
//    YMTCommandConvertType_draw_StopQuestion,         //老师结束练习命令
//    YMTCommandConvertType_draw_AnswerPicture,        //学生提交答案图片
//    YMTCommandConvertType_draw_QuestionAnswerFailed, //学生提交答案失败
//
//    YMTCommandConvertType_draw_ImportReport,   // 试听课导入课堂报告
//    YMTCommandConvertType_draw_ImportHomework, // 课堂作业导入课堂命令
//
//    //page
//    YMTCommandConvertType_page_Goto,          //跳到某一页
//    YMTCommandConvertType_page_Insert,        //插入页
//    YMTCommandConvertType_page_Delete,        //删除页
//    YMTCommandConvertType_page_playAnimation, //播放页面动画
//
//    //server&&system
//    YMTCommandConvertTypeSynchronize,
//    YMTCommandConvertTypeOnlineState,
//    YMTCommandConvertTypeResponse,
//    YMTCommandConvertTypeEnterRoom,
//    YMTCommandConvertTypeExitRoom,
//    YMTCommandConvertTypeDisconnect,
//    YMTCommandConvertTypeStartClass,
//    YMTCommandConvertTypeStartFailed, //开始上课失败
//    YMTCommandConvertTypeEnterFailed,
//    YMTCommandConvertTypeStartPlay,
//    YMTCommandConvertTypeChangeCmd,                //切换服务器，语音，翻页
//    YMTCommandConvertTypeChangeKickOut,            //在其他设备登录
//    YMTCommandConvertTypeChangeReLogin,            //重新登录 UDP专用
//    YMTCommandConvertTypeTotalTime,                //服务器返回的上课时间
//    YMTCommandConvertTypeException,                //上课异常
//    YMTCommandConvertTypeC2CDelay,                 //QOSSDK
//    YMTCommandConvertTypeCurrentVideoSpanResponse, // 腾讯V2通道录播分段号返回
//
//    //system
//    YMTCommandConvertTypeHeartBeat,
//    YMTCommandConvertTypeChangeAudio,
//    YMTCommandConvertTypeDeviceInfos,
//    YMTCommandConvertTypeAudioQuality,            //语音质量
//    YMTCommandConvertTypeServerDelay,             //网络延迟
//    YMTCommandConvertTypeHomePressed,             //按住home键推到后台
//    YMTCommandConvertTypeCurrentDelay,            //当前延时
//    YMTCommandConvertTypeStatistics,              //设备负载：cpu、内存、存储卡信息 deviceLoad 等收集日志相关
//    YMTCommandConvertTypeRequestCurrentVideoSpan, // 请求腾讯V2通道录播分段号
//
//    // answer
//    YMTCommandConvertType_Answer_Sync, // 同步做题的答案
//    YMTCommandConvertType_Answer_Undo, // 手写板答题重新绘制
//    YMTCommandConvertType_Answer_Redo, // 手写板答题撤销
//    YMTCommandConvertType_Answer_Clear // 手写板答题清除
//};

//@protocol CommandConvertProtocol <NSObject>
//
///**
// *  命令解析完回调接口
// */
//
//@optional
//- (void)commandConvertClick:(id)converter type:(YMTCommandConvertType)type content:(id)content userId:(NSString *)userId tag:(long)tag;
//
//@required
//- (void)commandConvertClick:(id)converter type:(YMTCommandConvertType)type content:(id)content userId:(NSString *)userId tag:(long)tag isLocal:(BOOL)local;
//
///**
// *  操作被解析成命令后，从这里传出去
// */
//- (void)commandSend:(id)command tag:(long)tag;
//
//@end

/**
 *  控制层协议
 */
//typedef NS_ENUM(NSInteger, YMTRoomControlType) {
//    /** 录播控制选项 */
//    YMTRoomControlTypeBack,
//    YMTRoomControlTypePlay,
//    YMTRoomControlTypePause,
//    YMTRoomControlTypeStop,
//    YMTRoomControlTypeProgressChange,
//    YMTRoomControlTypeAdjustRate,
//
//    /** 教师端，学生端，控制选项 */
//    YMTRoomControlTypeFullScreen,   // 全屏按钮
//    YMTRoomControlTypeMicrophone,   // 麦克风按钮
//    YMTRoomControlTypeExit,         // 退出按钮
//    YMTRoomControlTypePhotograph,   // 拍照按钮
//    YMTRoomControlTypeEmotion,      // 表情按钮
//    YMTRoomControlTypeEraser,       // 橡皮按钮
//    YMTRoomControlTypeWrite,        // TH 书写教鞭按钮 SD书写按钮(现在有YMTRoomControlTypeColorPen 代替)
//    YMTRoomControlTypePrePage,      // 前页按钮
//    YMTRoomControlTypeNextPage,     // 后页按钮
//    YMTRoomControlTypeTextField,    // 输入按钮   页面跳转输入
//    YMTRoomControlTypeCourseware,   // 课件按钮
//    YMTRoomControlTypeAVCourseware, // 音视频课件按钮
//    YMTRoomControlTypeUPMicClass,   // 上麦按钮
//
//    YMTRoomControlTypeDeviceTest,    // 设备检测按钮
//    YMTRoomControlTypeHelp,          // 帮助按钮
//    YMTRoomControlTypeAuthorize,     // 授权按钮
//    YMTRoomControlTypeUndo,          // 撤销按钮
//    YMTRoomControlTypeAddPage,       // 加页按钮
//    YMTRoomControlTypeDelPage,       // 删页按钮
//    YMTRoomControlTypeAuthorizeStuA, // 授权或取消授权学生A
//    YMTRoomControlTypeAuthorizeStuB, // 授权或取消授权学生B
//
//    /** 教师端，学生端，被控制选项 */
//    YMTRoomControlTypeHeadBtn,      // 头像按钮
//    YMTRoomControlTypeHeadMenuInfo, // 头像菜单信息
//    YMTRoomControlTypeTitle,        // 标题LB
//    YMTRoomControlTypeCurrentPage,  // 当前页数值
//    YMTRoomControlTypeTotalPage,    // 全部页数值
//
//    YMTRoomControlTypeIsAuthorizeControl, // 是否授权
//    YMTRoomControlTypeIsAuthorizePage,    // 是否授权翻页
//
//    YMTRoomControlTypeBlackPen, // 黑笔按钮
//    YMTRoomControlTypeRedPen,   // 红笔按钮
//    YMTRoomControlTypeBluePen,  // 蓝笔按钮
//    YMTRoomControlTypeGreenPen, // 绿笔按钮
//    YMTRoomControlTypeColorPen, // 彩笔按钮 代替书写
//
//    YMTRoomControlTypeGraph,         // 图形按钮
//    YMTRoomControlTypeGraphSquare,   // 图形 正方形 按钮
//    YMTRoomControlTypeGraphTriangle, // 图形 正三角形 按钮
//    YMTRoomControlTypeGraphCircle,   // 图形 正圆 按钮
//    YMTRoomControlTypeGraphBeeline,  // 图形 实线 按钮
//
//    YMTRoomControlTypePointer, // 教鞭按钮
//
//    YMTRoomControlTypeBigEraser,   // 大橡皮按钮
//    YMTRoomControlTypeSmallEraser, // 小橡皮按钮
//    YMTRoomControlTypeClear,       // 清屏按钮
//
//    YMTRoomControlTypeCamera,     //相机
//    YMTRoomControlTypeAlbum,      //相册
//    YMTRoomControlTypeScreenShot, //截图
//
//    YMTRoomControlTypeAnswerAnalysis, // 答案解析
//    YMTRoomControlTypeModify,         // 老师批改
//    YMTRoomControlTypeSelectError,    // 客观选错因
//
//    YMTRoomControlTypeStartExercise, // 开始或者停止练习
//    YMTRoomControlTypeExerciseLast,  // 练习上一题
//    YMTRoomControlTypeExerciseNext,  // 练习下一题
//    YMTRoomControlTypeChoosePage,    // 选择页码按钮
//
//    YMTRoomControlTypeUserStatusLamp, // 控制状态灯
//    YMTRoomControlTypeThumbnail,      // 缩略图
//};
//@protocol YMTRoomControlProtocol <NSObject>
///**
// *  外部改变控制状态接口
// *
// *  @param message 传入信息
// *  @param type    更改状态的目标
// */
//- (void)changeStateMsg:(id)message type:(YMTRoomControlType)type;
//
///**
// *  控制事件输出接口
// */
//@property(copy, nonatomic, setter=setControlBlock:) id (^controlBlock)(id<YMTRoomControlProtocol> control, YMTRoomControlType type);
//- (void)setControlBlock:(id (^)(id<YMTRoomControlProtocol> control, YMTRoomControlType type))controlBlock;
//
///**
// *  控制层停靠的父级。
// */
//@property(weak, nonatomic) UIView *controlSuperView;
//@end

/**
 *  数据层协议
 */
@protocol YMTRoomDataProtocol <NSObject>

/**
 *  刷新页信息，比如跳到下一页
 */
@property(copy, nonatomic, setter=setRefreshPageBlock:) void (^refreshPageBlock)(id<YMTRoomDataProtocol> DB, NSMutableDictionary *drawData, NSMutableDictionary *drawOldData, YMTCourseWareModel *courseWare);
- (void)setRefreshPageBlock:(void (^)(id<YMTRoomDataProtocol> DB, NSMutableDictionary *drawData, NSMutableDictionary *drawOldData, YMTCourseWareModel *courseWare))refreshPageBlock;

/**
 *  本属性用作同步数据，默认NO，数据解析过来直接操作显示层显示效果；YES只同步数据，不显示效果，同步完需要自己设置为NO
 */
//@property (assign, nonatomic) BOOL isResetting;
@end
#endif /* YMTRoomProtocols_h */
