//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDRelatedSearchSuggestion, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDChildActionSearch : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDRelatedSearchSuggestion *_relatedSearchSuggestion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000b6870a
- (unsigned long long)hash;	// IMP=0x0000000000b686ed
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b6865d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b685d2
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b68577
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b68568
- (id)jsonRepresentation;	// IMP=0x0000000000b68207
- (id)dictionaryRepresentation;	// IMP=0x0000000000b68014
- (id)description;	// IMP=0x0000000000b67f65

@end

