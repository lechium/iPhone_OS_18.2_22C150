//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDComponent, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceCollectionLookupResult : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDComponent *_collectionComponent;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000004d3d65
- (unsigned long long)hash;	// IMP=0x00000000004d3d48
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004d3cb8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004d3c2d
- (void)writeTo:(id)arg1;	// IMP=0x00000000004d3bd2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004d3bc3
- (id)jsonRepresentation;	// IMP=0x00000000004d3862
- (id)dictionaryRepresentation;	// IMP=0x00000000004d366f
- (id)description;	// IMP=0x00000000004d35c0

@end
