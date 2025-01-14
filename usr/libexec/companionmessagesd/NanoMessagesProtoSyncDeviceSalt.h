//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface NanoMessagesProtoSyncDeviceSalt : PBCodable
{
    NSData *_deviceSalt;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000002c69
@property(retain, nonatomic) NSData *deviceSalt; // @synthesize deviceSalt=_deviceSalt;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000002c20
- (unsigned long long)hash;	// IMP=0x0010000000002c03
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000002b73
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000002afb
- (void)copyTo:(id)arg1;	// IMP=0x0010000000002ad1
- (void)writeTo:(id)arg1;	// IMP=0x0010000000002aad
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000002aa0
- (id)dictionaryRepresentation;	// IMP=0x00100000000028ef
- (id)description;	// IMP=0x0010000000002840
@property(readonly, nonatomic) _Bool hasDeviceSalt;

@end

