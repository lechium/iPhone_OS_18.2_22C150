//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSString;

@interface CKDPStreamingAssetSaveAssetRequest : PBRequest
{
    long long _requestedSize;	// 8 = 0x8
    long long _uploadedSize;	// 16 = 0x10
    NSString *_uploadReceipt;	// 24 = 0x18
    struct {
        unsigned int requestedSize:1;
        unsigned int uploadedSize:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000010b1dc
@property(retain, nonatomic) NSString *uploadReceipt; // @synthesize uploadReceipt=_uploadReceipt;
@property(nonatomic) long long uploadedSize; // @synthesize uploadedSize=_uploadedSize;
@property(nonatomic) long long requestedSize; // @synthesize requestedSize=_requestedSize;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000010b113
- (unsigned long long)hash;	// IMP=0x000000000010b0ac
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000010afce
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010af1b
- (void)copyTo:(id)arg1;	// IMP=0x000000000010ae99
- (void)writeTo:(id)arg1;	// IMP=0x000000000010ae09
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000010adfc
- (id)dictionaryRepresentation;	// IMP=0x000000000010aa6b
- (id)description;	// IMP=0x000000000010a9bc
@property(readonly, nonatomic) _Bool hasUploadReceipt;
@property(nonatomic) _Bool hasUploadedSize;
@property(nonatomic) _Bool hasRequestedSize;

@end
