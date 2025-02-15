//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBDataString, _INPBDateTimeRange, _INPBIntentMetadata;

@protocol _INPBCreateAlarmIntent <NSObject>
@property(readonly, nonatomic) _Bool hasTime;
@property(retain, nonatomic) _INPBDateTimeRange *time;
@property(nonatomic) _Bool hasRelativeOffsetInMinutes;
@property(nonatomic) int relativeOffsetInMinutes;
@property(readonly, nonatomic) _Bool hasLabel;
@property(retain, nonatomic) _INPBDataString *label;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) unsigned long long alarmRepeatScheduleOptionsCount;
@property(readonly, nonatomic) int *alarmRepeatScheduleOptions;
- (int)StringAsAlarmRepeatScheduleOptions:(NSString *)arg1;
- (NSString *)alarmRepeatScheduleOptionsAsString:(int)arg1;
- (void)setAlarmRepeatScheduleOptions:(int *)arg1 count:(unsigned long long)arg2;
- (int)alarmRepeatScheduleOptionsAtIndex:(unsigned long long)arg1;
- (void)addAlarmRepeatScheduleOptions:(int)arg1;
- (void)clearAlarmRepeatScheduleOptions;
@end

