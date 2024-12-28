//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PayLaterFundingSourceDetails
{
}

+ (id)_propertySettersForAccountSourceDetails;	// IMP=0x00400000003ff317
+ (id)_propertySettersForBankSourceDetails;	// IMP=0x00100000003ff1ce
+ (id)_propertySettersForPaymentPassSourceDetails;	// IMP=0x00100000003fef84
+ (id)_propertySettersForFundingSourceType:(unsigned long long)arg1;	// IMP=0x00100000003fef49
+ (id)_propertyValuesForFundingSourceDetails:(id)arg1;	// IMP=0x00100000003fec9b
+ (id)_detailsForType:(unsigned long long)arg1;	// IMP=0x00100000003fec69
+ (id)_predicateForPID:(id)arg1;	// IMP=0x00100000003fec46
+ (id)anyInDatabase:(id)arg1 forPID:(id)arg2;	// IMP=0x00100000003fe9d5
+ (id)insertFundingSourceDetails:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000003fe8ed
+ (id)databaseTable;	// IMP=0x00100000003fe82d
- (unsigned long long)type;	// IMP=0x00400000003febfb
- (id)fundingSourceDetails;	// IMP=0x00100000003fea61
- (void)updateFundingSourceDetails:(id)arg1;	// IMP=0x00100000003fe95b
- (id)initWithFundingSourceDetails:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000003fe83a

@end
