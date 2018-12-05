//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MQGroupOperationUtils : NSObject
{
    id _insertFolderCompletionBlock;
    id _renameFolderCompletionBlock;
    id _delFolderCompletionBlock;
    id _moveGroupCompletionBlock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (BOOL)updateDiscussInfo:(unsigned long long)arg1;
- (BOOL)exitDiscuss:(unsigned long long)arg1;
- (BOOL)exitGroup:(unsigned long long)arg1;
- (BOOL)moveGroup:(unsigned long long)arg1 toFolder:(unsigned long long)arg2 completionBlock:(id)arg3;
- (BOOL)delGroupFolder:(unsigned long long)arg1 completionBlock:(id)arg2;
- (BOOL)renameGroupFolder:(unsigned long long)arg1 to:(id)arg2 completionBlock:(id)arg3;
- (BOOL)insertGroupFolder:(id)arg1 completionBlock:(id)arg2;
- (BOOL)canMoveGroup;
- (BOOL)canDelGroupFolder;
- (BOOL)canRenameGroupFolder;
- (BOOL)canInsertGroupFolder;
- (void)dealloc;
- (id)init;

@end
