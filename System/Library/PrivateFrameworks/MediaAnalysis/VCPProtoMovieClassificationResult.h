//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieClassificationResult : PBCodable
{
    NSMutableArray *_classifications;	// 8 = 0x8
    VCPProtoTimeRange *_timeRange;	// 16 = 0x10
}

+ (Class)classificationType;	// IMP=0x00100000000d4163
+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x001000000012fe95
- (void).cxx_destruct;	// IMP=0x00000000000d4d74
@property(retain, nonatomic) NSMutableArray *classifications; // @synthesize classifications=_classifications;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000d4ba0
- (unsigned long long)hash;	// IMP=0x00000000000d4b53
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d4a9b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d48c3
- (void)copyTo:(id)arg1;	// IMP=0x00000000000d47e9
- (void)writeTo:(id)arg1;	// IMP=0x00000000000d469b
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000d468e
- (id)dictionaryRepresentation;	// IMP=0x00000000000d4223
- (id)description;	// IMP=0x00000000000d4174
- (id)classificationAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000d4146
- (unsigned long long)classificationsCount;	// IMP=0x00000000000d4129
- (void)addClassification:(id)arg1;	// IMP=0x00000000000d40bf
- (void)clearClassifications;	// IMP=0x00000000000d40a2
- (id)exportToLegacyDictionary;	// IMP=0x0000000000130151

@end

