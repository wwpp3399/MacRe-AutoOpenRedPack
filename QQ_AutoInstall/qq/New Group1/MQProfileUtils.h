//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MQProfileUtils : NSObject
{
}

+ (void)profileHoverImageSize:(struct CGSize)arg1 withNormalImage:(id)arg2 hoverIcon:(id)arg3 completionBlock:(id)arg4;
+ (void)profileHoverImageSize:(struct CGSize)arg1 withNormalImage:(id)arg2 completionBlock:(id)arg3;
+ (void)setupButton:(id)arg1 withString:(id)arg2 withColor:(id)arg3;
+ (id)getBigHeadImageWithUin:(unsigned long long)arg1;
+ (id)getHeadImagePath:(unsigned long long)arg1;
+ (id)getHeader:(unsigned long long)arg1;
+ (id)profileRoundedImage:(id)arg1;
+ (void)profileRoundedImageOfSession:(id)arg1 completionBlock:(id)arg2;
+ (id)imageFromCGImageRef:(struct CGImage *)arg1;
+ (id)blurCIImage:(id)arg1;
+ (id)CPUonlyCIContextFromGraphicsContext:(id)arg1 withFlag:(BOOL)arg2;
+ (void)blurHeaderBackgroundWithSessionId:(id)arg1 completionBlock:(id)arg2;
+ (id)profileButtonWhiteColorString:(id)arg1;
+ (id)contactInfoIdentities;
+ (id)contactInfoBloodType;
+ (id)contactInfoConstellation;
+ (id)contactInfoAnimals;
+ (id)contactInfoBirthDaysInDate:(id)arg1;
+ (id)contactInfoBirthMonths;
+ (id)contactInfoBirthYears;

@end

