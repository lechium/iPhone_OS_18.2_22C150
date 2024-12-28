//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDViewportInfo, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceSuggestionParameters : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_mapsCategoryIds;	// 24 = 0x18
    NSMutableArray *_suggestedPlaceIds;	// 32 = 0x20
    GEOPDViewportInfo *_viewportInfo;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_mapsCategoryIds:1;
        unsigned int read_suggestedPlaceIds:1;
        unsigned int read_viewportInfo:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x000000000054d11a
- (unsigned long long)hash;	// IMP=0x000000000054d0a3
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000054cfa5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000054cbb7
- (void)writeTo:(id)arg1;	// IMP=0x000000000054c842
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000054c833
- (id)jsonRepresentation;	// IMP=0x000000000054c371
- (id)dictionaryRepresentation;	// IMP=0x000000000054bed2
- (id)description;	// IMP=0x000000000054be23
- (id)initWithData:(id)arg1;	// IMP=0x000000000054b3f2
- (id)init;	// IMP=0x000000000054b396

@end
