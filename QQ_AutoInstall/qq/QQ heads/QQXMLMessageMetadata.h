//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QQXMLMessageMetadata : NSObject
{
    NSString *_publisherId;
    NSString *_publisherName;
    unsigned long long _publishTime;
    NSString *_more;
}

@property(retain, nonatomic) NSString *more; // @synthesize more=_more;
@property(nonatomic) unsigned long long publishTime; // @synthesize publishTime=_publishTime;
@property(retain, nonatomic) NSString *publisherName; // @synthesize publisherName=_publisherName;
@property(retain, nonatomic) NSString *publisherId; // @synthesize publisherId=_publisherId;
- (void).cxx_destruct;
- (void)dealloc;

@end

