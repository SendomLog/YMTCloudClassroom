//
//  YMWhiteBoardEnum.h
//  YiMiApp
//
//  Created by mystarains on 2019/8/5.
//  Copyright © 2019 YiMi. All rights reserved.
//

#ifndef YMWhiteBoardEnum_h
#define YMWhiteBoardEnum_h


typedef NS_ENUM(NSInteger,YMDrawToolType) {
    YMDrawToolTypePen,
    YMDrawToolTypeLine,
    YMDrawToolTypeRectagleStroke,
    YMDrawToolTypeRectagleFill,
    YMDrawToolTypeEllipseStroke,
    YMDrawToolTypeEllipseFill,
    YMDrawToolTypeEraser,
    
    YMDrawToolTypeTuoCircle,  // 椭圆
    YMDrawToolTypePolygon,    // 多边形
    YMDrawToolTypeCursor,     // 教鞭、光标
    YMDrawToolTypeUserTapShot // 截图矩形选框
};

typedef NS_ENUM(NSInteger,WhiteBoardCursorViewType) {
    WhiteBoardCursorViewType_None = 0,
    WhiteBoardCursorViewType_OneToOne,
    WhiteBoardCursorViewType_SmallClass
};


#endif /* YMWhiteBoardEnum_h */
