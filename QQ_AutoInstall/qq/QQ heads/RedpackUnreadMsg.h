//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BHMessageModel;

@interface RedpackUnreadMsg : NSObject
{
    int _chatType;
    long long _sessionUin;
    BHMessageModel *_msgModel;
}

@property(nonatomic) int chatType; // @synthesize chatType=_chatType;
@property(retain, nonatomic) BHMessageModel *msgModel; // @synthesize msgModel=_msgModel;
@property(nonatomic) long long sessionUin; // @synthesize sessionUin=_sessionUin;
- (void).cxx_destruct;

@end

