//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, SECSFAVersionMatch;

__attribute__((visibility("hidden")))
@interface SECSFARules : PBCodable
{
    SECSFAVersionMatch *_allowedBuilds;	// 8 = 0x8
    NSMutableArray *_eventFilters;	// 16 = 0x10
    NSMutableArray *_eventRules;	// 24 = 0x18
}

+ (Class)eventFilterType;	// IMP=0x001000000001c9d3
+ (Class)eventRulesType;	// IMP=0x001000000001c9c2
- (void).cxx_destruct;	// IMP=0x000000000001c980
@property(retain, nonatomic) NSMutableArray *eventFilters; // @synthesize eventFilters=_eventFilters;
@property(retain, nonatomic) SECSFAVersionMatch *allowedBuilds; // @synthesize allowedBuilds=_allowedBuilds;
@property(retain, nonatomic) NSMutableArray *eventRules; // @synthesize eventRules=_eventRules;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001c68a
- (unsigned long long)hash;	// IMP=0x000000000001c61d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001c53d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001c207
- (void)copyTo:(id)arg1;	// IMP=0x000000000001c09b
- (void)writeTo:(id)arg1;	// IMP=0x000000000001be67
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001bc09
- (id)dictionaryRepresentation;	// IMP=0x000000000001b7cf
- (id)description;	// IMP=0x000000000001b720
- (id)eventFilterAtIndex:(unsigned long long)arg1;	// IMP=0x000000000001b703
- (unsigned long long)eventFiltersCount;	// IMP=0x000000000001b6e6
- (void)addEventFilter:(id)arg1;	// IMP=0x000000000001b67c
- (void)clearEventFilters;	// IMP=0x000000000001b65f
@property(readonly, nonatomic) _Bool hasAllowedBuilds;
- (id)eventRulesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000001b62d
- (unsigned long long)eventRulesCount;	// IMP=0x000000000001b610
- (void)addEventRules:(id)arg1;	// IMP=0x000000000001b5a6
- (void)clearEventRules;	// IMP=0x000000000001b589

@end

