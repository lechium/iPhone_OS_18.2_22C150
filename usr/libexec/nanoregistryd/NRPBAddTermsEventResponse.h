//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NRPBNSError;

@interface NRPBAddTermsEventResponse : PBCodable
{
    NRPBNSError *_error;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000250b4
- (unsigned long long)hash;	// IMP=0x001000000002507e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000024fee
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000024f76
- (void)writeTo:(id)arg1;	// IMP=0x0010000000024f3b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000024f2e
- (id)dictionaryRepresentation;	// IMP=0x0010000000024cfa
- (id)description;	// IMP=0x0010000000024c4b

@end
