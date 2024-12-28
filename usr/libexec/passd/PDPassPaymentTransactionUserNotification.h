//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKAccountUser, PKFamilyMember, PKPaymentOfferInstallmentCriteria, PKPaymentTransaction;

@interface PDPassPaymentTransactionUserNotification
{
    PKPaymentTransaction *_paymentTransaction;	// 136 = 0x88
    PKFamilyMember *_familyMember;	// 144 = 0x90
    PKAccountUser *_accountUser;	// 152 = 0x98
    PKPaymentOfferInstallmentCriteria *_installmentCriteria;	// 160 = 0xa0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000002c50cf
+ (id)notificationIdentifierForPaymentTransaction:(id)arg1;	// IMP=0x00100000002c4d1f
- (void).cxx_destruct;	// IMP=0x00200000002c6caa
@property(readonly, nonatomic) PKPaymentOfferInstallmentCriteria *installmentCriteria; // @synthesize installmentCriteria=_installmentCriteria;
@property(readonly, nonatomic) PKAccountUser *accountUser; // @synthesize accountUser=_accountUser;
@property(readonly, nonatomic) PKFamilyMember *familyMember; // @synthesize familyMember=_familyMember;
@property(readonly, nonatomic) PKPaymentTransaction *paymentTransaction; // @synthesize paymentTransaction=_paymentTransaction;
- (id)_personContact;	// IMP=0x00100000002c6be8
- (id)_awardsString;	// IMP=0x00100000002c6bcb
- (id)_amountsString;	// IMP=0x00100000002c68a6
- (id)_absoluteAmountString;	// IMP=0x00100000002c67a5
- (id)_amountString;	// IMP=0x00100000002c663d
- (id)_statusString;	// IMP=0x00100000002c65cd
- (id)_locationString;	// IMP=0x00100000002c63d8
- (void)_populateNotificationContent:(id)arg1 withDataSource:(id)arg2;	// IMP=0x00100000002c567c
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x00100000002c53ed
- (_Bool)isValid;	// IMP=0x00100000002c5342
- (unsigned long long)notificationType;	// IMP=0x00100000002c5337
- (unsigned long long)familyNotificationType;	// IMP=0x00100000002c530d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000002c5238
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000002c50d7
- (id)initWithPaymentTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3 familyMember:(id)arg4 accountUser:(id)arg5 installmentCriteria:(id)arg6;	// IMP=0x00100000002c4d9f

@end
