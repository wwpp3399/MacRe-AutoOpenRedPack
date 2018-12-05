//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDateFormatter;

@interface CalendarUtil : NSObject
{
    int gregorianYear;
    int gregorianMonth;
    int gregorianDate;
    BOOL isGregorianLeap;
    int dayOfYear;
    int dayOfWeek;
    int chineseYear;
    int chineseMonth;
    int chineseDate;
    int sectionalTerm;
    int principleTerm;
    char daysInGregorianMonth[12];
    NSArray *stemNames;
    NSArray *branchNames;
    NSArray *animalNames;
    NSArray *daysOfMonth;
    NSArray *monthOfAlmanac;
    NSArray *daysOfAlmanac;
    NSArray *chineseMonthNames;
    NSArray *principleTermNames;
    NSArray *sectionalTermNames;
    NSDateFormatter *_strDateFormatter;
}

+ (id)getSolarTermDateStr:(id)arg1;
+ (id)calculationChinaCalendarWithDate:(id)arg1 dispalyHoliday:(BOOL)arg2;
+ (id)getChineseMonth:(int)arg1 m:(int)arg2 d:(int)arg3;
+ (id)getChineseDay:(int)arg1 m:(int)arg2 d:(int)arg3;
+ (id)exCalendarUtil;
- (void).cxx_destruct;
- (id)getDateString;
- (id)getChineseMonth;
- (id)getChineseYear;
- (int)principleTerm:(int)arg1 m:(int)arg2;
- (int)sectionalTerm:(int)arg1 m:(int)arg2;
- (int)computeSolarTerms;
- (int)nextChineseMonth:(int)arg1 m:(int)arg2;
- (int)daysInChineseMonth:(int)arg1 m:(int)arg2;
- (int)computeChineseFields;
- (int)dayOfWeek:(int)arg1 m:(int)arg2 d:(int)arg3;
- (int)daysInGregorianMonth:(int)arg1 m:(int)arg2;
- (int)dayOfYear:(int)arg1 m:(int)arg2 d:(int)arg3;
- (BOOL)isGregorianLeapYear:(int)arg1;
- (int)chineseMonth;
- (int)chineseDate;
- (id)monthOfAlmanac;
- (id)daysOfAlmanac;
- (void)resetYear:(int)arg1 month:(int)arg2 day:(int)arg3;
- (id)initWithGregorian;

@end

