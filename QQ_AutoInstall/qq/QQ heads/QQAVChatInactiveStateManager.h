//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQAVChatInactiveStateManager : NSObject
{
}

+ (id)sharedManager;
- (id)messageForRelation:(unsigned long long)arg1 ID:(id)arg2;
- (unsigned long long)chatTypeForRelation:(unsigned long long)arg1 ID:(id)arg2;
- (unsigned long long)chatStateForRelation:(unsigned long long)arg1 ID:(id)arg2;
- (void)postStateChangeNotificationForRelation:(unsigned long long)arg1 ID:(id)arg2;
- (void)postDisplayMessageNotificationWithMessage:(id)arg1 forRelation:(unsigned long long)arg2 ID:(id)arg3;

@end

