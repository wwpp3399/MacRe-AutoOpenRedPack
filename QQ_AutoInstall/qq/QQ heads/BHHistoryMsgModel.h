//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface BHHistoryMsgModel : NSObject
{
    BOOL _inProcess;
    int _sessType;
    long long _uin;
    unsigned long long _filterType;
    id _onDeleteMessage;
    id _onCleanMessage;
    NSMutableArray *_dbMsgModelArray;
    id _completionBlock;
    NSArray *__UIMsgCache;
}

@property(retain, nonatomic) NSArray *_UIMsgCache; // @synthesize _UIMsgCache=__UIMsgCache;
@property(nonatomic) BOOL inProcess; // @synthesize inProcess=_inProcess;
@property(copy, nonatomic) id completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) NSMutableArray *dbMsgModelArray; // @synthesize dbMsgModelArray=_dbMsgModelArray;
@property(copy, nonatomic) id onCleanMessage; // @synthesize onCleanMessage=_onCleanMessage;
@property(copy, nonatomic) id onDeleteMessage; // @synthesize onDeleteMessage=_onDeleteMessage;
@property(readonly, nonatomic) unsigned long long filterType; // @synthesize filterType=_filterType;
@property(readonly, nonatomic) int sessType; // @synthesize sessType=_sessType;
@property(readonly, nonatomic) long long uin; // @synthesize uin=_uin;
- (void).cxx_destruct;
- (void)sortDbMessageArray;
- (void)gotoMessageContext:(id)arg1 completion:(id)arg2;
- (void)gotoMessageDate:(id)arg1 completion:(id)arg2;
- (void)loadMoreMessage_Down:(id)arg1;
- (void)loadMoreMessage_Up:(id)arg1;
- (id)filterMessageArray:(id)arg1;
@property(readonly, nonatomic) NSArray *msgArray;
- (void)onDeleteMessageArray:(id)arg1;
- (void)onCleanMessageWithUin;
- (void)onDeleteMessageNotify:(id)arg1;
- (const char *)identityStr;
- (void)dealloc;
- (id)initWithUin:(long long)arg1 sessType:(int)arg2 filter:(unsigned long long)arg3;

@end

