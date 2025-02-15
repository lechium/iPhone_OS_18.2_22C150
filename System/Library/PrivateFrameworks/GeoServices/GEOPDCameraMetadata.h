//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDLensProjection, GEOPDOrientedPosition, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDCameraMetadata : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    CDStruct_9f2792e4 _textureIds;	// 16 = 0x10
    GEOPDLensProjection *_lensProjection;	// 40 = 0x28
    GEOPDOrientedPosition *_position;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    int _cameraNumber;	// 68 = 0x44
    int _imageHeight;	// 72 = 0x48
    int _imageWidth;	// 76 = 0x4c
    struct {
        unsigned int has_cameraNumber:1;
        unsigned int has_imageHeight:1;
        unsigned int has_imageWidth:1;
        unsigned int read_textureIds:1;
        unsigned int read_lensProjection:1;
        unsigned int read_position:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000115d297
- (unsigned long long)hash;	// IMP=0x000000000115d1c0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000115d04d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000115ce2e
- (void)writeTo:(id)arg1;	// IMP=0x000000000115cbab
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000115cb9c
- (id)jsonRepresentation;	// IMP=0x000000000115b6bb
- (id)dictionaryRepresentation;	// IMP=0x000000000115b3ba
- (id)description;	// IMP=0x000000000115b30b
- (void)dealloc;	// IMP=0x000000000115a7f6
- (id)initWithData:(id)arg1;	// IMP=0x000000000115a79a
- (id)init;	// IMP=0x000000000115a73e

@end

