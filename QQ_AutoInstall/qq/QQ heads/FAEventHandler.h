//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseSingleton.h"

#import "FAEventDelegate.h"
#import "QQAccountEventObserver.h"

@class NSMutableDictionary, NSString;

@interface FAEventHandler : QQBaseSingleton <FAEventDelegate, QQAccountEventObserver>
{
    NSMutableDictionary *_blockCache;
}

- (void).cxx_destruct;
- (void)didFileRecordUpdate:(id)arg1 withErr:(id)arg2;
- (void)didFileRecordAdd:(id)arg1;
- (void)didFileMsgAdd:(id)arg1;
- (void)addBlockItem:(id)arg1 withJobID:(unsigned long long)arg2;
- (void)onDidChangeAccount;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

