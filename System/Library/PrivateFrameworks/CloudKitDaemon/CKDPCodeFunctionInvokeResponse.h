//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPCodeFunctionInvokeResponseAttestationResponse, NSData;

@interface CKDPCodeFunctionInvokeResponse : PBCodable
{
    CKDPCodeFunctionInvokeResponseAttestationResponse *_attestationResponse;	// 8 = 0x8
    NSData *_serializedResult;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000377d40
@property(retain, nonatomic) CKDPCodeFunctionInvokeResponseAttestationResponse *attestationResponse; // @synthesize attestationResponse=_attestationResponse;
@property(retain, nonatomic) NSData *serializedResult; // @synthesize serializedResult=_serializedResult;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000377c7d
- (unsigned long long)hash;	// IMP=0x0000000000377c30
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000377b78
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000377ada
- (void)copyTo:(id)arg1;	// IMP=0x0000000000377a77
- (void)writeTo:(id)arg1;	// IMP=0x0000000000377a1a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000377a0d
- (id)dictionaryRepresentation;	// IMP=0x0000000000377796
- (id)description;	// IMP=0x00000000003776e7
@property(readonly, nonatomic) _Bool hasAttestationResponse;
@property(readonly, nonatomic) _Bool hasSerializedResult;

@end
