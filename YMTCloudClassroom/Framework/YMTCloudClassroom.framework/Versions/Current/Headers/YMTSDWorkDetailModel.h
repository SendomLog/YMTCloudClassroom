//
//  YMTSDWorkDetailModel.h
//  YiMiApp
//
//  Created by CoderZQ on 2018/1/4.
//  Copyright © 2018年 YiMi. All rights reserved.
//  作业做题模型

#import <Foundation/Foundation.h>

typedef void (^ChannelDataCallBack)(int code, id data);

typedef NS_ENUM(NSUInteger, YMTTHHomeWorkBottombarStatus) {
    YMTTHHomeWorkBottombarStatusNone = 1, // 默认情况代表没有手动选择  很重要的判断
    YMTTHHomeWorkBottombarStatusRight,
    YMTTHHomeWorkBottombarStatusWrong, //
    YMTTHHomeWorkBottombarStatusHalf,  //
};

@interface YMTBaseImage : NSObject

/** 底图高 */
@property(nonatomic, copy) NSString *height;
/** 底图宽 */
@property(nonatomic, copy) NSString *width;
/** 图片url */
@property(nonatomic, copy) NSString *imageUrl;

@end

// 老师底部栏对应的模型
@interface YMTBottomBarModel : NSObject
/** 错误id */
@property(copy, nonatomic) NSString *errid;
/** 错误原因 */
@property(copy, nonatomic) NSString *errorReason;
/** 本地暂时存贮录音url*/
@property(copy, nonatomic) NSString *remarkUrl;
/** 本地记录录音时长*/
@property(copy, nonatomic) NSString *remarkTime;
/** 本地记录得分*/
@property(assign, nonatomic) CGFloat score;
/** 本地记录正确状态 */
@property(assign, nonatomic) YMTTHHomeWorkBottombarStatus currentHomeWorkStatus;
@end

// 知识点对象
@interface YMTKnowledge : NSObject

/** 题目是否在知识点中显示 */
@property(nonatomic, copy) NSString *isvisible;
/** 知识点Name */
@property(nonatomic, copy) NSString *konwledgeName;
/** 知识点id */
@property(nonatomic, copy) NSString *konwledgeid;
/** 顺序 */
@property(nonatomic, copy) NSString *orderno;
/** 题目id */
@property(nonatomic, copy) NSString *questionid;
/** 类型 T知识点  C教材*/
@property(nonatomic, copy) NSString *type;

@end

// 题目选项对象信息
@interface YMTQuestionItem : NSObject

/** 题目id */
@property(nonatomic, copy) NSString *questionid;
/** 选择项的id */
@property(nonatomic, copy) NSString *qitemid;
/** 选择项的顺序 */
@property(nonatomic, copy) NSString *orderno;
/** 选择项的名字 如A */
@property(nonatomic, copy) NSString *orderName;
/** 是否正确答案 */
@property(nonatomic, copy) NSString *isright;
/** 分值 */
@property(nonatomic, copy) NSString *score;
/** 选择题的题干内容 */
@property(nonatomic, copy) NSString *contents;

/** 是否选中 */
@property(nonatomic, assign) BOOL isSelect;

/** cell高度 */
@property(nonatomic, assign) CGFloat cellHeight;

@property(nonatomic, strong) NSAttributedString *attributedString;

- (void)prepareData;

@end

@interface YMTTeacherImages : NSObject

/** 原始图片地址 */
@property(nonatomic, copy) NSString *originImage;
/** 批改过的图片地址 */
@property(nonatomic, copy) NSString *image;

@end

