//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAudioPlayerDelegate.h"
#import "AudioSessionActiveDelegate.h"

@class AVAudioPlayer, NSString;

@interface VideoRingPlayer : NSObject <AVAudioPlayerDelegate, AudioSessionActiveDelegate>
{
    AVAudioPlayer *_audioPlayer;
    BOOL _isSoundLooping;
    BOOL _isSoundPlaying;
    BOOL _keepVibrate;
    int _vibTimes;
    BOOL _needResetPlayMode;
}

+ (id)GetInstance;
@property(nonatomic) int vibTimes; // @synthesize vibTimes=_vibTimes;
@property(nonatomic) BOOL keepVibrate; // @synthesize keepVibrate=_keepVibrate;
@property(nonatomic) BOOL isSoundPlaying; // @synthesize isSoundPlaying=_isSoundPlaying;
@property(readonly, nonatomic) BOOL isSoundLooping; // @synthesize isSoundLooping=_isSoundLooping;
- (void).cxx_destruct;
- (void)stopVibrate;
- (void)startVibrate;
- (void)vibrate;
- (void)audioPlayerEndInterruption:(id)arg1;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2;
- (void)stopVoice;
- (void)playVoice:(id)arg1;
- (void)stopAudio:(BOOL)arg1;
- (void)resetPlayMode;
- (void)stopResetPlayMode;
- (void)delayResetPlayMode;
- (void)pauseAudio;
- (void)playAudio:(id)arg1 isHeadMode:(BOOL)arg2 isMute:(BOOL)arg3 loopTime:(int)arg4 needNotifyOther:(BOOL)arg5 needChangeRoute:(BOOL)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
