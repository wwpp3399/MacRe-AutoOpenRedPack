//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TChatPickerDataProtocol.h"

@class NSString;

@interface TChatPickerDataAdapter : NSObject <TChatPickerDataProtocol>
{
    id _data;
}

@property(retain, nonatomic) id data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)setSearchInfo:(id)arg1 forData:(id)arg2;
- (id)searchInfoForData:(id)arg1;
- (void)cleanCacheMembers:(id)arg1;
- (id)members;
- (id)sdkCachedMembers;
- (id)subTitle;
- (id)displayName:(id)arg1 withDiscussUin:(id)arg2;
- (id)displayName:(id)arg1 withGroupCode:(id)arg2;
- (id)title;
- (id)icon;
- (long long)typeForData:(id)arg1;
- (id)uinForData:(id)arg1;
- (id)groupMemberForData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
