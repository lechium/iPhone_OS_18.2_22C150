//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface CKDPTokenRegistrationBody : PBCodable
{
    int _apnsEnv;	// 8 = 0x8
    NSString *_bundleIdentifier;	// 16 = 0x10
    NSData *_token;	// 24 = 0x18
    _Bool _skipBundleIDCheck;	// 32 = 0x20
    struct {
        unsigned int apnsEnv:1;
        unsigned int skipBundleIDCheck:1;
    } _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x00000000001b3ae9
@property(nonatomic) _Bool skipBundleIDCheck; // @synthesize skipBundleIDCheck=_skipBundleIDCheck;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSData *token; // @synthesize token=_token;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001b39ef
- (unsigned long long)hash;	// IMP=0x00000000001b3951
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001b383a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001b375f
- (void)copyTo:(id)arg1;	// IMP=0x00000000001b36bf
- (void)writeTo:(id)arg1;	// IMP=0x00000000001b3611
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001b3604
- (id)dictionaryRepresentation;	// IMP=0x00000000001b31fc
- (id)description;	// IMP=0x00000000001b314d
@property(nonatomic) _Bool hasSkipBundleIDCheck;
- (int)StringAsApnsEnv:(id)arg1;	// IMP=0x00000000001b309f
- (id)apnsEnvAsString:(int)arg1;	// IMP=0x00000000001b304a
@property(nonatomic) _Bool hasApnsEnv;
@property(nonatomic) int apnsEnv; // @synthesize apnsEnv=_apnsEnv;
@property(readonly, nonatomic) _Bool hasBundleIdentifier;
@property(readonly, nonatomic) _Bool hasToken;

@end

