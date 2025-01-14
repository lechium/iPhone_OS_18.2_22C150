//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDAmenityRibbonItem, GEOPDFactoidRibbonItem, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDRibbonItem : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDAmenityRibbonItem *_amenityRibbonItem;	// 24 = 0x18
    GEOPDFactoidRibbonItem *_factoidRibbonItem;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    int _type;	// 52 = 0x34
    struct {
        unsigned int has_type:1;
        unsigned int read_unknownFields:1;
        unsigned int read_amenityRibbonItem:1;
        unsigned int read_factoidRibbonItem:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000cd44e5
- (unsigned long long)hash;	// IMP=0x0000000000cd445b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cd435a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cd4172
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cd3fa3
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cd3f94
- (id)jsonRepresentation;	// IMP=0x0000000000cd3c27
- (id)dictionaryRepresentation;	// IMP=0x0000000000cd3937
- (id)description;	// IMP=0x0000000000cd3888
- (id)initWithData:(id)arg1;	// IMP=0x0000000000cd2fe4
- (id)init;	// IMP=0x0000000000cd2f88

@end

