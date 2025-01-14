//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSData;

@interface CKDPCodeFunctionInvokeRequestAttestationRequest : PBRequest
{
    NSData *_entropy;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000093d25
@property(retain, nonatomic) NSData *entropy; // @synthesize entropy=_entropy;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000093cdc
- (unsigned long long)hash;	// IMP=0x0000000000093cbf
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000093c2f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000093bb7
- (void)copyTo:(id)arg1;	// IMP=0x0000000000093b8d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000093b69
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000093b5c
- (id)dictionaryRepresentation;	// IMP=0x00000000000939b7
- (id)description;	// IMP=0x0000000000093908
@property(readonly, nonatomic) _Bool hasEntropy;

@end

