//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "MQFaceSelectorDelegate.h"
#import "TXPopoverControllerDelegate.h"

@class MQQuickFaceMatrixView, NSDate, NSString, NSTimer, NSTrackingArea, TXPopoverController;

@interface MQFaceQuickSelectController : NSViewController <MQFaceSelectorDelegate, TXPopoverControllerDelegate>
{
    MQQuickFaceMatrixView *faceMatrixView_;
    BOOL isMouseOver_;
    BOOL isDelayCloseOn_;
    TXPopoverController *popOver_;
    NSDate *time_QuickSelectViewBeginShow;
    NSTimer *_closeTimer;
    NSTrackingArea *_trackArea;
    id <MQFacesSelectorControllerDelegate> selectorControllerDelegate;
}

+ (id)shareController;
@property __weak id <MQFacesSelectorControllerDelegate> selectorControllerDelegate; // @synthesize selectorControllerDelegate;
- (void).cxx_destruct;
- (double)radiusOfTopEdge;
- (int)preViewPosByMousePos:(int)arg1;
- (int)preViewSize;
- (void)faceSelectorDidSelectFaceAtIndex:(long long)arg1;
- (int)numberOfFaces;
- (id)previewFacesAtIndex:(int)arg1;
- (id)facesAtIndex:(int)arg1;
- (void)popoverWillReplaced:(id)arg1;
- (void)faceSelectorCloseView;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)invalidateCloseTimer;
- (void)closePopover;
- (void)closePopoverAfterDelay:(double)arg1;
- (void)removeTrackingArea;
- (void)showPopoverAtPoint:(struct CGPoint)arg1 inView:(id)arg2;
- (id)faceSelectSharePopoverWithInitContentViewController:(id)arg1;
- (BOOL)isVisibleInPopover;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

