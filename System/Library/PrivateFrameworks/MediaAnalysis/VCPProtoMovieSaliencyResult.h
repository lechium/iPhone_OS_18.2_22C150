//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoBounds, VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieSaliencyResult : PBCodable
{
    VCPProtoBounds *_bounds;	// 8 = 0x8
    float _confidence;	// 16 = 0x10
    VCPProtoTimeRange *_timeRange;	// 24 = 0x18
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x0010000000101a77
- (void).cxx_destruct;	// IMP=0x00000000000a1154
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(retain, nonatomic) VCPProtoBounds *bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000a1045
- (unsigned long long)hash;	// IMP=0x00000000000a0f14
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a0e42
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a0d92
- (void)copyTo:(id)arg1;	// IMP=0x00000000000a0d0f
- (void)writeTo:(id)arg1;	// IMP=0x00000000000a0c97
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000a0c8a
- (id)dictionaryRepresentation;	// IMP=0x00000000000a090d
- (id)description;	// IMP=0x00000000000a085e
- (id)exportToLegacyDictionary;	// IMP=0x0000000000101cf5

@end
