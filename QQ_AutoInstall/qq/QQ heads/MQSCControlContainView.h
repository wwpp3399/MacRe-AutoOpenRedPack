//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSAttributedString, NSColor;

@interface MQSCControlContainView : NSView
{
    NSColor *_backColor;
    NSColor *_borderColor;
    NSAttributedString *_text;
    struct CGPoint _location;
}

@property(retain) NSColor *backColor; // @synthesize backColor=_backColor;
@property(retain) NSColor *borderColor; // @synthesize borderColor=_borderColor;
- (void).cxx_destruct;
- (id)text;
- (void)setText:(id)arg1;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

