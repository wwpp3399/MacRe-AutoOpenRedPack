//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "V5ViewController.h"

#import "ExtendedActionDelegate.h"
#import "ExtendedTableRowViewDelegate.h"
#import "ExtendedTableViewDelegate.h"
#import "ExtendedTokenFieldViewDelegate.h"
#import "MQTableRowViewDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"
#import "NSTextFieldDelegate.h"
#import "NSTokenFieldDelegate.h"

@class ContactSearcherInter, MQAIOSearchField, MQSearchResultTableView, MQSearchResultWindow, MQSearchfieldBackground, NSDictionary, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSNumber, NSObject<OS_dispatch_queue>, NSString, RFOverlayScrollView, TXColorView;

@interface MQSearchViewController : V5ViewController <MQTableRowViewDelegate, NSTextFieldDelegate, NSTokenFieldDelegate, NSTableViewDataSource, NSTableViewDelegate, ExtendedTableViewDelegate, ExtendedTokenFieldViewDelegate, ExtendedActionDelegate, ExtendedTableRowViewDelegate>
{
    NSMutableArray *_searchResultArray;
    NSDictionary *_searchedDisInfo;
    NSMutableArray *_otherObjectsArray;
    NSMutableArray *_searchHistoryArray;
    NSMutableArray *_fileHistoryArray;
    id _eventMonitor;
    NSNumber *_accountNumber;
    ContactSearcherInter *_searchInter;
    NSMutableArray *searchResultArray;
    BOOL _bFirstCall;
    BOOL _searchBarShouldHandleFirstResponderEvent;
    BOOL _resultPannelShown;
    RFOverlayScrollView *_searchResultScollView;
    MQAIOSearchField *_tokenField;
    id <MQSearchViewControllerDelegate> _delegate;
    TXColorView *_searchSuperView;
    MQSearchResultTableView *_searchResultTableView;
    MQSearchfieldBackground *_searchFieldBackgroundView;
    NSObject<OS_dispatch_queue> *_searchQ;
    id <MQSearchViewControllerSimplestDelegate> _simpleDelegate;
    NSLayoutConstraint *_tokenLeadingConstraint;
    NSLayoutConstraint *_tokenTrailingConstraint;
    MQSearchResultWindow *_resultPanel;
    NSString *_lastSearchValue;
    NSMutableDictionary *_extendInfo;
}

