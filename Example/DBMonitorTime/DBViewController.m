//
//  DBViewController.m
//  DBMonitorTime
//
//  Created by xujiebing on 07/04/2019.
//  Copyright (c) 2019 xujiebing. All rights reserved.
//

#import "DBViewController.h"
#import <DBMonitorTime/DBMonitorTime.h>

@interface DBViewController ()

@end

@implementation DBViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self testAAAAAAAAAAA];
}

- (void)testAAAAAAAAAAA{
    [self testBBBBBBBBBB];
}

- (void)testBBBBBBBBBB{
    while (true) {
        sleep(3);
        break;
    }
}

- (void)viewDidAppear:(BOOL)animated{
    //打印日志
    [[DBMonitorTime sharedTimer] logAllCallStack];
}

@end
