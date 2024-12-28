//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPSubscription;

@interface CKDPSubscriptionCreateRequest : PBRequest
{
    CKDPSubscription *_subscription;	// 8 = 0x8
}

+ (id)options;	// IMP=0x00100000001f1e98
- (void).cxx_destruct;	// IMP=0x00000000001f23fa
@property(retain, nonatomic) CKDPSubscription *subscription; // @synthesize subscription=_subscription;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001f237c
- (unsigned long long)hash;	// IMP=0x00000000001f235f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001f22cf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001f2257
- (void)copyTo:(id)arg1;	// IMP=0x00000000001f222d
- (Class)responseClass;	// IMP=0x00000000001f221c
- (unsigned int)requestTypeCode;	// IMP=0x00000000001f2211
- (void)writeTo:(id)arg1;	// IMP=0x00000000001f21ed
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001f21e0
- (id)dictionaryRepresentation;	// IMP=0x00000000001f1fac
- (id)description;	// IMP=0x00000000001f1efd
@property(readonly, nonatomic) _Bool hasSubscription;

@end
