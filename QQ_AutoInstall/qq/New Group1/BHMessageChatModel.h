//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QC2CRoamMessageDelegate.h"
#import "QClusterMsgDSProtocol.h"

@class NSArray, NSMutableArray, NSString;

@interface BHMessageChatModel : NSObject <QClusterMsgDSProtocol, QC2CRoamMessageDelegate>
{
    int _sessionType;
    NSString *_uin;
    id _onAppendMessage;
    id _onDeleteMessage;
    id _onRevokeMessage;
    id _onReplaceMessage;
    id _onCleanMessage;
    id _onReloadMessage;
    id _onTyping;
    id _completionBlock;
    NSMutableArray *_dbMsgModelArray;
}

@property(retain, nonatomic) NSMutableArray *dbMsgModelArray; // @synthesize dbMsgModelArray=_dbMsgModelArray;
@property(copy, nonatomic) id completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) id onTyping; // @synthesize onTyping=_onTyping;
@property(copy, nonatomic) id onReloadMessage; // @synthesize onReloadMessage=_onReloadMessage;
@property(copy, nonatomic) id onCleanMessage; // @synthesize onCleanMessage=_onCleanMessage;
@property(copy, nonatomic) id onReplaceMessage; // @synthesize onReplaceMessage=_onReplaceMessage;
@property(copy, nonatomic) id onRevokeMessage; // @synthesize onRevokeMessage=_onRevokeMessage;
@property(copy, nonatomic) id onDeleteMessage; // @synthesize onDeleteMessage=_onDeleteMessage;
@property(copy, nonatomic) id onAppendMessage; // @synthesize onAppendMessage=_onAppendMessage;
@property(retain, nonatomic) NSString *uin; // @synthesize uin=_uin;
@property(nonatomic) int sessionType; // @synthesize sessionType=_sessionType;
- (void).cxx_destruct;
- (void)resetMessageList;
- (void)sortDbMessageArray;
- (void)callLoadMoreCompletionBlock:(BOOL)arg1 error:(id)arg2;
- (void)handleGroupMessage:(id)arg1 clusterUin:(long long)arg2 error:(id)arg3;
- (void)loadClusterMessage:(unsigned int)arg1 completion:(id)arg2;
- (void)loadClusterMessageToSeq:(unsigned int)arg1 completion:(id)arg2;
- (void)loadClusterMessageTo:(id)arg1 completion:(id)arg2;
- (void)handleC2CRoamMessage:(long long)arg1 msgList:(id)arg2 error:(id)arg3;
- (void)loadC2CMessage:(unsigned int)arg1 completion:(id)arg2;
- (void)loadC2CMessageToTime:(unsigned int)arg1 completion:(id)arg2;
- (void)loadMoreMessage:(id)arg1;
- (id)filterMessageArray:(id)arg1;
@property(readonly, nonatomic) NSArray *msgArray;
- (void)dealloc;
- (const char *)identityStr;
- (id)initWith:(id)arg1 messageType:(int)arg2;
- (void)reloadMessage;
- (void)cleanAllMessageModel;
- (void)notifyInput:(unsigned int)arg1;
- (void)replaceMessageModel:(id)arg1;
- (void)revokeMessageModel:(id)arg1;
- (void)removeMessageModel:(id)arg1;
- (void)appendMessageModel:(id)arg1 msgSource:(long long)arg2;
- (void)updateMessageChatModel:(id)arg1 keyArray:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

