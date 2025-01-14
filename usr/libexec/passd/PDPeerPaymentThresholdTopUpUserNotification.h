//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKCurrencyAmount, PKPaymentTransaction;

@interface PDPeerPaymentThresholdTopUpUserNotification
{
    PKPaymentTransaction *_transaction;	// 136 = 0x88
    PKCurrencyAmount *_updatedBalance;	// 144 = 0x90
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000002cb8a5
- (void).cxx_destruct;	// IMP=0x00200000002cbd57
@property(readonly, nonatomic) PKCurrencyAmount *updatedBalance; // @synthesize updatedBalance=_updatedBalance;
@property(readonly, nonatomic) PKPaymentTransaction *transaction; // @synthesize transaction=_transaction;
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x00100000002cba4e
- (unsigned long long)notificationType;	// IMP=0x00100000002cba43
- (_Bool)isValid;	// IMP=0x00100000002cba3b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000002cb99c
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000002cb8ad
- (id)initWithPassUniqueIdentifier:(id)arg1 transaction:(id)arg2 updatedBalance:(id)arg3;	// IMP=0x00100000002cb669

@end

