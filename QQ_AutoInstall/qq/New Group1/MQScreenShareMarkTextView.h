//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextField.h"

@interface MQScreenShareMarkTextView : NSTextField
{
    id <TextLogicDelegate> _logicDelegate;
}

+ (id)textComponent;
@property id <TextLogicDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (id)hitTest:(struct CGPoint)arg1;

@end

