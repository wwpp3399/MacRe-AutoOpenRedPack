//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface APResourcesHandler : NSObject
{
    id _pb;
    id _completion;
    NSString *_filePath;
    NSString *_MD5;
    NSMutableArray *_URLs;
}

@property(retain, nonatomic) NSMutableArray *URLs; // @synthesize URLs=_URLs;
@property(retain, nonatomic) NSString *MD5; // @synthesize MD5=_MD5;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(copy, nonatomic) id completion; // @synthesize completion=_completion;
@property(copy, nonatomic) id pb; // @synthesize pb=_pb;
- (void).cxx_destruct;
- (void)__callCompletionBlock:(id)arg1 error:(id)arg2;
- (void)__downloadResourceFromURL;
- (void)startDownload;
- (void)setCompletionBlock:(id)arg1;
- (void)setProgressBlock:(id)arg1;
- (void)addResourceURL:(id)arg1;
- (id)initWithFilePath:(id)arg1 MD5:(id)arg2;
- (id)initWithFilePath:(id)arg1;

@end

