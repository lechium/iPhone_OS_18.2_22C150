//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDMapsIdentifier, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitConnection : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_entityNameString;	// 24 = 0x18
    GEOPDMapsIdentifier *_mapsId;	// 32 = 0x20
    unsigned long long _muid;	// 40 = 0x28
    NSMutableArray *_transitLabels;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    struct {
        unsigned int has_muid:1;
        unsigned int read_unknownFields:1;
        unsigned int read_entityNameString:1;
        unsigned int read_mapsId:1;
        unsigned int read_transitLabels:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 68 = 0x44
}

- (void).cxx_destruct;	// IMP=0x0000000000d0b0ca
- (unsigned long long)hash;	// IMP=0x0000000000d0b02c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d0aefb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d0ab8f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d0a892
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d0a883
- (id)jsonRepresentation;	// IMP=0x0000000000d0a397
- (id)dictionaryRepresentation;	// IMP=0x0000000000d09ebb
- (id)description;	// IMP=0x0000000000d09e0c
- (id)initWithData:(id)arg1;	// IMP=0x0000000000d09350
- (id)init;	// IMP=0x0000000000d092f4

@end

