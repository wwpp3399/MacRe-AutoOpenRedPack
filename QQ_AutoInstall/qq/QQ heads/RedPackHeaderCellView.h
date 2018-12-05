//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class MQAvatarImageView, NSImageView, NSLayoutConstraint, NSTextField, RedpackHeaderBgView;

@interface RedPackHeaderCellView : NSTableCellView
{
    RedpackHeaderBgView *_containerView;
    MQAvatarImageView *_avatarView;
    NSTextField *_senderView;
    NSTextField *_amountView;
    NSImageView *_flagView;
    NSLayoutConstraint *_senderWidthConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *senderWidthConstraint; // @synthesize senderWidthConstraint=_senderWidthConstraint;
@property(nonatomic) __weak NSImageView *flagView; // @synthesize flagView=_flagView;
@property(nonatomic) __weak NSTextField *amountView; // @synthesize amountView=_amountView;
@property(nonatomic) __weak NSTextField *senderView; // @synthesize senderView=_senderView;
@property(nonatomic) __weak MQAvatarImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) __weak RedpackHeaderBgView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)setScrollOffsetY:(double)arg1;
- (void)setDatas:(id)arg1;
- (void)awakeFromNib;
- (void)drawRect:(struct CGRect)arg1;

@end

