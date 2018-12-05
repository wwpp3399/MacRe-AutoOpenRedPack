//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ConfToolbarBase.h"

@class AVButton, NSButton, NSImageView;

@interface ConfToolbarVideo : ConfToolbarBase
{
    NSButton *returnAIOBtn;
    AVButton *closeBtn;
    NSButton *hiddenSmallBtn;
    NSButton *micBtn;
    NSButton *camBtn;
    NSButton *screenShareBtn;
    NSImageView *_background;
}

- (void)OnScreenShareClick:(id)arg1;
- (void)OnCamClick:(id)arg1;
- (void)OnMicClick:(id)arg1;
- (void)OnReturenAIOClick:(id)arg1;
- (void)OnCloseClick:(id)arg1;
- (void)OnHiddenSmallClick:(id)arg1;
- (void)setToolbarBtnState:(int)arg1 state:(BOOL)arg2 enable:(BOOL)arg3;
- (void)awakeFromNib;
- (void)dealloc;

@end

