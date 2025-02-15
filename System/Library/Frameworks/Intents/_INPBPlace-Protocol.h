//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBString;

@protocol _INPBPlace <NSObject>
+ (Class)placeDescriptorsType;
@property(readonly, nonatomic) _Bool hasPlaceType;
@property(retain, nonatomic) _INPBString *placeType;
@property(readonly, nonatomic) _Bool hasPlaceSubType;
@property(retain, nonatomic) _INPBString *placeSubType;
@property(readonly, nonatomic) unsigned long long placeDescriptorsCount;
@property(copy, nonatomic) NSArray *placeDescriptors;
@property(nonatomic) _Bool hasPersonalPlaceType;
@property(nonatomic) int personalPlaceType;
- (_INPBString *)placeDescriptorsAtIndex:(unsigned long long)arg1;
- (void)addPlaceDescriptors:(_INPBString *)arg1;
- (void)clearPlaceDescriptors;
- (int)StringAsPersonalPlaceType:(NSString *)arg1;
- (NSString *)personalPlaceTypeAsString:(int)arg1;
@end

