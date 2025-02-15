//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface ICAppleMusicAPITokenCollection : PBCodable
{
    NSString *_developerToken;	// 8 = 0x8
    NSString *_userToken;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000f36fa
@property(retain, nonatomic) NSString *userToken; // @synthesize userToken=_userToken;
@property(retain, nonatomic) NSString *developerToken; // @synthesize developerToken=_developerToken;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000f364d
- (unsigned long long)hash;	// IMP=0x00100000000f3600
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000f3548
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000f34aa
- (void)writeTo:(id)arg1;	// IMP=0x00100000000f344d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000f3440
- (id)dictionaryRepresentation;	// IMP=0x00100000000f33bd
- (id)description;	// IMP=0x00100000000f330e
@property(readonly, nonatomic) _Bool hasUserToken;
@property(readonly, nonatomic) _Bool hasDeveloperToken;
- (id)privacyConsciousDescription;	// IMP=0x00100000000218a7
- (id)privacyConsciousDictionaryRepresentation;	// IMP=0x001000000002171a

@end

