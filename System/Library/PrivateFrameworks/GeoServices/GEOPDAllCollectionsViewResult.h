//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDPublisherSuggestionResult, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAllCollectionsViewResult : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_collectionIds;	// 24 = 0x18
    GEOPDPublisherSuggestionResult *_publisherSuggestionResult;	// 32 = 0x20
    NSMutableArray *_resultFilters;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_collectionIds:1;
        unsigned int read_publisherSuggestionResult:1;
        unsigned int read_resultFilters:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x00000000004075b3
- (unsigned long long)hash;	// IMP=0x00000000004073df
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004072e1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000406ef3
- (void)writeTo:(id)arg1;	// IMP=0x00000000004069c8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004069b9
- (id)jsonRepresentation;	// IMP=0x0000000000406286
- (id)dictionaryRepresentation;	// IMP=0x0000000000405c5c
- (id)description;	// IMP=0x0000000000405bad
- (id)initWithData:(id)arg1;	// IMP=0x00000000004050d0
- (id)init;	// IMP=0x0000000000405074

@end

