//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PayLaterAccountTermsDetails
{
}

+ (id)_commonDictionaryForAccountTermsDetails:(id)arg1;	// IMP=0x00400000001baf30
+ (id)_propertySettersForPayLaterAccountTermsDetails;	// IMP=0x00100000001bacce
+ (id)_predicateForAccountDetailsPID:(long long)arg1;	// IMP=0x00100000001bac5d
+ (id)payLaterAccountTermsDetailsForAccountDetailsPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001bab39
+ (void)deletePayLaterAccountTermsDetailsForPayLaterAccountDetailsPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001baaa0
+ (id)insertOrUpdatePayLaterAccountTermsDetails:(id)arg1 forPayLaterAccountDetailsPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000001ba9a7
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00100000001ba888
+ (id)databaseTable;	// IMP=0x00100000001ba87b
- (id)termsDetails;	// IMP=0x00400000001badc1
- (void)updateWithAccoumtTermsDetails:(id)arg1;	// IMP=0x00100000001babe3
- (id)initWithPayLaterAccountTermsDetails:(id)arg1 forPayLaterAccountDetailsPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000001ba8b7

@end

