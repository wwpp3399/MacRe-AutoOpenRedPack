//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "TChatSwitchPageControlDelete.h"

@class NSLayoutConstraint, NSString, NSTextField, TChatProgressView, TChatRoamButton, TChatSwitchPageControl, TXHoverButton;

@interface TChatHisToolBar : NSView <TChatSwitchPageControlDelete>
{
    TXHoverButton *_allButton;
    TXHoverButton *_picButton;
    TXHoverButton *_fileButton;
    TXHoverButton *_calendarButton;
    TXHoverButton *_moreButton;
    TXHoverButton *_deleteButton;
    TXHoverButton *_cancelButton;
    TXHoverButton *_backAllButton;
    TChatRoamButton *_roamButton;
    NSView *_roamImage;
    NSView *_roamContainer;
    NSTextField *_textField;
    TChatProgressView *_progressView;
    TChatSwitchPageControl *_switchControl;
    NSView *_timeFilterButton;
    NSLayoutConstraint *_picBtnConstraintWidth;
    NSLayoutConstraint *_calendarConstraintX;
    NSLayoutConstraint *_roamConstraintX;
    NSLayoutConstraint *_textFieldConstraintX;
    BOOL _isRoaming;
    long long _selectedWannaDeleteCount;
    unsigned long long _toolbarStyle;
    id <TChatHisToolBarDelegte> _delegate;
    long long _searchResultCount;
}

@property(nonatomic) BOOL isRoaming; // @synthesize isRoaming=_isRoaming;
@property(nonatomic) long long searchResultCount; // @synthesize searchResultCount=_searchResultCount;
@property(nonatomic) __weak id <TChatHisToolBarDelegte> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TChatSwitchPageControl *switchControl; // @synthesize switchControl=_switchControl;
@property(readonly, nonatomic) TChatProgressView *progressView; // @synthesize progressView=_progressView;
@property(readonly, nonatomic) TXHoverButton *calendarButton; // @synthesize calendarButton=_calendarButton;
@property(readonly, nonatomic) unsigned long long toolbarStyle; // @synthesize toolbarStyle=_toolbarStyle;
- (void).cxx_destruct;
- (void)switchPageControl:(id)arg1 withModel:(unsigned long long)arg2;
- (void)endRoamingButtonAnimation;
- (void)startRoamingButtonAnimation;
- (void)checkProcessing:(id)arg1;
- (void)setPicButtonhidden:(BOOL)arg1;
- (void)selectDefaultTabButton;
- (void)setSearchResultCountText:(long long)arg1 timeFilter:(unsigned long long)arg2;
- (void)setToolbarStyle:(unsigned long long)arg1 windowStyle:(unsigned long long)arg2 WithSessionID:(id)arg3;
- (void)buttonClicked:(id)arg1;
- (void)_clickTabBtn;
- (void)initSubviews;
- (void)initSubviewsState;
@property(nonatomic) long long selectedWannaDeleteCount; // @synthesize selectedWannaDeleteCount=_selectedWannaDeleteCount;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

