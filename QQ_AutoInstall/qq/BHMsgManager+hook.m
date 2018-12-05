//
//  BHMsgManager+hook.m
//  qq
//
//  Created by Mac on 2018/12/4.
//  Copyright © 2018 Mac. All rights reserved.
//

#import "BHMsgManager+hook.h"
#import "BHMsgManager.h"
#import "RedPackHelper.h"
#import "BHMessageModel.h"
#import "BHCompoundMessagePacket.h"
#include <objc/runtime.h>
@implementation NSObject (BHMsgManagerHook)
+ (void)hook{
    [self jr_swizzleMethod:@selector(appendReceiveMessageModel:msgSource:) withMethod:@selector(hook_appendReceiveMessageModel:msgSource:) error:NULL];
    [NSClassFromString(@"RedPackHelper") jr_swizzleClassMethod:@selector(openRedPackWithMsgModel:operation:) withClassMethod:@selector(hook_openRedPackWithMsgModel:operation:) error:NULL];
//    [self jr_swizzleMethod:@selector(sendMessages:completion:ProgressBlock:) withMethod:@selector(hook_sendMessages:completion:ProgressBlock:) error:NULL];
//    [NSClassFromString(@"MessageSender") jr_swizzleMethod:@selector(hook_sendMessage:) withMethod:@selector(sendMessage:) error:NULL];
//    [self jr_swizzleMethod:@selector(sendMessagePacket:target:completion:ProgressBlock:) withMethod:@selector(hook_sendMessagePacket:target:completion:ProgressBlock:) error:NULL];

}
- (void)hook_appendReceiveMessageModel:(id)arg1 msgSource:(long long)arg2{
//    NSLog(@"+++接收到的消息：%@ class %@",arg1,[arg1 class] );
    for (BHMessageModel * msg in arg1) {
        NSLog(@"+++收到普通消息 消息体 %@ 消息日志 %@",msg, msg.content);
        if (msg.msgType == 311) {
            NSLog(@"+++收到红包消息 消息体 %@ 消息ID %d",msg, msg.msgID);
            [NSClassFromString(@"RedPackHelper") openRedPackWithMsgModel:msg operation:0];
        }
        
    }
    [self hook_appendReceiveMessageModel:arg1 msgSource:arg2];
}
+ (void)hook_openRedPackWithMsgModel:(id)arg1 operation:(id)arg2{
    [self hook_openRedPackWithMsgModel:arg1 operation:arg2];
}

- (id)hook_sendMessages:(id)arg1 completion:(id)arg2 ProgressBlock:(id)arg3{
    NSLog(@"+++1文本消息体 %@ 类型 %@",arg1,[arg1 class]);
    return [self hook_sendMessages:arg1 completion:arg2 ProgressBlock:arg3];
}
- (id)hook_sendMessage:(id)arg1{
    NSLog(@"+++2文本消息体 %@ 类型 %@",arg1,[arg1 class]);
    return [self hook_sendMessage:arg1];
}
- (id)hook_sendMessagePacket:(id)arg1 target:(id)arg2 completion:(id)arg3 ProgressBlock:(id)arg4;{
    BHCompoundMessagePacket * packet = (BHCompoundMessagePacket *)arg1;
    NSLog(@"+++3文本消息体内容 %@",packet.JSONString);
    BHMessageModel * result =  [self hook_sendMessagePacket:arg1 target:arg2 completion:arg3 ProgressBlock:arg4];
//    [self invokeOriginalMethod:self selector:_cmd];
    return result;
}
//- (void)invokeOriginalMethod:(id)target selector:(SEL)selector {
//    // Get the class method list
//    uint count;
//    Method *list = class_copyMethodList([target class], &count);
//
//    // Find and call original method .
//    for ( int i = count - 1 ; i >= 0; i--) {
//        Method method = list[i];
//        SEL name = method_getName(method);
//        IMP imp = method_getImplementation(method);
//        if (name == selector) {
//            ((void (*)(id, SEL))imp)(target, name);
//            break;
//        }
//    }
//    free(list);
//}
@end
