//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ProfileActiveHeaderView.h"

@class Group;

@interface ProfileGroupHeaderView : ProfileActiveHeaderView
{
    Group *_group;
}

@property(retain, nonatomic) Group *group; // @synthesize group=_group;
- (void).cxx_destruct;
- (void)initGroupBasicInfo;
- (void)updateHeadInfoByUin:(unsigned long long)arg1;
- (void)initHeaderView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

