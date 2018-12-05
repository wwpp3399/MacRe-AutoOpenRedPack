//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, QQBlueThread;

@interface QQBlueStackMonitor : NSObject
{
    struct CThreadMonitor monitor;
    unsigned int _mainThread;
    struct dispatch_source_s *_captureTimer;
    QQBlueThread *_monitorThread;
    long long _maxRunloopId;
    unsigned long long _currentRunloopId;
    NSMutableArray *_captureRecord;
}

+ (id)getCurrentThreadStack;
+ (void)openSystemStackTrace;
+ (void)addStackDesp:(const vector_a85de964 *)arg1 toArray:(id)arg2;
+ (id)getAllThreadStackWithThreadIdByContext:(const struct __darwin_mcontext64 *)arg1;
+ (id)getThreadStack:(unsigned int)arg1;
+ (id)getAllThreadStackWithThreadId;
+ (id)getAllThreadStack;
+ (id)getInstance;
@property(retain) NSMutableArray *captureRecord; // @synthesize captureRecord=_captureRecord;
@property unsigned long long currentRunloopId; // @synthesize currentRunloopId=_currentRunloopId;
@property long long maxRunloopId; // @synthesize maxRunloopId=_maxRunloopId;
@property(retain, nonatomic) QQBlueThread *monitorThread; // @synthesize monitorThread=_monitorThread;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)stopCaptureWithCallback:(id)arg1;
- (void)captureWithInterval:(double)arg1;
- (id)getFramesRecord:(const vector_c9646404 *)arg1 cost:(double)arg2;
- (void)captureAndRecord;
- (void)captureToArray:(id)arg1 log:(BOOL)arg2;
- (id)getAllStackWithFrames:(const vector_c9646404 *)arg1 allStack:(vector_c9646404)arg2 log:(BOOL)arg3;
- (void)stop;
- (void)start;
- (void)createThread;
- (id)init;
- (void)dealloc;

@end

