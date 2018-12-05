//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BHMessageModel, QQRecentMessageModel;

@protocol RecallProcessorInterface <NSObject>
- (void)solveRecallNotify:(struct RecallModel *)arg1 isOnline:(BOOL)arg2;

@optional
- (BHMessageModel *)convertRecallItemToMsg:(struct RecallItem *)arg1 recallModel:(struct RecallModel *)arg2 msgType:(int)arg3;
- (QQRecentMessageModel *)getRecentMessageModelByMsg:(BHMessageModel *)arg1;
- (void)setRecallModelC2CTmpData:(struct RecallModelForC2C *)arg1 byMsg:(BHMessageModel *)arg2;
- (struct UinTypeUserDef *)geneC2CUserDef:(BHMessageModel *)arg1;
@end

