//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BHStructMessageParent.h"

@class BHStructMessageAudio, BHStructMessageImage, BHStructMessagePicture, BHStructMessageSummary, BHStructMessageTitle, BHStructMessageVideo, BHStructMessageVote, NSString;

@interface BHStructMessageItem : BHStructMessageParent
{
    long long _layout;
    NSString *_commonData;
    BHStructMessageTitle *_title;
    BHStructMessageSummary *_summary;
    BHStructMessagePicture *_picture;
    BHStructMessageImage *_image;
    BHStructMessageAudio *_audio;
    BHStructMessageVote *_vote;
    BHStructMessageVideo *_video;
}

@property(readonly, nonatomic) BHStructMessageVideo *video; // @synthesize video=_video;
@property(readonly, nonatomic) BHStructMessageVote *vote; // @synthesize vote=_vote;
@property(readonly, nonatomic) BHStructMessageAudio *audio; // @synthesize audio=_audio;
@property(readonly, nonatomic) BHStructMessageImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) BHStructMessagePicture *picture; // @synthesize picture=_picture;
@property(readonly, nonatomic) BHStructMessageSummary *summary; // @synthesize summary=_summary;
@property(readonly, nonatomic) BHStructMessageTitle *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *commonData; // @synthesize commonData=_commonData;
@property(nonatomic) long long layout; // @synthesize layout=_layout;
- (void).cxx_destruct;
- (void)addHorizontalRule;
- (id)addVideoWithCoverURL:(id)arg1 preWidth:(double)arg2 preHeight:(double)arg3 fullTime:(id)arg4;
- (id)addVoteWithCoverURL:(id)arg1;
- (id)addAudioWithCoverURL:(id)arg1 srcURL:(id)arg2;
- (id)addImageWithMD5:(id)arg1 UUID:(id)arg2;
- (id)addPictureWithCoverURL:(id)arg1;
- (id)addSummary:(id)arg1;
- (id)addTitle:(id)arg1;
- (id)node;
- (id)elementName;

@end

