//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSData;

@interface _PKNearbyPeerPaymentReceiverResponseMetadata : NSObject
{
    MISSING_TYPE *encryptedData;	// 8 = 0x8
    MISSING_TYPE *encryptionVersion;	// 24 = 0x18
    MISSING_TYPE *publicKeyHash;	// 40 = 0x28
    MISSING_TYPE *ephemeralPublicKey;	// 56 = 0x38
    MISSING_TYPE *senderAddress;	// 72 = 0x48
    MISSING_TYPE *receiverAddress;	// 88 = 0x58
    MISSING_TYPE *receiverImageData;	// 104 = 0x68
    MISSING_TYPE *contactAddressType;	// 120 = 0x78
}

+ (void)receiverDataWithNonce:(id)arg1 nearbyMetadata:(id)arg2 appearanceData:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x006000000013def0
- (void).cxx_destruct;	// IMP=0x000000000013e470
- (id)init;	// IMP=0x000000000013e410
@property(nonatomic, readonly) NSData *serializedData;

@end