@interface YMTQuestionInfoDto : NSObject
/** 题目id */
@property(nonatomic, copy) NSString *ID;
/** 题目分析 */
@property(nonatomic, copy) NSString *analyse;
/** 题目解答 */
@property(nonatomic, copy) NSString *reply;
/** 题目状态(0,学生未作2,等待批改4,已批改) */
@property(nonatomic, copy) NSString *status;
/** 题目序号 */
@property(nonatomic, copy) NSString *orderNumber;
/** 难度 */
@property(nonatomic, copy) NSString *difficulty;
/** 是否收藏 */
@property(copy, nonatomic) NSString *isFavorite;
/** 题目分数 */
@property(nonatomic, copy) NSString *score;
/** 学生正确答案 */
@property(nonatomic, copy) NSString *studentAnswer;
/** 底图对象 */
@property(nonatomic, strong) YMTBaseImage *baseImage;
/** 答题用时 */
@property(nonatomic, copy) NSString *useTime;
/** 题目正确答案 ["2,3"] 如果是单选 /多选/ 判断 数组里就一个元素 ,填空数组会有多个元素*/
@property(nonatomic, strong) NSArray *answer;
/** 错因 */
@property(nonatomic, copy) NSString *errorType;
/** 错因名字 */
@property(nonatomic, copy) NSString *errorName;
/** 是否保存给本地的错因  只保存一次 */
@property(nonatomic, assign) BOOL isSaveErrorToLocal;
/** 答案是否正确 0：错误，1：正确，2：半对半错 */
@property(nonatomic, copy) NSString *isRight;
/** 评语语音 */
@property(nonatomic, copy) NSString *remarkUrl;
/** 语音时间长度 */
@property(copy, nonatomic) NSString *remarkTime;
/** 学生答题时间 */
@property(nonatomic, copy) NSString *lastUpdatedDate;
/** 题目大类型 (1单选题/2多选题/3判断题/4填空题/5简答题/6综合题)   0,客观题(包含1 2 3)   1,主观题(除了1 2 3 都是主观题)*/
@property(nonatomic, copy) NSString *questionType;
/** 题目类型 没用 用questionType */
@property(nonatomic, copy) NSString *qtype;
/** 拍照照片 */
@property(nonatomic, strong) NSArray *photos;
/** 老师批注 */
@property(nonatomic, strong) NSArray *teacherImages;
/** 书写照片 */
@property(nonatomic, strong) NSArray *writeImages;
/** 所有图片 */
@property(nonatomic, strong) NSArray *allImages;
/** 老师批注的原始图片 */
@property(nonatomic, copy) NSString *originImage;
/** 老师批注图片 */
@property(nonatomic, copy) NSString *image;
/** 题目选项[选择题对象] */
@property(nonatomic, strong) NSArray *questionItems;
/** 知识点对象 */
@property(nonatomic, strong) NSArray *knowledges;
/** 题目内容 */
@property(nonatomic, copy) NSString *content;
/** 学生分数 */
@property(nonatomic, copy) NSString *studentScore;
/** 本地记录用户选中的答案 / 用于单选 多选 判断 填空 简答 (客观题拼orderNo 主观题 拼接输入)*/
@property(nonatomic, copy) NSString *localStuAnswer;
/** 是否有子题目 */
@property(nonatomic, copy) NSString *haschild;
/** 子题数组 内部包含自身模型 */
@property(nonatomic, strong) NSArray *childQuestionInfo;
/** 综合题，子题的index 默认 1 */
@property(nonatomic, assign) NSInteger subQueCurrentPage;
/** 当前课件页题目的index，默认 0 */
@property(nonatomic, assign) NSInteger classRoomSubQueCurrentPage;
/** 只用在云教室 是否只有一个子题 */
@property(nonatomic, assign) BOOL isHaveOne;
/** 只用在云教室 总共几个子题 */
@property(nonatomic, assign) NSInteger classRoomTotalSub;
/** 综合题字体的总数 */
@property(nonatomic, assign) NSInteger subQueTotalPage;
/** 本地记录传的相册和相机url */
@property(copy, nonatomic) NSString *albumPhoots;
/** 本地记录手写的url */
@property(copy, nonatomic) NSString *writePhotos;
/** 是否把服务器的网址添加到本地 本地只能添加一次 */
@property(nonatomic, assign) BOOL isAddServiceUrl;
/** 记录当前序号的照片模型,点击上一题需要赋值给控制器的imageModels 其实是imageAlbumModels+imageWriteModels */
@property(nonatomic, strong) NSArray *imageModels;
/** 是否是answerWorkVC 默认为NO (因做题和答案VC共用cell 所以用这个变量区分处理逻辑) */
@property(nonatomic, assign) BOOL isAnswerVC;
// modify by peanut 2018/05/12
@property(nonatomic, assign) BOOL isWrongDetailVC;
/** 自己添加的云教室综合题批改结果 是否竖直布局 默认为NO (用于例题精讲 综合体竖直布局  单选题item灰色)*/
@property(nonatomic, assign) BOOL isRoomSynthesizeVerticalLayout;
/** 自己添加的云教室综合题竖直布局是否显示用户的答案  默认为NO 填空题不显示用户答案 和图片  为YES是填空 题显示用户答案和图片竖排 (只有isRoomSynthesizeVerticalLayout = yes时此属性有效) */
@property(nonatomic, assign) BOOL roomSynthesizeVerticalLayoutIsShowAnswer;
/** 记录垂直布局时做题tableview的contentsizeH */
@property(nonatomic, assign) CGFloat verticalLayoutItemContentsizeH;
/** 自己添加的云教室 是否是预览模式 默认为NO, 做题模式 */
@property(nonatomic, assign) BOOL isRoomPreviewMode;
/** 自己添加填空题个数 后期改为后台字段 */
@property(nonatomic, copy) NSString *fillingNum;
/** 老师底部栏对应模型 */
@property(nonatomic, strong) YMTBottomBarModel *th_bottomBatModel;
/** 存放老师批注过的图片地址 已逗号分隔 用于传给服务器 */
@property(nonatomic, copy) NSString *localTeacherImages;
/** 是否老师端运行 默认为NO (用于footer标识) */
@property(nonatomic, assign) BOOL isTeacherRun;
/** 是学生端 且现在是错题本和收藏详情VC使用footer 仅仅用来标识学生端调整footer上边距为8  默认学生上边距12 */
@property(nonatomic, assign) BOOL isStuRunAndWrongFavDetailVCUse;
/** 是否是云教室做题View 默认为NO (用于教室单选多选判断/cell 的宽度为屏幕一半标识) */
@property(nonatomic, assign) BOOL isClouldRoomQuestionView;
/** 是否是云教室解析面板View 默认为NO (用于教室内解析面板 的 项目内容 标识展示 如果为Yes 只显示正确答案 知识点 解析3项) */
@property(nonatomic, assign) BOOL isClouldRoomAnalysisView;
/** 自己添加 用于 传递 作业状态 作业状态，0，未发布， 1未完成，2未批改，3已批改  */
@property(nonatomic, copy) NSString *lessonWorkStatus;
/** 用于标记批改期间某个题目是否批改了  和状态是4一样 */
@property(nonatomic, assign) BOOL isModify;
/** 自己添加 记录一些索引  */
@property(nonatomic, assign) NSInteger indexNum;
/** 自己添加 记录是否展开  */
@property(nonatomic, assign) NSInteger isOpen;
/** 自己添加 记录是否展开  */
@property(nonatomic, assign) NSInteger selectType;
/** 自己添加 记录是否选中 答案解析头部用到换背景  */
@property(nonatomic, assign) BOOL isSelect;
/** 课件详情中选中状态  */
@property(nonatomic, assign) BOOL isSelectItem;
/** 自己添加 答案解析除了顶部view的高度 */
@property(nonatomic, assign) CGFloat answerViewHeight;
// 云教室新增
/** 课程id */
@property(copy, nonatomic) NSString *lessonId;
/** 讲义Id */
@property(copy, nonatomic) NSString *planId;
/** 栏目Id */
@property(copy, nonatomic) NSString *itemId;

