//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPopUpButton.h"

@class NSDictionary;

@interface OnlineStateImagePopUpButton : NSPopUpButton
{
    NSDictionary *attributes;
    struct CGSize _drawImageSize;
}

@property(nonatomic) struct CGSize drawImageSize; // @synthesize drawImageSize=_drawImageSize;
@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
