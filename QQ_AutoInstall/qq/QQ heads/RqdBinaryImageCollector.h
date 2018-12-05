//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface RqdBinaryImageCollector : NSObject
{
}

+ (id)sharedInstance;
- (id)getcpu:(int)arg1 subType:(int)arg2;
- (id)rqd_encode16:(const void *)arg1 size:(unsigned long long)arg2;
- (BOOL)GetImageInfo:(const void *)arg1 name:(const char *)arg2 info:(id)arg3;
- (id)collectBinaryImages;
- (id)getImageByAddr:(unsigned long long)arg1;
- (void)collectBinaryInfos:(id)arg1;
- (void)reloadBinarys;
- (void)loadBinarys;
- (id)getAllBinarys;
- (id)init;

@end
