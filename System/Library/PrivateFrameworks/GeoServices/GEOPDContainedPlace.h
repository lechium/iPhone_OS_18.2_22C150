//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDLinkedPlace, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDContainedPlace : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_childPlaces;	// 24 = 0x18
    unsigned long long _featureId;	// 32 = 0x20
    GEOPDLinkedPlace *_parentPlace;	// 40 = 0x28
    NSMutableArray *_siblingPlaces;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    struct {
        unsigned int has_featureId:1;
        unsigned int read_unknownFields:1;
        unsigned int read_childPlaces:1;
        unsigned int read_parentPlace:1;
        unsigned int read_siblingPlaces:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 68 = 0x44
}

- (void).cxx_destruct;	// IMP=0x0000000000bdb6ff
- (unsigned long long)hash;	// IMP=0x0000000000bdb59a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bdb46c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bdb036
- (void)writeTo:(id)arg1;	// IMP=0x0000000000bda9db
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000bda9cc
- (id)jsonRepresentation;	// IMP=0x0000000000bda19e
- (id)dictionaryRepresentation;	// IMP=0x0000000000bd9b11
- (id)description;	// IMP=0x0000000000bd9a62
- (id)initWithData:(id)arg1;	// IMP=0x0000000000bd8e2c
- (id)init;	// IMP=0x0000000000bd8dd0

@end

