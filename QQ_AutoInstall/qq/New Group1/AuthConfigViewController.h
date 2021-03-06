//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSComboBoxDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"
#import "NSTextDelegate.h"

@class NSButton, NSComboBox, NSMenuItem, NSMutableArray, NSPopUpButton, NSString, NSTableView, NSTextField, NSView, PreferenceController;

@interface AuthConfigViewController : NSViewController <NSTableViewDelegate, NSTableViewDataSource, NSTextDelegate, NSComboBoxDelegate>
{
    NSButton *_tempSessionButton;
    NSButton *_onlineVideoButton;
    NSButton *_onlineUserButton;
    NSMenuItem *_anyMenuItem;
    NSMenuItem *_authMenuItem;
    NSMenuItem *_questionMenuItem;
    NSMenuItem *_questionAndCheckMenuItem;
    NSMenuItem *_noneMenuItem;
    NSPopUpButton *_popUpButton;
    NSTableView *_tableView;
    NSComboBox *_questionComboBox;
    NSTextField *_answerTextField;
    NSButton *_addButton;
    NSButton *_removeButton;
    NSButton *_applyButton;
    NSButton *_recoverButton;
    NSView *_multiQuestionView;
    NSView *_questionAndAnswerView;
    NSView *_authConfigView;
    NSView *_buttonView;
    BOOL hasAddedWindowHeight;
    NSMutableArray *_questions;
    long long _verificationType;
    int _camaraVisiable;
    int _inOnlineList;
    int _recvTmpSession;
    BOOL _needSavePrivacy;
    BOOL _needSaveIdentify;
    PreferenceController *preferenceController;
    unsigned char ServerVerificationType;
    NSMutableArray *ServerQuestions;
    NSString *ServerQuestion;
    NSString *ServerAnswer;
    id <AuthConfigViewControllerDelegate> _authDelegate;
}

@property __weak id <AuthConfigViewControllerDelegate> authDelegate; // @synthesize authDelegate=_authDelegate;
- (void).cxx_destruct;
- (void)enableApplyButton:(BOOL)arg1;
- (void)prefsTabChanged:(id)arg1;
- (void)answerDidChange:(id)arg1;
- (void)comboBoxSelectionDidChange:(id)arg1;
- (void)summitAddFriendSetting;
- (BOOL)saveSetting;
- (void)setQuestions:(id)arg1;
- (void)setQuestion:(id)arg1 answer:(id)arg2;
- (void)onSelected:(id)arg1;
- (void)adjustAuthViewHeight;
- (void)recoverWindowHeight;
- (void)addWindowHeight;
- (void)onSelectedQues:(id)arg1;
- (void)onRecover:(id)arg1;
- (void)onApply:(id)arg1;
- (void)onPrivacySelected:(id)arg1;
- (void)onRemove:(id)arg1;
- (void)onAdd:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)textDidBeginEditing:(id)arg1;
- (BOOL)control:(id)arg1 textShouldBeginEditing:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)loadSetting;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

