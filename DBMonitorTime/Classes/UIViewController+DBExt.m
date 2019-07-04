//
//  UIViewController+DBExt.m
//  DBMonitorTime
//
//  Created by 徐结兵 on 2019/7/4.
//

#import "UIViewController+DBExt.h"

@implementation UIViewController (DBExt)

#pragma mark - 公共方法

+ (UIViewController *)currentViewController{
    UIViewController *viewController = [UIApplication sharedApplication].keyWindow.rootViewController;
    return [UIViewController p_findBestViewController:viewController];
}

#pragma mark - 内部方法

+ (UIViewController *)p_findBestViewController:(UIViewController *)vc{
    if (vc.presentedViewController) {
        // Return presented view controller
        return [UIViewController p_findBestViewController:vc.presentedViewController];
    } else if ([vc isKindOfClass:[UISplitViewController class]]) {
        // Return right hand side
        UISplitViewController *svc = (UISplitViewController *)vc;
        if (svc.viewControllers.count > 0)
        return [UIViewController p_findBestViewController:svc.viewControllers.lastObject];
        else
        return vc;
    } else if ([vc isKindOfClass:[UINavigationController class]]) {
        // Return top view
        UINavigationController *svc = (UINavigationController *)vc;
        if (svc.viewControllers.count > 0)
        return [UIViewController p_findBestViewController:svc.topViewController];
        else
        return vc;
    } else if ([vc isKindOfClass:[UITabBarController class]]) {
        // Return visible view
        UITabBarController *svc = (UITabBarController *)vc;
        if (svc.viewControllers.count > 0)
        return [UIViewController p_findBestViewController:svc.selectedViewController];
        else
        return vc;
    } else {
        // Unknown view controller type, return last child view controller
        return vc;
    }
}

@end
