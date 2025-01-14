//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoVideoSegmentCaptionResult : PBCodable
{
    float _confidence;	// 8 = 0x8
    NSString *_text;	// 16 = 0x10
    VCPProtoTimeRange *_timeRange;	// 24 = 0x18
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000001ca0df
- (void).cxx_destruct;	// IMP=0x00000000002765ea
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002764f1
- (unsigned long long)hash;	// IMP=0x00000000002763c6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002762f9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000276248
- (void)copyTo:(id)arg1;	// IMP=0x00000000002761c5
- (void)writeTo:(id)arg1;	// IMP=0x000000000027614d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000276140
- (id)dictionaryRepresentation;	// IMP=0x0000000000275e09
- (id)description;	// IMP=0x0000000000275d5a
- (id)exportToLegacyDictionary;	// IMP=0x00000000001ca3fc

@end

