//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPanel.h"

#import "MQSCSelectContentViewDelegate.h"

@class MQSCImageView, MQSCSelectContentView, NSString, NSView;

@interface MQSCSelectWindonw : NSPanel <MQSCSelectContentViewDelegate>
{
    MQSCSelectContentView *contentView;
    MQSCImageView *backGroundView;
    NSView *_tipContainerView;
    BOOL _isScreenArg;
    id <MQSCSelectWindonwDelegate> _selectDelegate;
}

@property(nonatomic) id <MQSCSelectWindonwDelegate> selectDelegate; // @synthesize selectDelegate=_selectDelegate;
- (void)windowMouseExited:(unsigned int)arg1;
- (void)windowMouseEntered:(unsigned int)arg1;
- (void)didSelectWindow:(unsigned int)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)cancelAllSeletedView;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (BOOL)becomeFirstResponder;
- (void)keyDown:(id)arg1;
- (void)dealloc;
- (void)addTipLabel:(struct CGRect)arg1;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4 screen:(id)arg5;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
