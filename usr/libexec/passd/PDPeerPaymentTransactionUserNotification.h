//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKFamilyMember, PKPaymentTransaction;

@interface PDPeerPaymentTransactionUserNotification
{
    PKPaymentTransaction *_paymentTransaction;	// 136 = 0x88
    PKFamilyMember *_familyMember;	// 144 = 0x90
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000002c9c0c
- (void).cxx_destruct;	// IMP=0x00200000002c9fc6
@property(readonly, nonatomic) PKFamilyMember *familyMember; // @synthesize familyMember=_familyMember;
@property(readonly, nonatomic) PKPaymentTransaction *paymentTransaction; // @synthesize paymentTransaction=_paymentTransaction;
- (unsigned long long)familyNotificationType;	// IMP=0x00100000002c9f8d
- (id)_formattedCounterpartName;	// IMP=0x00100000002c9e25
- (id)_peerPaymentNotificationType;	// IMP=0x00100000002c9da2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000002c9d03
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000002c9c14
- (id)initWithPaymentTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 familyMember:(id)arg3 notificationIdentifier:(id)arg4;	// IMP=0x00100000002c9a47
- (id)initWithPaymentTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 familyMember:(id)arg3;	// IMP=0x00100000002c992e

@end

