//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class OCRFaceEditRemarkViewController;

@interface OCRFaceEditRemarkWindowController : NSWindowController
{
    OCRFaceEditRemarkViewController *_viewController;
}

+ (id)shareWindowInstance;
@property(retain, nonatomic) OCRFaceEditRemarkViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)_windowWillClose:(id)arg1;
- (void)setFaceUin:(id)arg1;
- (void)windowDidEndSheet:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)showWindowForSheet:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)windowDidLoad;

@end

