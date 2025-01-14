//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoBounds, VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMoviePetsFaceResult : PBCodable
{
    VCPProtoBounds *_bounds;	// 8 = 0x8
    float _confidence;	// 16 = 0x10
    VCPProtoTimeRange *_timeRange;	// 24 = 0x18
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x0010000000348ad0
- (void).cxx_destruct;	// IMP=0x00000000000834f6
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(retain, nonatomic) VCPProtoBounds *bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000833e7
- (unsigned long long)hash;	// IMP=0x00000000000832b6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000831e4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000083134
- (void)copyTo:(id)arg1;	// IMP=0x00000000000830b1
- (void)writeTo:(id)arg1;	// IMP=0x0000000000083039
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000008302c
- (id)dictionaryRepresentation;	// IMP=0x0000000000082caf
- (id)description;	// IMP=0x0000000000082c00
- (id)exportToLegacyDictionary;	// IMP=0x0000000000348d4e

@end

