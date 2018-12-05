//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface MQScreenShareMarkMessageSender : NSObject
{
    NSObject<OS_dispatch_queue> *_message_send_queue;
}

+ (id)currentVersion;
+ (id)sharedSender;
@property(retain) NSObject<OS_dispatch_queue> *message_send_queue; // @synthesize message_send_queue=_message_send_queue;
- (void).cxx_destruct;
- (void)sendMessageModelToDiscussGroup:(id)arg1;
- (void)sendMarkMessageModelToDiscussGroup:(id)arg1 completion:(id)arg2;
- (void)sendMarkMessageModelToGroup:(id)arg1 completion:(id)arg2;
- (void)sendMarkMessageModelToC2C:(id)arg1 completion:(id)arg2;
- (void)handleAfterSplitMessage:(id)arg1 completion:(id)arg2;
- (void)sendMessageModel:(id)arg1 completion:(id)arg2;
- (id)init;

@end

