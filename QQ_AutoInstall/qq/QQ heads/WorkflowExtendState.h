//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface WorkflowExtendState : NSObject
{
    unsigned int _readState;
    unsigned int _deleteState;
    NSMutableArray *_deletedTimeSpans;
}

+ (id)decodeFromPB:(const struct WorkflowExtendState *)arg1;
@property(retain, nonatomic) NSMutableArray *deletedTimeSpans; // @synthesize deletedTimeSpans=_deletedTimeSpans;
@property(nonatomic) unsigned int deleteState; // @synthesize deleteState=_deleteState;
@property(nonatomic) unsigned int readState; // @synthesize readState=_readState;
- (void).cxx_destruct;
- (id)description;
- (void)encodeToPB:(struct WorkflowExtendState *)arg1;

@end

