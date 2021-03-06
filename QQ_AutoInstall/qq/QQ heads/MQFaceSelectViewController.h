//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "MQFaceSelectorDelegate.h"
#import "MQSegmentedControlDelegate.h"
#import "NSPageControllerDelegate.h"
#import "TXPopoverControllerDelegate.h"

@class MQSegmentedControl, NSBox, NSImageView, NSMutableArray, NSPageController, NSString, NSView, OCRFaceEditRemarkViewController, RoamFaceTipView, TXHoverButton, TXPopoverController;

@interface MQFaceSelectViewController : NSViewController <MQSegmentedControlDelegate, MQFaceSelectorDelegate, TXPopoverControllerDelegate, NSPageControllerDelegate>
{
    TXPopoverController *popOver_;
    long long dwGroupId_;
    MQSegmentedControl *segmentedControl_;
    NSView *containerView_;
    NSBox *pointContainerView_;
    TXHoverButton *leftButton_;
    TXHoverButton *rightButton_;
    NSImageView *_alertView;
    NSMutableArray *arrPoints_;
    NSMutableArray *allView_;
    BOOL isDelayCloseOn_;
    unsigned long long popOverShowTime;
    long long leftGroupIndex_;
    BOOL bDataReport;
    NSPageController *pageController_;
    BOOL pageInAnimation_;
    long long _lastSelectSegmentIndex;
    RoamFaceTipView *_roamFaceAlertView;
    long long _rightClickIndex;
    BOOL _shouldShowRoamFaceTip;
    id <MQFacesSelectorControllerDelegate> selectorControllerDelegate;
    id initialSelectedObject;
    OCRFaceEditRemarkViewController *_editViewController;
}

@property(nonatomic) BOOL shouldShowRoamFaceTip; // @synthesize shouldShowRoamFaceTip=_shouldShowRoamFaceTip;
@property(retain, nonatomic) OCRFaceEditRemarkViewController *editViewController; // @synthesize editViewController=_editViewController;
@property __weak id initialSelectedObject; // @synthesize initialSelectedObject;
@property __weak id <MQFacesSelectorControllerDelegate> selectorControllerDelegate; // @synthesize selectorControllerDelegate;
- (void).cxx_destruct;
- (BOOL)needPagePoit:(long long)arg1;
- (long long)_numberOfViewsInPageController;
- (void)setMatrixViewFrame:(struct CGRect)arg1 groupId:(long long)arg2 buttonCell:(id)arg3 pageCount:(long long)arg4 segment:(long long)arg5;
- (void)_refreshAllData;
- (void)refreshFaceAtIndex:(long long)arg1;
- (void)updateGroupOnMergeStoreFacePackage:(id)arg1;
- (void)kMQFacesManagerUpdateFaceGroup:(id)arg1;
- (void)kMQFacesManagerUpdateFace:(id)arg1;
- (void)popoverKeyDown:(id)arg1;
- (void)popoverDidShow:(id)arg1;
- (void)popoverDidClose:(id)arg1;
- (void)pageController:(id)arg1 didTransitionToObject:(id)arg2;
- (void)pageControllerDidEndLiveTransition:(id)arg1;
- (void)pageControllerWillStartLiveTransition:(id)arg1;
- (void)pageController:(id)arg1 prepareViewController:(id)arg2 withObject:(id)arg3;
- (id)pageController:(id)arg1 viewControllerForIdentifier:(id)arg2;
- (id)pageController:(id)arg1 identifierForObject:(id)arg2;
- (void)hoverSegmentIndex:(long long)arg1;
- (void)receiveTheRoamFaceReloaded:(id)arg1;
- (void)notifyRoamFaceRefreshed;
- (void)onAddRoamSuccessed:(id)arg1;
- (void)onRoamThisFace:(id)arg1;
- (void)doDeleteRoamFaceIndexSet:(id)arg1 callback:(id)arg2;
- (void)onDeleteFaces:(id)arg1;
- (BOOL)facePanelRespondsHoverEvent;
- (long long)previewRectOffset;
- (long long)previewOriginOffset;
- (struct CGSize)faceSizePageIndex:(long long)arg1;
- (void)userDataReport;
- (int)preViewPosByMousePos:(int)arg1;
- (double)radiusOfTopEdge;
- (int)preViewSize;
- (void)faceSelectorDidSelectFaceAtIndex:(long long)arg1;
- (void)onEditFaceRemark:(id)arg1;
- (void)rightClickIndex:(long long)arg1 evnet:(id)arg2;
- (BOOL)inNumberOfFacesAtIndex:(long long)arg1 pageIndex:(long long)arg2;
- (id)previewFacesAtIndex:(long long)arg1 pageIndex:(long long)arg2;
- (unsigned long long)loadingStateAtIndex:(long long)arg1 pageIndex:(long long)arg2;
- (id)facesAtIndex:(long long)arg1 pageIndex:(long long)arg2;
- (id)getFaceUnit:(long long)arg1 pageIndex:(long long)arg2;
- (void)setCellImage:(struct CGRect)arg1 view:(id)arg2 index:(long long)arg3 pageIndex:(long long)arg4;
- (void)showOCRGuide;
- (id)roamFaceAlertView;
- (void)alertRoamTip;
- (void)refreshRoam;
- (void)synchornizeFaces;
- (id)favouriteImageByName:(id)arg1 isPressed:(BOOL)arg2;
- (void)containerViewAndLeftRightHiddenLogic;
- (void)leftAndRightEnableLogic;
- (long long)nextGroupId;
- (long long)previousGroupId;
- (long long)cellPerSize:(long long)arg1;
- (long long)maxHeightNum:(long long)arg1;
- (long long)maxWidthNum:(long long)arg1;
- (BOOL)isSystemGroup;
- (void)insertEmojiFacesAtIndex:(int)arg1;
- (void)insertCustomFace:(id)arg1;
- (void)insertSyetemFacesAtIndex:(int)arg1;
- (void)selectStoreFace:(id)arg1;
- (void)hidePopover;
- (void)replacePopoverInView:(id)arg1;
- (void)showPopoverInView:(id)arg1;
- (void)onManagerCallBack:(id)arg1;
- (void)delayToOpenManagerWin:(id)arg1;
- (void)rightButtonClicked:(id)arg1;
- (void)leftButtonClicked:(id)arg1;
- (void)pageBreakClicked:(id)arg1;
- (void)reportIsStroeGroup:(BOOL)arg1;
- (void)reportCurrentSegmentFaceGroup;
- (void)segControlClicked:(id)arg1 report:(BOOL)arg2;
- (void)segControlClicked:(id)arg1;
- (void)receiveReloadFaceNotification;
- (void)dealloc;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

