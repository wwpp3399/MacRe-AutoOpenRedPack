//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class MQAIOToolBar;

@interface MQAIOToolBox : NSView
{
    MQAIOToolBar *_container;
}

@property(nonatomic) MQAIOToolBar *container; // @synthesize container=_container;
- (void)drawRect:(struct CGRect)arg1;
- (void)addToContainer;
- (void)awakeFromNib;

@end

