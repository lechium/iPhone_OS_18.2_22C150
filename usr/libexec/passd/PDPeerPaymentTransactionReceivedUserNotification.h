//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKCurrencyAmount;

@interface PDPeerPaymentTransactionReceivedUserNotification
{
    PKCurrencyAmount *_updatedBalance;	// 136 = 0x88
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000002cb3a8
- (void).cxx_destruct;	// IMP=0x00200000002cb656
@property(readonly, nonatomic) PKCurrencyAmount *updatedBalance; // @synthesize updatedBalance=_updatedBalance;
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x00100000002cb558
- (unsigned long long)notificationType;	// IMP=0x00100000002cb54d
- (_Bool)isValid;	// IMP=0x00100000002cb4c8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000002cb44b
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000002cb3b0
- (id)initWithPassUniqueIdentifier:(id)arg1 accountBalance:(id)arg2;	// IMP=0x00100000002cb2db

@end
