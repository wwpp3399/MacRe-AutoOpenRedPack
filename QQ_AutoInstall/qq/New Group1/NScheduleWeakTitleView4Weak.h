//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TXColorView.h"

@class NSArray, NSDate, NSMutableArray;

@interface NScheduleWeakTitleView4Weak : TXColorView
{
    long long selectIndex;
    NSMutableArray *dayCellArray;
    NSArray *layouts;
    NSMutableArray *constraints;
    BOOL isLargeMode;
    id _selectedDateBlock;
    NSDate *_date;
}

@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) id selectedDateBlock; // @synthesize selectedDateBlock=_selectedDateBlock;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (void)buttonClick:(id)arg1;
- (void)updateLayout;
- (id)init;

@end

