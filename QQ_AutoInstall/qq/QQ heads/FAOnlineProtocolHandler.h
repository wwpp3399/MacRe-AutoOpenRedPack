//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseSingleton.h"

@interface FAOnlineProtocolHandler : QQBaseSingleton
{
}

- (void)querySendFileStrategyToUin:(id)arg1 isFriend:(BOOL)arg2 filePath:(id)arg3 size:(unsigned int)arg4 md5:(id)arg5 completion:(id)arg6;
- (struct RoutingHead *)_genRoutingHead:(id)arg1 cmd:(unsigned int)arg2;
- (void)_sendPBTransMessage:(id)arg1 completion:(id)arg2;
- (void)send0x211_0x3_FailNotify:(id)arg1 completion:(id)arg2;
- (void)send0x211_0x3_ProgressNotify:(id)arg1 completion:(id)arg2;
- (void)requestLongCNN:(id)arg1 completion:(id)arg2;

@end

