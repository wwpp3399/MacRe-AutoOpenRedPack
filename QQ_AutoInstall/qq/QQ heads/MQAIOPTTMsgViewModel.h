//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MQAIOMessageViewModel.h"

@class TXAudioView;

@interface MQAIOPTTMsgViewModel : MQAIOMessageViewModel
{
    TXAudioView *_audioView;
}

- (void).cxx_destruct;
- (Class)bubbleTextBlockClass;
- (id)getAudioViewIfPossibleWithMsgPack:(id)arg1 isSelf:(int)arg2 chatUIStyle:(int)arg3 senderUin:(id)arg4;
- (id)addTextBlockWithMsg:(id)arg1 chatUIStyle:(int)arg2 isSelf:(BOOL)arg3 isAutoReply:(BOOL)arg4 uin:(id)arg5 fontName:(id)arg6 bNeedBubble:(BOOL)arg7;
- (void)rebuildAttributeString;
- (id)OutputMessageBodyfromUin:(id)arg1 withMsgPack:(id)arg2 chatUIStyle:(int)arg3 isHistoryMsg:(BOOL)arg4 isSendBySelf:(BOOL)arg5;

@end

