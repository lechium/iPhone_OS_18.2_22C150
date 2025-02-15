//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOTileCoordinate, NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDGroundMetadataTile : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSMutableArray *_buildTables;	// 16 = 0x10
    NSMutableArray *_cameraMetadataTables;	// 24 = 0x18
    GEOTileCoordinate *_coord;	// 32 = 0x20
    NSMutableArray *_photoPositions;	// 40 = 0x28
    NSMutableArray *_storefronts;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    unsigned int _tileBuildId;	// 68 = 0x44
    struct {
        unsigned int has_tileBuildId:1;
        unsigned int read_buildTables:1;
        unsigned int read_cameraMetadataTables:1;
        unsigned int read_coord:1;
        unsigned int read_photoPositions:1;
        unsigned int read_storefronts:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000658692
- (unsigned long long)hash;	// IMP=0x00000000006585bf
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000065843f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000657bc3
- (void)writeTo:(id)arg1;	// IMP=0x000000000065737e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000657371
- (id)jsonRepresentation;	// IMP=0x0000000000656d12
- (id)dictionaryRepresentation;	// IMP=0x00000000006563d2
- (id)description;	// IMP=0x0000000000656323
- (id)initWithData:(id)arg1;	// IMP=0x0000000000655484
- (id)init;	// IMP=0x0000000000655428

@end

