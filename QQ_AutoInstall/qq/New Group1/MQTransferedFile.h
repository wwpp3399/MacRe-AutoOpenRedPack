//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDate, NSString;

@interface MQTransferedFile : NSObject
{
    NSString *_name;
    NSString *_path;
    NSString *_size;
    NSDate *_updateDate;
    NSData *_bookmark;
    BOOL _isSender;
    NSString *_other;
}

@property(retain, nonatomic) NSString *other; // @synthesize other=_other;
@property BOOL isSender; // @synthesize isSender=_isSender;
@property(retain, nonatomic) NSData *bookmark; // @synthesize bookmark=_bookmark;
@property(retain, nonatomic) NSDate *updateDate; // @synthesize updateDate=_updateDate;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

