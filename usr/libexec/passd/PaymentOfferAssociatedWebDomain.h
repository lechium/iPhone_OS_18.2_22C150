//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PaymentOfferAssociatedWebDomain
{
}

+ (id)_commonDictionaryAssociatedWebDomain:(id)arg1;	// IMP=0x00400000004e4098
+ (id)_predicateForInstallmentCriteriaPID:(long long)arg1;	// IMP=0x00100000004e4027
+ (id)_webDomainsWithQuery:(id)arg1;	// IMP=0x00100000004e3e66
+ (id)associatedWebDomainForInstallmentCriteriaPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000004e3db3
+ (void)deletePaymentOfferAssociatedWebDomainsForInstallmentCriteriaPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000004e3d1a
+ (void)insertOrUpdateAssociatedWebDomains:(id)arg1 forInstallmentCriteriaPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000004e3ab4
+ (id)databaseTable;	// IMP=0x00100000004e3aa7

@end
