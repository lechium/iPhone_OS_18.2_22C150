//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOMapRegion, GEOPDPaginationInfo, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDLocationDirectedSearchResult : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_disambiguationLabels;	// 24 = 0x18
    GEOMapRegion *_displayMapRegion;	// 32 = 0x20
    GEOPDPaginationInfo *_paginationInfo;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_disambiguationLabels:1;
        unsigned int read_displayMapRegion:1;
        unsigned int read_paginationInfo:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x00000000004abc19
- (unsigned long long)hash;	// IMP=0x00000000004abba2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004abaa4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004ab785
- (void)writeTo:(id)arg1;	// IMP=0x00000000004ab478
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004ab469
- (id)jsonRepresentation;	// IMP=0x00000000004aafa4
- (id)dictionaryRepresentation;	// IMP=0x00000000004aaa39
- (id)description;	// IMP=0x00000000004aa98a
- (id)initWithData:(id)arg1;	// IMP=0x00000000004a9ff1
- (id)init;	// IMP=0x00000000004a9f95

@end
