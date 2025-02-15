//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSSpecifier.h>

@class CTXPCServiceSubscriptionContext, NSString, PSConfirmationSpecifier, PSListController, PSUICoreTelephonyCallCache, PSUICoreTelephonyCapabilitiesCache, PSUICoreTelephonyCarrierBundleCache;

__attribute__((visibility("hidden")))
@interface PSUIVoNRSwitchSpecifier : PSSpecifier
{
    CTXPCServiceSubscriptionContext *_subscriptionContext;	// 184 = 0xb8
    PSListController *_listController;	// 192 = 0xc0
    PSConfirmationSpecifier *_phoneCallWillEndWarning;	// 200 = 0xc8
    PSUICoreTelephonyCallCache *_callCache;	// 208 = 0xd0
    PSUICoreTelephonyCapabilitiesCache *_capabilitiesCache;	// 216 = 0xd8
    PSUICoreTelephonyCarrierBundleCache *_carrierBundleCache;	// 224 = 0xe0
    PSSpecifier *_parentSpecifier;	// 232 = 0xe8
    NSString *_instance;	// 240 = 0xf0
}

- (void).cxx_destruct;	// IMP=0x00000000000299af
- (id)getLogger;	// IMP=0x0000000000029981
- (_Bool)shouldAddVoNRUnoptimizedWarning;	// IMP=0x0000000000029956
- (id)groupFooterText;	// IMP=0x0000000000029829
- (void)reloadSelfInListController;	// IMP=0x00000000000297a0
- (void)setVoNROff;	// IMP=0x0000000000029770
- (void)setVoNREnabled:(_Bool)arg1;	// IMP=0x0000000000029686
- (void)setUpPhoneCallWillEndWarningSpecifier;	// IMP=0x00000000000292cf
- (void)showPhoneCallWillEndWarning;	// IMP=0x0000000000029211
- (_Bool)shouldShowCallWillEndWarning;	// IMP=0x00000000000291f4
- (_Bool)showDisableVoNRWarningsIfNeeded;	// IMP=0x00000000000291be
- (void)setVoNREnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x00000000000290cb
- (id)getVoNREnabled;	// IMP=0x0000000000028fce
- (_Bool)shouldEnableVoNRSwitchCell;	// IMP=0x0000000000028f88
- (id)initWithHostController:(id)arg1 parentSpecifier:(id)arg2;	// IMP=0x0000000000028e95
- (id)initWithHostController:(id)arg1 parentSpecifier:(id)arg2 callCache:(id)arg3 capabilitiesCache:(id)arg4 carrierBundleCache:(id)arg5;	// IMP=0x0000000000028bca

@end

