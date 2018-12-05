//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface MQStoreEmoji : NSObject <NSCoding>
{
    BOOL _isRoam;
    unsigned int _packageID;
    unsigned int _imageWidth;
    unsigned int _imageHeight;
    unsigned int _displayWidth;
    unsigned int _displayHeight;
    NSString *_uin;
    NSString *_emojiID;
    NSString *_name;
    NSString *_key;
    long long _subType;
    long long _mediaType;
    NSString *_roamPath;
}

@property(copy, nonatomic) NSString *roamPath; // @synthesize roamPath=_roamPath;
@property(nonatomic) BOOL isRoam; // @synthesize isRoam=_isRoam;
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) long long subType; // @synthesize subType=_subType;
@property(nonatomic) unsigned int displayHeight; // @synthesize displayHeight=_displayHeight;
@property(nonatomic) unsigned int displayWidth; // @synthesize displayWidth=_displayWidth;
@property(nonatomic) unsigned int imageHeight; // @synthesize imageHeight=_imageHeight;
@property(nonatomic) unsigned int imageWidth; // @synthesize imageWidth=_imageWidth;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *emojiID; // @synthesize emojiID=_emojiID;
@property(nonatomic) unsigned int packageID; // @synthesize packageID=_packageID;
@property(copy, nonatomic) NSString *uin; // @synthesize uin=_uin;
- (void).cxx_destruct;
- (id)description;
- (void)getEmojiGifDataWithBlock:(id)arg1;
- (id)getGifDataViaPath:(id *)arg1;
- (id)emojiData;
- (id)emojiImage;
- (id)emojiPreviewImage;
@property(readonly, nonatomic) BOOL downloaded;
- (id)pngFilePath;
- (id)gifFilePath;
- (id)downloadURL;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
