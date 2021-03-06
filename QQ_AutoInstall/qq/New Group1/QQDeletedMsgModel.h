//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel_Internal.h"

@interface QQDeletedMsgModel : QQModel_Internal
{
    BOOL _inOut;
    int _sessionType;
    int _msgType;
    unsigned long long _peerUin;
    long long _msgSeq;
    long long _msgRandom;
    long long _msgId;
    double _msgTime;
}

+ (id)cacheModelWithMessage:(id)arg1;
@property(nonatomic) int msgType; // @synthesize msgType=_msgType;
@property(nonatomic) double msgTime; // @synthesize msgTime=_msgTime;
@property(nonatomic) long long msgId; // @synthesize msgId=_msgId;
@property(nonatomic) long long msgRandom; // @synthesize msgRandom=_msgRandom;
@property(nonatomic) long long msgSeq; // @synthesize msgSeq=_msgSeq;
@property(nonatomic) int sessionType; // @synthesize sessionType=_sessionType;
@property(nonatomic) unsigned long long peerUin; // @synthesize peerUin=_peerUin;
@property(nonatomic) BOOL inOut; // @synthesize inOut=_inOut;
- (id)description;
- (id)initWithMessage:(id)arg1;

@end

