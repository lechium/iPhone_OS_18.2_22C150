//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBIntentMetadata, _INPBSettingMetadata, _INPBTemporalEventTrigger;

@protocol _INPBSetBinarySettingIntent <NSObject>
@property(readonly, nonatomic) _Bool hasTemporalEventTrigger;
@property(retain, nonatomic) _INPBTemporalEventTrigger *temporalEventTrigger;
@property(readonly, nonatomic) _Bool hasSettingMetadata;
@property(retain, nonatomic) _INPBSettingMetadata *settingMetadata;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(nonatomic) _Bool hasBinaryValue;
@property(nonatomic) int binaryValue;
- (int)StringAsBinaryValue:(NSString *)arg1;
- (NSString *)binaryValueAsString:(int)arg1;
@end

