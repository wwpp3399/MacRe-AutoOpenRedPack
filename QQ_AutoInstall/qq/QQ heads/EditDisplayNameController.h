//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSButton, NSProgressIndicator, NSTextField;

@interface EditDisplayNameController : NSWindowController
{
    int m_WindowType;
    unsigned long long m_dwUin;
    unsigned char m_cFolderID;
    NSButton *btOK;
    NSTextField *textDisplayName;
    NSTextField *labelPrompt;
    NSTextField *offlineLabelPrompt;
    NSProgressIndicator *piBusy;
    BOOL haveOfflineHistory;
    BOOL haveClickBtn;
    id <EditDisplayNameDelegate> _delegate;
}

+ (void)requestRenameFolder:(BOOL)arg1 groupName:(id)arg2 block:(id)arg3;
+ (id)getEditDisplayNameController;
@property(nonatomic) id <EditDisplayNameDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)windowWillClose:(id)arg1;
- (id)getEditDiscussTitleWindow:(unsigned long long)arg1 oldName:(id)arg2 withChatType:(int)arg3;
- (void)ShowEditDiscussTitleWindow:(unsigned long long)arg1 oldName:(id)arg2;
- (void)ShowAddGroupFolderWindow;
- (void)ShowInsertFolderWindow;
- (void)InternalShowInsertFolderWindow:(int)arg1;
- (void)ShowRenameGroupFolderWindow:(unsigned char)arg1;
- (void)ShowRenameFolderWindow:(unsigned char)arg1;
- (void)InternalShowRenameFolderWindow:(unsigned char)arg1 FolderType:(id)arg2 WindowType:(int)arg3;
- (void)ShowEditDisplayWindow:(unsigned long long)arg1;
- (id)displayNameWithUin:(unsigned long long)arg1;
- (void)OnCancel:(id)arg1;
- (void)OnOK:(id)arg1;
- (void)SaveRenameGroupFolder;
- (void)SaveAddGroupFolder;
- (void)SaveNFCDiscussTitle;
- (void)SaveDiscussTitle;
- (void)setupDelegate:(unsigned char)arg1 folderName:(id)arg2 windowType:(int)arg3 isSuccess:(BOOL)arg4;
- (void)SaveRenameFolder;
- (void)SaveInsertFolder;
- (void)folderNameOverMaxLength;
- (void)SaveEditDisplay;
- (void)ShowPIBusy:(int)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (void)windowDidLoad;
- (id)init;

@end

