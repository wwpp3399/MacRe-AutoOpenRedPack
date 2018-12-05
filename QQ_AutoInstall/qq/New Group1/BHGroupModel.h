//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BHGroupGuidelineMemo, NSArray, NSDate, NSString;

@interface BHGroupModel : NSObject
{
    BOOL _isConfGroup;
    BOOL _isModifyConfGroupFace;
    BOOL _isModifyConfGroupName;
    BOOL _forbidden;
    BOOL _chargable;
    BOOL _certified;
    BOOL _isNoImages;
    BOOL _isAnonymousSilenceStateEnable;
    BOOL _forbidMemberCreateNewGroup;
    unsigned int _createTimeInterval;
    unsigned int _groupClassID;
    unsigned int _memberNumSeq;
    unsigned int _groupInfoSeq;
    unsigned int _memberCardSeq;
    unsigned int _headPortraitSeq;
    unsigned int _uinJoinMsgSeq;
    NSString *_groupName;
    NSString *_groupRemark;
    unsigned long long _groupNumber;
    unsigned long long _groupUIN;
    NSString *_groupCode;
    NSString *_groupUin;
    NSString *_groupMemo;
    NSString *_groupMasterUin;
    long long _groupSearchMode;
    long long _groupInvitationMode;
    long long _groupAuthOption;
    NSString *_joinQuestion;
    NSString *_joinAnswer;
    NSString *_groupIntro;
    NSString *_groupLocation;
    unsigned long long _groupLevel;
    unsigned long long _groupActiveGrade;
    unsigned long long _groupMemberMax;
    unsigned long long _groupMemberCount;
    unsigned long long _maxCountOfAdministrator;
    NSString *_certificationText;
    BHGroupGuidelineMemo *_guidelineMemo;
    NSArray *_memoList;
    long long _myStatus;
    NSDate *_silenceExpiryDateOfGroup;
    NSDate *_mySilenceExpiryDate;
    long long _groupAssistantPolicy;
    NSArray *_headPortraitArray;
}

@property(nonatomic) unsigned int uinJoinMsgSeq; // @synthesize uinJoinMsgSeq=_uinJoinMsgSeq;
@property(retain, nonatomic) NSArray *headPortraitArray; // @synthesize headPortraitArray=_headPortraitArray;
@property(nonatomic) unsigned int headPortraitSeq; // @synthesize headPortraitSeq=_headPortraitSeq;
@property(nonatomic) unsigned int memberCardSeq; // @synthesize memberCardSeq=_memberCardSeq;
@property(nonatomic) unsigned int groupInfoSeq; // @synthesize groupInfoSeq=_groupInfoSeq;
@property(nonatomic) BOOL forbidMemberCreateNewGroup; // @synthesize forbidMemberCreateNewGroup=_forbidMemberCreateNewGroup;
@property(nonatomic) BOOL isAnonymousSilenceStateEnable; // @synthesize isAnonymousSilenceStateEnable=_isAnonymousSilenceStateEnable;
@property(nonatomic) BOOL isNoImages; // @synthesize isNoImages=_isNoImages;
@property(nonatomic) long long groupAssistantPolicy; // @synthesize groupAssistantPolicy=_groupAssistantPolicy;
@property(retain, nonatomic) NSDate *mySilenceExpiryDate; // @synthesize mySilenceExpiryDate=_mySilenceExpiryDate;
@property(retain, nonatomic) NSDate *silenceExpiryDateOfGroup; // @synthesize silenceExpiryDateOfGroup=_silenceExpiryDateOfGroup;
@property(nonatomic) long long myStatus; // @synthesize myStatus=_myStatus;
@property(copy, nonatomic) NSArray *memoList; // @synthesize memoList=_memoList;
@property(retain, nonatomic) BHGroupGuidelineMemo *guidelineMemo; // @synthesize guidelineMemo=_guidelineMemo;
@property(copy, nonatomic) NSString *certificationText; // @synthesize certificationText=_certificationText;
@property(nonatomic) BOOL certified; // @synthesize certified=_certified;
@property(nonatomic) BOOL chargable; // @synthesize chargable=_chargable;
@property(nonatomic) unsigned long long maxCountOfAdministrator; // @synthesize maxCountOfAdministrator=_maxCountOfAdministrator;
@property(nonatomic) unsigned int memberNumSeq; // @synthesize memberNumSeq=_memberNumSeq;
@property(nonatomic) unsigned long long groupMemberCount; // @synthesize groupMemberCount=_groupMemberCount;
@property(nonatomic) unsigned long long groupMemberMax; // @synthesize groupMemberMax=_groupMemberMax;
@property(nonatomic) unsigned long long groupActiveGrade; // @synthesize groupActiveGrade=_groupActiveGrade;
@property(nonatomic) unsigned long long groupLevel; // @synthesize groupLevel=_groupLevel;
@property(nonatomic) unsigned int groupClassID; // @synthesize groupClassID=_groupClassID;
@property(copy, nonatomic) NSString *groupLocation; // @synthesize groupLocation=_groupLocation;
@property(copy, nonatomic) NSString *groupIntro; // @synthesize groupIntro=_groupIntro;
@property(copy, nonatomic) NSString *joinAnswer; // @synthesize joinAnswer=_joinAnswer;
@property(copy, nonatomic) NSString *joinQuestion; // @synthesize joinQuestion=_joinQuestion;
@property(nonatomic) long long groupAuthOption; // @synthesize groupAuthOption=_groupAuthOption;
@property(nonatomic) long long groupInvitationMode; // @synthesize groupInvitationMode=_groupInvitationMode;
@property(nonatomic) long long groupSearchMode; // @synthesize groupSearchMode=_groupSearchMode;
@property(copy, nonatomic) NSString *groupMasterUin; // @synthesize groupMasterUin=_groupMasterUin;
@property(copy, nonatomic) NSString *groupMemo; // @synthesize groupMemo=_groupMemo;
@property(nonatomic) BOOL forbidden; // @synthesize forbidden=_forbidden;
@property(nonatomic) unsigned int createTimeInterval; // @synthesize createTimeInterval=_createTimeInterval;
@property(nonatomic) BOOL isModifyConfGroupName; // @synthesize isModifyConfGroupName=_isModifyConfGroupName;
@property(nonatomic) BOOL isModifyConfGroupFace; // @synthesize isModifyConfGroupFace=_isModifyConfGroupFace;
@property(nonatomic) BOOL isConfGroup; // @synthesize isConfGroup=_isConfGroup;
@property(readonly, nonatomic) NSString *groupUin; // @synthesize groupUin=_groupUin;
@property(readonly, nonatomic) NSString *groupCode; // @synthesize groupCode=_groupCode;
@property(readonly, nonatomic) unsigned long long groupUIN; // @synthesize groupUIN=_groupUIN;
@property(readonly, nonatomic) unsigned long long groupNumber; // @synthesize groupNumber=_groupNumber;
@property(copy, nonatomic) NSString *groupRemark; // @synthesize groupRemark=_groupRemark;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
- (void).cxx_destruct;
- (id)description;
@property(copy, nonatomic) NSString *JSONContent;
@property(readonly, nonatomic) NSString *displayName;
- (id)initWithGroupCode:(unsigned long long)arg1 groupUIN:(unsigned long long)arg2;
- (BOOL)isMatchString:(id)arg1 block:(id)arg2;
- (BOOL)isMatchString:(id)arg1;

@end

