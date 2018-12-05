//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TChatFileBaseView.h"

@class NSImage, TChatFileGroupViewControl;

@interface TChatFileGroupView : TChatFileBaseView
{
    TChatFileGroupViewControl *viewControl;
    BOOL _showProgress;
    double _progress;
    NSImage *_operationImage;
    SEL _doubleClickOperation;
    SEL _operation;
}

@property(nonatomic) BOOL showProgress; // @synthesize showProgress=_showProgress;
@property(nonatomic) SEL operation; // @synthesize operation=_operation;
@property(nonatomic) SEL doubleClickOperation; // @synthesize doubleClickOperation=_doubleClickOperation;
@property(retain, nonatomic) NSImage *operationImage; // @synthesize operationImage=_operationImage;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)OnSaveImageToCustomiseFacesByMenu:(id)arg1;
- (id)getFileName;
- (void)onOpenFolder;
- (BOOL)showSaveTo;
- (void)onSaveTo;
- (void)onDownload;
- (void)onOpenFile;
- (void)onOCRScan;
- (id)getFilePath;
- (void)onFileCopy;
- (void)update:(id)arg1;
- (id)getViewModel;
- (void)mouseDown:(id)arg1;
- (void)notifyDoubleClickArea;
- (void)fileOperationBtnClicked:(id)arg1;

@end
