//
//  UIViewController+RXApp.m
//  RXAppDefineExample
//
//  Created by ceshi on 16/5/6.
//  Copyright © 2016年 Rush.D.Xzj. All rights reserved.
//

#import "UIViewController+RXApp.h"
#import <objc/runtime.h>
@implementation UIViewController (RXApp)

#pragma mark - Property
- (UIBarButtonItem *)rx_backBarButtonItem
{
    id result = objc_getAssociatedObject(self, @"rx_backBarButtonItem");
    if (result == nil) {
        [self __private_initBarButtonItem];
        return self.rx_backBarButtonItem;
    } else {
        return result;
    }
}

- (void)setRx_backBarButtonItem:(UIBarButtonItem *)rx_backBarButtonItem
{
    objc_setAssociatedObject(self, @"rx_backBarButtonItem", rx_backBarButtonItem, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}


- (UIBarButtonItem *)rx_cancelBarButtonItem
{
    id result = objc_getAssociatedObject(self, @"rx_cancelBarButtonItem");
    if (result == nil) {
        [self __private_initBarButtonItem];
        return self.rx_cancelBarButtonItem;
    } else {
        return result;
    }
}

- (void)setRx_cancelBarButtonItem:(UIBarButtonItem *)rx_cancelBarButtonItem
{
    objc_setAssociatedObject(self, @"rx_cancelBarButtonItem", rx_cancelBarButtonItem, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

- (UIBarButtonItem *)rx_noneBarButtonItem
{
    id result = objc_getAssociatedObject(self, @"rx_noneBarButtonItem");
    if (result == nil) {
        [self __private_initBarButtonItem];
        return self.rx_noneBarButtonItem;
    } else {
        return result;
    }
}

- (void)setRx_noneBarButtonItem:(UIBarButtonItem *)rx_noneBarButtonItem
{
    objc_setAssociatedObject(self, @"rx_noneBarButtonItem", rx_noneBarButtonItem, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

#pragma mark - Action
- (void)rx_backBarButtonItemAction:(id)sender
{
    [self.navigationController popViewControllerAnimated:YES];
}
- (void)rx_cancelBarButtonItemAction:(id)sender
{
    [self dismissViewControllerAnimated:YES completion:nil];
}
- (void)rx_noneBarButtonItemAction:(id)sender
{
    // Do Nothing
}


#pragma mark - Private

- (UIBarButtonItem *)barButtonItemWithImageName:(NSString *)imageName target:(id)target action:(SEL)action
{
    UIImage *image = [UIImage imageNamed:imageName];
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    CGFloat width = image.size.width;
    CGFloat height = image.size.height;
    btn.frame = CGRectMake(0, 0, width, height);
    [btn setImage:image forState:UIControlStateNormal];
    [btn addTarget:target action:action forControlEvents:UIControlEventTouchUpInside];
    return [[UIBarButtonItem alloc] initWithCustomView:btn];
    
}


- (UIBarButtonItem *)barButtonItemWithTarget:(id)target action:(SEL)action
{
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    btn.frame = CGRectMake(0, 0, 44, 44);
    [btn addTarget:target action:@selector(action) forControlEvents:UIControlEventTouchUpInside];
    return [[UIBarButtonItem alloc] initWithCustomView:btn];
}



- (void)__private_initBarButtonItem
{
    self.rx_backBarButtonItem = [self barButtonItemWithImageName:@"icon_back" target:self action:@selector(rx_backBarButtonItemAction:)];
    self.rx_cancelBarButtonItem = [self barButtonItemWithImageName:@"icon_cancel" target:self action:@selector(rx_cancelBarButtonItemAction:)];
    self.rx_noneBarButtonItem = [self barButtonItemWithTarget:self action:@selector(rx_noneBarButtonItemAction:)];
    
    
    
    
}



- (void)kksklglsdklg
{
    NSDictionary *infoPlist = [[NSBundle mainBundle] infoDictionary];
    NSArray *array = [infoPlist valueForKeyPath:@"CFBundleIcons.CFBundlePrimaryIcon.CFBundleIconFiles"];
    NSString *icon = array.lastObject;
    NSLog(@"icon:%@", icon);
}














































@end
