//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOLatLng, GEOMapRegion, GEOPDMapsIdentifier, GEOPDRelatedSearchSuggestion, GEOPDResultRefinementMetadata, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDResultRefinementGuidesHome : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOLatLng *_center;	// 24 = 0x18
    NSString *_displayName;	// 32 = 0x20
    GEOPDRelatedSearchSuggestion *_hint;	// 40 = 0x28
    GEOMapRegion *_mapRegion;	// 48 = 0x30
    GEOPDResultRefinementMetadata *_metadata;	// 56 = 0x38
    GEOPDMapsIdentifier *_placeId;	// 64 = 0x40
    unsigned int _readerMarkPos;	// 72 = 0x48
    unsigned int _readerMarkLength;	// 76 = 0x4c
    struct os_unfair_lock_s _readerLock;	// 80 = 0x50
    int _type;	// 84 = 0x54
    struct {
        unsigned int has_type:1;
        unsigned int read_unknownFields:1;
        unsigned int read_center:1;
        unsigned int read_displayName:1;
        unsigned int read_hint:1;
        unsigned int read_mapRegion:1;
        unsigned int read_metadata:1;
        unsigned int read_placeId:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000e0a473
- (unsigned long long)hash;	// IMP=0x0000000000e0a37f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e0a1ca
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e09f3d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e09c46
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e09c37
- (id)jsonRepresentation;	// IMP=0x0000000000e0932e
- (id)dictionaryRepresentation;	// IMP=0x0000000000e08d08
- (id)description;	// IMP=0x0000000000e08c59
- (id)initWithData:(id)arg1;	// IMP=0x0000000000e07e60
- (id)init;	// IMP=0x0000000000e07e04

@end

