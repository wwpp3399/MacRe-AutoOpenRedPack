//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MQSessionID, TChatHisLeftView, TChatHisSeacherModel;

@protocol TChatHisLeftViewDelegate <NSObject>
- (void)searchOrFilterNotResult;
- (void)searchCountChanged:(long long)arg1;
- (void)sessionMenuItemChanged:(unsigned long long)arg1;
- (void)timeMenuItemChanged:(unsigned long long)arg1;
- (void)ItemSelectChanged:(TChatHisLeftView *)arg1 searcherModel:(TChatHisSeacherModel *)arg2;
- (void)ItemSelectChanged:(TChatHisLeftView *)arg1 sessionID:(MQSessionID *)arg2;
@end
