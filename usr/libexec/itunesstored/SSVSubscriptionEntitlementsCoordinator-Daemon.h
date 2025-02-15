//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSVSubscriptionEntitlementsCoordinator.h>

@interface SSVSubscriptionEntitlementsCoordinator (Daemon)
+ (void)_setCachedSubscriptionEntitlementsDictionary:(id)arg1;	// IMP=0x00100000000aca6c
+ (void)_notifyClientsOfChangedSubscriptionEntitlements;	// IMP=0x00100000000aca40
+ (id)_cachedSubscriptionEntitlementsPath;	// IMP=0x00100000000ac7bf
+ (id)_cachedSubscriptionEntitlementsDictionary;	// IMP=0x00100000000ac4f4
+ (void)setCachedSubscriptionEntitlements:(id)arg1;	// IMP=0x00100000000ac03f
+ (void)markCachedSubscriptionEntitlementsAsExpired;	// IMP=0x00100000000abdb3
+ (id)cachedSubscriptionEntitlementsExpired:(_Bool *)arg1;	// IMP=0x00100000000ab879
@end

