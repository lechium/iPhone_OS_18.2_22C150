//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDEnhancedPlacement : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    CDStruct_62a50c50 _buildingIds;	// 16 = 0x10
    double _elevation;	// 40 = 0x28
    float _buildingFaceAzimuth;	// 48 = 0x30
    float _buildingHeight;	// 52 = 0x34
    struct {
        unsigned int has_elevation:1;
        unsigned int has_buildingFaceAzimuth:1;
        unsigned int has_buildingHeight:1;
    } _flags;	// 56 = 0x38
}

+ (id)enhancedPlacementWithPlaceData:(id)arg1;	// IMP=0x0010000000a05d91
- (void).cxx_destruct;	// IMP=0x0000000000bfcf30
- (unsigned long long)hash;	// IMP=0x0000000000bfcc0c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bfcb0c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bfca35
- (void)writeTo:(id)arg1;	// IMP=0x0000000000bfc951
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000bfc944
- (id)jsonRepresentation;	// IMP=0x0000000000bfc36b
- (id)dictionaryRepresentation;	// IMP=0x0000000000bfc075
- (id)description;	// IMP=0x0000000000bfbfc6
- (void)dealloc;	// IMP=0x0000000000bfbea7

@end
