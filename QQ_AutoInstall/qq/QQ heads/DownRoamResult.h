//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DownRoamResult : NSObject
{
    int _state;
    int _allMsgCount;
    int _newMsgCount;
    float _progress;
    long long _uin;
}

@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic) int newMsgCount; // @synthesize newMsgCount=_newMsgCount;
@property(nonatomic) int allMsgCount; // @synthesize allMsgCount=_allMsgCount;
@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) long long uin; // @synthesize uin=_uin;

@end

