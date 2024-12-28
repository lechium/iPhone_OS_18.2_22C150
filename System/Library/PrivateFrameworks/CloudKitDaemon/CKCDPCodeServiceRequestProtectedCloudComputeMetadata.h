//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface CKCDPCodeServiceRequestProtectedCloudComputeMetadata : PBCodable
{
    NSMutableArray *_cryptoSessions;	// 8 = 0x8
}

+ (Class)cryptoSessionsType;	// IMP=0x0010000000137e8f
- (void).cxx_destruct;	// IMP=0x0000000000138909
@property(retain, nonatomic) NSMutableArray *cryptoSessions; // @synthesize cryptoSessions=_cryptoSessions;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001387ab
- (unsigned long long)hash;	// IMP=0x000000000013878e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001386fe
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013853a
- (void)copyTo:(id)arg1;	// IMP=0x0000000000138475
- (void)writeTo:(id)arg1;	// IMP=0x000000000013833f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000138332
- (id)dictionaryRepresentation;	// IMP=0x0000000000137f4f
- (id)description;	// IMP=0x0000000000137ea0
- (id)cryptoSessionsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000137e72
- (unsigned long long)cryptoSessionsCount;	// IMP=0x0000000000137e55
- (void)addCryptoSessions:(id)arg1;	// IMP=0x0000000000137deb
- (void)clearCryptoSessions;	// IMP=0x0000000000137dce

@end
