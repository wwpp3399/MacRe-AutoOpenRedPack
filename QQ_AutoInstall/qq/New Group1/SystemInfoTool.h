//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MonitorWindowController, NSTimer;

@interface SystemInfoTool : NSObject
{
    NSTimer *updateTimer;
    double lastCPU;
    double lastMEM;
    MonitorWindowController *_wc;
}

+ (id)getInstance;
@property(retain) MonitorWindowController *wc; // @synthesize wc=_wc;
- (void).cxx_destruct;
- (void)updateInfo:(id)arg1;
- (void)stop;
- (void)start;
- (id)init;

@end

