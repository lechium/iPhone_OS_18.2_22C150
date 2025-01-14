//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOLatLng, GEOPDBounds, GEOPDMapsIdentifier, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSpatialPlaceLookupResponse : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_95bda58d _categorys;	// 24 = 0x18
    GEOPDBounds *_bounds;	// 48 = 0x30
    GEOLatLng *_center;	// 56 = 0x38
    GEOPDMapsIdentifier *_placeId;	// 64 = 0x40
    unsigned int _readerMarkPos;	// 72 = 0x48
    unsigned int _readerMarkLength;	// 76 = 0x4c
    struct os_unfair_lock_s _readerLock;	// 80 = 0x50
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_categorys:1;
        unsigned int read_bounds:1;
        unsigned int read_center:1;
        unsigned int read_placeId:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 84 = 0x54
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0010000000ceb7d5
- (void).cxx_destruct;	// IMP=0x0000000000cec816
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000cec750
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000cec2a5
- (unsigned long long)hash;	// IMP=0x0000000000cec214
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cec0ed
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cebf0c
- (void)copyTo:(id)arg1;	// IMP=0x0000000000cebda3
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000cebd13
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cebafb
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cebaec
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000ceb50f
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000ceb4fd
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000ceadc7
- (id)jsonRepresentation;	// IMP=0x0000000000ceacb7
- (id)dictionaryRepresentation;	// IMP=0x0000000000cea8c3
- (id)description;	// IMP=0x0000000000cea814
@property(retain, nonatomic) GEOPDBounds *bounds;
@property(readonly, nonatomic) _Bool hasBounds;
- (int)StringAsCategorys:(id)arg1;	// IMP=0x0000000000cea3c0
- (id)categorysAsString:(int)arg1;	// IMP=0x0000000000cea377
- (void)setCategorys:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000cea30d
- (int)categoryAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000cea238
- (void)addCategory:(int)arg1;	// IMP=0x0000000000cea1d1
- (void)clearCategorys;	// IMP=0x0000000000cea17b
@property(readonly, nonatomic) int *categorys;
@property(readonly, nonatomic) unsigned long long categorysCount;
@property(retain, nonatomic) GEOLatLng *center;
@property(readonly, nonatomic) _Bool hasCenter;
@property(retain, nonatomic) GEOPDMapsIdentifier *placeId;
@property(readonly, nonatomic) _Bool hasPlaceId;
- (void)dealloc;	// IMP=0x0000000000ce95de
- (id)initWithData:(id)arg1;	// IMP=0x0000000000ce9582
- (id)init;	// IMP=0x0000000000ce9526

@end

