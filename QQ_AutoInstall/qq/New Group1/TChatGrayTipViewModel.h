//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TChatMessageViewModel.h"

@interface TChatGrayTipViewModel : TChatMessageViewModel
{
    unsigned long long _alignment;
}

@property unsigned long long alignment; // @synthesize alignment=_alignment;
- (id)attributedStringFormPasteboard;
- (id)headString;
- (id)bodyString;
- (double)getCellHeight;
- (BOOL)copyHasEnter;
- (id)buildAttributeString;
- (id)initWithMessageModel:(id)arg1;
- (id)init;

@end

