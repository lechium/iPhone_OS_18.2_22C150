//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPDPhotoConstraints : PBCodable
{
    unsigned long long _maxPixels;	// 8 = 0x8
    NSMutableArray *_mediaTypes;	// 16 = 0x10
    unsigned long long _minPixels;	// 24 = 0x18
    float _maxAspectRatio;	// 32 = 0x20
    unsigned int _maxNumberOfPhotos;	// 36 = 0x24
    struct {
        unsigned int has_maxPixels:1;
        unsigned int has_minPixels:1;
        unsigned int has_maxAspectRatio:1;
        unsigned int has_maxNumberOfPhotos:1;
    } _flags;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000014a2ecf
- (unsigned long long)hash;	// IMP=0x00000000014a2d30
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000014a2c08
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000014a29d5
- (void)writeTo:(id)arg1;	// IMP=0x00000000014a2809
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000014a27fc
- (id)jsonRepresentation;	// IMP=0x00000000014a23c5
- (id)dictionaryRepresentation;	// IMP=0x00000000014a2180
- (id)description;	// IMP=0x00000000014a20d1

@end

