//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDSearchOriginationRoutePlanningParameters, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchOriginationInfo : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_95bda58d _searchClientContexts;	// 24 = 0x18
    GEOPDSearchOriginationRoutePlanningParameters *_routePlanningParameters;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    int _clientSoftwarePlatform;	// 68 = 0x44
    int _searchOriginationType;	// 72 = 0x48
    struct {
        unsigned int has_clientSoftwarePlatform:1;
        unsigned int has_searchOriginationType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_searchClientContexts:1;
        unsigned int read_routePlanningParameters:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 76 = 0x4c
}

- (void).cxx_destruct;	// IMP=0x0000000000e3073f
- (unsigned long long)hash;	// IMP=0x0000000000e3043c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e30325
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e30139
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e2fe87
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e2fe78
- (id)jsonRepresentation;	// IMP=0x0000000000e2ee55
- (id)dictionaryRepresentation;	// IMP=0x0000000000e2ea36
- (id)description;	// IMP=0x0000000000e2e987
- (void)dealloc;	// IMP=0x0000000000e2dd1c
- (id)initWithData:(id)arg1;	// IMP=0x0000000000e2dcc0
- (id)init;	// IMP=0x0000000000e2dc64
- (id)initWithTraits:(id)arg1;	// IMP=0x0000000001401fde

@end

