//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MCCellViewBase, NSEvent;

@protocol MCCellViewDelegate <NSObject>
- (void)cellViewMouseDown:(MCCellViewBase *)arg1 event:(NSEvent *)arg2;
- (void)cellViewRightClick:(MCCellViewBase *)arg1 event:(NSEvent *)arg2;
@end
