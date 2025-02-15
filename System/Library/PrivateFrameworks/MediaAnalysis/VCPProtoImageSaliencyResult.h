//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoBounds;

__attribute__((visibility("hidden")))
@interface VCPProtoImageSaliencyResult : PBCodable
{
    VCPProtoBounds *_bounds;	// 8 = 0x8
    float _confidence;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x0010000000084bc6
- (void).cxx_destruct;	// IMP=0x0000000000101a64
@property(retain, nonatomic) VCPProtoBounds *bounds; // @synthesize bounds=_bounds;
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001019b0
- (unsigned long long)hash;	// IMP=0x00000000001018ab
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000101806
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010177b
- (void)copyTo:(id)arg1;	// IMP=0x0000000000101747
- (void)writeTo:(id)arg1;	// IMP=0x00000000001016e1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001016d4
- (id)dictionaryRepresentation;	// IMP=0x00000000001013f7
- (id)description;	// IMP=0x0000000000101348
- (id)exportToLegacyDictionary;	// IMP=0x0000000000084d72

@end

