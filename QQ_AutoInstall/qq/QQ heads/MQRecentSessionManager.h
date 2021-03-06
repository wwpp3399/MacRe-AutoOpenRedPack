//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMDatabaseQueue, MQSessionID, NSMutableArray, NSMutableDictionary;

@interface MQRecentSessionManager : NSObject
{
    FMDatabaseQueue *_dbQueue;
    NSMutableDictionary *_hrHidenDicuessSessionInfoDic;
    NSMutableArray *_sessionInfoList;
    NSMutableArray *_deletedSessionList;
    NSMutableArray *_groupAssistantSessionInfoList;
    BOOL _recentCommListUpdated;
    BOOL _recentSesssionListLoaded;
    BOOL _recentCommListHandled;
    BOOL _sessionListFileCorrupted;
    unsigned long long _mouseType;
    long long _showSessionListStartValue;
    long long _showSessionListEndValue;
    long long _topUnreadNum;
    long long _bottomUnreadNum;
    BOOL _groupListRefreshed;
    BOOL _discussListRefreshed;
    NSMutableArray *_serverSessionInfoList;
    NSMutableDictionary *_listUnreadInfo;
    NSMutableDictionary *_listUnreadCountInfo;
    NSMutableArray *_temporaryCheckedSessionList;
    MQSessionID *_lastTopSessionId;
    NSMutableArray *_listChangeMsgs;
}

