//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPDSearchMultiMapRegion : PBCodable
{
    NSMutableArray *_mapRegions;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000033ceac
- (unsigned long long)hash;	// IMP=0x000000000033ce8f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000033cdff
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000033cc61
- (void)writeTo:(id)arg1;	// IMP=0x000000000033cb2b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000033cb1c
- (id)jsonRepresentation;	// IMP=0x000000000033c927
- (id)dictionaryRepresentation;	// IMP=0x000000000033c6a7
- (id)description;	// IMP=0x000000000033c5f8

@end

