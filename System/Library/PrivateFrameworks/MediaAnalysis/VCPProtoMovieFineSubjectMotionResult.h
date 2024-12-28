//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieFineSubjectMotionResult : PBCodable
{
    float _actionScore;	// 8 = 0x8
    VCPProtoTimeRange *_timeRange;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x001000000012c716
- (void).cxx_destruct;	// IMP=0x000000000001e58c
@property(nonatomic) float actionScore; // @synthesize actionScore=_actionScore;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001e4d8
- (unsigned long long)hash;	// IMP=0x000000000001e3d0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001e326
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001e29c
- (void)copyTo:(id)arg1;	// IMP=0x000000000001e23e
- (void)writeTo:(id)arg1;	// IMP=0x000000000001e1de
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001e1d1
- (id)dictionaryRepresentation;	// IMP=0x000000000001dee4
- (id)description;	// IMP=0x000000000001de35
- (id)exportToLegacyDictionary;	// IMP=0x000000000012c89c

@end
