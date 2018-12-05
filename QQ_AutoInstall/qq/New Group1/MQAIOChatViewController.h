//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MQAIOMessageViewController.h"

#import "MQAIOChatHeadViewControllerDelegate.h"
#import "MQAIOChatNewMsgRemindViewControllerDelegate.h"
#import "MQAIOChatTootKitViewControllerDelegate.h"
#import "MQAIOMemberViewControllerDelegate.h"
#import "MQAtGroupMemberViewControllerDelegate.h"
#import "MQConcernDelegate.h"
#import "MQPull2RefreshDelegate.h"
#import "MQRecordViewDelegate.h"
#import "NSSplitViewDelegate.h"
#import "NSTextViewDelegate.h"
#import "RTXFileTransferAttachmentDelegate.h"
#import "ScheduleRecognitionLogicDelegate.h"
#import "TChatViewClearScreenDelegate.h"
#import "TChatViewMsgReplyDelegate.h"
#import "TChatViewTranslateDelegate.h"
#import "TXTopTextViewDelegate.h"
#import "TXTypingTextViewDelegate.h"

@class BHMessageChatModel, BHMessageModel, BHMsgManager, FileErrorDetailWindowCtr, MQAIOAVStatusViewController, MQAIOChatHeadViewController, MQAIOChatTootKitViewController, MQAIOMsgFlowViewController, MQAIOTopViewController, MQConcernViewController, MQRecordView, MQRoamTaskInfo, NSArray, NSImageView, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSView, RedPackPwdPopViewController, ScheduleRecognitionLogic, TChatView, TXHoverButton, TXSplitView, TXTopTextView, TXTypingTextView;

@interface MQAIOChatViewController : MQAIOMessageViewController <MQPull2RefreshDelegate, MQAIOChatNewMsgRemindViewControllerDelegate, MQAtGroupMemberViewControllerDelegate, RTXFileTransferAttachmentDelegate, MQAIOChatHeadViewControllerDelegate, MQAIOMemberViewControllerDelegate, NSTextViewDelegate, TXTypingTextViewDelegate, MQRecordViewDelegate, MQConcernDelegate, MQAIOChatTootKitViewControllerDelegate, NSSplitViewDelegate, TXTopTextViewDelegate, ScheduleRecognitionLogicDelegate, TChatViewMsgReplyDelegate, TChatViewClearScreenDelegate, TChatViewTranslateDelegate>
{
    TXSplitView *_horizontalSplitView;
    TXSplitView *_verticalSplitView;
    NSView *_headContainer;
    NSView *_toolkitContainer;
    NSView *_inputContainer;
    NSView *_topPartView;
    NSView *_msgFlowWrapper;
    TChatView *_chatView;
    TXTopTextView *_topTextView;
    TXTypingTextView *_typingTextView;
    RedPackPwdPopViewController *_pwdViewController;
    MQAIOChatTootKitViewController *_toolKitController;
    MQAIOChatHeadViewController *_headViewController;
    MQAIOMsgFlowViewController *_msgFlowController;
    MQAIOAVStatusViewController *_avStatusController;
    NSMutableArray *_avStatusHiddenCons;
    NSMutableArray *_avStatusShownCons;
    id <MQAIOChatViewControllerDelegate> _delegate;
    double _oldHeight;
    NSMutableArray *_loadedMessageInfos;
    BOOL _isInChangeUIStyleMode;
    MQRoamTaskInfo *_roamTaskInfo;
    unsigned long long _lastRoamCompletedCookie;
    unsigned long long _lastRoamSequence;
    BOOL _roamEndReached;
    NSMutableDictionary *_taskId2UIComponent;
    NSMutableArray *_staticTextAttachmentList;
    FileErrorDetailWindowCtr *_fileErrorDetailWindowCtr;
    BOOL _isVoiceInputting;
    MQRecordView *_voiceInputView;
    NSView *_infoContainer;
    TXHoverButton *_foldButton;
    TXHoverButton *_foldCloseButton;
    NSImageView *_memberListShadow;
    BOOL _isNewMsgRemindExist;
    unsigned long long _newMsgCount;
    NSObject<OS_dispatch_queue> *_loadHistoryRecordQueue;
    BHMessageChatModel *_chatModel;
    NSMutableArray *_messageList;
    NSString *_previousTime;
    BOOL _shouldShowMemberListSimplest;
    BOOL _shouldShowMemberListNoCareSetting;
    BOOL _showAVStatusBar;
    id _eventMonitor;
    BOOL _isLoadMoreAtMsg;
    long long _simpleNewMsgCount;
    long long _normalNewMsgCount;
    long long _lastDisappearTextLength;
    NSView *_topWrapperView;
    NSArray *_headPartContraints;
    NSLayoutConstraint *_chatViewTopContraint;
    NSMutableArray *_allConcernArr;
    NSLayoutConstraint *_msgConcernTrailConstraint;
    long long m_readedSeq;
    long long m_unreadConcernMsgNum;
    BOOL m_isLoadingState;
    unsigned long long m_addedInAIONum;
    BOOL _msgLoaded;
    BHMessageModel *_clickedPwdRedPacketMsgModel;
    BOOL _isSessionChangeToSingleMode;
    BOOL _strokeWordTranslatingType;
    MQAIOTopViewController *_topMsgListViewController;
    MQConcernViewController *_concernViewController;
    MQConcernViewController *_strokeTranslationConcern;
    ScheduleRecognitionLogic *_scheduleRecognitionLogic;
}

