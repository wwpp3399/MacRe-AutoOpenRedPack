//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class MQAVAvatarImageView, MQRecentMsgTipsView, MQSessionID, MQUnreadCountView, NSImageView, NSLayoutConstraint, NSTextField;

@interface MQAIORecentSessionCellView : NSTableCellView
{
    MQAVAvatarImageView *_avatar;
    MQUnreadCountView *_unreadCountView;
    NSLayoutConstraint *_nameTrailingConstraint;
    NSLayoutConstraint *_countCenterYConstraint;
    NSTextField *_name;
    NSImageView *_topmostSign;
    NSImageView *_singlechatSign;
    NSImageView *_singlechatRedDot;
    NSImageView *_publicSessionRedDot;
    NSTextField *_recentText;
    NSTextField *_discussNameTextField;
    MQRecentMsgTipsView *_tipsView;
    MQSessionID *_sessionId;
    BOOL _isGroupAssaintBack;
    unsigned long long _unreadCount;
    id <MQAIORecentSessionCellViewDelegate> _delegate;
}

@property(retain, nonatomic) MQSessionID *sessionId; // @synthesize sessionId=_sessionId;
@property __weak id <MQAIORecentSessionCellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)changePublicRedDotState:(BOOL)arg1;
- (void)clearAvStateIcon;
- (void)setAvStateIcon:(int)arg1 isInRoom:(BOOL)arg2 isOnPMD:(BOOL)arg3;
- (void)hideAllRemoveSessionButton;
- (void)hideRemoveButton;
- (void)showRemoveButton;
- (void)removeSession:(id)arg1;
- (id)removeSessionButton;
- (void)setStatusIcon:(id)arg1;
- (void)setUnreadCount:(long long)arg1;
- (void)mayShowSingleChatReddot:(BOOL)arg1;
- (void)setIsSingleChat:(BOOL)arg1;
- (void)setTopMost:(BOOL)arg1;
- (BOOL)acceptsFirstResponder;
- (void)setRecentAssistantCount:(unsigned long long)arg1 lastRecentModel:(id)arg2;
- (void)setRecentTipsForPublicSubscribeChat:(id)arg1;
- (void)setRecentTips:(id)arg1;
- (id)getNameText;
- (void)setConfGroupName:(id)arg1;
- (void)setDiscussName:(id)arg1;
- (unsigned long long)getConfGroupCount;
- (unsigned long long)getDisMemberCount;
- (void)setName:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)resizeSubLayersUnreadCount:(long long)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)wantsDefaultClipping;
- (void)prepareForReuse;
- (void)setBackgroundStyle:(long long)arg1;
- (void)updateUnreadCountViewModel;
- (void)updateUnreadCount:(BOOL)arg1;
- (void)onSimplestModeWillChange:(id)arg1;
- (void)restoreHeadImg;
- (void)onIllumineHeadImg:(id)arg1;
- (void)handleContactIMInfoEvtNotification:(id)arg1;
- (void)dealloc;
- (id)getRecentAssistantModel;
- (void)updateGroupAssistant;
- (void)refreshAppearance;
- (void)awakeFromNib;

@end

