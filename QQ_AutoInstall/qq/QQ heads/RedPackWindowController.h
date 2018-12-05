//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class BHMessageModel, MQSessionID, NSDictionary, RedPackViewController;

@interface RedPackWindowController : NSWindowController
{
    BHMessageModel *_msgModel;
    NSDictionary *_redPackDic;
    int _operation;
    RedPackViewController *_viewController;
    MQSessionID *_sessionId;
}

@property(retain, nonatomic) MQSessionID *sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;
- (id)redPackIndex;
- (id)pcListID;
- (id)pcAuthKey;
- (id)redPackNotice;
- (id)redPackTitle;
- (void)onDetailCallBack;
- (void)onGrabCallBack;
- (void)refreshWindow;
- (void)showWindow:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)awakeFromNib;
- (void)windowDidLoad;
- (id)initWithRedPackDic:(id)arg1 opreation:(int)arg2;
- (id)initWithRedPackDic:(id)arg1;
- (id)initWithMsgModel:(id)arg1 redpackDic:(id)arg2 operation:(int)arg3;
- (id)initWithMsgModel:(id)arg1 redpackDic:(id)arg2;

@end

