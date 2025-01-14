//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDContextualPhotoMetadata : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_contextualPhotoLabels;	// 16 = 0x10
    unsigned int _maxNumContextualPhotos;	// 24 = 0x18
    unsigned int _maxNumPhotos;	// 28 = 0x1c
    _Bool _shouldApplyContextualizationPlacecard;	// 32 = 0x20
    _Bool _shouldApplyContextualizationSearch;	// 33 = 0x21
    _Bool _shouldLimitToPoisWithVendorTopPhoto;	// 34 = 0x22
    struct {
        unsigned int has_maxNumContextualPhotos:1;
        unsigned int has_maxNumPhotos:1;
        unsigned int has_shouldApplyContextualizationPlacecard:1;
        unsigned int has_shouldApplyContextualizationSearch:1;
        unsigned int has_shouldLimitToPoisWithVendorTopPhoto:1;
    } _flags;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x0000000000bde862
- (unsigned long long)hash;	// IMP=0x0000000000bde79b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bde62a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bde3e9
- (void)writeTo:(id)arg1;	// IMP=0x0000000000bde1e1
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000bde1d4
- (id)jsonRepresentation;	// IMP=0x0000000000bddb94
- (id)dictionaryRepresentation;	// IMP=0x0000000000bdd7db
- (id)description;	// IMP=0x0000000000bdd72c

@end

