//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface BCSHoursMessage : PBCodable
{
    struct {
        int *list;
        unsigned long long count;
        unsigned long long size;
    } _days;	// 8 = 0x8
    NSMutableArray *_timeRanges;	// 32 = 0x20
}

+ (Class)timeRangeType;	// IMP=0x001000000003d76e
- (void).cxx_destruct;	// IMP=0x000000000003e598
@property(retain, nonatomic) NSMutableArray *timeRanges; // @synthesize timeRanges=_timeRanges;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000003e3c5
- (unsigned long long)hash;	// IMP=0x000000000003e389
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003e2df
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003e108
- (void)copyTo:(id)arg1;	// IMP=0x000000000003dfd2
- (void)writeTo:(id)arg1;	// IMP=0x000000000003de6c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000003de5f
- (id)dictionaryRepresentation;	// IMP=0x000000000003d82e
- (id)description;	// IMP=0x000000000003d77f
- (id)timeRangeAtIndex:(unsigned long long)arg1;	// IMP=0x000000000003d751
- (unsigned long long)timeRangesCount;	// IMP=0x000000000003d734
- (void)addTimeRange:(id)arg1;	// IMP=0x000000000003d6ca
- (void)clearTimeRanges;	// IMP=0x000000000003d6ad
- (int)StringAsDays:(id)arg1;	// IMP=0x000000000003d56c
- (id)daysAsString:(int)arg1;	// IMP=0x000000000003d521
- (void)setDays:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000003d50a
- (int)dayAtIndex:(unsigned long long)arg1;	// IMP=0x000000000003d43a
- (void)addDay:(int)arg1;	// IMP=0x000000000003d427
- (void)clearDays;	// IMP=0x000000000003d416
@property(readonly, nonatomic) int *days;
@property(readonly, nonatomic) unsigned long long daysCount;
- (void)dealloc;	// IMP=0x000000000003d3b3

@end

