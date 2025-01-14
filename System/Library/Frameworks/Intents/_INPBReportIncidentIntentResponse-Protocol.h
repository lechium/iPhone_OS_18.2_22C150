//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBLocation, _INPBSupportedTrafficIncidentType;

@protocol _INPBReportIncidentIntentResponse <NSObject>
+ (Class)supportedTypeType;
@property(readonly, nonatomic) unsigned long long transportTypesCount;
@property(readonly, nonatomic) int *transportTypes;
@property(readonly, nonatomic) unsigned long long supportedTypesCount;
@property(copy, nonatomic) NSArray *supportedTypes;
@property(readonly, nonatomic) _Bool hasLocation;
@property(retain, nonatomic) _INPBLocation *location;
- (int)StringAsTransportTypes:(NSString *)arg1;
- (NSString *)transportTypesAsString:(int)arg1;
- (void)setTransportTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)transportTypeAtIndex:(unsigned long long)arg1;
- (void)addTransportType:(int)arg1;
- (void)clearTransportTypes;
- (_INPBSupportedTrafficIncidentType *)supportedTypeAtIndex:(unsigned long long)arg1;
- (void)addSupportedType:(_INPBSupportedTrafficIncidentType *)arg1;
- (void)clearSupportedTypes;
@end

