//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoAudioFusedVideoEmbeddingResult : PBCodable
{
    NSData *_embeddingBlob;	// 8 = 0x8
    VCPProtoTimeRange *_timeRange;	// 16 = 0x10
    unsigned int _version;	// 24 = 0x18
    CDStruct_f20694ce _has;	// 28 = 0x1c
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x001000000008e04c
- (void).cxx_destruct;	// IMP=0x0000000000364b96
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(retain, nonatomic) NSData *embeddingBlob; // @synthesize embeddingBlob=_embeddingBlob;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000364aa3
- (unsigned long long)hash;	// IMP=0x0000000000364a2d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000036494b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000036488d
- (void)copyTo:(id)arg1;	// IMP=0x000000000036480a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000364791
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000364784
- (id)dictionaryRepresentation;	// IMP=0x000000000036440c
- (id)description;	// IMP=0x000000000036435d
@property(nonatomic) _Bool hasVersion;
- (id)exportToLegacyDictionary;	// IMP=0x000000000008e37c

@end

