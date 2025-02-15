//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface CKDPSignedShareUsage : PBCodable
{
    NSData *_shareUsage;	// 8 = 0x8
    NSData *_signature;	// 16 = 0x10
    int _version;	// 24 = 0x18
    CDStruct_f20694ce _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x00000000003bf573
@property(retain, nonatomic) NSData *shareUsage; // @synthesize shareUsage=_shareUsage;
@property(retain, nonatomic) NSData *signature; // @synthesize signature=_signature;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000003bf4a6
- (unsigned long long)hash;	// IMP=0x00000000003bf426
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003bf343
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003bf280
- (void)copyTo:(id)arg1;	// IMP=0x00000000003bf1fd
- (void)writeTo:(id)arg1;	// IMP=0x00000000003bf17a
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003bef73
- (id)dictionaryRepresentation;	// IMP=0x00000000003bee8c
- (id)description;	// IMP=0x00000000003beddd
@property(readonly, nonatomic) _Bool hasShareUsage;
@property(readonly, nonatomic) _Bool hasSignature;
@property(nonatomic) _Bool hasVersion;
@property(nonatomic) int version; // @synthesize version=_version;

@end

