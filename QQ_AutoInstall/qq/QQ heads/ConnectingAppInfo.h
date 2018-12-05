//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSImage, NSString;

@interface ConnectingAppInfo : NSObject <NSCoding>
{
    unsigned long long _appId;
    NSImage *_headImg;
    NSString *_nickName;
    struct CGRect _itemRect;
}

@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSImage *headImg; // @synthesize headImg=_headImg;
@property(nonatomic) struct CGRect itemRect; // @synthesize itemRect=_itemRect;
@property(nonatomic) unsigned long long appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAppid:(unsigned long long)arg1;

@end

