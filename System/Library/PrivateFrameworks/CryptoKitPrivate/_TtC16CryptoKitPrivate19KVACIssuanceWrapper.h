//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSData;

@interface _TtC16CryptoKitPrivate19KVACIssuanceWrapper : NSObject
{
    MISSING_TYPE *issuance;	// 8 = 0x8
    MISSING_TYPE *keyId;	// 112 = 0x70
    MISSING_TYPE *issuanceData;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000000025220
- (id)init;	// IMP=0x00000000000251d0
- (id)initWithIssuanceData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000250e0
@property(nonatomic, readonly) NSData *issuanceData;
@property(nonatomic, readonly) NSData *keyId;

@end
