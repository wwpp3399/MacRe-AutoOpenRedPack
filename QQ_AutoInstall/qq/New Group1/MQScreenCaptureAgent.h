//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MQScreenCaptureDOAgent;

@interface MQScreenCaptureAgent : NSObject
{
    MQScreenCaptureDOAgent *_doAgent;
    id <MQScreenCaptureAgentDelegate> _captureWindowDelegate;
}

+ (id)sharedAgent;
@property(nonatomic) __weak id <MQScreenCaptureAgentDelegate> captureWindowDelegate; // @synthesize captureWindowDelegate=_captureWindowDelegate;
- (void).cxx_destruct;
- (void)makeJietuServerbecomeActive;
- (void)requestContactListShowingToUin:(unsigned long long)arg1 FilePaths:(id)arg2;
- (void)reportStatusItemRect:(struct CGRect)arg1 headImg:(id)arg2;
- (void)recordScreen:(id)arg1;
- (void)captureScreen;
- (void)openScreenCaptureSettingWindow;
- (void)dealloc;
- (id)init;

@end

