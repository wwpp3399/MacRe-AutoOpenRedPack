//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MQLocSelectedTableCellView.h"

@class NSButton, NSTextField;

@interface MQLocSelectedAutoLocatingRow : MQLocSelectedTableCellView
{
    BOOL didRequest;
    BOOL _autoLocatingisAbled;
    NSTextField *_locatingMessage;
    NSButton *_retryBtn;
    id <MQLocSelectedRowViewDelegate> _extendDelegate;
}

@property(nonatomic) __weak id <MQLocSelectedRowViewDelegate> extendDelegate; // @synthesize extendDelegate=_extendDelegate;
@property(nonatomic) __weak NSButton *retryBtn; // @synthesize retryBtn=_retryBtn;
@property(nonatomic) __weak NSTextField *locatingMessage; // @synthesize locatingMessage=_locatingMessage;
@property(readonly, nonatomic) BOOL autoLocatingisAbled; // @synthesize autoLocatingisAbled=_autoLocatingisAbled;
- (void).cxx_destruct;
- (void)updateMyLocation;
- (void)retryBtnDidClicked:(id)arg1;
- (void)refreshUI;
- (void)getLocationMessage:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)requestMyLocation;
- (void)awakeFromNib;
- (void)dealloc;

@end

