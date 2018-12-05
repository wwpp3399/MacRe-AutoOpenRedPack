//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSString;

@interface C2CRoamMsgResponse : NSObject
{
    int _rstErrorCode;
    int _cResult;
    int _lastMsgTime;
    int _random;
    NSData *_roamSig;
    NSData *_pwdMd5;
    NSString *_errMsg;
    NSArray *_msgList;
}

@property(retain, nonatomic) NSArray *msgList; // @synthesize msgList=_msgList;
@property(retain, nonatomic) NSString *errMsg; // @synthesize errMsg=_errMsg;
@property(retain, nonatomic) NSData *pwdMd5; // @synthesize pwdMd5=_pwdMd5;
@property(retain, nonatomic) NSData *roamSig; // @synthesize roamSig=_roamSig;
@property(nonatomic) int random; // @synthesize random=_random;
@property(nonatomic) int lastMsgTime; // @synthesize lastMsgTime=_lastMsgTime;
@property(nonatomic) int cResult; // @synthesize cResult=_cResult;
@property(nonatomic) int rstErrorCode; // @synthesize rstErrorCode=_rstErrorCode;
- (void).cxx_destruct;

@end

