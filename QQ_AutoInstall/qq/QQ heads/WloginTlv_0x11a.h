//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WloginTlv.h"

@class NSString;

@interface WloginTlv_0x11a : WloginTlv
{
    unsigned short wFaceId;
    unsigned char cAge;
    unsigned char cGender;
    NSString *sNickName;
}

@property unsigned short wFaceId; // @synthesize wFaceId;
@property unsigned char cGender; // @synthesize cGender;
@property unsigned char cAge; // @synthesize cAge;
@property(copy) NSString *sNickName; // @synthesize sNickName;
- (void)dealloc;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;

@end

