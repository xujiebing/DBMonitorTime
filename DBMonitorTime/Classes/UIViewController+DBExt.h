//
//  UIViewController+DBExt.h
//  DBMonitorTime
//  获取当前控制器
//  Created by 徐结兵 on 2019/7/4.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIViewController (DBExt)

/**
 获取当前控制器

 @return 控制器对象
 */
+ (UIViewController *)currentViewController;

@end

NS_ASSUME_NONNULL_END
