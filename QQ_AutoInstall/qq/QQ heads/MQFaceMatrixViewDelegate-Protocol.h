//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MQFaceMatrixView, NSEvent;

@protocol MQFaceMatrixViewDelegate <NSObject>
- (void)mouseMoved:(MQFaceMatrixView *)arg1 index:(long long)arg2 event:(NSEvent *)arg3 selectedRect:(struct CGRect)arg4;
- (void)mouseExited:(MQFaceMatrixView *)arg1 index:(long long)arg2 event:(NSEvent *)arg3;
- (void)mouseEntered:(MQFaceMatrixView *)arg1 index:(long long)arg2 event:(NSEvent *)arg3;
@end

