//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoBounds, VCPProtoTimeRange, VCPProtoVideoKeyFrame;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieSummaryResult : PBCodable
{
    float _curationScore;	// 8 = 0x8
    VCPProtoVideoKeyFrame *_keyFrame;	// 16 = 0x10
    VCPProtoBounds *_playbackCrop;	// 24 = 0x18
    VCPProtoTimeRange *_timeRange;	// 32 = 0x20
    _Bool _autoPlayable;	// 40 = 0x28
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000001171d9
- (void).cxx_destruct;	// IMP=0x000000000036efc7
@property(retain, nonatomic) VCPProtoBounds *playbackCrop; // @synthesize playbackCrop=_playbackCrop;
@property(nonatomic) _Bool autoPlayable; // @synthesize autoPlayable=_autoPlayable;
@property(retain, nonatomic) VCPProtoVideoKeyFrame *keyFrame; // @synthesize keyFrame=_keyFrame;
@property(nonatomic) float curationScore; // @synthesize curationScore=_curationScore;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000036ee2f
- (unsigned long long)hash;	// IMP=0x000000000036eccf
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000036ebb9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000036ead3
- (void)copyTo:(id)arg1;	// IMP=0x000000000036ea35
- (void)writeTo:(id)arg1;	// IMP=0x000000000036e98d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000036e980
- (id)dictionaryRepresentation;	// IMP=0x000000000036e491
- (id)description;	// IMP=0x000000000036e3e2
@property(readonly, nonatomic) _Bool hasPlaybackCrop;
@property(readonly, nonatomic) _Bool hasKeyFrame;
- (id)exportToLegacyDictionary;	// IMP=0x000000000011765a

@end
