//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NetWorkDetector : NSObject
{
    BOOL _isMSFDetectFinish;
    BOOL _isSSODetectFinish;
    BOOL _isHttpDetectFinish;
    BOOL _isMSFCanConnect;
    BOOL _isSSOCanConnect;
    BOOL _isHttpCanConnect;
    id _callback;
}

- (void).cxx_destruct;
- (void)checkIsFinish;
- (void)detect:(id)arg1;
- (void)dealloc;

@end

