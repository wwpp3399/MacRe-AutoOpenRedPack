//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MQSessionID, NSString;

@interface ProfileSource : NSObject
{
    NSString *_nickName;
    MQSessionID *_fromSessionID;
    MQSessionID *_dstSessionID;
}

@property(retain, nonatomic) MQSessionID *dstSessionID; // @synthesize dstSessionID=_dstSessionID;
@property(retain, nonatomic) MQSessionID *fromSessionID; // @synthesize fromSessionID=_fromSessionID;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
- (void).cxx_destruct;
- (id)toStringByArray:(id)arg1;
- (id)toString;

@end

