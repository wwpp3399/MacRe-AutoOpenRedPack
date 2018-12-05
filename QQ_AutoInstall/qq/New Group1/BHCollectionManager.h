//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseSingleton.h"

#import "QQAccountEventObserver.h"

@class CollectionDBAgent, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface BHCollectionManager : QQBaseSingleton <QQAccountEventObserver>
{
    NSMutableArray *_listCache;
    NSMutableDictionary *_requestCache;
    CollectionDBAgent *_dbAgent;
    BOOL _isNoMoreInDBServer;
    NSMutableDictionary *_fileInfoCache;
    NSArray *_collectionList;
}

@property(retain, nonatomic) NSArray *collectionList; // @synthesize collectionList=_collectionList;
- (void).cxx_destruct;
- (void)_sendFastUploadResourceMsgReq:(struct FastUploadResourceMsgReq *)arg1 complection:(id)arg2;
- (void)_fastUploadCollectionFile:(id)arg1 completion:(id)arg2;
- (void)_fastUploadCollectionPic:(id)arg1 completion:(id)arg2;
- (void)uploadCollectionFile:(id)arg1 completion:(id)arg2;
- (BOOL)responseData:(id)arg1 offset:(unsigned int *)arg2 endFlag:(char *)arg3 error:(id *)arg4 retryCount:(unsigned int *)arg5;
- (id)generatePostBody:(unsigned long long)arg1 offset:(unsigned long long)arg2 filePath:(id)arg3 sha:(id)arg4 fileSize:(unsigned long long)arg5 error:(id *)arg6;
- (void)uploadCollectionPic:(id)arg1 completion:(id)arg2;
- (void)_applyDownloadFileMsgReq:(id)arg1 completion:(id)arg2;
- (void)downloadCollectionFile:(id)arg1 completion:(id)arg2 progress:(id)arg3;
- (void)downloadCollectionPic:(id)arg1 thumbSize:(unsigned long long)arg2 completion:(id)arg3 progress:(id)arg4;
- (id)_getFileInfoByFid:(id)arg1;
- (void)_removeFileInfoCache:(id)arg1;
- (void)_addFileInfoCache:(id)arg1;
- (void)_loadCollection:(unsigned long long)arg1 count:(unsigned int)arg2 isInDB:(char *)arg3 completion:(id)arg4;
- (void)loadCollectionFromDBAndServer:(unsigned long long)arg1 count:(unsigned int)arg2 resultBlock:(id)arg3;
- (void)_send:(struct MsgBody *)arg1 cmd:(int)arg2 completion:(id)arg3;
- (id)forwardCollectionModel:(id)arg1 toSesstion:(struct _BHMessageSession)arg2 completion:(id)arg3;
- (void)getShareUrlWithCollectionModel:(id)arg1 completion:(id)arg2;
- (BOOL)_canForwardByCollectionModel:(id)arg1;
- (void)getCollectionDetail:(id)arg1 completion:(id)arg2;
- (void)removeCollections:(id)arg1 compeltion:(id)arg2;
- (void)_addFileInfoCollectionImpl:(id)arg1 completion:(id)arg2;
- (void)addFileInfoCollection:(id)arg1 completion:(id)arg2;
- (void)_addRichMediaCollectionImpl:(id)arg1 completion:(id)arg2;
- (void)addRichMediaCollection:(id)arg1 completion:(id)arg2;
- (void)_addLinkoCollectionImpl:(id)arg1 completion:(id)arg2;
- (void)addLocationCollection:(id)arg1 completion:(id)arg2;
- (void)addLinkoCollection:(id)arg1 completion:(id)arg2;
- (void)addHighQualityAudioCollection:(id)arg1 completion:(id)arg2;
- (void)addCollection:(id)arg1 completion:(id)arg2;
- (id)buildCollectionModelForLink:(id)arg1;
- (void)addCollectionByMessageModel:(id)arg1 completion:(id)arg2;
- (BOOL)canBeCollectionByMsgModel:(id)arg1;
- (void)_getCollectionList:(unsigned long long)arg1 startTime:(unsigned long long)arg2 order:(int)arg3 startPosition:(unsigned int)arg4 pageSize:(unsigned int)arg5 policy:(int)arg6 source:(unsigned int)arg7 completion:(id)arg8;
- (void)_loadMoreCollectionsWithType:(unsigned long long)arg1 count:(unsigned long long)arg2 completion:(id)arg3;
- (void)loadMoreCollectionsWithType:(unsigned long long)arg1 count:(unsigned long long)arg2 completion:(id)arg3;
- (void)_refreshCollectionList:(unsigned long long)arg1 completion:(id)arg2;
- (void)refreshCollectionList:(unsigned long long)arg1 completion:(id)arg2;
- (void)onDidChangeAccount;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

