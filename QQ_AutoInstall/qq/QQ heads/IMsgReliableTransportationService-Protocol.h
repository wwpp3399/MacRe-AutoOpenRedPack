//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary, NSString, QQSendingMsgModel;

@protocol IMsgReliableTransportationService <NSObject>
- (BOOL)isMsgSending:(QQSendingMsgModel *)arg1;
- (NSArray *)getAllPiecesOfOneLongMsg:(QQSendingMsgModel *)arg1;
- (void)markMultiMessageAllFailed:(QQSendingMsgModel *)arg1;
- (void)removeMultiMessagesFromSendQueue:(QQSendingMsgModel *)arg1;
- (BOOL)isMultiMessageSentOutCompletely:(QQSendingMsgModel *)arg1;
- (NSMutableDictionary *)getSendingUserInfoBySeq:(int)arg1;
- (QQSendingMsgModel *)removeSendingMsgBySeq:(int)arg1;
- (int)sendMessage:(QQSendingMsgModel *)arg1 transportLicence:(NSString *)arg2;
- (NSString *)getLicence:(id <IPacketSendResultHandler>)arg1;
- (void)unregisterSendResultHandler:(id <IPacketSendResultHandler>)arg1;
- (NSString *)registerSendResultHandler:(id <IPacketSendResultHandler>)arg1;
@end

