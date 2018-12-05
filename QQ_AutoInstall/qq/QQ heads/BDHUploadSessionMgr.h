//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UpSessionDelegate.h"

@class BDHTraceString, MSFNetReachability, NSMutableArray, NSString, NSTimer;

@interface BDHUploadSessionMgr : NSObject <UpSessionDelegate>
{
    NSMutableArray *_sessions;
    NSMutableArray *_timeoutSesions;
    NSMutableArray *_removeSesions;
    int _state;
    BDHTraceString *_log;
    MSFNetReachability *_reachability;
    NSTimer *_waitingTimer;
    NSMutableArray *_resultArray;
    double _beginTime;
    BOOL _hasReport;
    int _lastRet;
    BOOL _dupFlag;
    int sessionTryCnt;
    int sessionSucessCnt;
    int sessionOkToBadCnt;
    BOOL hasReportSessionCnt;
    id <UpSessionMgrDelegate> delegate;
}

+ (void)exit;
+ (BOOL)checkHasInstance;
+ (id)instance;
@property(nonatomic) int lastRet; // @synthesize lastRet=_lastRet;
@property(retain, nonatomic) MSFNetReachability *reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) NSTimer *waitingTimer; // @synthesize waitingTimer=_waitingTimer;
@property(nonatomic) id <UpSessionMgrDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) BDHTraceString *log; // @synthesize log=_log;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) NSMutableArray *removeSesions; // @synthesize removeSesions=_removeSesions;
@property(retain, nonatomic) NSMutableArray *timeoutSesions; // @synthesize timeoutSesions=_timeoutSesions;
@property(retain, nonatomic) NSMutableArray *sessions; // @synthesize sessions=_sessions;
- (void)reportSessionResult:(BOOL)arg1 protocol:(int)arg2;
- (void)resetReportParam;
- (void)traceSessionResult:(id)arg1 ret:(int)arg2;
- (int)maxSegmentCocurrentNum;
- (void)resetSessionCnt;
- (void)reportSessionCnt;
- (void)resetSessionHeartBeat:(int)arg1 timeoutCnt:(int)arg2;
- (void)doSessionTimeout:(int)arg1;
- (void)reachabilityAPNChanged:(id)arg1;
- (void)notifyApnState:(int)arg1 apn:(int)arg2;
- (void)removeApnEventListen;
- (void)apnEventNotifyListen;
- (void)upSession:(id)arg1 event:(int)arg2 result:(int)arg3 code:(int)arg4 msg:(id)arg5;
- (void)upSession:(id)arg1 sendResult:(int)arg2 length:(int)arg3 tag:(long long)arg4;
- (void)upSession:(id)arg1 data:(id)arg2;
- (void)upSession:(id)arg1 result:(int)arg2 info:(id)arg3 msg:(id)arg4;
- (void)processSessionError:(id)arg1 info:(id)arg2 result:(int)arg3 msg:(id)arg4;
- (void)processSessionSuccess:(id)arg1 info:(id)arg2;
- (void)reInitSession;
- (void)clearAllSessions;
- (void)clearSession;
- (void)clearBadSessions;
- (void)cancelAllSession:(id)arg1;
- (void)runSession2:(int)arg1 isIpDetect:(BOOL)arg2;
- (void)runSession;
- (void)checkErrorSession;
- (void)dupCurSession;
- (void)runNextSession:(int)arg1 isIpDetect:(BOOL)arg2;
- (void)clearLog;
- (int)netType;
- (BOOL)send:(id)arg1 tag:(long long)arg2;
- (void)checkSession;
- (BOOL)sessionCanSend;
- (int)availableSessionNum;
- (BOOL)hasPotentialSession;
- (BOOL)trySend:(id)arg1 tag:(long long)arg2;
- (void)start;
- (void)dealloc;
- (void)checkDupConnection:(int)arg1;
- (void)checkBuildConnection;
- (void)preBuildConnection;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

