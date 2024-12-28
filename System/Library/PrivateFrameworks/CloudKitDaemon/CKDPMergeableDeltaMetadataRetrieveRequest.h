//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPMergeableValueIdentifier, NSData;

@interface CKDPMergeableDeltaMetadataRetrieveRequest : PBRequest
{
    NSData *_continuation;	// 8 = 0x8
    CKDPMergeableValueIdentifier *_identifier;	// 16 = 0x10
}

+ (id)options;	// IMP=0x00100000002a26b2
- (void).cxx_destruct;	// IMP=0x00000000002a2da8
@property(retain, nonatomic) NSData *continuation; // @synthesize continuation=_continuation;
@property(retain, nonatomic) CKDPMergeableValueIdentifier *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002a2ce5
- (unsigned long long)hash;	// IMP=0x00000000002a2c98
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002a2be0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002a2b42
- (void)copyTo:(id)arg1;	// IMP=0x00000000002a2adf
- (Class)responseClass;	// IMP=0x00000000002a2ace
- (unsigned int)requestTypeCode;	// IMP=0x00000000002a2ac3
- (void)writeTo:(id)arg1;	// IMP=0x00000000002a2a66
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002a2a59
- (id)dictionaryRepresentation;	// IMP=0x00000000002a27db
- (id)description;	// IMP=0x00000000002a272c
@property(readonly, nonatomic) _Bool hasContinuation;
@property(readonly, nonatomic) _Bool hasIdentifier;

@end
