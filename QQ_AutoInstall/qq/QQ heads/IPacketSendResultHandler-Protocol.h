//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QQSendingMsgModel;

@protocol IPacketSendResultHandler <NSObject>
- (void)notifyMsgSentResult:(QQSendingMsgModel *)arg1 result:(int)arg2;

@optional
- (BOOL)handleRecivedPacket:(CDStruct_a00ab4be)arg1 sendingModel:(QQSendingMsgModel *)arg2;
@end

