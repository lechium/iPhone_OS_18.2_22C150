//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDecimalNumber;

@interface PDPassPaymentDailyDailyCashWithPercentageUserNotification
{
    NSDecimalNumber *_percentage;	// 160 = 0xa0
    NSArray *_merchantNames;	// 168 = 0xa8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000002d72ee
- (void).cxx_destruct;	// IMP=0x00200000002d76a1
@property(readonly, nonatomic) NSArray *merchantNames; // @synthesize merchantNames=_merchantNames;
@property(readonly, nonatomic) NSDecimalNumber *percentage; // @synthesize percentage=_percentage;
- (unsigned long long)notificationType;	// IMP=0x00100000002d7674
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x00100000002d72f6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000002d724f
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000002d7163
- (id)initWithPercentage:(id)arg1 merchantNames:(id)arg2 monthlyAmount:(id)arg3 date:(id)arg4 forPassUniqueIdentifier:(id)arg5;	// IMP=0x00100000002d707f

@end
