//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OnBoardingKit/OBWelcomeController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC10Blackbeard43PersonalizationPrivacyConsentViewController : OBWelcomeController
{
    MISSING_TYPE *privacyPreferenceClient;	// 8 = 0x8
    MISSING_TYPE *version;	// 0 = 0x0
    MISSING_TYPE *textLabel;	// 48 = 0x30
    MISSING_TYPE *eventHub;	// 56 = 0x38
    MISSING_TYPE *onConsent;	// 72 = 0x48
    MISSING_TYPE *onDismiss;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000003b8b20
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;	// IMP=0x00000000003b8ac0
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 contentLayout:(long long)arg4;	// IMP=0x00000000003b8a90
- (void)didTapOptOutButton;	// IMP=0x00000000003b8830
- (void)didTapOptInButton;	// IMP=0x00000000003b8810
- (void)viewDidLoad;	// IMP=0x00000000003b8540

@end

