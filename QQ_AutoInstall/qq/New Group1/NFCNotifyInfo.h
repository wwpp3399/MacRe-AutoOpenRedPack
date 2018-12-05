//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NotifyInfo.h"

@class NSData;

@interface NFCNotifyInfo : NotifyInfo
{
    BOOL _isThumb;
    unsigned int _localIP;
    unsigned int _localPort;
    NSData *_urlNotify;
    NSData *_tokenKey;
}

@property(nonatomic) BOOL isThumb; // @synthesize isThumb=_isThumb;
@property(retain, nonatomic) NSData *tokenKey; // @synthesize tokenKey=_tokenKey;
@property(retain, nonatomic) NSData *urlNotify; // @synthesize urlNotify=_urlNotify;
@property(nonatomic) unsigned int localPort; // @synthesize localPort=_localPort;
@property(nonatomic) unsigned int localIP; // @synthesize localIP=_localIP;
- (void).cxx_destruct;

@end

