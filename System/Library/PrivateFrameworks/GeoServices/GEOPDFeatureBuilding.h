//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDVenueBuilding, GEOPDVenueContainer, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDFeatureBuilding : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDVenueBuilding *_building;	// 24 = 0x18
    NSMutableArray *_levels;	// 32 = 0x20
    GEOPDVenueContainer *_venueContainer;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_building:1;
        unsigned int read_levels:1;
        unsigned int read_venueContainer:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x0000000000325293
- (unsigned long long)hash;	// IMP=0x000000000032521c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000032511e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000324d45
- (void)writeTo:(id)arg1;	// IMP=0x0000000000324a0d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003249fe
- (id)jsonRepresentation;	// IMP=0x0000000000324545
- (id)dictionaryRepresentation;	// IMP=0x0000000000323f8f
- (id)description;	// IMP=0x0000000000323ee0
- (id)initWithData:(id)arg1;	// IMP=0x00000000003237e0
- (id)init;	// IMP=0x0000000000323784

@end

