//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoLivePhotoRecommendationResult : PBCodable
{
    float _qualityScore;	// 8 = 0x8
    VCPProtoTimeRange *_timeRange;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000002597ca
- (void).cxx_destruct;	// IMP=0x000000000028f359
@property(nonatomic) float qualityScore; // @synthesize qualityScore=_qualityScore;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000028f2a5
- (unsigned long long)hash;	// IMP=0x000000000028f19d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000028f0f3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000028f069
- (void)copyTo:(id)arg1;	// IMP=0x000000000028f00b
- (void)writeTo:(id)arg1;	// IMP=0x000000000028efab
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000028ef9e
- (id)dictionaryRepresentation;	// IMP=0x000000000028ecb1
- (id)description;	// IMP=0x000000000028ec02
- (id)exportToLegacyDictionary;	// IMP=0x0000000000259950

@end
