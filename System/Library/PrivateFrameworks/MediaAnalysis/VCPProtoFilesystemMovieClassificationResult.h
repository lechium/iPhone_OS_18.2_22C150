//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface VCPProtoFilesystemMovieClassificationResult : PBCodable
{
    CDStruct_9f2792e4 _identifiers;	// 8 = 0x8
    float _duration;	// 32 = 0x20
    float _start;	// 36 = 0x24
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000000f8699
@property(nonatomic) float duration; // @synthesize duration=_duration;
@property(nonatomic) float start; // @synthesize start=_start;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002b9998
- (unsigned long long)hash;	// IMP=0x00000000002b97c4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002b9719
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002b9695
- (void)copyTo:(id)arg1;	// IMP=0x00000000002b95d1
- (void)writeTo:(id)arg1;	// IMP=0x00000000002b9543
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002b9536
- (id)dictionaryRepresentation;	// IMP=0x00000000002b9107
- (id)description;	// IMP=0x00000000002b9058
- (void)setIdentifiers:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000002b9041
- (unsigned int)identifierAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002b8f71
- (void)addIdentifier:(unsigned int)arg1;	// IMP=0x00000000002b8f5e
- (void)clearIdentifiers;	// IMP=0x00000000002b8f4d
@property(readonly, nonatomic) unsigned int *identifiers;
@property(readonly, nonatomic) unsigned long long identifiersCount;
- (void)dealloc;	// IMP=0x00000000002b8eea
- (id)exportToLegacyDictionary;	// IMP=0x00000000000f8a6e

@end
