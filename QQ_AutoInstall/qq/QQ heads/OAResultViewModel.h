//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TChatAIOTipViewModel.h"

@class NSString, TChatBaseViewModel;

@interface OAResultViewModel : TChatAIOTipViewModel
{
    BOOL _result;
    int _source;
    NSString *_err;
    NSString *_fileName;
    NSString *_oaUrl;
    NSString *_shareStr;
    TChatBaseViewModel *_fileModel;
    id <OAResultProtocol> _oaResultDelegate;
}

@property(nonatomic) __weak id <OAResultProtocol> oaResultDelegate; // @synthesize oaResultDelegate=_oaResultDelegate;
@property(nonatomic) __weak TChatBaseViewModel *fileModel; // @synthesize fileModel=_fileModel;
@property(retain, nonatomic) NSString *shareStr; // @synthesize shareStr=_shareStr;
@property(retain, nonatomic) NSString *oaUrl; // @synthesize oaUrl=_oaUrl;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(nonatomic) int source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *err; // @synthesize err=_err;
@property(nonatomic) BOOL result; // @synthesize result=_result;
- (void).cxx_destruct;
- (void)removeFromAIO;
- (id)buildAttributeString;
- (id)text;
- (id)initWithMessageModel:(id)arg1;

@end

