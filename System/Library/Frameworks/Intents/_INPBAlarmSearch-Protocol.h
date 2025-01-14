//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBDataString, _INPBDateTimeRangeValue;

@protocol _INPBAlarmSearch <NSObject>
@property(readonly, nonatomic) _Bool hasTime;
@property(retain, nonatomic) _INPBDateTimeRangeValue *time;
@property(nonatomic) _Bool hasPeriod;
@property(nonatomic) int period;
@property(readonly, nonatomic) _Bool hasLabel;
@property(retain, nonatomic) _INPBDataString *label;
@property(nonatomic) _Bool hasIsMeridianInferred;
@property(nonatomic) _Bool isMeridianInferred;
@property(nonatomic) _Bool hasIncludeSleepAlarm;
@property(nonatomic) _Bool includeSleepAlarm;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(copy, nonatomic) NSString *identifier;
@property(nonatomic) _Bool hasAlarmSearchStatus;
@property(nonatomic) int alarmSearchStatus;
@property(nonatomic) _Bool hasAlarmReferenceType;
@property(nonatomic) int alarmReferenceType;
- (int)StringAsPeriod:(NSString *)arg1;
- (NSString *)periodAsString:(int)arg1;
- (int)StringAsAlarmSearchStatus:(NSString *)arg1;
- (NSString *)alarmSearchStatusAsString:(int)arg1;
- (int)StringAsAlarmReferenceType:(NSString *)arg1;
- (NSString *)alarmReferenceTypeAsString:(int)arg1;
@end

