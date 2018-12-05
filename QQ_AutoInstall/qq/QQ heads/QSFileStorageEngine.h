//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QSEngineBase.h"

#import "IQSFileStorageEngine.h"

@class NSOperationQueue, NSString;

@interface QSFileStorageEngine : QSEngineBase <IQSFileStorageEngine>
{
    NSOperationQueue *_operationQueue;
}

- (void).cxx_destruct;
- (BOOL)deleteAudioFileKey:(long long)arg1;
- (BOOL)saveAudioFileKey:(long long)arg1 fileKey:(id)arg2;
- (id)loadAudioFileKey:(long long)arg1;
- (id)loadSlaveQQRecentHistoryUnreadCount:(id)arg1;
- (void)ansySaveSlaveQQRecentHistoryUnreadCount:(id)arg1 account:(id)arg2;
- (void)doSaveRecentHistoryUnreadCount:(id)arg1 account:(id)arg2;
- (void)ansySaveRecentHistoryUnreadCount:(id)arg1 account:(id)arg2;
- (BOOL)saveRecentHistoryUnreadCount:(id)arg1 account:(id)arg2;
- (id)loadRecentHistoryUnreadCount:(id)arg1;
- (id)loadRecentHistoryUnreadCount_Old:(id)arg1;
- (void)doSaveGroupMemoDictionary:(id)arg1;
- (void)ansySaveGroupMemoDictionary:(id)arg1 withPath:(id)arg2;
- (BOOL)saveGroupMemoDictionary:(id)arg1 withPath:(id)arg2;
- (id)loadGroupMemoDictionaryWithPath:(id)arg1;
- (void)doSaveAccountListArray:(id)arg1;
- (void)ansySaveAccountListArray:(id)arg1;
- (BOOL)saveAccountListArray:(id)arg1;
- (id)loadAccountListArray;
- (id)loadAccountListArrayNew;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

