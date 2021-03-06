//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface QQGroupAppUnreadHandler : NSObject
{
    unsigned long long _uin;
    NSMutableDictionary *_groupUnreadCountMap;
    NSMutableDictionary *_groupOAAlertCountMap;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (int)unreadAlertCountForGroupCode:(unsigned long long)arg1;
- (int)unreadFileCountForGroupCode:(unsigned long long)arg1;
- (void)setUnreadAlertCount:(int)arg1 forGroupCode:(unsigned long long)arg2;
- (void)setUnreadFileCount:(int)arg1 forGroupCode:(unsigned long long)arg2;
- (void)setUnreadCount:(int)arg1 forGroupCode:(unsigned long long)arg2 appId:(unsigned long long)arg3;
- (void)runAndWaitBlockOnMainThread:(id)arg1;
- (void)handleOnlinePushMsgType0x210_SubMsgType0x26WithBytes:(void *)arg1 length:(int)arg2;
- (void)requestGroupAppUnreadCountWithGroupCodeIfNeeded:(unsigned long long)arg1;
- (id)init;

@end

