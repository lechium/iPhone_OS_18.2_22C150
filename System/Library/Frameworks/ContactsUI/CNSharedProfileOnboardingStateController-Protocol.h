//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/NSObject-Protocol.h>

@protocol CNSharedProfileOnboardingStateController <NSObject>
+ (void)writeToDefaultsDidSkipPosterSetup:(_Bool)arg1;
@property(readonly, nonatomic) _Bool alwaysShowSNaPOnboarding;
@property(readonly, nonatomic) long long currentOnboardingVersion;
@property(readonly, nonatomic) long long lastShowOnboardingVersionInSettings;
@property(readonly, nonatomic) long long lastShownOnboardingVersion;
@property(readonly, nonatomic) _Bool iCloudSignedInToUseNicknames;
@property(readonly, nonatomic) _Bool deviceSupportsPosters;
@property(readonly, nonatomic) _Bool accountCanCreateSNaP;
@property(readonly, nonatomic) _Bool multiplePhoneNumbersTiedToAppleID;
@property(readonly, nonatomic) _Bool shouldShowOnboarding;
@property(readonly, nonatomic) _Bool isPhotosReadyForOnboarding;
- (void)writeToDefaultsLastShownOnboardingVersion;
- (void)writeToDefaultsLastShownSettingsOnboardingVersion;
- (void)writeToDefaultsCompletedOnboarding:(_Bool)arg1;
- (_Bool)didSkipPosterSetup;
- (_Bool)hasCompletedOnboarding;
- (_Bool)canShowOnboardingAllowingMultiplePhoneNumbers:(_Bool)arg1;
@end
