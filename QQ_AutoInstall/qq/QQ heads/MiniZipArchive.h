//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MiniZipArchive : NSObject
{
    void *_zipFile;
    void *_unzFile;
    NSString *_password;
    id _delegate;
}

@property(retain, nonatomic) id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)Date1980;
- (BOOL)OverWrite:(id)arg1;
- (void)OutputErrorMessage:(id)arg1;
- (BOOL)UnzipCloseFile;
- (BOOL)UnzipFileTo:(id)arg1 overWrite:(BOOL)arg2;
- (BOOL)UnzipOpenFile:(id)arg1 Password:(id)arg2;
- (BOOL)UnzipOpenFile:(id)arg1;
- (BOOL)CloseZipFile2;
- (BOOL)addFileToZip:(id)arg1 newname:(id)arg2;
- (BOOL)CreateZipFile2:(id)arg1 Password:(id)arg2;
- (BOOL)CreateZipFile2:(id)arg1;
- (void)dealloc;
- (id)init;

@end

