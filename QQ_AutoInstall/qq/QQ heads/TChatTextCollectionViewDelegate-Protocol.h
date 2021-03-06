//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSEvent, NSMenu, NSPasteboard, NSView, TChatTextCollectionView, TChatTextSectionView, TChatVirtualView;

@protocol TChatTextCollectionViewDelegate <NSObject>
- (NSView *)textCollectionView:(TChatTextCollectionView *)arg1 itemContentViewForSection:(long long)arg2 atIndex:(long long)arg3;
- (TChatVirtualView *)textCollectionView:(TChatTextCollectionView *)arg1 itemViewForSection:(long long)arg2 atIndex:(long long)arg3;

@optional
- (BOOL)textCollectionView:(TChatTextCollectionView *)arg1 writeSelectedItemsIntoPasteboard:(NSPasteboard *)arg2;
- (void)textCollectionView:(TChatTextCollectionView *)arg1 keyDown:(NSEvent *)arg2;
- (NSMenu *)menuForTextCollectionView:(TChatTextCollectionView *)arg1;
- (void)textCollectionView:(TChatTextCollectionView *)arg1 hoverItemForSection:(long long)arg2 atIndex:(long long)arg3;
- (void)textCollectionView:(TChatTextCollectionView *)arg1 doubleClickItemForSection:(long long)arg2 atIndex:(long long)arg3;
- (void)textCollectionView:(TChatTextCollectionView *)arg1 didClickItemForSection:(long long)arg2 atIndex:(long long)arg3;
- (TChatTextSectionView *)textCollectionView:(TChatTextCollectionView *)arg1 viewForSection:(long long)arg2;
@end

