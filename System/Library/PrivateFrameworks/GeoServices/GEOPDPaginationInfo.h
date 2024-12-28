//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPaginationInfo : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_nextPageToken;	// 24 = 0x18
    NSString *_prevPageToken;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    unsigned int _totalPageCount;	// 52 = 0x34
    unsigned int _totalResults;	// 56 = 0x38
    struct {
        unsigned int has_totalPageCount:1;
        unsigned int has_totalResults:1;
        unsigned int read_unknownFields:1;
        unsigned int read_nextPageToken:1;
        unsigned int read_prevPageToken:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x00000000004d0fad
- (unsigned long long)hash;	// IMP=0x00000000004d0f09
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004d0de8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004d0bd8
- (void)writeTo:(id)arg1;	// IMP=0x00000000004d098f
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004d0980
- (id)jsonRepresentation;	// IMP=0x00000000004d03ac
- (id)dictionaryRepresentation;	// IMP=0x00000000004cffc9
- (id)description;	// IMP=0x00000000004cff1a
- (id)initWithData:(id)arg1;	// IMP=0x00000000004cf77a
- (id)init;	// IMP=0x00000000004cf71e

@end
