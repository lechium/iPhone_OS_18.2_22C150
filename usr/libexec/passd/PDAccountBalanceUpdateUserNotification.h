//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKCurrencyAmount;

@interface PDAccountBalanceUpdateUserNotification
{
    PKCurrencyAmount *_amount;	// 160 = 0xa0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000002def6e
- (void).cxx_destruct;	// IMP=0x00200000002def87
@property(readonly, nonatomic) PKCurrencyAmount *amount; // @synthesize amount=_amount;
- (unsigned long long)notificationType;	// IMP=0x00100000002def63
- (id)initWithAmount:(id)arg1 forPassUniqueIdentifier:(id)arg2;	// IMP=0x00100000002dee5b

@end

