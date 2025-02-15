//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDVenueIdentifier : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_62a50c50 _containedBys;	// 24 = 0x18
    CDStruct_62a50c50 _sectionIds;	// 48 = 0x30
    unsigned long long _buildingId;	// 72 = 0x48
    unsigned long long _featureId;	// 80 = 0x50
    unsigned long long _fixtureId;	// 88 = 0x58
    unsigned long long _geminiId;	// 96 = 0x60
    unsigned long long _levelId;	// 104 = 0x68
    unsigned long long _unitId;	// 112 = 0x70
    unsigned long long _venueGeminiId;	// 120 = 0x78
    unsigned long long _venueId;	// 128 = 0x80
    unsigned int _readerMarkPos;	// 136 = 0x88
    unsigned int _readerMarkLength;	// 140 = 0x8c
    struct os_unfair_lock_s _readerLock;	// 144 = 0x90
    int _levelOrdinal;	// 148 = 0x94
    struct {
        unsigned int has_buildingId:1;
        unsigned int has_featureId:1;
        unsigned int has_fixtureId:1;
        unsigned int has_geminiId:1;
        unsigned int has_levelId:1;
        unsigned int has_unitId:1;
        unsigned int has_venueGeminiId:1;
        unsigned int has_venueId:1;
        unsigned int has_levelOrdinal:1;
        unsigned int read_unknownFields:1;
        unsigned int read_containedBys:1;
        unsigned int read_sectionIds:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x00000000011ff8af
- (unsigned long long)hash;	// IMP=0x00000000011ff379
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000011ff135
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000011fee91
- (void)writeTo:(id)arg1;	// IMP=0x00000000011feb2b
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000011feb1c
- (id)jsonRepresentation;	// IMP=0x00000000011fd8b8
- (id)dictionaryRepresentation;	// IMP=0x00000000011fd2d0
- (id)description;	// IMP=0x00000000011fd221
- (void)dealloc;	// IMP=0x00000000011fbf4c
- (id)initWithData:(id)arg1;	// IMP=0x00000000011fbef0
- (id)init;	// IMP=0x00000000011fbe94
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000a0543f
- (id)initWithVenueID:(unsigned long long)arg1 featureID:(unsigned long long)arg2 businessID:(unsigned long long)arg3 componentIdentifier:(id)arg4;	// IMP=0x0000000000a0500f
- (id)initWithVenueID:(unsigned long long)arg1 featureID:(unsigned long long)arg2 businessID:(unsigned long long)arg3;	// IMP=0x0000000000a04f0d

@end

