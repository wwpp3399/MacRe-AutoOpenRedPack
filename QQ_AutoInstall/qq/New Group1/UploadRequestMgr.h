//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UpSessionMgrDelegate.h"

@class NSMutableDictionary, NSRecursiveLock, NSString;

@interface UploadRequestMgr : NSObject <UpSessionMgrDelegate>
{
    NSMutableDictionary *dictRequest;
    NSRecursiveLock *queueLock;
}

+ (id)sharedInstance;
- (void)NotifySessionClear;
- (void)NotifyNoSessionAvailable;
- (void)sessionMgrNotifySendResultState:(id)arg1 session:(id)arg2 info:(id)arg3;
- (void)sessionMgrNotifyData:(id)arg1 session:(id)arg2 info:(id)arg3;
- (void)sessionMgrNotifyApnChanged:(id)arg1 session:(id)arg2 info:(id)arg3;
- (void)sessionMgrNotifyEvent:(id)arg1 session:(id)arg2 info:(id)arg3;
- (void)sessionMgrNotifyFail:(id)arg1 session:(id)arg2 info:(id)arg3;
- (void)sessionMgrNotifySuccess:(id)arg1 session:(id)arg2 info:(id)arg3;
- (id)getRequest:(id)arg1;
- (BOOL)sessionCanSend;
- (void)processRequestTimeout:(id)arg1;
- (void)cancelUploadRequest:(id)arg1;
- (void)removeAllRequest;
- (void)removeRequest:(id)arg1;
- (void)enqueueRequest:(id)arg1;
- (BOOL)sendRequest:(id)arg1 data:(id)arg2;
- (BOOL)canSendMoreTimeoutSegMent;
- (BOOL)canSendMoreSegMent;
- (void)dealloc;
- (id)init;
- (int)dicRequestCount;
- (int)generateSeqNo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

