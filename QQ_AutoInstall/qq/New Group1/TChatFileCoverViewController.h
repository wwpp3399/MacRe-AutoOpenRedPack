//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSDictionary, NSImageView, NSLayoutConstraint;

@interface TChatFileCoverViewController : NSViewController
{
    NSDictionary *_conversConfig;
    NSImageView *_backgroudImgView;
    NSImageView *_namedImgView;
    NSLayoutConstraint *_tailCons;
    NSLayoutConstraint *_nameCenterCons;
}

@property __weak NSLayoutConstraint *nameCenterCons; // @synthesize nameCenterCons=_nameCenterCons;
@property __weak NSLayoutConstraint *tailCons; // @synthesize tailCons=_tailCons;
@property __weak NSImageView *namedImgView; // @synthesize namedImgView=_namedImgView;
@property __weak NSImageView *backgroudImgView; // @synthesize backgroudImgView=_backgroudImgView;
- (void).cxx_destruct;
- (void)setupFileName:(id)arg1;
- (void)resetImages;
- (void)setupFolder:(BOOL)arg1;
- (void)loadCoverImages;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
