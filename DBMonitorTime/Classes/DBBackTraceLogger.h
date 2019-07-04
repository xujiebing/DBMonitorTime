//
//  DBBackTraceLogger.h
//  DBMonitorTime
//  获取任意线程的调用栈
//  Created by 徐结兵 on 2019/7/4.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DBBackTraceLogger : NSObject

+ (NSString *)dbBacktraceOfAllThread;
+ (NSString *)dbBacktraceOfCurrentThread;
+ (NSString *)dbBacktraceOfMainThread;
+ (NSString *)dbBacktraceOfNSThread:(NSThread *)thread;
+ (NSDictionary *)dbBacktraceMapOfMainThread;

@end

NS_ASSUME_NONNULL_END
