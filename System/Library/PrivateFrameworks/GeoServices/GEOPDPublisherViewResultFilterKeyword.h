//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDRelatedSearchSuggestion, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPublisherViewResultFilterKeyword : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDRelatedSearchSuggestion *_relatedSearchSuggestion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000055de5b
- (unsigned long long)hash;	// IMP=0x000000000055de3e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000055ddae
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000055dd23
- (void)writeTo:(id)arg1;	// IMP=0x000000000055dcc8
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000055dcb9
- (id)jsonRepresentation;	// IMP=0x000000000055d958
- (id)dictionaryRepresentation;	// IMP=0x000000000055d765
- (id)description;	// IMP=0x000000000055d6b6

@end

