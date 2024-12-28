//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieLoudnessResult : PBCodable
{
    double _energy;	// 8 = 0x8
    double _peak;	// 16 = 0x10
    VCPProtoTimeRange *_timeRange;	// 24 = 0x18
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x0010000000240880
- (void).cxx_destruct;	// IMP=0x0000000000348abd
@property(nonatomic) double peak; // @synthesize peak=_peak;
@property(nonatomic) double energy; // @synthesize energy=_energy;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000003489d3
- (unsigned long long)hash;	// IMP=0x00000000003487da
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000034871a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000034867e
- (void)copyTo:(id)arg1;	// IMP=0x000000000034860e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000348595
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000348588
- (id)dictionaryRepresentation;	// IMP=0x000000000034820a
- (id)description;	// IMP=0x000000000034815b
- (id)exportToLegacyDictionary;	// IMP=0x0000000000240aa1

@end
