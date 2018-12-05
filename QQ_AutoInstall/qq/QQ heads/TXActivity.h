//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TXBreadcrumb.h"

@interface TXActivity : TXBreadcrumb
{
    TXBreadcrumb *_breadcrumb;
    TXActivity *_headActivity;
    long long _depthNumber;
    long long _activityIndex;
    unsigned long long _timeStart;
    unsigned long long _timeEnd;
}

+ (id)activityWithHeadActivity:(id)arg1;
+ (id)activityWithBreadcrumb:(id)arg1;
+ (id)noBreadcrumbActivity;
@property(nonatomic) unsigned long long timeEnd; // @synthesize timeEnd=_timeEnd;
@property(nonatomic) unsigned long long timeStart; // @synthesize timeStart=_timeStart;
@property(nonatomic) long long activityIndex; // @synthesize activityIndex=_activityIndex;
@property(nonatomic) long long depthNumber; // @synthesize depthNumber=_depthNumber;
@property(nonatomic) __weak TXActivity *headActivity; // @synthesize headActivity=_headActivity;
@property(nonatomic) __weak TXBreadcrumb *breadcrumb; // @synthesize breadcrumb=_breadcrumb;
- (void).cxx_destruct;
- (void)end;
- (id)description;
- (id)jsonData;
- (BOOL)isBreadcrumbRoot;
- (void)addActivity:(id)arg1;
- (id)init;

@end
