//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface PCSEnvelopedKeyMaterial : PBCodable
{
    NSData *_encryptedSeed;	// 8 = 0x8
    NSData *_masterKeyId;	// 16 = 0x10
    int _version;	// 24 = 0x18
    struct {
        unsigned int version:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000023496
@property(retain, nonatomic) NSData *encryptedSeed; // @synthesize encryptedSeed=_encryptedSeed;
@property(retain, nonatomic) NSData *masterKeyId; // @synthesize masterKeyId=_masterKeyId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000233c9
- (unsigned long long)hash;	// IMP=0x0000000000023349
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000023266
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000231a3
- (void)copyTo:(id)arg1;	// IMP=0x0000000000023120
- (void)writeTo:(id)arg1;	// IMP=0x000000000002309d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000023090
- (id)dictionaryRepresentation;	// IMP=0x0000000000022d7e
- (id)description;	// IMP=0x0000000000022ccf
@property(readonly, nonatomic) _Bool hasEncryptedSeed;
@property(readonly, nonatomic) _Bool hasMasterKeyId;
- (int)StringAsVersion:(id)arg1;	// IMP=0x0000000000022c40
- (id)versionAsString:(int)arg1;	// IMP=0x0000000000022beb
@property(nonatomic) _Bool hasVersion;
@property(nonatomic) int version; // @synthesize version=_version;

@end

