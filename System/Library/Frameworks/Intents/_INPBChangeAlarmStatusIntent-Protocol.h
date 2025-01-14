//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBAlarm, _INPBAlarmSearch, _INPBIntentMetadata;

@protocol _INPBChangeAlarmStatusIntent <NSObject>
+ (Class)alarmsType;
@property(nonatomic) _Bool hasOperation;
@property(nonatomic) int operation;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) unsigned long long alarmsCount;
@property(copy, nonatomic) NSArray *alarms;
@property(readonly, nonatomic) _Bool hasAlarmSearch;
@property(retain, nonatomic) _INPBAlarmSearch *alarmSearch;
- (int)StringAsOperation:(NSString *)arg1;
- (NSString *)operationAsString:(int)arg1;
- (_INPBAlarm *)alarmsAtIndex:(unsigned long long)arg1;
- (void)addAlarms:(_INPBAlarm *)arg1;
- (void)clearAlarms;
@end

