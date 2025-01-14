//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PaymentTransitNetworkIdentifier
{
}

+ (id)predicateForNotExpired;	// IMP=0x00400000000ffead
+ (id)predicateForPaymentCardType:(long long)arg1;	// IMP=0x00100000000ffe3c
+ (id)predicateForTransitNetworkIdentifiers:(id)arg1;	// IMP=0x00100000000ffe19
+ (id)_predicateForPaymentApplicationPID:(long long)arg1;	// IMP=0x00100000000ffda8
+ (id)_predicateForPaymentApplication:(id)arg1;	// IMP=0x00100000000ffd43
+ (id)insertTransitNetworkIdentifiers:(id)arg1 withPaymentApplication:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000ff8d6
+ (void)deleteEntitiesInDatabase:(id)arg1 forPaymentApplication:(id)arg2;	// IMP=0x00100000000ff83d
+ (_Bool)passExistsInDatabase:(id)arg1 forTransitNetworks:(id)arg2 isTransitCard:(unsigned long long)arg3 expired:(unsigned long long)arg4;	// IMP=0x00100000000ff5b2
+ (id)transitNetworksInDatabase:(id)arg1 forPassesMatchingTransitType:(unsigned long long)arg2 expired:(unsigned long long)arg3;	// IMP=0x00000000000ff392
+ (id)transitNetworkIdentifiersInDatabase:(id)arg1 forPredicate:(id)arg2;	// IMP=0x00100000000ff156
+ (id)transitNetworkIdentifiersInDatabase:(id)arg1 forPaymentApplicationPID:(long long)arg2;	// IMP=0x00100000000ff0ca
+ (void)addJoinClausesForProperty:(id)arg1 toJoins:(id)arg2;	// IMP=0x00100000000feee6
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00100000000feeb7
+ (id)databaseTable;	// IMP=0x00100000000feeaa
- (id)initWithTransitNetworkIdentifier:(id)arg1 networkOrder:(long long)arg2 forPaymentApplication:(id)arg3 database:(id)arg4;	// IMP=0x00400000000ffb87

@end

