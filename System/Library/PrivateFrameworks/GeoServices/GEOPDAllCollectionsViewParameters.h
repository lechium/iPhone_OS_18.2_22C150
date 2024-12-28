//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDAllCollectionsViewResultFilter, GEOPDPublisherSuggestionParameters, GEOPDViewportInfo, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAllCollectionsViewParameters : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDPublisherSuggestionParameters *_publisherSuggestionParameters;	// 24 = 0x18
    GEOPDAllCollectionsViewResultFilter *_resultFilter;	// 32 = 0x20
    GEOPDViewportInfo *_viewportInfo;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    unsigned int _numClientizedResults;	// 60 = 0x3c
    struct {
        unsigned int has_numClientizedResults:1;
        unsigned int read_unknownFields:1;
        unsigned int read_publisherSuggestionParameters:1;
        unsigned int read_resultFilter:1;
        unsigned int read_viewportInfo:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000405010
- (unsigned long long)hash;	// IMP=0x0000000000404d98
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000404c6f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000404a5c
- (void)writeTo:(id)arg1;	// IMP=0x0000000000404740
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000404731
- (id)jsonRepresentation;	// IMP=0x0000000000403c8e
- (id)dictionaryRepresentation;	// IMP=0x0000000000403903
- (id)description;	// IMP=0x0000000000403854
- (id)initWithData:(id)arg1;	// IMP=0x0000000000402dd2
- (id)init;	// IMP=0x0000000000402d76

@end
