//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HeadImagesView, NSString;

@protocol HeadImagesViewDelegate <NSObject>

@optional
- (void)headImagesView:(HeadImagesView *)arg1 mouseExitAtIndex:(unsigned long long)arg2;
- (void)headImagesView:(HeadImagesView *)arg1 didClickBtnAtIndex:(unsigned long long)arg2 withAccount:(NSString *)arg3;
- (void)headImagesView:(HeadImagesView *)arg1 mouseOverAtIndex:(unsigned long long)arg2 withAccount:(NSString *)arg3;
- (void)headImagesView:(HeadImagesView *)arg1 didDeleteAccountAtIndex:(unsigned long long)arg2 withAccount:(NSString *)arg3;
@end

