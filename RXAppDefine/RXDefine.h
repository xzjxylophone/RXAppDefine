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





// set app font
/*
 // custom font example
 #define k_UI_DefaultFontName        @"FZLTHJW--GB1-0"
 #define k_UI_DefaultFont(a)     [UIFont fontWithName:k_UI_DefaultFontName size:a]
 */
#ifndef k_UI_DefaultFont
#define k_UI_DefaultFont(a)     [UIFont systemFontOfSize:a]
#endif

#define k_UI_Font10     k_UI_DefaultFont(10)
#define k_UI_Font11     k_UI_DefaultFont(11)
#define k_UI_Font12     k_UI_DefaultFont(12)
#define k_UI_Font13     k_UI_DefaultFont(13)
#define k_UI_Font14     k_UI_DefaultFont(14)
#define k_UI_Font15     k_UI_DefaultFont(15)
#define k_UI_Font16     k_UI_DefaultFont(16)
#define k_UI_Font17     k_UI_DefaultFont(17)

// set app color
#ifndef k_UI_Color_Line
#define k_UI_Color_Line             [UIColor grayColor]
#endif

#ifndef k_UI_Color_Background
#define k_UI_Color_Background       [UIColor whiteColor]
#endif



