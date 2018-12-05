//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDate.h"

@interface NSDate (Ex)
+ (long long)getDaysFrom:(id)arg1 To:(id)arg2;
+ (int)getDay:(id)arg1;
+ (int)getMonth:(id)arg1;
+ (int)getYear:(id)arg1;
+ (double)rectifyTimeIntervalWith:(id)arg1 rectifyTimeInterval:(double)arg2;
+ (double)hourForTimeInterval:(double)arg1;
+ (id)exChineseCalendar;
+ (id)exGregorianCalendar;
+ (id)exDateComponents;
+ (id)exDateFormatter;
+ (id)exLocale;
+ (BOOL)isSameMonth:(id)arg1 date:(id)arg2;
+ (BOOL)isSameDate:(id)arg1 date:(id)arg2;
+ (id)locateDate;
- (long long)firstWeekDayInMonth;
- (long long)totalDaysInMonth;
- (id)nextMonthDate;
- (id)previousMonthDate;
- (long long)dateYear;
- (long long)dateMonth;
- (long long)dateDay;
- (double)endTimeInterval;
- (double)beginTimeInterval;
- (id)dateWithTimeString;
- (id)exStringWithFormat:(id)arg1;
- (id)timeString;
- (id)dateString;
- (id)cleanedDate;
- (id)dateWithAddedMonthsJudgeLastDay:(int)arg1 currentDay:(long long)arg2;
- (id)dateWithAddedMonths:(int)arg1;
- (id)dateWithAddedDays:(int)arg1;
- (id)dateWithYear:(int)arg1 month:(int)arg2 day:(unsigned long long)arg3;
- (id)timeWithHour:(int)arg1 andMinute:(int)arg2;
- (id)dateWithAddedMinutes:(int)arg1;
- (id)dateWithAddedHours:(int)arg1;
- (BOOL)isEarlierDate:(id)arg1;
@end

