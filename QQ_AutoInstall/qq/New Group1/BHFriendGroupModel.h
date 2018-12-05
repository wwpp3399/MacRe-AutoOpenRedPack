//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel_Internal.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSMutableArray, NSString;

@interface BHFriendGroupModel : QQModel_Internal <NSCopying, NSMutableCopying>
{
    NSString *_groupId;
    NSString *_groupName;
    NSString *_count;
    NSString *_onlineCount;
    BOOL _sortId;
    BOOL expand;
    BOOL _isMsfGroup;
    NSMutableArray *_friendList;
    struct _NSRange _matchRange;
    NSString *memo;
    NSString *_groupUin;
}

@property(copy, nonatomic) NSString *onlineCount; // @synthesize onlineCount=_onlineCount;
@property(copy, nonatomic) NSString *count; // @synthesize count=_count;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(nonatomic) struct _NSRange matchRange; // @synthesize matchRange=_matchRange;
@property(copy, nonatomic) NSString *groupUin; // @synthesize groupUin=_groupUin;
@property(retain, nonatomic) NSString *memo; // @synthesize memo;
@property(retain, nonatomic) NSMutableArray *friendList; // @synthesize friendList=_friendList;
@property(nonatomic) BOOL isMsfGroup; // @synthesize isMsfGroup=_isMsfGroup;
@property BOOL sortId; // @synthesize sortId=_sortId;
@property(nonatomic) BOOL expand; // @synthesize expand;
- (void).cxx_destruct;
- (id)description;
- (long long)compareByTimeAsc:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init:(id)arg1:(id)arg2:(id)arg3:(id)arg4:(BOOL)arg5;
- (id)init:(id)arg1:(id)arg2:(id)arg3:(id)arg4;
- (id)init;

@end

