//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBDateTimeRange, _INPBIntentMetadata, _INPBWellnessMetadataPair, _INPBWellnessUnitType, _INPBWellnessValue;

@protocol _INPBSaveHealthSampleIntent <NSObject>
+ (Class)valuesType;
+ (Class)sampleMetadataType;
@property(readonly, nonatomic) unsigned long long valuesCount;
@property(copy, nonatomic) NSArray *values;
@property(readonly, nonatomic) _Bool hasUnit;
@property(retain, nonatomic) _INPBWellnessUnitType *unit;
@property(readonly, nonatomic) unsigned long long sampleMetadatasCount;
@property(copy, nonatomic) NSArray *sampleMetadatas;
@property(readonly, nonatomic) _Bool hasRecordDate;
@property(retain, nonatomic) _INPBDateTimeRange *recordDate;
@property(nonatomic) _Bool hasObjectType;
@property(nonatomic) int objectType;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
- (_INPBWellnessValue *)valuesAtIndex:(unsigned long long)arg1;
- (void)addValues:(_INPBWellnessValue *)arg1;
- (void)clearValues;
- (_INPBWellnessMetadataPair *)sampleMetadataAtIndex:(unsigned long long)arg1;
- (void)addSampleMetadata:(_INPBWellnessMetadataPair *)arg1;
- (void)clearSampleMetadatas;
- (int)StringAsObjectType:(NSString *)arg1;
- (NSString *)objectTypeAsString:(int)arg1;
@end

