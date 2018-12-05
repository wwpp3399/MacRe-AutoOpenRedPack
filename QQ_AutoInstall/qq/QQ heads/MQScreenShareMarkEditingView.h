//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MQScreenShareMarkRectResizable.h"

#import "MQMarkToolKitViewControllerDelegate.h"
#import "MQScreenShareMarkItemDelegate.h"
#import "MQScreenShareMarkTopEditViewDelegate.h"

@class MQScreenShareMarkBase, MQScreenShareMarkTopEditView, NSString;

@interface MQScreenShareMarkEditingView : MQScreenShareMarkRectResizable <MQScreenShareMarkItemDelegate, MQScreenShareMarkTopEditViewDelegate, MQMarkToolKitViewControllerDelegate>
{
    BOOL _isCapturingImage;
    MQScreenShareMarkBase *_markItem;
    MQScreenShareMarkBase *_selectedMarkItem;
    MQScreenShareMarkTopEditView *_topEditView;
}

@property(nonatomic) MQScreenShareMarkTopEditView *topEditView; // @synthesize topEditView=_topEditView;
- (void)scaleMarkWithFrame:(struct CGRect)arg1 oldFrame:(struct CGRect)arg2;
- (void)updateFrame;
- (void)clearSelection;
- (BOOL)canItemSelectedWhenCreate;
- (void)markTextChange:(id)arg1;
- (BOOL)canItemSelected:(id)arg1;
- (void)markItemBecomeSelected:(id)arg1;
- (void)markItemReadyDelete;
- (void)didEndResizing:(id)arg1;
- (void)didEndChangingFrame:(id)arg1;
@property(nonatomic) MQScreenShareMarkBase *selectedMarkItem;
- (void)endCapturingImage;
- (void)beginCapturingImage;
- (void)captureImageToFile:(BOOL)arg1;
- (void)confirmAddMarkItem;
- (void)updateCurrentMarkItemEndPoint:(struct CGPoint)arg1;
- (void)clearAllMarkItemWithUin:(id)arg1;
- (void)clearAllMarkItem:(BOOL)arg1;
- (void)prepareForAddMarkItemAtStartPoint:(struct CGPoint)arg1;
- (void)addNewMarkWithMouseDownEvent:(id)arg1;
- (BOOL)canAddMarkItem;
- (void)drawBorder;
- (void)saveCaptureImageToFile;
- (void)didConfirmCapture;
- (void)deleteMarkItem:(id)arg1;
- (id)findMarkItemWithInfo:(id)arg1;
- (void)addViewInTopEditView:(id)arg1;
- (void)didClearAllMark;
- (void)initTopEditView;
- (void)didSelectedMarkType:(int)arg1;
- (void)fontSizeDidChangeTo:(double)arg1;
- (void)lineColorDidChangeTo:(id)arg1;
- (void)lineWidthDidChangeTo:(double)arg1;
- (id)markItemToBeChanged;
- (struct CGSize)controlPointSize;
- (id)controlPointForegroundColor;
- (BOOL)canMoveOutOfSuperviewBounds;
- (BOOL)canChangeFrame;
- (BOOL)becomeFirstResponder;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (double)margin;
- (double)contentBorderWidth;
- (BOOL)acceptsFirstMouse:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property id <MQScreenShareMarkEditingViewDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

