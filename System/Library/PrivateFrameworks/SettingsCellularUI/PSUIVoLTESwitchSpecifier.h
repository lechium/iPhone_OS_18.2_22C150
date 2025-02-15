//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSSpecifier.h>

@class CTXPCServiceSubscriptionContext, PSConfirmationSpecifier, PSListController, PSSimStatusCache, PSUICoreTelephonyCallCache, PSUICoreTelephonyCapabilitiesCache, PSUICoreTelephonyCarrierBundleCache;

__attribute__((visibility("hidden")))
@interface PSUIVoLTESwitchSpecifier : PSSpecifier
{
    CTXPCServiceSubscriptionContext *_subscriptionContext;	// 184 = 0xb8
    PSListController *_listController;	// 192 = 0xc0
    PSConfirmationSpecifier *_phoneCallWillEndWarning;	// 200 = 0xc8
    PSUICoreTelephonyCallCache *_callCache;	// 208 = 0xd0
    PSUICoreTelephonyCapabilitiesCache *_capabilitiesCache;	// 216 = 0xd8
    PSUICoreTelephonyCarrierBundleCache *_carrierBundleCache;	// 224 = 0xe0
    PSSimStatusCache *_simStatusCache;	// 232 = 0xe8
    PSSpecifier *_parentSpecifier;	// 240 = 0xf0
}

- (void).cxx_destruct;	// IMP=0x0000000000092784
- (id)getLogger;	// IMP=0x00000000000926bd
- (id)groupFooterText;	// IMP=0x0000000000092590
- (_Bool)isVoLTEProvisioning;	// IMP=0x0000000000092565
- (void)addSpinnerIfNeededToCell:(id)arg1;	// IMP=0x00000000000924d7
- (id)createCallCarrierAlertForContext:(id)arg1;	// IMP=0x0000000000091f8e
- (void)showCallCarrierAlert;	// IMP=0x0000000000091f0e
- (void)reloadSelfInListController;	// IMP=0x0000000000091e85
- (void)setVoLTEOff;	// IMP=0x0000000000091e55
- (void)setVoLTEEnabled:(_Bool)arg1;	// IMP=0x0000000000091d07
- (void)setUpPhoneCallWillEndWarningSpecifier;	// IMP=0x00000000000919bc
- (void)showPhoneCallWillEndWarning;	// IMP=0x00000000000918fe
- (_Bool)shouldShowCallWillEndWarning;	// IMP=0x0000000000091895
- (_Bool)shouldShowVoLTEUnsupportedWarning;	// IMP=0x000000000009186a
- (_Bool)shouldShowCallCarrierAlert;	// IMP=0x000000000009183f
- (_Bool)showDisableVoLTEWarningsIfNeeded;	// IMP=0x0000000000091809
- (_Bool)showEnableVoLTEWarningsIfNeeded;	// IMP=0x00000000000917d3
- (_Bool)showWarningsIfNeededForEnableState:(_Bool)arg1;	// IMP=0x00000000000917b1
- (void)setVoLTEEnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x00000000000916bd
- (id)getVoLTEEnabled;	// IMP=0x00000000000915c0
- (_Bool)shouldEnableVoLTESwitchCell;	// IMP=0x000000000009157a
- (id)initWithHostController:(id)arg1 parentSpecifier:(id)arg2;	// IMP=0x0000000000091464
- (id)initWithHostController:(id)arg1 parentSpecifier:(id)arg2 callCache:(id)arg3 capabilitiesCache:(id)arg4 carrierBundleCache:(id)arg5 simStatusCache:(id)arg6;	// IMP=0x00000000000911fd

@end

