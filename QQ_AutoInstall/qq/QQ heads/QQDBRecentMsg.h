//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QQDBRecentMsg : NSObject
{
    NSString *uin;
}

@property(copy, nonatomic) NSString *uin; // @synthesize uin;
- (void).cxx_destruct;
- (id)loadRecentMessage:(id)arg1;
- (id)initWithUin:(id)arg1;
- (void)onDBChanged:(id)arg1;

@end

