#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "DBBackTraceLogger.h"
#import "DBMonitorTime.h"
#import "UIViewController+DBExt.h"

FOUNDATION_EXPORT double DBMonitorTimeVersionNumber;
FOUNDATION_EXPORT const unsigned char DBMonitorTimeVersionString[];

