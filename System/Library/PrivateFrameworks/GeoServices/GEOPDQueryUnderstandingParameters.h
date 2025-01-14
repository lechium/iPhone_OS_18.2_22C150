//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDQueryUnderstandingTaxonomyLookupParameters, GEOPDQueryUnderstandingTaxonomySearchParameters, GEOPDViewportInfo, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDQueryUnderstandingParameters : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_searchString;	// 24 = 0x18
    GEOPDQueryUnderstandingTaxonomyLookupParameters *_taxonomyLookupParameters;	// 32 = 0x20
    GEOPDQueryUnderstandingTaxonomySearchParameters *_taxonomySearchParameters;	// 40 = 0x28
    GEOPDViewportInfo *_viewportInfo;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    int _type;	// 68 = 0x44
    int _workflow;	// 72 = 0x48
    struct {
        unsigned int has_type:1;
        unsigned int has_workflow:1;
        unsigned int read_unknownFields:1;
        unsigned int read_searchString:1;
        unsigned int read_taxonomyLookupParameters:1;
        unsigned int read_taxonomySearchParameters:1;
        unsigned int read_viewportInfo:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 76 = 0x4c
}

- (void).cxx_destruct;	// IMP=0x000000000055fc59
- (unsigned long long)hash;	// IMP=0x000000000055fb72
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000055f9ec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000055f78d
- (void)writeTo:(id)arg1;	// IMP=0x000000000055f432
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000055f423
- (id)jsonRepresentation;	// IMP=0x000000000055f046
- (id)dictionaryRepresentation;	// IMP=0x000000000055ea87
- (id)description;	// IMP=0x000000000055e9d8
- (id)initWithData:(id)arg1;	// IMP=0x000000000055dee8
- (id)init;	// IMP=0x000000000055de8c

@end

