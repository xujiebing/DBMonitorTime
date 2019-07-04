//
//  DBMonitorTime.h
//  DBMonitorTime
//
//  Created by 徐结兵 on 2019/7/4.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface DBMonitorTime : NSObject

// 监控器单例
+ (nonnull instancetype)sharedTimer;

// 启动监控
- (void)startMonitoringTimer;

// 关闭监控
- (void)closeMonitoringTimer;

// 打印方法耗时
- (void)logAllCallStack;

// 手动显示日志
- (void)manualShowLog;

@end

@interface DBMonitorTimeModel : NSObject

/**
 方法名称
 */
@property (nonatomic, copy) NSString *functionName;

/**
 消耗时间
 */
@property (nonatomic, assign) CGFloat consumeTime;

/**
 方法地址
 */
@property (nonatomic, copy) NSString *functionAddress;

@end

NS_ASSUME_NONNULL_END
