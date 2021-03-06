//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MQUnreadMsgItem.h"

@class NSMutableArray;

@interface MQUnreadPublicSubscribeMsgItem : MQUnreadMsgItem
{
    NSMutableArray *_messages;
}

@property(retain, nonatomic) NSMutableArray *messages; // @synthesize messages=_messages;
- (void).cxx_destruct;
- (void)resetAfterRead;
- (BOOL)isOfflineMsg;
- (id)textOfChatMsg;
- (unsigned long long)msgCount;
- (id)messageArray;
- (void)itemTitleCallBack:(id)arg1;
- (BOOL)showFloatHint;
- (BOOL)soundNotify;
- (id)itemTitle;
- (id)itemIcon;
- (void)dealloc;
- (id)initWithUin:(unsigned long long)arg1 chatType:(int)arg2;

@end

