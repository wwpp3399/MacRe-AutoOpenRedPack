//
//  QQMessageRevokeEngine+hook.m
//  qq
//
//  Created by Mac on 2018/11/30.
//  Copyright © 2018 Mac. All rights reserved.
//

#import "QQMessageRevokeEngine+hook.h"
#import "JRSwizzle/JRSwizzle.h"
#import <Foundation/Foundation.h>
#import "QQMessageRevokeEngine.h"
@implementation NSObject (QQMessageRevokeEngineHook)

+ (void)hook_revokeMessage
{
    [self jr_swizzleMethod:@selector(hook_handleRecallNotify:isOnline:) withMethod:@selector(handleRecallNotify:isOnline:) error:NULL];
}
- (void)hook_handleRecallNotify:(struct RecallModel *)arg1 isOnline:(BOOL)arg2{
    NSLog(@"+++拦截撤回消息" );
//    [self hook_handleRecallNotify:arg1 isOnline:arg2];
}
@end
