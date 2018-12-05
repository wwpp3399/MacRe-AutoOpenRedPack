//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TChatTextAttachmentCell.h"

@class NSView, TChatTextCollectionView;

@interface TXImageAttachmentCell : TChatTextAttachmentCell
{
    NSView *_imageContainerView;
    BOOL _isDrawed;
    unsigned long long _charIndex;
    TChatTextCollectionView *_controlTextView;
    id <TChatDrawSupportProtocol> _delegate;
}

@property __weak id <TChatDrawSupportProtocol> delegate; // @synthesize delegate=_delegate;
@property TChatTextCollectionView *controlTextView; // @synthesize controlTextView=_controlTextView;
@property(nonatomic) unsigned long long charIndex; // @synthesize charIndex=_charIndex;
- (void).cxx_destruct;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4;
- (void)drawImageInFrame:(struct CGRect)arg1;
- (void)updateImage;
- (void)refresh;
- (struct CGSize)cellSize;
- (id)init;

@end

