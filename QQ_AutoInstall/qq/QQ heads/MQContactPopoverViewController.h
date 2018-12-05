//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "V5ViewController.h"

#import "MQContactsViewControllerDelegate.h"
#import "MQLocSelectFieldDelegate.h"
#import "MQPopoverRootViewDelegate.h"
#import "NSTextFieldDelegate.h"

@class ContactSearcherInter, MQContacts, MQLocSelectedField, MQPopoverContactViewController, MQPopoverRecentViewController, MQPopoverRootView, MQSelectForwardContactViewController, MQSessionID, NSArray, NSImageView, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSView, TXHoverButton;

@interface MQContactPopoverViewController : V5ViewController <MQLocSelectFieldDelegate, MQContactsViewControllerDelegate, MQPopoverRootViewDelegate, NSTextFieldDelegate>
{
    NSView *_searchFieldView;
    MQLocSelectedField *_inputField;
    NSView *_bottomView;
    TXHoverButton *_sendingBtn;
    NSImageView *_inputIcon;
    TXHoverButton *_deleteBtn;
    MQPopoverRootView *_rootView;
    MQContacts *_selectedContact;
    MQSessionID *_sessionId;
    unsigned long long _deviceType;
    struct CGRect baseRect;
    struct CGRect selectingRect;
    BOOL clickToIcon;
    BOOL isAlreadySend;
    BOOL isAnimating;
    NSView *_container;
    long long _listType;
    MQPopoverRecentViewController *_recentViewController;
    MQPopoverContactViewController *_contactViewController;
    MQSelectForwardContactViewController *_searchViewController;
    NSArray *_files;
    NSObject<OS_dispatch_queue> *_searchQ;
    ContactSearcherInter *_searchInter;
    NSMutableArray *_searchResultArray;
}

@property(retain, nonatomic) NSMutableArray *searchResultArray; // @synthesize searchResultArray=_searchResultArray;
@property(retain, nonatomic) ContactSearcherInter *searchInter; // @synthesize searchInter=_searchInter;
@property(copy, nonatomic) NSObject<OS_dispatch_queue> *searchQ; // @synthesize searchQ=_searchQ;
@property(retain) NSArray *files; // @synthesize files=_files;
@property(readonly) MQSelectForwardContactViewController *searchViewController; // @synthesize searchViewController=_searchViewController;
@property(readonly) MQPopoverContactViewController *contactViewController; // @synthesize contactViewController=_contactViewController;
@property(retain) MQPopoverRecentViewController *recentViewController; // @synthesize recentViewController=_recentViewController;
@property(readonly) long long listType; // @synthesize listType=_listType;
- (void).cxx_destruct;
- (BOOL)popoverRootViewCanSetFrame;
- (void)registRootViewDelegate;
- (id)sendFile:(id)arg1;
- (void)onFileSending:(id)arg1;
- (void)closeWithAnimation:(id)arg1;
- (void)showSendingButton:(BOOL)arg1 withAnimation:(BOOL)arg2;
- (_Bool)isAllDigital:(id)arg1;
- (id)setDisplaySearchedCount:(id)arg1 count:(long long)arg2;
- (BOOL)searchUserByKey:(id)arg1 count:(long long)arg2;
- (BOOL)searchUserByKey:(id)arg1;
- (void)locSelectedFieldRecviedMousedown:(id)arg1;
- (void)updateInputFieldState;
- (void)reSetData;
- (void)deleteBtnDidClicked:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)controlTextDidBeginEditing:(id)arg1;
- (void)updateDeviceType:(id)arg1;
- (void)didSelectedContactItem:(id)arg1;
- (void)didSelectedShowContacts;
- (void)addViewToContainer:(id)arg1;
- (void)addSearchResultViewController;
- (void)addContactsViewController;
- (void)addRecentViewController;
- (void)dealloc;
- (void)resignKeyWindow:(id)arg1;
- (void)willAppear;
- (void)awakeFromNib;
- (void)viewDidLoad;
- (void)_initData;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

