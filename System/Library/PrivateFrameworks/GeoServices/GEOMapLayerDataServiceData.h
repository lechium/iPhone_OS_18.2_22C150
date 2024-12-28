//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOMapLayerDataServiceLayer, GEOMapLayerDataServiceLayerIndex, GEOMapLayerDataServiceVersion, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOMapLayerDataServiceData : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    GEOMapLayerDataServiceLayerIndex *_index;	// 16 = 0x10
    GEOMapLayerDataServiceLayer *_layer;	// 24 = 0x18
    GEOMapLayerDataServiceVersion *_version;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_index:1;
        unsigned int read_layer:1;
        unsigned int read_version:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x00000000011d300d
- (unsigned long long)hash;	// IMP=0x00000000011d2f96
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000011d2e98
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000011d2ce7
- (void)writeTo:(id)arg1;	// IMP=0x00000000011d2b40
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000011d2b33
- (id)jsonRepresentation;	// IMP=0x00000000011d28d9
- (id)dictionaryRepresentation;	// IMP=0x00000000011d2593
- (id)description;	// IMP=0x00000000011d24e4
- (id)initWithData:(id)arg1;	// IMP=0x00000000011d1f68
- (id)init;	// IMP=0x00000000011d1f0c

@end
