//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StocksCore/FCBundleSubscriptionProviderType-Protocol.h>

@class FCBundleSubscription, FCBundleSubscriptionLookUpEntry, NSString;
@protocol FCBundleSubscriptionChangeObserver, FCEntitlementsOverrideProviderType;

@protocol FCBundleSubscriptionManagerType <FCBundleSubscriptionProviderType>
@property(retain, nonatomic) id <FCEntitlementsOverrideProviderType> entitlementsOverrideProvider;
@property(readonly, nonatomic) FCBundleSubscription *validatedCachedSubscription;
@property(readonly, nonatomic) FCBundleSubscription *cachedSubscription;
- (void)forceExpireBundleSubscriptionBasedOnInternalSettings;
- (void)silentExpireBundleSubscription;
- (void)clearBundleSubscription;
- (void)prewarmBundleTagIDsWithPurchaseID:(NSString *)arg1;
- (void)renewalNoticeShownWithPurchaseID:(NSString *)arg1;
- (FCBundleSubscriptionLookUpEntry *)bundleSubscriptionLookupEntry;
- (void)removeObserver:(id <FCBundleSubscriptionChangeObserver>)arg1;
- (void)addObserver:(id <FCBundleSubscriptionChangeObserver>)arg1;
- (void)refreshBundleSubscriptionWithCachePolicy:(unsigned long long)arg1 hideBundleDetectionUI:(_Bool)arg2 completion:(void (^)(FCBundleSubscription *))arg3;
- (void)refreshBundleSubscriptionWithCachePolicy:(unsigned long long)arg1 completion:(void (^)(FCBundleSubscription *))arg2;
@end
