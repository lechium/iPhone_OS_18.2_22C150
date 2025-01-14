//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface TASKIPAddress : PBCodable
{
    NSData *;	// 8 = 0x8
    unsigned int _ttl;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000c110e
@property(nonatomic) unsigned int ttl; // @synthesize ttl=_ttl;
@property(retain, nonatomic) NSData *ipAddress; // @synthesize ipAddress=_ipAddress;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000c1078
- (unsigned long long)hash;	// IMP=0x00100000000c103a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000c0f9a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000c0f14
- (void)copyTo:(id)arg1;	// IMP=0x00100000000c0eba
- (void)writeTo:(id)arg1;	// IMP=0x00100000000c0e5c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000c0e4f
- (id)dictionaryRepresentation;	// IMP=0x00100000000c0bd3
- (id)description;	// IMP=0x00100000000c0b24

@end

