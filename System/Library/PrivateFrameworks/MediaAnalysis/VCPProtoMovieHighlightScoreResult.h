//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieHighlightScoreResult : PBCodable
{
    float _highlightScore;	// 8 = 0x8
    VCPProtoTimeRange *_timeRange;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x001000000012cfc3
- (void).cxx_destruct;	// IMP=0x0000000000049c35
@property(nonatomic) float highlightScore; // @synthesize highlightScore=_highlightScore;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000049b81
- (unsigned long long)hash;	// IMP=0x0000000000049a79
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000499cf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000049945
- (void)copyTo:(id)arg1;	// IMP=0x00000000000498e7
- (void)writeTo:(id)arg1;	// IMP=0x0000000000049887
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000004987a
- (id)dictionaryRepresentation;	// IMP=0x000000000004958d
- (id)description;	// IMP=0x00000000000494de
- (id)exportToLegacyDictionary;	// IMP=0x000000000012d149

@end

