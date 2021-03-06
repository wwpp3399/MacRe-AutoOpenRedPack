//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseSingleton.h"

@class NSMutableDictionary, NSString;

@interface MQRoamFaceDownHelper : QQBaseSingleton
{
    NSString *_RoamFaceDownRecordLock;
    NSMutableDictionary *_downloadRecord;
    NSMutableDictionary *_roamIdentifierPathInfo;
}

@property(retain, nonatomic) NSMutableDictionary *roamIdentifierPathInfo; // @synthesize roamIdentifierPathInfo=_roamIdentifierPathInfo;
@property(retain, nonatomic) NSMutableDictionary *downloadRecord; // @synthesize downloadRecord=_downloadRecord;
- (void).cxx_destruct;
- (BOOL)isEqualRoam:(id)arg1 path:(id)arg2;
- (void)removeRoamIdentifier:(id)arg1;
- (id)pathByRoamIdentifier:(id)arg1;
- (void)saveRoamIdentifier:(id)arg1 path:(id)arg2;
- (void)loadRoamIdentifierInfo;
- (id)roamIdentifierPath;
- (unsigned long long)stateWithUnit:(id)arg1;
- (void)updateUnitState:(unsigned long long)arg1 unit:(id)arg2;
- (id)init;

@end

