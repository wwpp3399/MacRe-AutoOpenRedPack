//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MQAIOToolKitDelegate.h"

@class MQStoreEmoji, NSString;

@protocol MQAIOChatTootKitViewControllerDelegate <MQAIOToolKitDelegate>
- (void)insertEmojiFacesAtIndex:(int)arg1;
- (void)insertCustomFace:(NSString *)arg1;
- (void)insertSyetemFacesAtIndex:(int)arg1;
- (void)selectStoreFace:(MQStoreEmoji *)arg1;

@optional
- (void)didClickOnEmptySpace;
@end

