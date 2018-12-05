//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel_Internal.h"

@class NSData, NSMutableDictionary, NSString;

@interface QQSendingMsgModel : QQModel_Internal
{
    NSString *_command;
    BOOL _answerFlag;
    int _seqId;
    int _msgID;
    int _timeStamp;
    int _retryCount;
    int _sessType;
    int _msgState;
    int _timeoutInterval;
    int _maxRetryCount;
    int _divSeq;
    int _errorCode;
    int _msgRandom;
    unsigned long long _identityUin;
    long long _toUin;
    NSString *_content;
    NSData *_data;
    NSString *_licence;
    NSMutableDictionary *_userInfo;
}

@property(nonatomic) int msgRandom; // @synthesize msgRandom=_msgRandom;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) int divSeq; // @synthesize divSeq=_divSeq;
@property(nonatomic) BOOL answerFlag; // @synthesize answerFlag=_answerFlag;
@property(nonatomic) int maxRetryCount; // @synthesize maxRetryCount=_maxRetryCount;
@property(nonatomic) int timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(retain, nonatomic) NSString *licence; // @synthesize licence=_licence;
@property(nonatomic) int msgState; // @synthesize msgState=_msgState;
@property(readonly, nonatomic) int sessType; // @synthesize sessType=_sessType;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) long long toUin; // @synthesize toUin=_toUin;
@property(nonatomic) int retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) int timeStamp; // @synthesize timeStamp=_timeStamp;
@property(nonatomic) int msgID; // @synthesize msgID=_msgID;
@property(nonatomic) int seqId; // @synthesize seqId=_seqId;
@property(nonatomic) unsigned long long identityUin; // @synthesize identityUin=_identityUin;
@property(retain, nonatomic) NSString *cmd; // @synthesize cmd=_command;
- (void).cxx_destruct;
- (void)deSerializeUserInfoFromKeys:(id)arg1 andValues:(id)arg2;
- (id)userInfoForKey:(id)arg1;
- (void)setUserInfo:(id)arg1 forKey:(id)arg2;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)copy;
- (BOOL)isMultiMessage;
- (id)getUniqueIdentifyAsMultiMsg;
- (id)initWithType:(int)arg1 seq:(int)arg2 timeStamp:(int)arg3 toUin:(long long)arg4 cmd:(id)arg5;
- (id)init;

@end

