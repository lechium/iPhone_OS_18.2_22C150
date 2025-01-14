//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PeerPaymentCounterpartImageData
{
}

+ (id)_commonDictionaryForPeerPaymentCounterpartImageData:(id)arg1;	// IMP=0x004000000041210b
+ (id)_propertySettersForPeerPaymentCounterpartImageData;	// IMP=0x0010000000412055
+ (id)_predicateForIdentifier:(id)arg1;	// IMP=0x0010000000412032
+ (id)_predicateForAccountPID:(long long)arg1;	// IMP=0x0010000000411fc1
+ (id)_peerPaymentCounterpartImageDataWithQuery:(id)arg1;	// IMP=0x0010000000411c9c
+ (id)peerPaymentCounterpartImageDataForPeerPaymentAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000411be9
+ (id)peerPaymentCounterpartImageDataWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000411b3f
+ (id)counterpartImageDataWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000411ab3
+ (void)deleteEntitiesForPeerPaymentAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000411a1a
+ (void)deleteEntityForCounterpartImageDataIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000411981
+ (void)insertOrUpdatePeerPaymentCounterpartImageData:(id)arg1 forPeerPaymentAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000041154a
+ (id)databaseTable;	// IMP=0x001000000041144d
- (id)counterpartImageData;	// IMP=0x0040000000411e52
- (_Bool)deleteFromDatabase;	// IMP=0x0010000000411912
- (void)updateWithPeerPaymentCounterpartImageData:(id)arg1;	// IMP=0x0010000000411713
- (id)initWithPeerPaymentCounterpartImageData:(id)arg1 forPeerPaymentAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000041145a

@end

