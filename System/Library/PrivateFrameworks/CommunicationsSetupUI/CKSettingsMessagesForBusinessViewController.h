//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

@class CKLazuliEnablementManager, IDSFeatureToggler;

__attribute__((visibility("hidden")))
@interface CKSettingsMessagesForBusinessViewController : PSListController
{
    _Bool _requestInFlight;	// 184 = 0xb8
    _Bool _erroredOut;	// 185 = 0xb9
    CKLazuliEnablementManager *_lazuliEnablementManager;	// 192 = 0xc0
    IDSFeatureToggler *_featureToggler;	// 200 = 0xc8
    unsigned long long _featureState;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x000000000006482d
@property(nonatomic) _Bool erroredOut; // @synthesize erroredOut=_erroredOut;
@property(nonatomic) _Bool requestInFlight; // @synthesize requestInFlight=_requestInFlight;
@property(nonatomic) unsigned long long featureState; // @synthesize featureState=_featureState;
@property(retain, nonatomic) IDSFeatureToggler *featureToggler; // @synthesize featureToggler=_featureToggler;
@property(retain, nonatomic) CKLazuliEnablementManager *lazuliEnablementManager; // @synthesize lazuliEnablementManager=_lazuliEnablementManager;
- (void)_fetchFeatureState;	// IMP=0x000000000006456d
- (void)_showOnboarding;	// IMP=0x000000000006441e
- (void)_showPrivacySheetForBusinessChat;	// IMP=0x00000000000643b7
- (id)personalizedAlertsEnabled:(id)arg1;	// IMP=0x000000000006437c
- (void)setPersonalizedAlertsEnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x00000000000640d8
- (id)unavailableString;	// IMP=0x00000000000640c7
- (id)specifiers;	// IMP=0x0000000000063c51
- (void)viewDidLoad;	// IMP=0x0000000000063b16

@end
