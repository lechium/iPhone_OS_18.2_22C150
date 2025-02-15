//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOTerritoryDataPolygon, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOTerritoryDataTerritoryInfo : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    CDStruct_9f2792e4 _interestedPartys;	// 16 = 0x10
    CDStruct_95bda58d _territoryTypes;	// 40 = 0x28
    unsigned long long _featureId;	// 64 = 0x40
    NSString *_interestedPartyCountryCode;	// 72 = 0x48
    NSString *_name;	// 80 = 0x50
    GEOTerritoryDataPolygon *_polygon;	// 88 = 0x58
    unsigned int _readerMarkPos;	// 96 = 0x60
    unsigned int _readerMarkLength;	// 100 = 0x64
    struct os_unfair_lock_s _readerLock;	// 104 = 0x68
    unsigned int _nameId;	// 108 = 0x6c
    struct {
        unsigned int has_featureId:1;
        unsigned int has_nameId:1;
        unsigned int read_interestedPartys:1;
        unsigned int read_territoryTypes:1;
        unsigned int read_interestedPartyCountryCode:1;
        unsigned int read_name:1;
        unsigned int read_polygon:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000da6f51
- (unsigned long long)hash;	// IMP=0x0000000000da6e62
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000da6cc7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000da6a97
- (void)writeTo:(id)arg1;	// IMP=0x0000000000da67ab
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000da679e
- (id)jsonRepresentation;	// IMP=0x0000000000da652a
- (id)dictionaryRepresentation;	// IMP=0x0000000000da608d
- (id)description;	// IMP=0x0000000000da5fde
- (void)dealloc;	// IMP=0x0000000000da514b
- (id)initWithData:(id)arg1;	// IMP=0x0000000000da50ef
- (id)init;	// IMP=0x0000000000da5093

@end

