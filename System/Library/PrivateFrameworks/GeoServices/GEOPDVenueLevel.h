//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDVenueLabel, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDVenueLevel : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDVenueLabel *_label;	// 16 = 0x10
    unsigned long long _levelId;	// 24 = 0x18
    int _ordinal;	// 32 = 0x20
    struct {
        unsigned int has_levelId:1;
        unsigned int has_ordinal:1;
    } _flags;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x00000000003394a2
- (unsigned long long)hash;	// IMP=0x0000000000339438
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000033935b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000339295
- (void)writeTo:(id)arg1;	// IMP=0x00000000003391ea
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003391db
- (id)jsonRepresentation;	// IMP=0x0000000000338d3b
- (id)dictionaryRepresentation;	// IMP=0x0000000000338a94
- (id)description;	// IMP=0x00000000003389e5

@end

