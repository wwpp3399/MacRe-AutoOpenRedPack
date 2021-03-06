//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface BDHIPListMgr : NSObject
{
    int _protocol;
    NSMutableArray *_ipList;
}

@property(retain, nonatomic) NSMutableArray *ipList; // @synthesize ipList=_ipList;
@property(nonatomic) int protocol; // @synthesize protocol=_protocol;
- (void)printIPList:(int)arg1;
- (id)myBDHIPStrategyMgr;
- (void)updateIPDomain:(id)arg1 serverIP:(id)arg2 result:(long long)arg3;
- (void)clearIPList;
- (void)reset;
- (void)update:(id)arg1 result:(long long)arg2;
- (void)update:(id)arg1 result:(long long)arg2 serverIP:(id)arg3;
- (id)getCandidateIPs:(int)arg1 count:(int)arg2;
- (void)loadWithIPArray:(id)arg1 curAPN:(int)arg2;
- (void)loadWithIP:(id)arg1 apn:(int)arg2;
- (void)dealloc;
- (id)initWithMaxNum:(int)arg1;

@end

