//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC12NewsArticles29ANFDebugLayoutOptionsProvider : NSObject
{
    MISSING_TYPE *observers;	// 8 = 0x8
    MISSING_TYPE *anfOverrides;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000101d50
- (id)init;	// IMP=0x0000000000101cf0
- (id)overrideConditionKeys:(id)arg1;	// IMP=0x0000000000102730
- (long long)overrideSubscriptionActivationEligibility:(long long)arg1;	// IMP=0x0000000000102700
- (long long)overrideOfferUpsellScenario:(long long)arg1;	// IMP=0x00000000001025c0
- (unsigned long long)overrideNewsletterSubscriptionStatus:(unsigned long long)arg1;	// IMP=0x0000000000102450
- (long long)overrideChannelSubscriptionStatus:(long long)arg1;	// IMP=0x0000000000102310
- (long long)overrideBundleSubscriptionStatus:(long long)arg1;	// IMP=0x00000000001021d0
- (unsigned long long)overrideViewingLocation:(unsigned long long)arg1;	// IMP=0x0000000000102080
- (double)overrideContentScaleFactor:(double)arg1;	// IMP=0x0000000000101f00
- (id)overrideContentSizeCategory:(id)arg1;	// IMP=0x0000000000101e90
- (struct CGSize)overrideViewportSize:(struct CGSize)arg1;	// IMP=0x0000000000101e00
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000101de0
- (void)addObserver:(id)arg1;	// IMP=0x0000000000101dc0

@end

