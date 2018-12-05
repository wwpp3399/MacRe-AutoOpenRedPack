//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSFTcpStateDelegate.h"

@class MSFTcpConnect, NSObject<OS_dispatch_queue>, NSString, NSTimer;

@interface MSFReconnectOptimization : NSObject <MSFTcpStateDelegate>
{
    NSTimer *_pTimer;
    struct map<int, long long, std::less<int>, std::allocator<std::pair<const int, long long>>> _pRequestRecordMap;
    NSObject<OS_dispatch_queue> *_pQueue;
    int _pMaxBlockTime;
    struct DataDelegateAdapter _pDataAdapter;
    long long _pStartConnectTime;
    _Bool _pIsTcpReconnected;
    _Bool _pIsSwapTcp;
    long long _pFirstRecvTime;
    MSFTcpConnect *conn;
    id <MSFReconnectOptimizationDelegate> delegate;
}

@property(nonatomic) id <MSFReconnectOptimizationDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) MSFTcpConnect *conn; // @synthesize conn;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onConnectErrorHandle:(int)arg1 errorType:(int)arg2;
- (void)onConnectFailHandle:(int)arg1 reason:(int)arg2;
- (void)swapTcp;
- (void)onConnectSuccessHandle:(int)arg1;
- (void)onConnectedHandle:(int)arg1;
- (void)onConnect:(int)arg1 withState:(int)arg2 andExParam:(void *)arg3;
- (void)disConnect;
- (BOOL)doConnect;
- (void)onTimeout;
- (void)onTcpRecvData;
- (void)onRecvPacket:(struct CNetworkResponseSO *)arg1;
- (void)onSendPacketComplete:(struct CNetworkRequestSO *)arg1;
- (void)resetParameters;
- (void)onDisconnect;
- (void)onConnected;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

