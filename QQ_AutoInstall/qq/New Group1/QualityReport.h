//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface QualityReport : NSObject
{
    NSMutableDictionary *nodeDic;
    NSObject<OS_dispatch_queue> *queue;
}

+ (id)getInstance;
- (void).cxx_destruct;
- (void)commitWithBussinessType:(int)arg1 andPeeruin:(unsigned long long)arg2;
- (void)doReportWithNode:(int)arg1 SessionID:(unsigned long long)arg2 Peeruin:(unsigned long long)arg3;
- (void)dealloc;
- (id)init;
- (BOOL)checkTimeInterval:(double)arg1;

@end

