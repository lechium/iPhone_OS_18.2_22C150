//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAnnotatedItemListFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    struct GEOPDPhotoSizeFilterValue *_photoSizeFilters;	// 16 = 0x10
    unsigned long long _photoSizeFiltersCount;	// 24 = 0x18
    unsigned long long _photoSizeFiltersSpace;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000b32ecf
- (unsigned long long)hash;	// IMP=0x0000000000b32ea4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b32e0b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b32d6b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b32c65
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b32c58
- (id)jsonRepresentation;	// IMP=0x0000000000b32887
- (id)dictionaryRepresentation;	// IMP=0x0000000000b32634
- (id)description;	// IMP=0x0000000000b32585
- (void)dealloc;	// IMP=0x0000000000b323af

@end