+ (id)sharedLogicEngine;
@property(retain, nonatomic) NSMutableArray *listChangeMsgs; // @synthesize listChangeMsgs=_listChangeMsgs;
@property(nonatomic) MQSessionID *lastTopSessionId; // @synthesize lastTopSessionId=_lastTopSessionId;
@property(nonatomic) BOOL recentCommListHandled; // @synthesize recentCommListHandled=_recentCommListHandled;
@property(nonatomic) BOOL recentCommListUpdated; // @synthesize recentCommListUpdated=_recentCommListUpdated;
@property(retain, nonatomic) NSMutableArray *temporaryCheckedSessionList; // @synthesize temporaryCheckedSessionList=_temporaryCheckedSessionList;
@property(nonatomic) BOOL sessionListFileCorrupted; // @synthesize sessionListFileCorrupted=_sessionListFileCorrupted;
@property(nonatomic) BOOL recentSesssionListLoaded; // @synthesize recentSesssionListLoaded=_recentSesssionListLoaded;
@property(retain, nonatomic) NSMutableDictionary *listUnreadCountInfo; // @synthesize listUnreadCountInfo=_listUnreadCountInfo;
@property(retain, nonatomic) NSMutableDictionary *listUnreadInfo; // @synthesize listUnreadInfo=_listUnreadInfo;
@property(retain, nonatomic) NSMutableArray *groupAssistantSessionInfoList; // @synthesize groupAssistantSessionInfoList=_groupAssistantSessionInfoList;
@property(retain, nonatomic) NSMutableArray *deletedSessionList; // @synthesize deletedSessionList=_deletedSessionList;
@property(retain, nonatomic) NSMutableArray *serverSessionInfoList; // @synthesize serverSessionInfoList=_serverSessionInfoList;
@property(retain, nonatomic) NSMutableArray *sessionInfoList; // @synthesize sessionInfoList=_sessionInfoList;
@property(retain, nonatomic) FMDatabaseQueue *dbQueue; // @synthesize dbQueue=_dbQueue;
- (void).cxx_destruct;
- (void)outputMsgList;
- (void)handleGroupListChage:(id)arg1;
- (void)handleGroupListUpdate:(id)arg1;
- (void)handleDiscussListUpdate:(id)arg1;
- (BOOL)enableMsgRoam;
- (BOOL)couldSession:(id)arg1 mergeToList:(unsigned long long)arg2;
- (BOOL)couldSession:(id)arg1 beInList:(unsigned long long)arg2;
- (void)saveRecentMsgModel:(id)arg1 withSessionID:(id)arg2;
- (BOOL)isGroupOrDiscussExists:(id)arg1;
- (BOOL)firstTimeUseGroupAssistant;
- (BOOL)firstTimeMergeRoamList;
- (void)restrictSessionListSize:(unsigned long long)arg1;
- (void)removeUnsatisfiedSessions;
- (void)restrictSessionLists;
- (void)removeRepeatedSingleChatSessions;
- (void)mergeRecentCommList:(id)arg1 toSessionList:(unsigned long long)arg2;
- (void)mergeRecentCommListIfShould;
- (BOOL)isSessionBlocked:(id)arg1;
- (BOOL)hasUnreadMsg:(id)arg1;
- (BOOL)sessionHasUnreadMessage:(id)arg1;
- (void)notifySessionAboutToMove:(id)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)notifySessionInfoListLoaded;
- (void)notifySessionIndexChanged:(id)arg1 oldIndex:(unsigned long long)arg2 newIndex:(unsigned long long)arg3 ofSessionList:(unsigned long long)arg4 MoveType:(unsigned long long)arg5;
- (void)notifySessionUnreadNumUpdatedWithTopNum:(long long)arg1 BottomNum:(long long)arg2 ofSessionList:(unsigned long long)arg3;
- (BOOL)sessionIsNoticed:(id)arg1;
- (id)sessionKey:(id)arg1;
- (void)addSessionInUnreadList:(id)arg1 ListType:(unsigned long long)arg2;
- (void)retrieveUnreadList;
- (BOOL)removeHoverTypeUnreadSession:(id)arg1;
- (void)setListPositionFromValue:(long long)arg1 toValue:(long long)arg2 retrieve:(BOOL)arg3;
- (void)restoreHoverSetting;
- (void)onResetSessionList;
- (void)checkedSessionInTempList:(id)arg1;
- (void)checkRecallMessage:(id)arg1;
- (void)mouseTypeDidChanged:(unsigned long long)arg1;
- (id)getUnreadInfo;
@property(nonatomic) unsigned long long mouseType;
- (void)addNotipGroupsToGroupAssistantSessionList;
- (void)removeTencentNewsFromRecentSessionList;
- (void)addTencentNewsToRecentSessionList;
- (void)addGroupAssistantToRecentSessionList;
- (void)handleFirstTimeUseGroupAssistant;
- (void)handleNewMessageArisInSession:(id)arg1 createIfNotExists:(BOOL)arg2 reindexExistsSession:(BOOL)arg3 ofSessionList:(unsigned long long)arg4 withTime:(unsigned int)arg5;
- (id)getRecentMsgModel:(id)arg1;
- (void)notifyUnReadCountRefresh;
- (void)handleRecentCommListUpdateResult:(BOOL)arg1;
- (void)onDisCussGroupInfoDidChangeNotification:(id)arg1;
- (void)onDisCussMsgAlertChanged:(id)arg1;
- (void)onGroupMsgTypeUpdated:(id)arg1;
- (void)onSessionAboutToMoveHandled:(id)arg1;
- (void)onGroupMessageReceiveTypeChanged:(id)arg1;
- (void)onAudioVideoRequest:(id)arg1;
- (void)onFileTransfer:(id)arg1;
- (void)onRecallMessage:(id)arg1;
- (id)onReceiveMessage:(id)arg1;
- (void)onSendMessage:(id)arg1;
- (void)updateAllRecentList;
- (void)onSessionChange:(id)arg1;
- (void)onDiscussGroupListDidChangeNotication:(id)arg1;
- (void)batchHandleReadedUploadMsg;
- (void)bufferReceiveMsgs:(id)arg1;
- (void)realHandleRecMsg;
- (BOOL)dbUpdateSessionChatTypeInfo:(id)arg1 tableName:(id)arg2;
- (BOOL)dbUpdateSessionInfo:(id)arg1 tableName:(id)arg2;
- (BOOL)dbUpdateSessionInfo:(id)arg1 withLastOrderTime:(double)arg2 tableName:(id)arg3;
- (BOOL)dbUpdateSessionInfo:(id)arg1 withTopmostOrderValue:(unsigned long long)arg2 tableName:(id)arg3;
- (BOOL)dbRemoveSessionInfo:(id)arg1 atTime:(double)arg2 tableName:(id)arg3;
- (BOOL)dbAddSessionInfoInnerIfNeed:(id)arg1 toDB:(id)arg2 tableName:(id)arg3;
- (BOOL)dbAddSessionInfo:(id)arg1 tableName:(id)arg2;
- (void)addFMResultSet:(id)arg1 toSessionInfoList:(id)arg2;
- (id)dbLoadDeletedSessionInfoInner:(id)arg1;
- (id)dbLoadSessionInfoInner:(id)arg1 tableName:(id)arg2;
- (BOOL)dbLoadSessionInfo:(id)arg1 failure:(id)arg2;
- (BOOL)dbCreateSessionInfoTableIfNecessary;
- (BOOL)isGroupAssistantOn;
- (BOOL)isSessionExists:(id)arg1 ofSessionList:(unsigned long long)arg2;
- (BOOL)isSessionExists:(id)arg1;
- (BOOL)shouldEnterGroupAssistant:(id)arg1;
- (BOOL)isGroupOrDiscussBlocked:(id)arg1;
- (void)reIndexExistsSession:(id)arg1 shouldUpdateDB:(BOOL)arg2 ofSessionList:(unsigned long long)arg3 withTime:(unsigned int)arg4;
- (void)replaceExistGroupSessions:(id)arg1 ofSessionList:(unsigned long long)arg2;
- (BOOL)insertSessionInfo:(id)arg1 index:(unsigned long long)arg2 ofSessionList:(unsigned long long)arg3;
- (BOOL)moveSession:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 ofSessionList:(unsigned long long)arg4;
- (BOOL)removeAllSessions:(unsigned long long)arg1;
- (BOOL)removeAllSessions;
- (void)updateSingleChatSession:(id)arg1 ofSessionList:(unsigned long long)arg2;
- (void)openSingleChatSession:(id)arg1 ofSessionList:(unsigned long long)arg2;
- (BOOL)removeButNoSaveDeleteDbSession:(id)arg1 ofSessionList:(unsigned long long)arg2;
- (BOOL)removeSession:(id)arg1 ofSessionList:(unsigned long long)arg2 shouldNotify:(BOOL)arg3 closeSingleChat:(BOOL)arg4;
- (BOOL)removeSession:(id)arg1 ofSessionList:(unsigned long long)arg2 shouldNotify:(BOOL)arg3;
- (BOOL)removeSession:(id)arg1 ofSessionList:(unsigned long long)arg2;
- (BOOL)removeSession:(id)arg1;
- (BOOL)addSessionInfo:(id)arg1 shouldUpdateDB:(BOOL)arg2 shouldNotify:(BOOL)arg3 shouldLimit:(BOOL)arg4 ofSessionList:(unsigned long long)arg5;
- (BOOL)addSession:(id)arg1 shouldUpdateDB:(BOOL)arg2 shouldNotify:(BOOL)arg3 shouldLimit:(BOOL)arg4 ofSessionList:(unsigned long long)arg5 withTime:(unsigned int)arg6;
- (BOOL)addSession:(id)arg1 ofSessionList:(unsigned long long)arg2;
- (BOOL)addSession:(id)arg1;
- (BOOL)topmostLimitReached:(unsigned long long)arg1;
- (BOOL)topmostLimitReached;
- (BOOL)topMostSession:(id)arg1 topmost:(BOOL)arg2 ofSessionList:(unsigned long long)arg3;
- (BOOL)topMostSession:(id)arg1 topmost:(BOOL)arg2;
- (BOOL)isTopMostForSession:(id)arg1;
- (BOOL)openSession:(id)arg1 bringToTop:(BOOL)arg2 saveToDBIfNotExists:(BOOL)arg3 ofSessionList:(unsigned long long)arg4;
- (BOOL)openSession:(id)arg1 bringToTop:(BOOL)arg2 saveToDBIfNotExists:(BOOL)arg3;
- (unsigned long long)getNewIndexOfSession:(id)arg1 ofSessionList:(unsigned long long)arg2;
- (double)getRegulatedTimeBySession:(id)arg1;
- (double)getRegulatedTime;
- (unsigned long long)getBiggestTopmostOrderValue:(unsigned long long)arg1;
- (unsigned long long)getTopmostSessionCount:(unsigned long long)arg1;
- (unsigned long long)getTopmostSessionCount;
- (id)getDeletedSessionBySessionID:(id)arg1;
- (unsigned long long)getDeletedSessionIndexBySessionID:(id)arg1;
- (id)getSessionInfoBySessionID:(id)arg1 ofSessionList:(unsigned long long)arg2;
- (id)getSessionInfoBySessionID:(id)arg1;
- (id)getSessionIDByIndex:(unsigned long long)arg1 ofSessionList:(unsigned long long)arg2;
- (id)getSessionIDByIndex:(unsigned long long)arg1;
- (unsigned long long)getIndexBySessionID:(id)arg1 ofSessionList:(unsigned long long)arg2;
- (unsigned long long)getIndexBySessionID:(id)arg1;
- (id)getSessionInfo:(id)arg1 ofSessionList:(unsigned long long)arg2;
- (id)getSessionInfo:(id)arg1;
- (id)sessionIDAtIndex:(unsigned long long)arg1 ofSessionList:(unsigned long long)arg2;
- (id)sessionIDAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfSession:(id)arg1 ofSessionList:(unsigned long long)arg2;
- (unsigned long long)indexOfSession:(id)arg1;
- (unsigned long long)getSessionInfoCount:(unsigned long long)arg1;
- (unsigned long long)getSessionInfoCount;
- (id)getSessionIDList:(unsigned long long)arg1;
- (id)getSessionIDList;
- (id)getTableNameByType:(unsigned long long)arg1;
- (id)getSessionInfoListByType:(unsigned long long)arg1;
- (void)doAfterSessionListLoaded;
- (BOOL)currentVersionSupportSession:(id)arg1;
- (id)filterUnsupportSessions:(id)arg1;
- (BOOL)loadSessionInfo;
- (void)registerNotifications;
- (void)outputMsg:(id)arg1 LogLocal:(BOOL)arg2 beforeMerge:(BOOL)arg3;
- (void)dealloc;
- (id)generateInfoDBKey;
- (id)openInfoDbQueue:(char *)arg1;
- (id)initWithDBQueue:(id)arg1;
- (id)init;

@end

