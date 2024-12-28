//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDVenueContainer, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDFeatureVenue : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_buildings;	// 24 = 0x18
    NSMutableArray *_levels;	// 32 = 0x20
    GEOPDVenueContainer *_venueContainer;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_buildings:1;
        unsigned int read_levels:1;
        unsigned int read_venueContainer:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x00000000003291d3
- (unsigned long long)hash;	// IMP=0x000000000032915c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000032905e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000328aa1
- (void)writeTo:(id)arg1;	// IMP=0x00000000003285b3
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003285a4
- (id)jsonRepresentation;	// IMP=0x000000000032801e
- (id)dictionaryRepresentation;	// IMP=0x000000000032797f
- (id)description;	// IMP=0x00000000003278d0
- (id)initWithData:(id)arg1;	// IMP=0x0000000000327185
- (id)init;	// IMP=0x0000000000327129

@end
