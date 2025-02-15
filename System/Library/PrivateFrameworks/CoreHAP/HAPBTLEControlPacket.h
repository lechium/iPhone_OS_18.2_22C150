//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HAPBTLETransactionIdentifier, NSData;

__attribute__((visibility("hidden")))
@interface HAPBTLEControlPacket : HMFObject
{
    unsigned char _type;	// 8 = 0x8
    _Bool _continuationPacket;	// 9 = 0x9
    HAPBTLETransactionIdentifier *_transactionIdentifier;	// 16 = 0x10
    NSData *_payload;	// 24 = 0x18
}

+ (id)shortDescription;	// IMP=0x006000000000958e
+ (id)packetWithSerializedData:(id)arg1 error:(id *)arg2;	// IMP=0x006000000000910f
- (void).cxx_destruct;	// IMP=0x00000000000090de
@property(readonly, nonatomic, getter=isContinuationPacket) _Bool continuationPacket; // @synthesize continuationPacket=_continuationPacket;
@property(readonly, copy, nonatomic) NSData *payload; // @synthesize payload=_payload;
@property(readonly, nonatomic) HAPBTLETransactionIdentifier *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
@property(readonly, nonatomic) unsigned char type; // @synthesize type=_type;
- (id)serialize;	// IMP=0x0000000000008e3e
- (id)description;	// IMP=0x0000000000008e2a
- (id)debugDescription;	// IMP=0x0000000000008e13
- (id)descriptionWithPointer:(_Bool)arg1;	// IMP=0x0000000000008c8c
- (id)shortDescription;	// IMP=0x0000000000008c72
- (id)initWithControlType:(unsigned char)arg1 transactionIdentifier:(id)arg2 continuationPacket:(_Bool)arg3 packetPayload:(id)arg4 maximumLength:(unsigned long long)arg5;	// IMP=0x0000000000008a3d
- (id)init;	// IMP=0x0000000000008995

@end

