//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, TXGIFImage;

@interface TXBubbleUserInfo : NSObject
{
    unsigned long long mUin;
    TXGIFImage *mHeadImage;
    NSDate *mTimeStamp;
}

@property(retain, nonatomic) NSDate *mTimeStamp; // @synthesize mTimeStamp;
@property(retain, nonatomic) TXGIFImage *mHeadImage; // @synthesize mHeadImage;
@property unsigned long long mUin; // @synthesize mUin;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isHeadImageOutOfDate;
- (id)initWithUin:(unsigned long long)arg1;

@end
