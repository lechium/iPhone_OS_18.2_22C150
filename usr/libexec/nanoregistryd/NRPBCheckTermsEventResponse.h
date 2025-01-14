//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NRPBNSError;

@interface NRPBCheckTermsEventResponse : PBCodable
{
    NRPBNSError *_error;	// 8 = 0x8
    _Bool _acknowledged;	// 16 = 0x10
    struct {
        unsigned int acknowledged:1;
    } _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0020000000008895
- (unsigned long long)hash;	// IMP=0x0010000000008813
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000874d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000086b9
- (void)writeTo:(id)arg1;	// IMP=0x001000000000863b
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000000862e
- (id)dictionaryRepresentation;	// IMP=0x0010000000008308
- (id)description;	// IMP=0x0010000000008259

@end

