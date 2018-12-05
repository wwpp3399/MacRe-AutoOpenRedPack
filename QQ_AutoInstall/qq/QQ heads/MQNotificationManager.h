//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSNotificationCenter;

@interface MQNotificationManager : NSObject
{
    NSMutableDictionary *_notificationNameObjectList;
    NSNotificationCenter *_notifyCenter;
}

+ (id)defaultManager;
- (void).cxx_destruct;
- (void)postNotification:(id)arg1;
- (void)postNotificationName:(id)arg1 sender:(id)arg2 userInfo:(id)arg3;
- (void)removeNotificationName:(id)arg1 observer:(id)arg2 object:(id)arg3;
- (void)registerNotificationName:(id)arg1 observer:(id)arg2 selector:(SEL)arg3 object:(id)arg4 notifyMode:(int)arg5;
- (void)dealloc;
- (id)initWithNotificationCenter:(id)arg1;
- (id)init;

@end

