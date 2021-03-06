//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSPointerArray, NSString, NSTimer, WloginSdk_v2;

@interface BHLoginManager : NSObject
{
    NSString *_uin;
    NSString *_slaveUin;
    NSMutableDictionary *_sessionCache;
    NSString *_lastLoginUin;
    BOOL _silentLogin;
    NSPointerArray *_observers;
    NSTimer *_skeyTimer;
    NSTimer *_stWebTimer;
    long long sendRegisterCount;
    BOOL _kickPC;
    int _checkNetworkRetryCount;
    long long _lastDayForReportLoginSuc;
    BOOL _lastActivityState;
    BOOL _activityStateReportingAfterLogin;
    unsigned long long _loginReason;
}

+ (id)getDevModel;
+ (id)getDevName;
+ (id)getInstance;
@property(nonatomic) unsigned long long loginReason; // @synthesize loginReason=_loginReason;
- (void).cxx_destruct;
- (BOOL)_checkNetwork;
- (void)_testNetworkAndReport;
- (void)_reportPCActiveState:(BOOL)arg1 completion:(id)arg2;
- (void)internalReportPCActiveState:(BOOL)arg1 completion:(id)arg2;
- (void)reportPCActiveState:(BOOL)arg1 completion:(id)arg2;
- (id)getDiscussGroupParameters;
- (id)getGroupParameters;
- (void)stopSendHeartBeat;
- (void)_sendHeartBeat;
- (void)_reportActivityState;
- (struct SvcReqRegister)_buildSvcReqRegister:(long long)arg1;
- (void)notifyAfterLogoutEnd:(id)arg1;
- (void)_changeOnlineState:(long long)arg1 withUin:(id)arg2 completion:(id)arg3;
- (void)changeOnlineState:(long long)arg1 completion:(id)arg2;
- (void)internalSendRegisterProxy;
- (void)sendRegistProxy:(BOOL)arg1;
- (void)sendRegistProxy;
- (void)reTrySendRegistProxy:(id)arg1;
- (void)doNotifyUIWhenRespondsToSelector:(SEL)arg1 doAction:(id)arg2;
- (void)notifyUIForShowSMSCode:(id)arg1 withAccount:(id)arg2;
- (void)notifyUIForShowVerifyCode:(id)arg1 tips:(id)arg2 withAccount:(id)arg3;
- (void)notifyUIForServerPushTips:(id)arg1 withAccount:(id)arg2;
- (void)notifyUIForForceLogout:(long long)arg1 tips:(id)arg2 withAccount:(id)arg3;
- (void)notifyUIForReLoginSuccessWithAccount:(id)arg1;
- (void)notifyUIForLoginByOfflineSuccessWithAccount:(id)arg1;
- (void)notifyUIForLoginResult:(long long)arg1 userInfo:(id)arg2 withAccount:(id)arg3;
- (void)_requestStweb;
- (void)_requestSkey;
- (void)_doInitWhenLoginSuc;
- (void)_handleWTLoginCodeAndNotifyUIIfFaild:(int)arg1 withAccount:(id)arg2;
- (void)_handleLoginDevLockVerify4Account:(id)arg1 userInfo:(id)arg2;
- (void)_handleLoginForceOffine4Account:(id)arg1 userInfo:(id)arg2;
- (void)_handleLoginLost4Account:(id)arg1 userInfo:(id)arg2;
- (void)_handleLoginFailedEvent4Account:(id)arg1 userInfo:(id)arg2;
- (void)_handleLoginSuccessEvent4SlaveAccount:(id)arg1;
- (void)_handleLoginSuccessEvent4MasterAccount:(id)arg1;
- (long long)_querySesstionID:(id)arg1;
- (void)_cacheSession:(id)arg1 sessionID:(id)arg2;
- (BOOL)_checkNetworkState:(id)arg1;
- (void)requestSig_PT4Token:(id)arg1;
- (int)requestSig_OpenIDAndAccessToken:(unsigned int)arg1 completion:(id)arg2;
- (int)requestSig_OpenIDAndOpenKey:(unsigned int)arg1 completion:(id)arg2;
- (id)getPT4TokenWithDomain:(id)arg1;
- (void)addDomainListToPT4Token:(id)arg1;
- (id)getPSkeyWithDomain:(id)arg1;
- (void)addDomainListToPSkey:(id)arg1;
- (void)_handleLoginResultWithAccount:(id)arg1 userInfo:(id)arg2;
- (void)handleLoginResultNotification4SlaveAccount:(id)arg1;
- (void)handleLoginResultNotification4MasterAccount:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)logoutCurrentAccount;
- (void)setOnlineState4CurrentAccount:(long long)arg1;
- (void)setAutoLogin4CurrentAccount:(BOOL)arg1;
- (void)setSavePwd4CurrentAccount:(BOOL)arg1;
- (void)refreshSMSCode:(id)arg1;
- (void)checkSMSCodeAndLogin:(id)arg1 withAccount:(id)arg2;
- (void)refreshVerifyCode:(id)arg1;
- (void)checkVerifyCodeAndLogin:(id)arg1 withAccount:(id)arg2;
- (void)loginSlaveAfterQRCodeSuccessWithAccount:(id)arg1;
- (void)loginAfterQRCodeSuccessWithAccount:(id)arg1 autoLogin:(BOOL)arg2;
- (void)loginSlaveAccount:(id)arg1 pwd:(id)arg2;
- (BOOL)isSlaveAccountSigValid:(id)arg1;
- (void)loginEIMAccount:(id)arg1 autoLogin:(BOOL)arg2;
- (void)loginWithEIMAccount:(id)arg1;
- (void)_doLoginWhenNetworkConnectedAfterOfflineLogin:(id)arg1;
- (void)_reLoginWithAccount:(id)arg1 onlineState:(long long)arg2;
- (void)loginWithAccount4SilentLogin:(id)arg1 onlineState:(long long)arg2;
- (void)loginWithAccount4ReLogin:(id)arg1 onlineState:(long long)arg2;
- (void)loginByOfflineWithAccount:(id)arg1;
- (void)loginWithAccount:(id)arg1 pwd:(id)arg2 onlineState:(long long)arg3 savePwd:(BOOL)arg4 autoLogin:(BOOL)arg5;
- (void)setWtLoginSubAppID:(unsigned int)arg1;
- (id)init;
@property(readonly, nonatomic) WloginSdk_v2 *wloginSDK;

@end

