//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MQWebJSBridgeDelegate.h"

@class NSString;

@interface MQGroupBulletinJSImp : NSObject <MQWebJSBridgeDelegate>
{
}

- (id)scriptObjectKey;
- (id)domain;
- (void)captueOpenWebPicEventRequest:(id)arg1;
- (void)webWillSendRequest:(id)arg1;
- (id)cookies;
- (void)showPhoto:(id)arg1;
- (void)openDownloadWebPic:(id)arg1;
- (id)CallHummerApi:(id)arg1;
- (id)PlayBulletinVideo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

