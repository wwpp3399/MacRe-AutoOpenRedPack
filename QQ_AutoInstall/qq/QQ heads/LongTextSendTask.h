//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQFileBaseTask.h"

@class NSMutableArray;

@interface LongTextSendTask : QQFileBaseTask
{
    id _callback;
    int _sendIndex;
    int _sendTotal;
    long long _toUin;
    NSMutableArray *_subStrings;
    int _deviceType;
}

@property(nonatomic) __weak id callback; // @synthesize callback=_callback;
@property(nonatomic) int deviceType; // @synthesize deviceType=_deviceType;
@property(readonly, nonatomic) NSMutableArray *subStrings; // @synthesize subStrings=_subStrings;
@property(nonatomic) int sendTotal; // @synthesize sendTotal=_sendTotal;
@property(nonatomic) int sendIndex; // @synthesize sendIndex=_sendIndex;
@property(nonatomic) long long toUin; // @synthesize toUin=_toUin;
- (void).cxx_destruct;
- (id)getCurrentSendData;
- (void)prepareNext;
- (BOOL)isFinished;
- (id)init;

@end

