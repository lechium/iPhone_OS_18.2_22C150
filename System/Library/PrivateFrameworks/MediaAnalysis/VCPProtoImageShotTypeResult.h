//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface VCPProtoImageShotTypeResult : PBCodable
{
    int _shotType;	// 8 = 0x8
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000003a2fc6
@property(nonatomic) int shotType; // @synthesize shotType=_shotType;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000010bed1
- (unsigned long long)hash;	// IMP=0x000000000010beb7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000010be5a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010be08
- (void)copyTo:(id)arg1;	// IMP=0x000000000010bdf5
- (void)writeTo:(id)arg1;	// IMP=0x000000000010bdd9
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000010bdcc
- (id)dictionaryRepresentation;	// IMP=0x000000000010bbad
- (id)description;	// IMP=0x000000000010bafe
- (id)exportToLegacyDictionary;	// IMP=0x00000000003a30a9

@end
