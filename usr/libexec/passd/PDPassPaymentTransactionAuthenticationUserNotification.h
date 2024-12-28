//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKPaymentTransaction;

@interface PDPassPaymentTransactionAuthenticationUserNotification
{
    PKPaymentTransaction *_paymentTransaction;	// 136 = 0x88
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000002d9bcd
+ (id)notificationIdentifierForTransactionIdentifier:(id)arg1;	// IMP=0x00100000002d996d
- (void).cxx_destruct;	// IMP=0x00200000002da396
@property(readonly, nonatomic) PKPaymentTransaction *paymentTransaction; // @synthesize paymentTransaction=_paymentTransaction;
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x00100000002d9df2
- (_Bool)isValid;	// IMP=0x00100000002d9cf8
- (unsigned long long)notificationType;	// IMP=0x00100000002d9ced
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000002d9c70
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000002d9bd5
- (id)initWithPaymentTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2;	// IMP=0x00100000002d9992

@end
