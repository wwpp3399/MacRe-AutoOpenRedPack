//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QUIWindowController.h"

#import "QZFileBrowseTopControllerDelegate.h"
#import "QZFilesListControllerDelegate.h"

@class NSArray, NSLayoutConstraint, NSMutableArray, NSString, NSTextField, QZFileBrowseTopController, QZFilesListController, TXColorView;

@interface QZWindowController : QUIWindowController <QZFilesListControllerDelegate, QZFileBrowseTopControllerDelegate>
{
    struct CGRect _listVisibleRect;
    unsigned long long _sortType;
    BOOL _searching;
    NSMutableArray *_searchResults;
    NSString *_archivePath;
    NSString *_dstPath;
    id <QZWindowControllerDelegate> _qzwinDelegate;
    TXColorView *_rootView;
    TXColorView *_topbarContainer;
    TXColorView *_listContainer;
    TXColorView *_nodataView;
    NSTextField *_nodataTextField;
    QZFilesListController *_fileGroupController;
    QZFilesListController *_secondfileGroupController;
    QZFilesListController *_currentFileGroupController;
    QZFileBrowseTopController *_browserTopBarC;
    NSArray *_originDatas;
    NSMutableArray *_dataStack;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_nodataTopConstraint;
}

+ (id)unarchiveWindowController;
@property __weak NSLayoutConstraint *nodataTopConstraint; // @synthesize nodataTopConstraint=_nodataTopConstraint;
@property __weak NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(retain, nonatomic) NSMutableArray *dataStack; // @synthesize dataStack=_dataStack;
@property(retain, nonatomic) NSArray *originDatas; // @synthesize originDatas=_originDatas;
@property(retain, nonatomic) QZFileBrowseTopController *browserTopBarC; // @synthesize browserTopBarC=_browserTopBarC;
@property(retain, nonatomic) QZFilesListController *currentFileGroupController; // @synthesize currentFileGroupController=_currentFileGroupController;
@property(retain, nonatomic) QZFilesListController *secondfileGroupController; // @synthesize secondfileGroupController=_secondfileGroupController;
@property(retain, nonatomic) QZFilesListController *fileGroupController; // @synthesize fileGroupController=_fileGroupController;
@property __weak NSTextField *nodataTextField; // @synthesize nodataTextField=_nodataTextField;
@property __weak TXColorView *nodataView; // @synthesize nodataView=_nodataView;
@property __weak TXColorView *listContainer; // @synthesize listContainer=_listContainer;
@property __weak TXColorView *topbarContainer; // @synthesize topbarContainer=_topbarContainer;
@property __weak TXColorView *rootView; // @synthesize rootView=_rootView;
@property(nonatomic) __weak id <QZWindowControllerDelegate> qzwinDelegate; // @synthesize qzwinDelegate=_qzwinDelegate;
@property(retain, nonatomic) NSString *dstPath; // @synthesize dstPath=_dstPath;
@property(retain, nonatomic) NSString *archivePath; // @synthesize archivePath=_archivePath;
- (void).cxx_destruct;
- (id)subFilesInDir:(id)arg1;
- (void)_innerArray:(id)arg1 SortBy:(unsigned long long)arg2;
- (void)prepareData;
- (void)swap:(id)arg1 with:(id)arg2 transitionDirection:(id)arg3 completionBlock:(id)arg4;
- (void)setListView:(id)arg1;
- (void)setCurrentListController;
- (void)setTopBar:(id)arg1 height:(double)arg2;
- (void)showPasswordAlert;
- (struct CGRect)restoreVisibleRect;
- (BOOL)inSearchModel;
- (void)onReturnSuperLevelClicked;
- (BOOL)showReturnSuperLevel;
- (void)onDoubleClickFile:(id)arg1;
- (void)closeSearch;
- (void)searchKeyword:(id)arg1;
- (void)sortClicked:(unsigned long long)arg1;
- (void)extractAllClicked;
- (void)show;
- (void)setFileDataSource:(id)arg1;
- (id)initWithWindowNibName:(id)arg1;
- (void)windowDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

