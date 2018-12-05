//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MQEventBaseWindowController.h"

@class MQSessionID, NSButton, NSTextField, TXColorView;

@interface TChatRoamChangeOverWinCtrl : MQEventBaseWindowController
{
    TXColorView *_content;
    NSTextField *_titleField;
    NSTextField *_infoField;
    NSButton *_cancelButton;
    NSButton *_OKButton;
    BOOL _isShow;
    MQSessionID *_NewSession;
    MQSessionID *_RoamingSession;
    unsigned long long _winStyle;
}

@property(nonatomic) unsigned long long winStyle; // @synthesize winStyle=_winStyle;
@property(readonly, nonatomic) MQSessionID *RoamingSession; // @synthesize RoamingSession=_RoamingSession;
@property(readonly, nonatomic) MQSessionID *NewSession; // @synthesize NewSession=_NewSession;
@property(readonly, nonatomic) BOOL isShow; // @synthesize isShow=_isShow;
- (void).cxx_destruct;
- (void)closeWindow;
- (void)didClickedOK:(id)arg1;
- (void)didClickedCancel:(id)arg1;
- (void)modalInWindow:(id)arg1 delegate:(id)arg2 didEndSelector:(SEL)arg3;
- (void)setNewSessionId:(id)arg1 style:(unsigned long long)arg2;
- (void)setRoamingSession:(id)arg1;
- (void)windowDidLoad;
- (void)awakeFromNib;

@end
