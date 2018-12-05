//
//  CalculatorPlugin.m
//  CalculatorPlugin
//
//  Created by Jobs on 16/2/14.
//  Copyright (c) 2015年 Jobs. All rights reserved.
//

#import "QQ.h"
#import "QQMessageRevokeEngine+hook.h"
#import "BHMsgManager+hook.h"
@interface QQ()

@end


@implementation QQ

/**
 * @return the single static instance of the plugin object
 */
+ (instancetype)sharedInstance
{
    static QQ *plugin = nil;
    @synchronized(self) {
        if (!plugin) {
            plugin = [[self alloc] init];
        }
    }
    return plugin;
}


/**
 * A special method called by SIMBL once the application has started and all classes are initialized.
 */
+ (void)load
{
    QQ *plugin = [QQ sharedInstance];
    NSLog(@"++++++++ %@ plugin loaded ++++++++", plugin);
    
    [NSClassFromString(@"QQMessageRevokeEngine") hook_revokeMessage];
    [NSClassFromString(@"BHMsgManager") hook];
}


@end
