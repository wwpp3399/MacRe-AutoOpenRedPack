//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseSingleton.h"

@class NSArray, NSMutableDictionary;

@interface QQGroupDataCache : QQBaseSingleton
{
    NSMutableDictionary *_groupCache;
    NSMutableDictionary *_groupMemberCache;
}

- (void).cxx_destruct;
- (void)removeGroupMember:(unsigned long long)arg1 groupCode:(unsigned long long)arg2;
- (id)groupMemberDictWithGroupCode:(unsigned long long)arg1;
- (void)setGroupMembers:(id)arg1 forKey:(unsigned long long)arg2;
- (id)groupMemberListWithGroupCode:(unsigned long long)arg1;
- (void)addGroupMember:(id)arg1;
- (id)groupMemberWithUIN:(unsigned long long)arg1 groupCode:(unsigned long long)arg2;
- (id)groupForKey:(unsigned long long)arg1;
- (void)removeGroup:(unsigned long long)arg1;
- (void)addGroup:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *groupCache;
@property(readonly, copy, nonatomic) NSArray *groupList;
- (id)init;

@end

