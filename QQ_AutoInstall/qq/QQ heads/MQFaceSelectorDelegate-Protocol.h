//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MQFaceUnit, NSArray, NSEvent, NSImage, NSString, NSView;

@protocol MQFaceSelectorDelegate <NSObject>

@optional
- (MQFaceUnit *)getFaceUnit:(long long)arg1 pageIndex:(long long)arg2;
- (unsigned long long)loadingStateAtIndex:(long long)arg1 pageIndex:(long long)arg2;
- (unsigned long long)loadingStateAtIndex:(long long)arg1;
- (BOOL)facePanelRespondsHoverEvent;
- (void)rightClickIndex:(long long)arg1 evnet:(NSEvent *)arg2;
- (void)rightMouseDown:(NSEvent *)arg1;
- (double)radiusOfTopEdge;
- (void)insertUnitForDebug:(MQFaceUnit *)arg1;
- (BOOL)addFaces:(NSArray *)arg1 toType:(int)arg2;
- (BOOL)deleteFacesAtIndex:(int)arg1 withType:(int)arg2;
- (void)faceSelectorShowDelayCloseWindow;
- (void)userDataReport;
- (int)preViewPosByMousePos:(int)arg1;
- (int)preViewSize;
- (void)faceSelectorDidGroupIdChange:(unsigned long long)arg1;
- (void)faceSelectorDidSelectFaceAtIndex:(long long)arg1;
- (void)faceSelectorTransToQuickMode:(BOOL)arg1;
- (void)faceSelectorTransToNormalMode:(BOOL)arg1;
- (long long)previewRectOffset;
- (long long)previewOriginOffset;
- (struct CGSize)faceSizePageIndex:(long long)arg1;
- (BOOL)acceptNewFaces;
- (void)setCellImage:(struct CGRect)arg1 view:(NSView *)arg2 index:(long long)arg3 pageIndex:(long long)arg4;
- (BOOL)inNumberOfFacesAtIndex:(long long)arg1 pageIndex:(long long)arg2;
- (id)previewFacesAtIndex:(long long)arg1 pageIndex:(long long)arg2;
- (id)facesAtIndex:(long long)arg1 pageIndex:(long long)arg2;
- (void)addFaces:(NSArray *)arg1;
- (void)draggedImage:(NSImage *)arg1 endedAtPos:(int)arg2 operation:(unsigned long long)arg3;
- (NSString *)faceIdAtIndex:(int)arg1;
- (int)numberOfFaces;
- (NSImage *)previewFacesAtIndex:(int)arg1;
- (NSImage *)facesAtIndex:(int)arg1;
@end

