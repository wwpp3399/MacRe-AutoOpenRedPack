//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSImage, NSMutableArray, NSString;

@interface MQStoreEmojiPackage : NSObject <NSCoding>
{
    BOOL _isDownloadingResource;
    unsigned int _packageID;
    unsigned int _expireTime;
    unsigned int _flags;
    int _wordingID;
    unsigned int _version;
    int _price;
    NSString *_uin;
    NSMutableArray *_emojis;
    NSString *_name;
    long long _feeType;
    long long _emojiType;
    unsigned long long _fileSize;
    double _updateTime;
    NSImage *_thumbnail;
    NSImage *_grayThumbnail;
}

@property(nonatomic) BOOL isDownloadingResource; // @synthesize isDownloadingResource=_isDownloadingResource;
@property(retain, nonatomic) NSImage *grayThumbnail; // @synthesize grayThumbnail=_grayThumbnail;
@property(retain, nonatomic) NSImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(nonatomic) int price; // @synthesize price=_price;
@property(nonatomic) double updateTime; // @synthesize updateTime=_updateTime;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(nonatomic) long long emojiType; // @synthesize emojiType=_emojiType;
@property(nonatomic) long long feeType; // @synthesize feeType=_feeType;
@property(nonatomic) int wordingID; // @synthesize wordingID=_wordingID;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned int expireTime; // @synthesize expireTime=_expireTime;
@property(nonatomic) unsigned int packageID; // @synthesize packageID=_packageID;
@property(retain, nonatomic) NSMutableArray *emojis; // @synthesize emojis=_emojis;
@property(copy, nonatomic) NSString *uin; // @synthesize uin=_uin;
- (void).cxx_destruct;
- (void)writeImageData:(id)arg1 toFilePath:(id)arg2;
- (id)imageFilePathForType:(long long)arg1;
- (id)imageNameForType:(long long)arg1;
- (id)emojisInfoFilePath;
- (id)filePath;
- (BOOL)isAllEmojisDowned;
- (void)removeResources;
- (void)syncEmojisToLocal;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

