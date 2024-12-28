//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, PKPayLaterFinancingPlan, PKPayLaterInstallment;

@interface PDAccountFinancingPlanPaymentReminderNotification
{
    PKPayLaterInstallment *_installment;	// 8 = 0x8
    PKPayLaterFinancingPlan *_financingPlan;	// 16 = 0x10
    unsigned long long _paymentReminderOffset;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000378062
+ (id)notificationIdentifierForInstallment:(id)arg1 reminderOffset:(unsigned long long)arg2;	// IMP=0x0010000000377a29
- (void).cxx_destruct;	// IMP=0x0020000000378810
- (id)applicationMessageContent;	// IMP=0x00100000003786d3
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x0010000000378249
- (MISSING_TYPE *)isValid;	// IMP=0x0010000000378241
- (unsigned long long)notificationType;	// IMP=0x0010000000378236
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000378178
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000037806a
- (id)planIdentifier;	// IMP=0x0010000000378045
- (id)initWithInstallment:(id)arg1 financingPlan:(id)arg2 accountCreatedDate:(id)arg3 passUniqueIdentifier:(id)arg4 reminderOffset:(unsigned long long)arg5;	// IMP=0x0010000000377adc

@end
