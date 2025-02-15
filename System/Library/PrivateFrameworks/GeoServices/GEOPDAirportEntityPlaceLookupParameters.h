//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAirportEntityPlaceLookupParameters : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_airportCode;	// 24 = 0x18
    NSString *_gateCode;	// 32 = 0x20
    NSString *_terminalCode;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_airportCode:1;
        unsigned int read_gateCode:1;
        unsigned int read_terminalCode:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x0000000000402757
- (unsigned long long)hash;	// IMP=0x00000000004026e0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004025e2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000402419
- (void)writeTo:(id)arg1;	// IMP=0x00000000004021fa
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004021eb
- (id)jsonRepresentation;	// IMP=0x0000000000401e7e
- (id)dictionaryRepresentation;	// IMP=0x0000000000401aad
- (id)description;	// IMP=0x00000000004019fe
- (id)initWithData:(id)arg1;	// IMP=0x0000000000401315
- (id)init;	// IMP=0x00000000004012b9

@end

