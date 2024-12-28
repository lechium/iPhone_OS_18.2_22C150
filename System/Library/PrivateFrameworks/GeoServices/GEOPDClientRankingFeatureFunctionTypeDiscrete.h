//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDClientRankingFeatureFunctionTypeDiscrete : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    float _featureValueThresholdHigh;	// 16 = 0x10
    float _featureValueThresholdLow;	// 20 = 0x14
    float _featureWeightHigh;	// 24 = 0x18
    float _featureWeightLow;	// 28 = 0x1c
    struct {
        unsigned int has_featureValueThresholdHigh:1;
        unsigned int has_featureValueThresholdLow:1;
        unsigned int has_featureWeightHigh:1;
        unsigned int has_featureWeightLow:1;
    } _flags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000005ddcb3
- (unsigned long long)hash;	// IMP=0x00000000005dd892
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005dd782
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005dd69f
- (void)writeTo:(id)arg1;	// IMP=0x00000000005dd5c9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005dd5bc
- (id)jsonRepresentation;	// IMP=0x00000000005dcd22
- (id)dictionaryRepresentation;	// IMP=0x00000000005dca04
- (id)description;	// IMP=0x00000000005dc955

@end
