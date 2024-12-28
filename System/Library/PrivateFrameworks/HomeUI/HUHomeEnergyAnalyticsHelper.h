//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HUHomeEnergyAnalyticsHelper : NSObject
{
}

+ (void)sendUtilityDisconnectedByUserEvent;	// IMP=0x00600000000cc920
+ (void)sendUtilityOnboardingCompletedEventWithUtilityID:(id)arg1 onboardingMethod:(long long)arg2 didAttemptPasswordless:(_Bool)arg3;	// IMP=0x00600000000cc7d0
+ (void)sendUtilityOnboardingCancelledEventWithUtilityID:(id)arg1 sourceViewController:(long long)arg2;	// IMP=0x00600000000cc750
+ (void)sendUtilityOTPMethodSelectedByUserEventWithUtilityID:(id)arg1 selectedOTPMethod:(id)arg2;	// IMP=0x00600000000cc6d0
+ (void)sendUtilityOTPMethodSelectionSheetViewEventWithUtilityID:(id)arg1 numOfMethods:(long long)arg2;	// IMP=0x00600000000cc6a0
+ (void)sendUtilityAccountLookupViewEventWithUtilityID:(id)arg1 presentingVC:(long long)arg2;	// IMP=0x00600000000cc670
+ (void)sendUtilityIntroAndSelectionSheetViewEventWithNumOfUtilities:(long long)arg1;	// IMP=0x00600000000cc410
+ (void)sendUtilityOnboardingEntryPointInSettingsTappedEvent;	// IMP=0x00600000000cc1a0
+ (void)sendUtilityOnboardingEntryPointInSettingsViewEvent;	// IMP=0x00600000000cc160
- (id)init;	// IMP=0x00000000000cca70

@end
