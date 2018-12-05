//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MQWeatherAnimationBaseLayer.h"

#import "WeatherLayerCAAnimation.h"

@class CALayer, NSString;

@interface MQWeatherSunnyLayer : MQWeatherAnimationBaseLayer <WeatherLayerCAAnimation>
{
    CALayer *_halo;
    CALayer *_iris1;
    CALayer *_iris2;
}

- (void).cxx_destruct;
- (void)startAnimation;
- (void)setAnimationUIWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
