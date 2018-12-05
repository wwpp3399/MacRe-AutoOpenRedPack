//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface DataLineMaterialManager : NSObject
{
    id <FileAssistantMsgNotifyDelegate> _controllerDelegate;
    NSMutableDictionary *_groupInfo;
    NSMutableDictionary *_sessionInfo;
    NSMutableDictionary *_session2GroupList;
    NSMutableDictionary *_group2SessionList;
    NSMutableDictionary *_groupSizeDic;
    NSMutableDictionary *_dicFileProgress;
}

+ (id)getInstance;
@property(retain, nonatomic) NSMutableDictionary *dicFileProgress; // @synthesize dicFileProgress=_dicFileProgress;
@property(retain, nonatomic) NSMutableDictionary *groupSizeDic; // @synthesize groupSizeDic=_groupSizeDic;
@property(retain, nonatomic) NSMutableDictionary *group2SessionList; // @synthesize group2SessionList=_group2SessionList;
@property(retain, nonatomic) NSMutableDictionary *session2GroupList; // @synthesize session2GroupList=_session2GroupList;
@property(retain, nonatomic) NSMutableDictionary *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
@property(retain, nonatomic) NSMutableDictionary *groupInfo; // @synthesize groupInfo=_groupInfo;
@property(nonatomic) id <FileAssistantMsgNotifyDelegate> controllerDelegate; // @synthesize controllerDelegate=_controllerDelegate;
- (void).cxx_destruct;
- (id)createFileMessageModel:(id)arg1 filePath:(id)arg2 fileSize:(long long)arg3 fileUuid:(id)arg4 fileMd5:(id)arg5 isSend:(BOOL)arg6 deviceType:(int)arg7;
- (id)createMutileFileMsg:(unsigned int)arg1 groupSize:(unsigned int)arg2 isSend:(BOOL)arg3 deviceType:(int)arg4;
- (id)groupSize:(int)arg1;
- (void)setGroupSize:(int)arg1 size:(int)arg2;
- (int)GetTaskType:(long long)arg1;
- (id)GetFilePathBySessionId:(long long)arg1;
- (void)OnGroupComplete:(unsigned int)arg1;
- (void)OnSessionComplete:(unsigned long long)arg1 taskStatus:(int)arg2;
- (void)OnSessionProgress:(unsigned long long)arg1 Progress:(unsigned long long)arg2 ProgressMax:(unsigned long long)arg3;
- (double)getProgressBySessionId:(long long)arg1;
- (BOOL)isFileTransferring:(unsigned long long)arg1;
- (BOOL)addTextItem:(id)arg1 deviceType:(unsigned int)arg2;
- (BOOL)addFileItem2:(id)arg1 FilePath:(id)arg2 FileName:(id)arg3 FileSize:(id)arg4 FileStatus:(id)arg5 FileMD5:(id)arg6 ThumbFileMd5:(id)arg7 GroupID:(id)arg8 GroupSize:(id)arg9 GroupIndex:(id)arg10 MsgTime:(id)arg11 isSend:(id)arg12 deviceType:(unsigned int)arg13;
- (unsigned int)getSessionIDbyGroupID:(unsigned long long)arg1;
- (unsigned int)getGroupIDbySessionID:(unsigned long long)arg1;
- (BOOL)deleteAll;
- (BOOL)deleteFileListByGroupID:(unsigned int)arg1;
- (id)getFileObject:(unsigned int)arg1 sessionID:(unsigned long long)arg2;
- (void)updateMsgReadStatus:(int)arg1 MsgId:(id)arg2 deviceType:(int)arg3;
- (int)getMsgReadStatus:(int)arg1;
- (int)GetMsgStatusByGroupId:(int)arg1;
- (BOOL)updateFileStatus:(unsigned int)arg1 sessionID:(unsigned long long)arg2;
- (void)OnSessionStart:(long long)arg1;
- (BOOL)updateFileIndex:(id)arg1 groupID:(unsigned int)arg2 sessionID:(unsigned long long)arg3 deviceType:(unsigned int)arg4;
- (BOOL)updateFileDirectdownloadUrl:(id)arg1 groupID:(unsigned int)arg2 sessionID:(unsigned long long)arg3 deviceType:(unsigned int)arg4;
- (id)GetSingleFileObject:(id)arg1;
- (id)GetGroupListByGroupID:(unsigned int)arg1;
- (id)GetRightPath:(id)arg1 send:(BOOL)arg2;
- (int)getGroupSize:(int)arg1;
- (id)init;

@end
