//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSRunLoop, NSString, NSThread;

@interface MsfSafeRunloop : NSObject
{
    NSThread *_thread;
    NSRunLoop *_loop;
}

+ (id)instance;
@property(readonly, nonatomic) NSRunLoop *loop; // @synthesize loop=_loop;
@property(readonly, nonatomic) NSThread *thread; // @synthesize thread=_thread;
- (void)doDebugWork;
- (void)onTickTimer;
- (void)safeRunloopThreadEntry;
@property(readonly, nonatomic, getter=getThreadName) NSString *threadName;
- (void)start;
- (id)init;

@end

