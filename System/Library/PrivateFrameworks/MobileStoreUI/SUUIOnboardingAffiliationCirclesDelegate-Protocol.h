//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileStoreUI/NSObject-Protocol.h>

@class SUUIOnboardingAffiliationCirclesViewController, SUUIOnboardingAffiliationItem;

@protocol SUUIOnboardingAffiliationCirclesDelegate <NSObject>

@optional
- (void)onboardingCircles:(SUUIOnboardingAffiliationCirclesViewController *)arg1 didSelectAffiliationItem:(SUUIOnboardingAffiliationItem *)arg2 atIndex:(long long)arg3;
- (void)onboardingCircles:(SUUIOnboardingAffiliationCirclesViewController *)arg1 didRemoveAffiliationItem:(SUUIOnboardingAffiliationItem *)arg2;
- (void)onboardingCirclesDidChangeAffiliationItems:(SUUIOnboardingAffiliationCirclesViewController *)arg1;
@end
