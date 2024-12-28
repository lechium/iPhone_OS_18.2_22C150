//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, PKAccount;

@interface PDAccountFundingSourceVerificationReminderUserNotification
{
    PKAccount *_account;	// 136 = 0x88
    NSArray *_fundingSources;	// 144 = 0x90
    unsigned long long _style;	// 152 = 0x98
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000002e0168
+ (id)_fireDateForVerificationAttempt:(id)arg1 withStyle:(unsigned long long)arg2;	// IMP=0x00100000002df762
+ (id)identifierForAccountIdentifier:(id)arg1 fundingSources:(id)arg2 style:(unsigned long long)arg3;	// IMP=0x00100000002df55e
- (void).cxx_destruct;	// IMP=0x00200000002e0649
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) NSArray *fundingSources; // @synthesize fundingSources=_fundingSources;
@property(readonly, nonatomic) PKAccount *account; // @synthesize account=_account;
- (void)_refreshActionURL;	// IMP=0x00100000002e0473
- (id)_expiryDate;	// IMP=0x00100000002e0383
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000002e02c5
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000002e0170
- (id)applicationMessageContent;	// IMP=0x00100000002dff2d
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x00100000002dfc92
- (_Bool)isValid;	// IMP=0x00100000002dfc02
- (unsigned long long)notificationType;	// IMP=0x00100000002dfbf7
- (id)initWithAccount:(id)arg1 fundingSources:(id)arg2 style:(unsigned long long)arg3;	// IMP=0x00100000002df917

@end
