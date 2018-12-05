//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class BHGroupModel, BHProfileModel, MQAvatarImageView, NSImageView, NSTextField, TXHoverButton;

@interface AddBuddySearchResultCellView : NSTableCellView
{
    long long _currType;
    BHProfileModel *_currProfileModel;
    BHGroupModel *_currGroupModel;
    BHProfileModel *_masterModel;
    NSTextField *_nameTextField;
    NSImageView *_personIconImageView;
    NSTextField *_personNumTextField;
    NSImageView *_locationImageView;
    NSTextField *_locationTextField;
    NSTextField *_descriptionTextField;
    TXHoverButton *_addBtn;
    NSTextField *_addedTipTextField;
    TXHoverButton *_headImage;
    MQAvatarImageView *_circleHeadImage;
}

@property __weak MQAvatarImageView *circleHeadImage; // @synthesize circleHeadImage=_circleHeadImage;
@property __weak TXHoverButton *headImage; // @synthesize headImage=_headImage;
@property __weak NSTextField *addedTipTextField; // @synthesize addedTipTextField=_addedTipTextField;
@property __weak TXHoverButton *addBtn; // @synthesize addBtn=_addBtn;
@property __weak NSTextField *descriptionTextField; // @synthesize descriptionTextField=_descriptionTextField;
@property __weak NSTextField *locationTextField; // @synthesize locationTextField=_locationTextField;
@property __weak NSImageView *locationImageView; // @synthesize locationImageView=_locationImageView;
@property __weak NSTextField *personNumTextField; // @synthesize personNumTextField=_personNumTextField;
@property __weak NSImageView *personIconImageView; // @synthesize personIconImageView=_personIconImageView;
@property __weak NSTextField *nameTextField; // @synthesize nameTextField=_nameTextField;
- (void).cxx_destruct;
- (void)showGroupProfile;
- (void)showBuddyProfile;
- (void)requestMasterProfile:(id)arg1;
- (void)updateCellByGroupModel:(id)arg1 keyString:(id)arg2;
- (void)updateCellByProfileModel:(id)arg1 keyString:(id)arg2;
- (void)clickHeadImage:(id)arg1;
- (void)openProfilePanel;
- (void)clickAddBtn:(id)arg1;
- (void)awakeFromNib;
- (void)drawRect:(struct CGRect)arg1;

@end