@property(copy, nonatomic) ChannelDataCallBack refreshCallBack;
/** 是否在课件显示 */
@property(assign, nonatomic) BOOL isShowInCourseWare;
/** 自己记录当前选择的解析面板的子题id  综合体用到  只是为了第一次展示答案解析用到 */
@property(copy, nonatomic) NSString *currentSelectChildQuestionId;
/** 做题完成之后才用到  记录当前选择的index */
@property(assign, nonatomic) NSInteger analysisSelectIndex;
/** 做题完成之后才用到  记录当前选择的index */
@property(assign, nonatomic) BOOL isHaveShowAnalysis;
/** 是否开始答题了  yes的话不能显示预览模式 */
@property(assign, nonatomic) BOOL isStartQuestion;
/** 推送题目数量 */
@property(copy, nonatomic) NSString *pushQuestionNum;
/** 表示model是否用于手写输入答案情况下，查看题干 */
@property(nonatomic, assign) BOOL isHandWriteMode;
/** 同步学生答题时的答案 */
@property(nonatomic, copy) void (^syncAnswerBlock)(NSString *answer);

- (CGFloat)leadingSpace;
- (CGFloat)topSpace;
- (NSString *)answerHTMLString;
- (NSString *)analysisString;
- (BOOL)validatorAnalysisData;
- (NSString *)questionTypeImage;

