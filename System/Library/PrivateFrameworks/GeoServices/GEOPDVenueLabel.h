//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDVenueLabel : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_detail;	// 24 = 0x18
    NSString *_nameShort;	// 32 = 0x20
    NSString *_name;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_detail:1;
        unsigned int read_nameShort:1;
        unsigned int read_name:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x000000000033897e
- (unsigned long long)hash;	// IMP=0x0000000000338907
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000338809
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000338640
- (void)writeTo:(id)arg1;	// IMP=0x0000000000338421
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000338412
- (id)jsonRepresentation;	// IMP=0x00000000003380a5
- (id)dictionaryRepresentation;	// IMP=0x0000000000337e72
- (id)description;	// IMP=0x0000000000337dc3
- (id)initWithData:(id)arg1;	// IMP=0x000000000033756d
- (id)init;	// IMP=0x0000000000337511

@end
