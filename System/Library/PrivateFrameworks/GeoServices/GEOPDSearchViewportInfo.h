//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOMapRegion;

__attribute__((visibility("hidden")))
@interface GEOPDSearchViewportInfo : PBCodable
{
    GEOMapRegion *_mapRegion;	// 8 = 0x8
    int _mapType;	// 16 = 0x10
    unsigned int _timeSinceMapViewportChanged;	// 20 = 0x14
    struct {
        unsigned int has_mapType:1;
        unsigned int has_timeSinceMapViewportChanged:1;
    } _flags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000011d00d3
- (unsigned long long)hash;	// IMP=0x00000000011d0064
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000011cff89
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000011cfed4
- (void)writeTo:(id)arg1;	// IMP=0x00000000011cfe44
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000011cfe35
- (id)jsonRepresentation;	// IMP=0x00000000011cfae7
- (id)dictionaryRepresentation;	// IMP=0x00000000011cf909
- (id)description;	// IMP=0x00000000011cf85a

@end

