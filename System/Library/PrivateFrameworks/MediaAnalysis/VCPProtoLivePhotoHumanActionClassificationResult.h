//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, VCPProtoBounds, VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoLivePhotoHumanActionClassificationResult : PBCodable
{
    VCPProtoBounds *_bounds;	// 8 = 0x8
    NSMutableArray *_classifications;	// 16 = 0x10
    NSString *_faceId;	// 24 = 0x18
    VCPProtoTimeRange *_timeRange;	// 32 = 0x20
}

+ (Class)classificationType;	// IMP=0x001000000029b0ad
+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x0010000000300c29
- (void).cxx_destruct;	// IMP=0x000000000029c012
@property(retain, nonatomic) NSString *faceId; // @synthesize faceId=_faceId;
@property(retain, nonatomic) VCPProtoBounds *bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) NSMutableArray *classifications; // @synthesize classifications=_classifications;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000029bd9a
- (unsigned long long)hash;	// IMP=0x000000000029bd16
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000029bc0a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000029b9c5
- (void)copyTo:(id)arg1;	// IMP=0x000000000029b8ad
- (void)writeTo:(id)arg1;	// IMP=0x000000000029b71d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000029b710
- (id)dictionaryRepresentation;	// IMP=0x000000000029b182
- (id)description;	// IMP=0x000000000029b0d3
@property(readonly, nonatomic) _Bool hasFaceId;
- (id)classificationAtIndex:(unsigned long long)arg1;	// IMP=0x000000000029b090
- (unsigned long long)classificationsCount;	// IMP=0x000000000029b073
- (void)addClassification:(id)arg1;	// IMP=0x000000000029b009
- (void)clearClassifications;	// IMP=0x000000000029afec
- (id)exportToLegacyDictionary;	// IMP=0x0000000000301043

@end

