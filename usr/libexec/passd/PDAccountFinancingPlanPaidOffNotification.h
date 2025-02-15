//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKPayLaterFinancingPlan;

@interface PDAccountFinancingPlanPaidOffNotification
{
    PKPayLaterFinancingPlan *_financingPlan;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000003776de
+ (id)notificationIdentifierForFinancingPlan:(id)arg1;	// IMP=0x00100000003774c6
- (void).cxx_destruct;	// IMP=0x0020000000377a16
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x0010000000377811
- (_Bool)isValid;	// IMP=0x0010000000377809
- (unsigned long long)notificationType;	// IMP=0x00100000003777fe
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000377781
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000003776e6
- (id)initWithFinancingPlan:(id)arg1 passUniqueIdentifier:(id)arg2;	// IMP=0x0010000000377535

@end

