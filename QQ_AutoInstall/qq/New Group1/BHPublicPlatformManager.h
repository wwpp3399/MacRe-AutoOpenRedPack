//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseSingleton.h"

#import "QQAccountEventObserver.h"

@class NSArray, NSMutableDictionary, NSString;

@interface BHPublicPlatformManager : QQBaseSingleton <QQAccountEventObserver>
{
    NSMutableDictionary *_myFollowListCache;
}

- (void).cxx_destruct;
- (void)unfollowAccountWithUIN:(unsigned long long)arg1 accountType:(unsigned long long)arg2 completion:(id)arg3;
- (void)followAccountWithUIN:(unsigned long long)arg1 accountType:(unsigned long long)arg2 completion:(id)arg3;
- (void)clickMenu:(id)arg1 withAccount:(id)arg2 completion:(id)arg3;
- (id)_createMenu:(const struct ButtonInfo *)arg1;
- (void)refreshMenusWithAccount:(id)arg1 completion:(id)arg2;
- (void)getAccountDetailWithUIN:(unsigned long long)arg1 completion:(id)arg2;
- (void)_refreshMyFollowAccountList:(unsigned int)arg1 accountSeq:(unsigned int)arg2 groupInfoSeq:(unsigned int)arg3 begin:(unsigned int)arg4 dict:(id)arg5 completion:(id)arg6;
- (void)refreshMyFollowAccountListWithCompletion:(id)arg1;
- (void)_removeAccountWithUIN:(unsigned long long)arg1;
- (id)_findAccountOrCreateWithUIN:(unsigned long long)arg1;
- (id)accountWithUIN:(unsigned long long)arg1;
- (void)onDidChangeAccount;
@property(readonly, copy, nonatomic) NSArray *myFollowAccountList;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

