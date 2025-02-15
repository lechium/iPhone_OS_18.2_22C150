//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKAccountUser, PKCurrencyAmount, PKFamilyMember;

@interface PDAccountUserMonthlySpendLimitUserNotification
{
    PKAccountUser *_accountUser;	// 136 = 0x88
    PKFamilyMember *_familyMember;	// 144 = 0x90
    PKCurrencyAmount *_monthlySpendLimit;	// 152 = 0x98
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000002da59e
+ (id)notificationIdentifierForAccountUserAltDSID:(id)arg1 accountIdentifier:(id)arg2;	// IMP=0x00100000002da3a9
- (void).cxx_destruct;	// IMP=0x00200000002daab3
@property(readonly, nonatomic) PKCurrencyAmount *monthlySpendLimit; // @synthesize monthlySpendLimit=_monthlySpendLimit;
@property(readonly, nonatomic) PKFamilyMember *familyMember; // @synthesize familyMember=_familyMember;
@property(readonly, nonatomic) PKAccountUser *accountUser; // @synthesize accountUser=_accountUser;
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x00100000002da7e9
- (_Bool)isValid;	// IMP=0x00100000002da793
- (unsigned long long)notificationType;	// IMP=0x00100000002da788
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000002da6ce
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000002da5a6
- (id)initWithAccountUser:(id)arg1 familyMember:(id)arg2 monthlySpendLimit:(id)arg3 accountIdentifier:(id)arg4 passUniqueIdentifier:(id)arg5;	// IMP=0x00100000002da424

@end

