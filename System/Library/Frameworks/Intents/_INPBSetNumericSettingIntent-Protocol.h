//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBIntentMetadata, _INPBNumericSettingValue, _INPBSettingMetadata, _INPBTemporalEventTrigger;

@protocol _INPBSetNumericSettingIntent <NSObject>
@property(readonly, nonatomic) _Bool hasTemporalEventTrigger;
@property(retain, nonatomic) _INPBTemporalEventTrigger *temporalEventTrigger;
@property(readonly, nonatomic) _Bool hasSettingMetadata;
@property(retain, nonatomic) _INPBSettingMetadata *settingMetadata;
@property(readonly, nonatomic) _Bool hasNumericValue;
@property(retain, nonatomic) _INPBNumericSettingValue *numericValue;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(nonatomic) _Bool hasBoundedValue;
@property(nonatomic) int boundedValue;
@property(nonatomic) _Bool hasAction;
@property(nonatomic) int action;
- (int)StringAsBoundedValue:(NSString *)arg1;
- (NSString *)boundedValueAsString:(int)arg1;
- (int)StringAsAction:(NSString *)arg1;
- (NSString *)actionAsString:(int)arg1;
@end

