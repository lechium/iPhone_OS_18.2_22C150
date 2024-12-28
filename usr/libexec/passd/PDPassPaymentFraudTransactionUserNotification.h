//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKPaymentTransaction, PKPaymentTransactionQuestion;

@interface PDPassPaymentFraudTransactionUserNotification
{
    _Bool _accountSuspended;	// 136 = 0x88
    PKPaymentTransaction *_paymentTransaction;	// 144 = 0x90
    PKPaymentTransactionQuestion *_question;	// 152 = 0x98
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000002d3f2f
- (void).cxx_destruct;	// IMP=0x00200000002d4795
@property(nonatomic) _Bool accountSuspended; // @synthesize accountSuspended=_accountSuspended;
@property(readonly, nonatomic) PKPaymentTransactionQuestion *question; // @synthesize question=_question;
@property(readonly, nonatomic) PKPaymentTransaction *paymentTransaction; // @synthesize paymentTransaction=_paymentTransaction;
- (id)_fraudApplicationMessageContentWithTitleText:(id)arg1 messageText:(id)arg2;	// IMP=0x00100000002d462e
- (id)_fraudApplicationMessageGroupDescriptor;	// IMP=0x00100000002d45d2
- (id)applicationMessageContent;	// IMP=0x00100000002d4548
- (id)_messageString;	// IMP=0x00100000002d450c
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x00100000002d423e
- (_Bool)questionIsValid;	// IMP=0x00100000002d419d
- (_Bool)isValid;	// IMP=0x00100000002d410f
- (unsigned long long)notificationType;	// IMP=0x00100000002d4104
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000002d4045
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000002d3f37
- (id)initWithPaymentTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2;	// IMP=0x00100000002d3cc0

@end