@property(retain, nonatomic) NSMutableDictionary *extendInfo; // @synthesize extendInfo=_extendInfo;
@property(retain, nonatomic) NSString *lastSearchValue; // @synthesize lastSearchValue=_lastSearchValue;
@property(nonatomic) BOOL resultPannelShown; // @synthesize resultPannelShown=_resultPannelShown;
@property(retain, nonatomic) MQSearchResultWindow *resultPanel; // @synthesize resultPanel=_resultPanel;
@property NSLayoutConstraint *tokenTrailingConstraint; // @synthesize tokenTrailingConstraint=_tokenTrailingConstraint;
@property NSLayoutConstraint *tokenLeadingConstraint; // @synthesize tokenLeadingConstraint=_tokenLeadingConstraint;
@property(nonatomic) __weak id <MQSearchViewControllerSimplestDelegate> simpleDelegate; // @synthesize simpleDelegate=_simpleDelegate;
@property(nonatomic) BOOL bFirstCall; // @synthesize bFirstCall=_bFirstCall;
@property(retain, nonatomic) NSNumber *accountNumber; // @synthesize accountNumber=_accountNumber;
@property(retain, nonatomic) NSMutableArray *otherObjectsArray; // @synthesize otherObjectsArray=_otherObjectsArray;
@property(retain, nonatomic) id eventMonitor; // @synthesize eventMonitor=_eventMonitor;
@property(retain, nonatomic) NSDictionary *searchedDisInfo; // @synthesize searchedDisInfo=_searchedDisInfo;
@property MQSearchfieldBackground *searchFieldBackgroundView; // @synthesize searchFieldBackgroundView=_searchFieldBackgroundView;
@property MQSearchResultTableView *searchResultTableView; // @synthesize searchResultTableView=_searchResultTableView;
@property TXColorView *searchSuperView; // @synthesize searchSuperView=_searchSuperView;
@property(nonatomic) __weak id <MQSearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property MQAIOSearchField *tokenField; // @synthesize tokenField=_tokenField;
@property RFOverlayScrollView *searchResultScollView; // @synthesize searchResultScollView=_searchResultScollView;
- (void).cxx_destruct;
- (void)resignSearchBar;
- (void)dismissResultPannel;
- (void)handleFileSearchResult:(id)arg1 needOpen:(BOOL)arg2;
- (void)isQQNewsObjInArray:(id)arg1;
- (void)modifyTencentNewsInOtherObjState:(BOOL)arg1;
- (void)addSearchAddContact;
- (void)clearSearchHistory;
- (id)getUnarchiversearchHistoryArr;
- (id)searchPath;
- (void)setSearchHistory:(id)arg1;
- (void)addFixedToolsIntoSearchResult;
- (void)showHistorySearchPannel;
- (BOOL)isShowHistoryPannel;
- (void)willSwitchToNormalModel:(id)arg1;
- (void)willSwitchToSimpleModel:(id)arg1;
- (void)updateResultPannel;
- (void)showResultPannel;
- (void)saveLastSearchValueShouldClear:(BOOL)arg1;
- (BOOL)isSimple;
- (void)showMoreSearch:(id)arg1 isExpand:(BOOL)arg2;
- (BOOL)hasDetailInfo:(id)arg1;
- (long long)indexOfRow:(id)arg1;
- (void)mouseExitFromRow:(id)arg1;
- (void)mouseEnteredInRow:(id)arg1;
- (void)runMagnifierAnimationModel:(BOOL)arg1;
- (void)reportSearchResult;
- (void)reportSearch:(id)arg1;
- (void)onClickedSurpriseBtn:(id)arg1;
- (void)onClickedDetailBtn:(id)arg1;
- (void)onClickDeleteBtn:(id)arg1;
- (void)setAbleHandleFirstResponderEvent:(BOOL)arg1;
- (BOOL)ableHandleFirstResponderEvent;
- (void)showSearchFileTips;
- (void)tokenFiledRecviedMousedown:(id)arg1;
- (void)tokenFiledRecviedTouchDown:(id)arg1;
- (BOOL)tokenField:(id)arg1 onCommand:(int)arg2;
- (unsigned long long)tokenField:(id)arg1 styleForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 displayStringForRepresentedObject:(id)arg2;
- (void)tableView:(id)arg1 didDoubleClickedRow:(long long)arg2;
- (void)tableView:(id)arg1 didClickedRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)packupSearchResult;
- (void)updatePosOfCustor:(long long)arg1;
- (BOOL)isBuddy:(id)arg1 AlreadyIn:(id)arg2;
- (void)updateTokenfieldState;
- (void)createDiscussAio:(id)arg1;
- (long long)onSemiconlonPressed;
- (void)onEnterKeyDown:(id)arg1;
- (long long)getPosOfCustor;
- (long long)addNewBuddyItem:(id)arg1 fromOldTokens:(id)arg2 toNewTokens:(id)arg3;
- (long long)addTokenOfBuddy:(id)arg1;
- (void)showAddContactWnd;
- (void)showAioWithContact:(id)arg1;
- (void)clearSearchResult;
- (void)searchOtherObject:(id)arg1 withKey:(id)arg2;
- (_Bool)isAllDigital:(id)arg1;
- (id)setDisplaySearchedCount:(id)arg1 count:(long long)arg2;
- (BOOL)searchUserByKey:(id)arg1 count:(long long)arg2;
- (BOOL)searchUserByKey:(id)arg1;
- (void)selectContact:(long long)arg1 ofSearchResult:(id)arg2 towardsDown:(BOOL)arg3;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)controlTextDidBeginEditing:(id)arg1;
@property(retain, nonatomic) ContactSearcherInter *searchInter; // @synthesize searchInter=_searchInter;
@property(copy, nonatomic) NSObject<OS_dispatch_queue> *searchQ; // @synthesize searchQ=_searchQ;
@property(retain, nonatomic) NSMutableArray *searchResultArray; // @synthesize searchResultArray=_searchResultArray;
- (BOOL)beginSearching;
- (void)dealloc;
- (void)awakeFromNib;
- (void)HandleMouseEvent;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)drawSelectionForRowView:(id)arg1 inRect:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

