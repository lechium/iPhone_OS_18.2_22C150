//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOFormattedString, GEOPDMapsIdentifier, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDContainmentPlace : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDMapsIdentifier *_containerId;	// 24 = 0x18
    GEOFormattedString *_containmentLine;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_containerId:1;
        unsigned int read_containmentLine:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x0000000000bdd0aa
- (unsigned long long)hash;	// IMP=0x0000000000bdd053
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bdcf81
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bdcdde
- (void)writeTo:(id)arg1;	// IMP=0x0000000000bdcc20
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000bdcc11
- (id)jsonRepresentation;	// IMP=0x0000000000bdc826
- (id)dictionaryRepresentation;	// IMP=0x0000000000bdc5a3
- (id)description;	// IMP=0x0000000000bdc4f4
- (id)initWithData:(id)arg1;	// IMP=0x0000000000bdbd7a
- (id)init;	// IMP=0x0000000000bdbd1e

@end

