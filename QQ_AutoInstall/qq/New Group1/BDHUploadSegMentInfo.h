//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BDHUploadSegmentHole, NSTimer;

@interface BDHUploadSegMentInfo : NSObject
{
    int _segSeq;
    BDHUploadSegmentHole *_info;
    int _retryTime;
    NSTimer *_timer;
    unsigned long long _startTime;
    id <BDHUploadSegmentDelegate> _delegate;
    double _timeValue;
    int _svrFailedTimes;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) int svrFailedTimes; // @synthesize svrFailedTimes=_svrFailedTimes;
@property(nonatomic) double timeValue; // @synthesize timeValue=_timeValue;
@property(nonatomic) id <BDHUploadSegmentDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) BDHUploadSegmentHole *info; // @synthesize info=_info;
@property(nonatomic) int retryTime; // @synthesize retryTime=_retryTime;
@property(nonatomic) int segSeq; // @synthesize segSeq=_segSeq;
- (BOOL)checkServerFailedLimit;
- (BOOL)checkRetryLimitWhenExtendInfoOnly;
- (BOOL)checkRetryLimit;
- (BOOL)checkTimerValid;
- (void)doRecvTimeout;
- (void)doSendTimeout;
- (void)processTimeout:(int)arg1;
- (void)updateTimer:(double)arg1;
- (void)starTimer:(double)arg1;
- (void)stopTimer;
- (id)description;
- (void)dealloc;
- (id)init;

@end

