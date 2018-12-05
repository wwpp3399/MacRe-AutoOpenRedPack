//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableArray;

@interface RichMediaPBFileUploadRsp : NSObject
{
    int _result;
    int _applyId;
    int _channelType;
    NSData *_resId;
    NSData *_uKey;
    NSMutableArray *_ipAndPort;
    long long _blockSize;
    long long _upOffset;
    NSData *_msgKey;
    NSData *_msgSig;
}

@property(nonatomic) int channelType; // @synthesize channelType=_channelType;
@property(retain, nonatomic) NSData *msgSig; // @synthesize msgSig=_msgSig;
@property(retain, nonatomic) NSData *msgKey; // @synthesize msgKey=_msgKey;
@property(nonatomic) int applyId; // @synthesize applyId=_applyId;
@property(nonatomic) long long upOffset; // @synthesize upOffset=_upOffset;
@property(nonatomic) long long blockSize; // @synthesize blockSize=_blockSize;
@property(retain, nonatomic) NSMutableArray *ipAndPort; // @synthesize ipAndPort=_ipAndPort;
@property(retain, nonatomic) NSData *uKey; // @synthesize uKey=_uKey;
@property(retain, nonatomic) NSData *resId; // @synthesize resId=_resId;
@property(nonatomic) int result; // @synthesize result=_result;
- (void).cxx_destruct;
- (void)dealloc;

@end

