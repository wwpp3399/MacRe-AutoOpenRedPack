//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QRCodeCmd.h"

@class NSData, NSMutableDictionary, NSString;

@interface QRCodeCmd_0x12 : QRCodeCmd
{
    NSString *reserved;
    unsigned int dwAppid;
    NSData *qrSig;
    unsigned long long ddwUin;
    unsigned char cLoginSigType;
    NSData *loginSig;
    unsigned short wTlvFieldNum;
    unsigned short awTlvFieled[64];
    unsigned short wTlvNum;
    NSMutableDictionary *reqTlvList;
    NSMutableDictionary *rspTlvList;
    unsigned int dwSigTime;
    NSString *errMsg;
}

@property(copy) NSString *errMsg; // @synthesize errMsg;
@property unsigned int dwSigTime; // @synthesize dwSigTime;
@property(readonly) NSMutableDictionary *rspTlvList; // @synthesize rspTlvList;
@property(readonly) NSMutableDictionary *reqTlvList; // @synthesize reqTlvList;
@property unsigned short wTlvNum; // @synthesize wTlvNum;
@property unsigned short wTlvFieldNum; // @synthesize wTlvFieldNum;
@property(retain) NSData *loginSig; // @synthesize loginSig;
@property unsigned char cLoginSigType; // @synthesize cLoginSigType;
@property unsigned long long ddwUin; // @synthesize ddwUin;
@property(retain) NSData *qrSig; // @synthesize qrSig;
@property unsigned int dwAppid; // @synthesize dwAppid;
@property(copy) NSString *reserved; // @synthesize reserved;
- (void)addRspTlv:(unsigned short)arg1 andTlv:(id)arg2;
- (id)initMemUserAppidSig;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;
- (int)encode:(id)arg1;
- (void)addReqTlv:(unsigned short)arg1;
- (void)dealloc;
- (id)init;

@end

