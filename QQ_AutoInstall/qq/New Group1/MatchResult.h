//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MatchResult : NSObject
{
    int _sessionType;
    unsigned int _msgId;
    NSString *_uin;
}

@property(nonatomic) unsigned int msgId; // @synthesize msgId=_msgId;
@property(nonatomic) int sessionType; // @synthesize sessionType=_sessionType;
@property(retain, nonatomic) NSString *uin; // @synthesize uin=_uin;
- (void).cxx_destruct;

@end
