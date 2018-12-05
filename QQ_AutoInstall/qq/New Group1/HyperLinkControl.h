//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextField.h"

@class NSMutableAttributedString, NSString;

@interface HyperLinkControl : NSTextField
{
    NSString *hyperLinkStr;
    NSMutableAttributedString *m_StringUnderline;
    NSMutableAttributedString *m_StringNormal;
    int textNotifyTracking;
    int inTracking;
    int isCanClick;
    id <HyperLinkControlDelegate> _controlDelegate;
}

@property(nonatomic) __weak id <HyperLinkControlDelegate> controlDelegate; // @synthesize controlDelegate=_controlDelegate;
- (void).cxx_destruct;
- (void)setDefaultAtrribute;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)resetCursorRects;
- (int)isCanClick;
- (void)setIsCanClick:(int)arg1;
- (int)textNotifyTracking;
- (void)setTextNotifyTracking:(int)arg1;
- (id)hyperLinkStr;
- (void)setHyperLinkStr:(id)arg1;
- (void)awakeFromNib;
- (id)init;
- (void)internalInit;

@end

