//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface NGMPBP256Key : PBCodable
{
    NSData *_keyData;	// 8 = 0x8
    NSString *_keychainTag;	// 16 = 0x10
    int _keystore;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001fa7d
@property(retain, nonatomic) NSData *keyData; // @synthesize keyData=_keyData;
@property(nonatomic) int keystore; // @synthesize keystore=_keystore;
@property(retain, nonatomic) NSString *keychainTag; // @synthesize keychainTag=_keychainTag;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001f9a2
- (unsigned long long)hash;	// IMP=0x000000000001f934
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001f86c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001f7bf
- (void)copyTo:(id)arg1;	// IMP=0x000000000001f74e
- (void)writeTo:(id)arg1;	// IMP=0x000000000001f6d9
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001f6cc
- (id)dictionaryRepresentation;	// IMP=0x000000000001f3e0
- (id)description;	// IMP=0x000000000001f331
@property(readonly, nonatomic) _Bool hasKeyData;
- (int)StringAsKeystore:(id)arg1;	// IMP=0x000000000001f262
- (id)keystoreAsString:(int)arg1;	// IMP=0x000000000001f217
@property(readonly, nonatomic) _Bool hasKeychainTag;

@end
