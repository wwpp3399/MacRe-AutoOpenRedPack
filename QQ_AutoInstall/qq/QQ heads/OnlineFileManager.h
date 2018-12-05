//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseSingleton.h"

#import "QQAccountEventObserver.h"

@class FAModel, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSTimer;

@interface OnlineFileManager : QQBaseSingleton <QQAccountEventObserver>
{
    NSMutableDictionary *_taskCache;
    NSMutableDictionary *_cookieCache;
    NSMutableDictionary *_sessionCache;
    FAModel *_currentFAModel;
    NSTimer *_clearTimer;
    NSObject<OS_dispatch_queue> *_queue;
    id <IOnlineFileDelegate> _delegate;
}

@property(nonatomic) __weak id <IOnlineFileDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)_testCancel;
- (BOOL)_testRefuse;
- (unsigned long long)GetFileOrFolderSize:(id)arg1;
- (void)_doCancelTaskWhenNetworkNotReachable;
- (void)onNetworkDidChange:(id)arg1;
- (id)getOnlineFileRecordBySessionID:(unsigned int)arg1;
- (void)_updateFileStatus:(id)arg1 withErrCode:(unsigned long long)arg2;
- (void)_doTransferEnd:(id)arg1;
- (void)onConvertToOffline:(id)arg1;
- (void)onTransferCompletion:(id)arg1;
- (void)onTransferProgress:(id)arg1;
- (void)onSendRequestDone:(id)arg1;
- (void)onBeReceive:(id)arg1;
- (void)onBeRequest:(id)arg1;
- (void)_convertToOffline:(id)arg1 completion:(id)arg2 progress:(id)arg3;
- (void)convertToOffline:(id)arg1 completion:(id)arg2 progress:(id)arg3;
- (void)queryOnlineStrategyToUin:(id)arg1 isFriend:(BOOL)arg2 completion:(id)arg3;
- (BOOL)_cancelFile:(id)arg1 reason:(unsigned long long)arg2 usingBlock:(id)arg3;
- (void)_cancelFileByNetworkError:(id)arg1;
- (BOOL)cancelFileAndConvert2Offline:(id)arg1;
- (BOOL)cancelFile:(id)arg1;
- (BOOL)refuseFile:(id)arg1;
- (void)_downloadFile:(id)arg1 completion:(id)arg2 progress:(id)arg3;
- (void)downloadFile:(id)arg1 completion:(id)arg2 progress:(id)arg3;
- (void)_sendOnlineFile:(id)arg1 completion:(id)arg2 progress:(id)arg3;
- (void)resendFile:(id)arg1 completion:(id)arg2 progress:(id)arg3;
- (id)sendFile:(id)arg1 toTraget:(id)arg2 completion:(id)arg3 progress:(id)arg4;
- (void)onDidChangeAccount;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