/**
 是否是客观题 单选/多选/判断

 @return 单选/多选/判断 返回YES
 */
- (BOOL)questionTypeOfSubjective;

/**
 是否为主观题 填空/简答

 @return 填空/简答 返回YES
 */
- (BOOL)questionTypeOfObjective;

/**
 是否为选择题 单选/多选

 @return 单选/多选 返回YES
 */
- (BOOL)questionTypeOfChoice;

- (BOOL)questionTypeOfSingleChoice;
- (BOOL)questionTypeOfMultipleChoice;
- (BOOL)questionTypeOfJudge;
- (BOOL)questionTypeOfFill;
- (BOOL)questionTypeOfShortAnswer;
- (BOOL)questionTypeOfSynthesize;

/**
 题目做没做

 @return YES=未做
 */
- (BOOL)isQuestionUndo;

/**
 学生答案，针对客观题（单选，多选，判断），进行了数据变形
 */
- (NSString *)studentAnswerString;

/**
 主观题学生答案变形

 @return 返回变形后的答案
 */
- (NSString *)swithObjectiveStudenAnswer;

/**
 客观题正确答案
 */
- (NSString *)subjectiveRightAnswerString;

/**
 主观题学生答案
 */
- (NSString *)objectiveRightAnswerHTMLString;

/**
 知识点
 */
- (NSString *)knowledgeHTMLString;

/**
 学生图片答案集合
 */
- (NSArray *)studentAllAnswerImage;

/**
 学生答案数组

 @return 学生答案
 */
- (NSArray *)studentAnswerAry;

/**
 对学生答案进行过滤

 @param key 过滤的key
 @return 过滤后的学生答案
 */
- (NSMutableArray *)studentAnswerAryFilterWithKey:(NSString *)key;

/**
 构建（单选/多选/判断）学生本地答案
 */
- (void)buildStudentLocalAnswer;

#pragma mark-- 为截图时构建选项
/**
 构建截图时-选项卡-数据

 @return YMTQuestionItem or @{@"index":value,@"content":content}
 */
- (NSMutableArray *)buildQuestionOptions;

#pragma mark-- 为做题构建选项
/**
 构建做题界面-选项卡-数据

 @return YMTQuestionItem or @{@"index":value,@"content":content}
 */
- (NSArray *)questionOptionsWhenLoadToDoView;

/**
 为（单选，多选，判断）题型创建做题视图构建选项数据源
 */
- (NSMutableArray *)buildToDoSubjectiveOptions;

/**
 为（填空，简单）题型创建做题视图构建选项数据源

 @return @[@{@"index":value,@"content":content}]
 */
- (NSMutableArray *)buildToDoObjectiveOptions;

/**
 获取解析view需要的图片数据

 @return 一组图片地址
 */
- (NSArray *)analyzeForMyImageAnswer;
- (NSArray *)myAnswerImagesOfAnalysis;

/**
 获取我的答案文本数据
 */
- (NSDictionary *)analyzeForMyAnswer;

/**
 正确答案文本数据，主观题（单选/多选/简答）
 */
- (NSDictionary *)analyzeForCorrectAnswer;

/**
 解析界面，返回当前图片答案的高度
 */
- (CGFloat)heightForImageAnswerPhotosView;

@end

@interface YMTSDWorkDetailModel : NSObject
/** 作业id */
@property(nonatomic, copy) NSString *lessonWorkId;
/** 作题时间 秒 */
@property(nonatomic, copy) NSString *useTimeTotal;
/** 作业创建时间 */
@property(nonatomic, copy) NSString *createTime;
/** 作业更改时间 */
@property(nonatomic, copy) NSString *updateTime;
/** 题目信息集合 */
@property(nonatomic, strong) NSArray *questionInfoDtos;

@end
