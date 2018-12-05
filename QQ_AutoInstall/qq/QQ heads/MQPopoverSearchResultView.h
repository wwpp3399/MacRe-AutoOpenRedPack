//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MQSearchedContactView.h"

@class NSTextField, SelectableHeadImageView;

@interface MQPopoverSearchResultView : MQSearchedContactView
{
    BOOL _isSelected;
    SelectableHeadImageView *_headImage;
    NSTextField *_nickName;
    NSTextField *_contactInfo;
}

@property __weak NSTextField *contactInfo; // @synthesize contactInfo=_contactInfo;
@property __weak NSTextField *nickName; // @synthesize nickName=_nickName;
@property __weak SelectableHeadImageView *headImage; // @synthesize headImage=_headImage;
- (void).cxx_destruct;
- (void)updateSelectedItem:(BOOL)arg1;
- (void)setContact:(id)arg1 withExtInfo:(id)arg2;
- (void)awakeFromNib;

@end
