//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

@class MQToolTips, NSString, NSTextField, NSView;

@interface MQAIOToolButton : NSButton
{
    NSView *_container;
    MQToolTips *_toolTips;
    BOOL _mouseIn;
    NSTextField *_badgeNumberView;
    long long _badgeNumber;
}

@property(nonatomic) long long badgeNumber; // @synthesize badgeNumber=_badgeNumber;
@property(readonly, nonatomic) BOOL mouseIn; // @synthesize mouseIn=_mouseIn;
@property(nonatomic) NSView *container; // @synthesize container=_container;
- (void).cxx_destruct;
- (void)dealloc;
- (void)onWindowDidBecomeMain:(id)arg1;
- (void)onWindowDidResignMain:(id)arg1;
- (void)disableActive;
- (void)setInactiveImage:(id)arg1;
- (void)setHoverImage:(id)arg1;
- (void)setNormalImage:(id)arg1;
- (void)stopAnimation;
- (void)startAnimation;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
@property(nonatomic) BOOL allowAnimate; // @dynamic allowAnimate;
@property(retain, nonatomic) NSString *toolTips; // @dynamic toolTips;
- (void)layoutBadgeNumberView;
- (void)viewDidMoveToSuperview;
- (BOOL)wantsDefaultClipping;
- (id)badgeNumberView;
- (void)awakeFromNib;

@end

