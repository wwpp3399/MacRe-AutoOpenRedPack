//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ClientLockLoginViewController.h"

@class MQSecureTextView, NSImageView, NSTextField;

@interface OtherPwdGuardLoginViewController : ClientLockLoginViewController
{
    NSTextField *_txTitle;
    NSTextField *_txTipInfo;
    NSImageView *_imgTipIcon;
    MQSecureTextView *_tvInputCode;
    id <ClientLockManagerDelegate> _delegate;
}

- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (void)setCheckErrorState:(id)arg1;
- (void)setInitialFocus;
- (void)onUserInputDone:(id)arg1;
- (void)onClickHelp:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithType:(long long)arg1 withPGItemInfo:(id)arg2;

@end

