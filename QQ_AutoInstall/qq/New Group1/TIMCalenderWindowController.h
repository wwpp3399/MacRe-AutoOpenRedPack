//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSWindowDelegate.h"

@class NSString, TIMCalenderMainViewController;

@interface TIMCalenderWindowController : NSWindowController <NSWindowDelegate>
{
    TIMCalenderMainViewController *_viewController;
}

+ (id)shareCalender;
@property(retain, nonatomic) TIMCalenderMainViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)createSchedule;
- (void)refreshScheduleInfo;
- (void)openScheduleWithScheduleId:(id)arg1 beginDate:(id)arg2 needShowCurrentDate:(BOOL)arg3;
- (BOOL)windowShouldZoom:(id)arg1 toFrame:(struct CGRect)arg2;
- (void)windowDidLoad;
- (void)updateWindowFrameSetting;
- (void)setSavedWindowFrame:(struct CGRect)arg1;
- (void)windowDidResize:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (struct CGRect)defaultFrame;
- (struct CGRect)savedWindowFrame;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

