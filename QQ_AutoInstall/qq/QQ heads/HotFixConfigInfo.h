//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface HotFixConfigInfo : NSObject
{
    int _switchOn;
    NSArray *_unloadConfigList;
    NSArray *_loadConfigList;
}

@property(readonly, copy, nonatomic) NSArray *loadConfigList; // @synthesize loadConfigList=_loadConfigList;
@property(readonly, copy, nonatomic) NSArray *unloadConfigList; // @synthesize unloadConfigList=_unloadConfigList;
@property int switchOn; // @synthesize switchOn=_switchOn;
- (void).cxx_destruct;
- (id)initWithContentStr:(id)arg1;

@end

