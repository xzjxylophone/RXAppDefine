//
//  RXDefine.h
//  RXAppDefineExample
//
//  Created by Rush.D.Xzj on 16/1/1.
//  Copyright © 2016年 Rush.D.Xzj. All rights reserved.
//

#import <Foundation/Foundation.h>



// get window width & height
#define RX_Window_Width             ([UIScreen mainScreen].bounds.size.width)
#define RX_Window_Height            ([UIScreen mainScreen].bounds.size.height)

// get iphone model
// http://www.niaogebiji.com/article-4379-1.html
// don't consider iphone 3GS
// 将要废弃
#define RX_IsIPhone4_4s             (RX_Window_Height == 480)
#define RX_IsIPhone5_5s             (RX_Window_Height == 568)
#define RX_IsIPhone6_6s             (RX_Window_Height == 667)
#define RX_IsIPhone6Plus_6sPlus     (RX_Window_Height == 736)

// 各屏幕尺寸
// http://blog.csdn.net/phunxm/article/details/42174937
// 3.5 英寸
#define RX_IsIphone_3_5             (RX_Window_Height == 480)
// 4.0 英寸
#define RX_IsIphone_4_0             (RX_Window_Height == 568)
// 4.7 英寸
#define RX_IsIphone_4_7             (RX_Window_Height == 667)
// 5.5 英寸
#define RX_IsIphone_5_5             (RX_Window_Height == 736)


// 当前屏幕的宽度相对于3.5英寸(或者4.0英寸)的比率
#define RX_Scale_To_3_5_Or_4_0         (RX_Window_Width / 320.0f)
// 当前屏幕的宽度相对于4.7英寸的比率
#define RX_Scale_To_4_7                 (RX_Window_Width / 375.0f)
// 当前屏幕的宽度相对于5.5英寸的比率
#define RX_Scale_To_5_5                 (RX_Window_Width / 414.0f)



/*
 
 颜色部分:
 线的颜色
 界面的背景颜色
 程序的主色调颜色(导航栏颜色), 例如微信的主色调是类似于一种黑色
 程序中所说的,红绿蓝等等其他颜色
 
 
 字体部分:
 主要给一个字体的字符串名称fontName
 
 */


#pragma mark - Color Set

// set app color

// line color
#ifndef k_UI_Color_Line
#define k_UI_Color_Line             [UIColor grayColor]
#endif

// background color
#ifndef k_UI_Color_Background
#define k_UI_Color_Background       [UIColor whiteColor]
#endif

// app main color
#ifndef k_UI_Color_MainColor
#define k_UI_Color_MainColor        [UIColor blackColor]
#endif


// some system color to custom color
#ifndef k_UI_Color_AppRed
#define k_UI_Color_AppRed           [UIColor redColor]
#endif

#ifndef k_UI_Color_AppGreen
#define k_UI_Color_AppGreen           [UIColor greenColor]
#endif

#ifndef k_UI_Color_AppBlue
#define k_UI_Color_AppBlue           [UIColor blueColor]
#endif

// title and content color
#ifndef k_UI_Color_Title
#define k_UI_Color_Title           [UIColor blackColor]
#endif

#ifndef k_UI_Color_Content
#define k_UI_Color_Content           [UIColor blackColor]
#endif



#pragma mark - Font Set
// set app font
/*
 // custom font example
 #define k_UI_DefaultFontName        @"FZLTHJW--GB1-0"
 #define k_UI_DefaultFont(a)     [UIFont fontWithName:k_UI_DefaultFontName size:a]
 */

// DEPRECATED
#ifndef k_UI_DefaultFont
#define k_UI_DefaultFont(a)     [UIFont systemFontOfSize:a]
#endif

#ifndef k_UI_Font
#define k_UI_Font(a)   [UIFont systemFontOfSize:a]
#endif



#define k_UI_Font7      k_UI_Font(7)
#define k_UI_Font8      k_UI_Font(8)
#define k_UI_Font9      k_UI_Font(9)
#define k_UI_Font10     k_UI_Font(10)
#define k_UI_Font11     k_UI_Font(11)
#define k_UI_Font12     k_UI_Font(12)
#define k_UI_Font13     k_UI_Font(13)
#define k_UI_Font14     k_UI_Font(14)
#define k_UI_Font15     k_UI_Font(15)
#define k_UI_Font16     k_UI_Font(16)
#define k_UI_Font17     k_UI_Font(17)
#define k_UI_Font18     k_UI_Font(18)
#define k_UI_Font19     k_UI_Font(19)
#define k_UI_Font20     k_UI_Font(20)
#define k_UI_Font21     k_UI_Font(21)
#define k_UI_Font22     k_UI_Font(22)
#define k_UI_Font23     k_UI_Font(23)
#define k_UI_Font24     k_UI_Font(24)




















