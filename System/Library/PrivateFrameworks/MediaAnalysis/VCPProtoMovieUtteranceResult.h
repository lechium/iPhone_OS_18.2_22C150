//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieUtteranceResult : PBCodable
{
    VCPProtoTimeRange *_timeRange;	// 8 = 0x8
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000002911a5
- (void).cxx_destruct;	// IMP=0x00000000000ffbef
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000ffb71
- (unsigned long long)hash;	// IMP=0x00000000000ffb54
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ffac4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ffa4c
- (void)copyTo:(id)arg1;	// IMP=0x00000000000ffa29
- (void)writeTo:(id)arg1;	// IMP=0x00000000000ffa0c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000ff9ff
- (id)dictionaryRepresentation;	// IMP=0x00000000000ff7cb
- (id)description;	// IMP=0x00000000000ff71c
- (id)exportToLegacyDictionary;	// IMP=0x0000000000291287

@end
