//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, TChatBaseViewModel;

@protocol TChatBaseCellViewDelegate <NSObject>

@optional
- (void)cellDrawRectCallBack;
- (void)menuTranslateOperaionWithViewModel:(TChatBaseViewModel *)arg1 Message:(NSAttributedString *)arg2 ShowResultWindow:(BOOL)arg3;
- (void)menuOCROperationWithObject:(id)arg1;
- (void)menuCopyOperationWithViewModel:(TChatBaseViewModel *)arg1;
@end