+ (id)getTimeDuration:(float)arg1;
+ (BOOL)addMarketFacePack:(id)arg1 emoji:(id)arg2;
+ (BOOL)addAtGroupMemberPack:(id)arg1 uin:(unsigned long long)arg2 name:(id)arg3 attr:(id)arg4;
+ (unsigned long long)addImagePack:(id)arg1 path:(id)arg2;
+ (BOOL)addSysFacePack:(id)arg1 index:(unsigned char)arg2;
+ (BOOL)addEmojiPack:(id)arg1 emoji:(id)arg2 attr:(id)arg3;
+ (BOOL)addTextPack:(id)arg1 text:(id)arg2;
+ (void)setTextAttributes:(id)arg1 forMsgPack:(id)arg2;
+ (void)notifySendDataLineMessageForUin:(unsigned long long)arg1 sender:(id)arg2;
+ (void)notifySendMessage:(int)arg1 uin:(unsigned long long)arg2 msgPack:(id)arg3 hasAtAll:(BOOL)arg4 isPictureDeleted:(BOOL)arg5 isPathAcceptable:(BOOL)arg6 sender:(id)arg7;
+ (unsigned long long)sendMsg:(id)arg1 withTextAttributes:(id)arg2 toSession:(id)arg3 sender:(id)arg4;
@property(retain, nonatomic) ScheduleRecognitionLogic *scheduleRecognitionLogic; // @synthesize scheduleRecognitionLogic=_scheduleRecognitionLogic;
@property(readonly, nonatomic) BOOL strokeWordTranslatingType; // @synthesize strokeWordTranslatingType=_strokeWordTranslatingType;
@property(readonly, nonatomic) TChatView *chatView; // @synthesize chatView=_chatView;
@property(retain) MQConcernViewController *strokeTranslationConcern; // @synthesize strokeTranslationConcern=_strokeTranslationConcern;
@property(retain) MQConcernViewController *concernViewController; // @synthesize concernViewController=_concernViewController;
@property(retain) MQAIOTopViewController *topMsgListViewController; // @synthesize topMsgListViewController=_topMsgListViewController;
@property(nonatomic) BOOL isSessionChangeToSingleMode; // @synthesize isSessionChangeToSingleMode=_isSessionChangeToSingleMode;
@property(retain) NSMutableArray *avStatusShownCons; // @synthesize avStatusShownCons=_avStatusShownCons;
@property(retain) NSMutableArray *avStatusHiddenCons; // @synthesize avStatusHiddenCons=_avStatusHiddenCons;
@property(retain) MQAIOAVStatusViewController *avStatusController; // @synthesize avStatusController=_avStatusController;
@property(retain) MQAIOMsgFlowViewController *msgFlowController; // @synthesize msgFlowController=_msgFlowController;
- (void).cxx_destruct;
- (void)AIOInsertClearMsgBreakLine;
- (BOOL)strokeTranslationType;
- (void)setStrokeTranslationTypeOpening:(BOOL)arg1;
- (void)handleTranslationSettingTipsShowing:(id)arg1;
- (void)handleClearScreen:(unsigned int)arg1;
- (id)GetAllConcernArr;
- (void)onLoadMessagesCompletedWhenOpen:(id)arg1;
- (void)handleAddRevokeMsgNotification:(id)arg1;
- (void)handleShowUnreadBarWhenReactive:(id)arg1;
- (void)handleScollToUnreadRedpack:(id)arg1;
- (void)clickReplyMessage:(unsigned int)arg1 completion:(id)arg2;
- (void)handleReplyMessage:(id)arg1;
- (void)handleTestReplyMessage:(id)arg1;
- (void)setupAVStatus;
- (void)handleMAVSessionChanged:(id)arg1;
- (void)handleShowAIOMemberListDidChange:(id)arg1;
- (void)handleQuitDiscuss:(id)arg1;
- (void)handleScreenGrabDidFinish:(id)arg1;
- (void)handleOAResult:(id)arg1;
- (void)handleMsgSendError:(id)arg1;
- (void)handlePTTError:(id)arg1;
- (void)reloadMessages;
- (void)handleCurrentDateDidChange:(id)arg1;
- (void)handleChatUIStyleDidChange:(id)arg1;
- (void)handleSwiftAdd:(id)arg1;
- (void)handleSurpriseLaunch:(id)arg1;
- (void)handleClickPwdRedPack:(id)arg1;
- (void)_getRecentPasswordRedPackMsgList:(id)arg1;
- (void)handleSendPwdToPickPwdRedPack:(id)arg1;
- (void)handleRedPackGrabbed:(id)arg1;
- (void)_openRedPacketWithMsgModel:(id)arg1 redPacketViewModel:(id)arg2;
- (BOOL)shakeWindowByMessageIsReceived:(BOOL)arg1;
- (void)handleReceiveShake:(id)arg1;
- (void)handleSendFileMessage:(id)arg1;
- (void)handleSendMessage:(id)arg1;
- (BOOL)isSelfAcitve;
- (struct CGPoint)faceButtonPosition;
- (BOOL)makeInputViewAsFirstResponder;
- (BOOL)isChatView;
- (BOOL)acceptsDraggingInfo:(id)arg1;
- (void)hostWindowDidExitFullScreenMode;
- (void)hostWindowWillExitFullScreenMode;
- (void)viewWillRemoveFromWindow;
- (void)viewControllerPrepareRemove;
- (BOOL)shouldRelaoutTextView;
- (void)notificationReloadAIO:(id)arg1;
- (void)viewDidAddToWindow;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)viewWillAddToWindow;
- (void)setSessionId:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)releaseResource;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithSession:(id)arg1;
- (void)stopMonitorMouseClick;
- (void)monitorMouseClick;
- (void)switchToSimpleModel:(id)arg1;
- (void)switchToNormalModel:(id)arg1;
- (void)willSwitchToNormalModel:(id)arg1;
- (void)willSwitchToSimpleModel:(id)arg1;
- (void)showShadowView;
- (void)setMemberViewOnFloat;
- (void)showMemberViewAnimation;
- (void)setScrollbarOffset:(BOOL)arg1;
- (void)setMsgFlowLayouts;
- (void)_appendDataLineFileTaskBySessionID:(unsigned long long)arg1 grouID:(unsigned long long)arg2;
- (void)handleDatalineMutliTask:(id)arg1;
- (void)clearTextViewContent;
- (BOOL)isInformativeMsg:(id)arg1;
- (void)addMsgInfoLinkWithMsg:(id)arg1;
- (void)addAudioInfoLinkWithMsgId:(id)arg1 fileName:(id)arg2 atTime:(id)arg3 isSelf:(BOOL)arg4 msgModel:(id)arg5;
- (BOOL)addHistoryTips:(id)arg1;
- (BOOL)addTips:(id)arg1 time:(double)arg2 needBackground:(BOOL)arg3;
- (BOOL)addTips:(id)arg1;
- (BOOL)isSingleChatType:(int)arg1;
- (void)reShowMessageNeedScrollToBottom:(BOOL)arg1;
- (void)addMessageToArray:(id)arg1 senderUin:(unsigned long long)arg2 isNeedTime:(BOOL)arg3 isHistory:(BOOL)arg4;
- (void)setNewMsgRemindExistFlag:(BOOL)arg1;
- (void)didClickNewMsgRemindPerformButton;
- (void)removeCircleCount;
- (void)scrollViewDidScrollToBottom:(id)arg1;
- (void)startLoading:(id)arg1;
- (void)setupNewMsgRemindIfNeeds;
- (void)finishAddText:(id)arg1;
- (id)loadHistoryMsgWithMsgModel:(id)arg1 withTime:(BOOL)arg2 withFromUnreadMsg:(BOOL)arg3;
- (id)attributedStringWithHistoryMsgPackObjArray:(id)arg1 isHistory:(BOOL)arg2;
- (BOOL)isValidHistoryMsg:(id)arg1 withUin:(unsigned long long)arg2 withChatType:(int)arg3;
- (void)insertHistory;
- (void)showUnSafeURLWarningMsg:(id)arg1;
- (void)localUpdateTopViewWithMsgPack:(id)arg1 withSenderUin:(unsigned long long)arg2;
- (void)updateTopTextViewWithMsgPack:(id)arg1 isInformativeMsg:(BOOL)arg2;
- (BOOL)shouldDisplayReminder;
- (void)addNewMsgReminder:(unsigned long long)arg1;
- (void)addMsgArray:(id)arg1;
- (void)addMsg:(id)arg1 extraData:(id)arg2 isSelfMsg:(BOOL)arg3;
- (void)addSendMsg:(id)arg1;
- (void)topTextViewSupportCleanup;
- (void)handleGroupFileSendNotification:(id)arg1;
- (void)topTextViewSupportSetup;
- (void)spaceOpenImage;
- (void)doubleClickOpenImage;
- (BOOL)acceptDraggedFile;
- (void)addOAResultInfo:(id)arg1;
- (void)handleGroupEventNotification:(id)arg1;
- (void)handleContactIMInfoEvtNotification:(id)arg1;
- (void)handleBubbleColorDidChange:(id)arg1;
- (void)filtrateStringToAtGroupMember;
- (void)clearAtGroupMemberPreTyping;
- (void)insertAtGroupMember:(unsigned long long)arg1 name:(id)arg2 unClearPreTyping:(BOOL)arg3;
- (void)insertAtGroupMember:(unsigned long long)arg1 name:(id)arg2;
- (BOOL)updateFileTransmissionTask:(id)arg1;
- (void)addStaticTextAttachment:(id)arg1;
- (void)removeTextAttachmentForMsgID:(int)arg1;
- (id)findTextAttachmentForMsgID:(int)arg1 inAttachmentList:(id)arg2;
- (void)removeTextAttachmentForSession:(id)arg1;
- (BOOL)addTask:(id)arg1 textAttachment:(id)arg2;
- (void)fileTransmissionUICleanUp;
- (void)fileTransmissionUISetUp;
- (void)handleTaskDidCancel:(id)arg1;
- (void)handleTaskThumbnailDidComplete:(id)arg1;
- (void)handleTaskDidComplete:(id)arg1;
- (void)moveAttachmentToStaticAttachmentList:(id)arg1;
- (void)handleTaskDidProgress:(id)arg1;
- (void)handleTaskWillStart:(id)arg1;
- (void)onClickSwitchToOfflineFileOfTask:(id)arg1;
- (void)onClickResendOfTask:(id)arg1;
- (void)onFileReadyToShow:(id)arg1 pathName:(id)arg2;
- (BOOL)cancelTask:(id)arg1;
- (BOOL)startTask:(id)arg1;
- (int)lastMessageSessionType;
- (void)removeClearMsgFromMessageListBySeq:(int)arg1;
- (void)removeClearMsgFromMessageList:(id)arg1;
- (void)resetMsgList;
- (void)scrollToMsg:(unsigned int)arg1 type:(int)arg2 completion:(id)arg3;
- (void)_updateNewAddedMsgWithSeq:(unsigned int)arg1 completion:(id)arg2;
- (long long)_updateCountOfNewMessage:(id)arg1;
- (void)_scrollTo:(long long)arg1 type:(int)arg2;
- (void)_getMsgIndexWithSeq:(unsigned int)arg1 type:(int)arg2 completion:(id)arg3;
- (void)_checkReadedMsgVisibleRect;
- (void)checkReadedMsg;
- (void)scrollViewDidStop:(id)arg1;
- (void)replaceMessages:(id)arg1;
- (void)revokeMessages:(id)arg1;
- (id)removeDuplicateMsgs:(id)arg1;
- (long long)countOfNewMessage:(id)arg1;
- (void)appendNewMessages:(id)arg1;
- (BOOL)isReplyMessage:(id)arg1;
- (void)onCompletedLoadMoreMessages:(BOOL)arg1 error:(id)arg2 startTime:(long long)arg3;
- (void)loadMoreMessages;
- (void)onCompletedLoadMoreMessagesWhenOpen:(BOOL)arg1 error:(id)arg2 startTime:(long long)arg3 loadHistory:(BOOL)arg4 unreadCount:(long long)arg5;
- (void)loadMoreMessagesWhenOpen;
- (void)loadMessages;
- (void)removeViewModel:(id)arg1;
- (void)removeDataSource;
@property(readonly, nonatomic) NSMutableArray *messageList;
@property(readonly, nonatomic) BHMsgManager *msgMgr;
- (id)getChatMessageModelWithUin:(id)arg1 andChatType:(int)arg2;
@property(readonly, nonatomic) BHMessageChatModel *chatMessageModel;
- (id)discussMemberArray;
- (id)splitViewOfId:(id)arg1 vertical:(BOOL)arg2;
- (void)removeVoiceInputView;
- (void)addVoiceInputView;
@property(readonly) MQRecordView *voiceInputView;
@property(readonly) TXTopTextView *topTextView;
- (void)removeMemberView;
- (void)hideMemberViewOnDragging:(BOOL)arg1;
- (void)setMemberView;
- (void)hiddenMemberViewAnimation;
- (void)setHeaderViewController:(id)arg1 toolKitController:(id)arg2;
- (void)addView:(id)arg1 toContainer:(id)arg2;
- (void)refreshInfoView;
- (BOOL)hasSessionInfoView;
- (id)createTypingTextView;
- (id)createAVStatusView;
- (id)createChatView;
- (id)createTopTextView;
- (id)createTextViewOfClass:(Class)arg1 frame:(struct CGRect)arg2;
- (id)scrollViewWithClass:(Class)arg1 documentFrame:(struct CGRect)arg2;
- (id)buildBottomPart;
- (void)setAVStatusHidden:(_Bool)arg1;
- (id)buildTopPart;
- (id)headPartView;
- (void)reloadAndRecorveryVisibleRow:(long long)arg1;
- (unsigned long long)originVisibleRow;
- (BOOL)shouldTopGroupShareWindow;
- (void)strokeTranslationTypeDidClosed;
- (void)pinToTop:(BOOL)arg1;
- (void)makeFirstResponderForSingleChat;
- (void)adjustConfigForSingleChat;
- (void)justRemoveRemindView;
- (void)buildTextViewsWithSplitView:(id)arg1;
- (void)setupAuxiliaryViews;
- (void)cleanupUI;
- (void)buildUI;
@property BOOL showMemberList;
- (id)memberListShadow;
- (id)foldButton;
- (id)foldCloseButton;
@property(readonly) NSView *infoContainer;
- (double)minViewWidth;
@property BOOL shouldShowMemberList;
- (void)saveGeomertySettings;
- (void)updateGeometrySettings;
- (void)updateGeometrySettingsInner;
@property(readonly) double memberViewWidth;
@property(readonly) double inputViewHeight;
- (BOOL)modernCode;
- (void)onClickHideMemberButton:(id)arg1;
- (void)didClickFoldButton:(id)arg1;
- (void)printOperationDidRun:(id)arg1 success:(BOOL)arg2 contextInfo:(void *)arg3;
- (BOOL)saveMessageToPDF:(id)arg1;
- (void)sendMessage;
- (BOOL)hRMeetingNeedActivie:(id)arg1;
- (void)addSurprise:(id)arg1 at:(BOOL)arg2;
- (void)checkSurprise:(id)arg1;
- (void)showRedPackPwdViewController:(id)arg1;
- (BOOL)hasUnsendMsg;
- (void)clearTypingTextViewContent;
- (void)addTip:(id)arg1 uin:(unsigned long long)arg2 chatType:(int)arg3;
- (void)onTypingTextViewStateChange:(BOOL)arg1;
- (void)openStrokeType:(BOOL)arg1;
- (BOOL)strokeType;
- (int)currentChatType;
- (unsigned long long)currentUin;
- (void)replaceRefMsgContent:(id)arg1;
- (void)insertRefMsgContent:(id)arg1 msgViewModel:(id)arg2;
- (void)insertRefMsgContent:(id)arg1;
- (void)textView:(id)arg1 clickedOnCell:(id)arg2 inRect:(struct CGRect)arg3 atIndex:(unsigned long long)arg4;
- (void)textDidChange:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (BOOL)handleFondChangeCommandBySelector:(SEL)arg1 withEvent:(id)arg2;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)showAudioRecordStatus;
- (void)removeAudioRecordStatus;
- (void)reportInitMsgNum;
- (void)updateStrokeTypeConcernView;
- (void)insertUnreadBreakLine;
- (void)initUnreadData;
- (int)getLastConcernType;
- (void)handleAppendNewMsg:(id)arg1;
- (void)handleRevokeConcernMsg:(id)arg1;
- (BOOL)removeConcernTipsBySequence:(long long)arg1;
- (int)getNextJumpConcernType;
- (long long)getNextJumpSequence;
- (id)getCurrentTips;
- (void)removeAllTips;
- (void)removeLastReadedMsgSeq;
- (void)removeVisibleMsgSeqs:(id)arg1;
- (void)didAppendNewMsg:(id)arg1 sessionId:(id)arg2;
- (void)didEndScrollView:(id)arg1;
- (void)didLoadMoreMessage:(id)arg1;
- (void)removeAsReadConcernView;
- (void)didClickConcernItem:(id)arg1;
- (id)createConcernView;
- (void)addConcernView:(id)arg1;
- (void)updateViewTipsToLoading;
- (void)updateConcernView;
- (void)updateConcern;
- (void)didInsertMsgArray:(id)arg1;
- (void)initConcern;
- (int)sendGroupFile:(id)arg1;
- (void)insertEmojiFacesAtIndex:(int)arg1;
- (void)insertCustomFace:(id)arg1;
- (void)insertSyetemFacesAtIndex:(int)arg1;
- (void)selectStoreFace:(id)arg1;
- (void)notifyGroupMessageReceiveTypeChanged:(id)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)showBatchGroupSettingWindow;
- (void)setGroupMessageReceiveTypeBlockAll;
- (void)setGroupMessageReceiveTypeNoTip;
- (void)setGroupMessageReceiveTypeNoAlert;
- (void)setGroupMessageReceiveTypeNormal;
- (id)captureWindow;
- (long long)getMenuCheckType;
- (id)setBlockButtonMenu;
- (id)currentBlockStateString;
- (BOOL)isCurrentGroupInBlockState;
- (void)onQuitRecord;
- (void)onChangeTypingOrRecording:(BOOL)arg1;
- (void)onBlock:(id)arg1;
- (void)onOCRScreenCapture:(id)arg1;
- (void)onVideoScreen:(id)arg1;
- (void)onGrabScreen:(id)arg1;
- (void)onPicture:(id)arg1;
- (void)onShakeWindow:(id)arg1;
- (void)onMsgRecord:(id)arg1;
- (void)didClickOnEmptySpace;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (struct CGRect)splitView:(id)arg1 effectiveRect:(struct CGRect)arg2 forDrawnRect:(struct CGRect)arg3 ofDividerAtIndex:(long long)arg4;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (BOOL)splitView:(id)arg1 shouldAdjustSizeOfSubview:(id)arg2;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)isSimplestModel;
- (void)message:(struct _MESSAGE_RECORD_ID)arg1 willBeRemovedFromSession:(id)arg2;
- (void)didInitAttachmentFromDB:(id)arg1;
- (void)didCreateAttachment:(id)arg1 forTask:(id)arg2;
- (void)onTopTextViewKeyInput:(id)arg1;
- (void)onTopTextOutputDebugInfo:(id)arg1;
- (void)forwardFile:(id)arg1;
- (int)sendFile:(id)arg1;
- (void)popUpGroupMenuForUin:(id)arg1 withEvent:(id)arg2 forView:(id)arg3;
- (void)textView:(id)arg1 clickedOnLinkInfo:(id)arg2 atIndex:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) id eventMonitor;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

