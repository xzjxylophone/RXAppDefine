//
//  UIViewController+RXApp.h
//  RXAppDefineExample
//
//  Created by ceshi on 16/5/6.
//  Copyright © 2016年 Rush.D.Xzj. All rights reserved.
//

#import <UIKit/UIKit.h>


// 还有许多需要的箭头啊,创建啊等等等等

@interface UIViewController (RXApp)



@property (nonatomic, strong) UIBarButtonItem *rx_backBarButtonItem;
@property (nonatomic, strong) UIBarButtonItem *rx_cancelBarButtonItem;
@property (nonatomic, strong) UIBarButtonItem *rx_noneBarButtonItem;

- (void)rx_backBarButtonItemAction:(id)sender;
- (void)rx_cancelBarButtonItemAction:(id)sender;
- (void)rx_noneBarButtonItemAction:(id)sender;


@end
