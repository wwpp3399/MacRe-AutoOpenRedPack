//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSImage, NSString;

@interface MQAIOApp : NSObject
{
    NSString *_identifier;
    NSImage *_icon;
    NSImage *_alternateIcon;
    NSString *_toolTip;
}

@property(retain) NSImage *alternateIcon; // @synthesize alternateIcon=_alternateIcon;
@property(copy) NSString *toolTip; // @synthesize toolTip=_toolTip;
@property(retain) NSImage *icon; // @synthesize icon=_icon;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)dealloc;

@end
