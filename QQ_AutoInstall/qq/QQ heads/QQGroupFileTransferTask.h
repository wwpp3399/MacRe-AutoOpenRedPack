//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BHMessageModel, NSDictionary, NSError, NSOperation, NSString, QQGroupFileSpeedCalculator;

@interface QQGroupFileTransferTask : NSObject
{
    unsigned long long _taskId;
    unsigned long long _groupCode;
    unsigned long long _type;
    NSString *_remoteUUID;
    NSString *_remoteName;
    NSString *_localPath;
    unsigned long long _completedSize;
    unsigned long long _totalSize;
    unsigned long long _status;
    QQGroupFileSpeedCalculator *_speedCalculator;
    BOOL _addWhenInQueue;
    BOOL _isResume;
    unsigned int _entrance;
    unsigned long long _parentTaskId;
    NSOperation *_operation;
    NSError *_error;
    unsigned long long _jobid;
    BHMessageModel *_msgModel;
    NSDictionary *_extraInfo;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
@property(readonly, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) BHMessageModel *msgModel; // @synthesize msgModel=_msgModel;
@property(nonatomic) unsigned long long jobid; // @synthesize jobid=_jobid;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) BOOL isResume; // @synthesize isResume=_isResume;
@property(nonatomic) __weak NSOperation *operation; // @synthesize operation=_operation;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic, getter=isAddWhenInQueue) BOOL addWhenInQueue; // @synthesize addWhenInQueue=_addWhenInQueue;
@property(nonatomic) unsigned int entrance; // @synthesize entrance=_entrance;
@property(nonatomic) unsigned long long totalSize; // @synthesize totalSize=_totalSize;
@property(nonatomic) unsigned long long completedSize; // @synthesize completedSize=_completedSize;
@property(retain, nonatomic) NSString *localPath; // @synthesize localPath=_localPath;
@property(retain, nonatomic) NSString *remoteName; // @synthesize remoteName=_remoteName;
@property(retain, nonatomic) NSString *remoteUUID; // @synthesize remoteUUID=_remoteUUID;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long groupCode; // @synthesize groupCode=_groupCode;
@property(nonatomic) unsigned long long parentTaskId; // @synthesize parentTaskId=_parentTaskId;
@property(nonatomic) unsigned long long taskId; // @synthesize taskId=_taskId;
- (void).cxx_destruct;
@property(readonly, nonatomic) float speed;
- (id)initWithDataBaseRecordInfo:(id)arg1;
- (void)runAndWaitBlockOnMainThread:(id)arg1;
- (id)initWithGroupCode:(unsigned long long)arg1 parentTaskId:(unsigned long long)arg2 type:(unsigned long long)arg3 remoteUUID:(id)arg4 remoteName:(id)arg5 localPath:(id)arg6 totalSize:(unsigned long long)arg7;

@end

