//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDistributedLock, NSString;

@interface MQDistrubutedLock : NSObject
{
    NSDistributedLock *_lock;
    NSString *_mutexKey;
    unsigned long long _uid;
    BOOL _locked;
}

+ (void)setLockFilePath:(id)arg1;
@property(readonly, nonatomic) unsigned long long uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (void)dealloc;
- (void)unLock;
- (BOOL)tryLock;
- (id)initWithUid:(unsigned long long)arg1;

@end

