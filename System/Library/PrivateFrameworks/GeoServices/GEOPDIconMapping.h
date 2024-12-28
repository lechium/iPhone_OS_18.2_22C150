//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDVectorPoiDisplayDV, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDIconMapping : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_cartoZoomIndoors;	// 24 = 0x18
    NSMutableArray *_cartoZooms;	// 32 = 0x20
    NSString *_countryCode3A;	// 40 = 0x28
    NSString *_countryCode;	// 48 = 0x30
    NSString *_state;	// 56 = 0x38
    GEOPDVectorPoiDisplayDV *_vectorPoiDisplayDv;	// 64 = 0x40
    unsigned int _readerMarkPos;	// 72 = 0x48
    unsigned int _readerMarkLength;	// 76 = 0x4c
    struct os_unfair_lock_s _readerLock;	// 80 = 0x50
    int _cartoSignificance;	// 84 = 0x54
    unsigned int _poiType;	// 88 = 0x58
    _Bool _aoiZoom;	// 92 = 0x5c
    _Bool _isIconSuppressed;	// 93 = 0x5d
    struct {
        unsigned int has_cartoSignificance:1;
        unsigned int has_aoiZoom:1;
        unsigned int has_isIconSuppressed:1;
        unsigned int read_unknownFields:1;
        unsigned int read_cartoZoomIndoors:1;
        unsigned int read_cartoZooms:1;
        unsigned int read_countryCode3A:1;
        unsigned int read_countryCode:1;
        unsigned int read_state:1;
        unsigned int read_vectorPoiDisplayDv:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000049daa0
- (unsigned long long)hash;	// IMP=0x000000000049d54a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000049d303
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000049cdd9
- (void)writeTo:(id)arg1;	// IMP=0x000000000049c8a7
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000049c898
- (id)jsonRepresentation;	// IMP=0x000000000049a67e
- (id)dictionaryRepresentation;	// IMP=0x0000000000499b4d
- (id)description;	// IMP=0x0000000000499a9e
- (id)initWithData:(id)arg1;	// IMP=0x0000000000498c4a
- (id)init;	// IMP=0x0000000000498bee

@end
