//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface WalletStateInfo : NSObject <NSCoding>
{
    int _state;
    unsigned long long _createTime;
}

@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) unsigned long long createTime; // @synthesize createTime=_createTime;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

