//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMHomeWalletKeyDeviceState, HSProxCardCoordinator, HSSetupStateMachineConfiguration, HUIconView, NSString, PRXAction, UIViewController;

@interface HSPCWalletKeyExpressModeViewController
{
    HSSetupStateMachineConfiguration *_config;	// 8 = 0x8
    HSProxCardCoordinator *_coordinator;	// 16 = 0x10
    PRXAction *_continueAction;	// 24 = 0x18
    HMHomeWalletKeyDeviceState *_walletKeyDeviceState;	// 32 = 0x20
    HUIconView *_iconImageView;	// 40 = 0x28
}

+ (id)_expresssModePassConflictError:(id)arg1;	// IMP=0x0020000000028bdb
- (void).cxx_destruct;	// IMP=0x0020000000028e26
@property(retain, nonatomic) HUIconView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) HMHomeWalletKeyDeviceState *walletKeyDeviceState; // @synthesize walletKeyDeviceState=_walletKeyDeviceState;
@property(retain, nonatomic) PRXAction *continueAction; // @synthesize continueAction=_continueAction;
@property(retain) HSProxCardCoordinator *coordinator; // @synthesize coordinator=_coordinator;
- (id);	// IMP=0x0010000000028d90
@property(retain) HSSetupStateMachineConfiguration *config; // @synthesize config=_config;
- (CDUnknownBlockType)dismissButtonBlock;	// IMP=0x0010000000028b4e
- (void)_sendAnalytics:(unsigned long long)arg1;	// IMP=0x001000000002894e
- (void)_updateHasOnboardedForWalletKey:(id)arg1;	// IMP=0x00100000000286c5
- (id)_addWalletKeyWithiPhoneExpressModeOptions:(long long)arg1 pairedWatchesExpressModeOptions:(long long)arg2;	// IMP=0x001000000002811d
- (id)_addWalletKeyWithoutExpressMode;	// IMP=0x0010000000028101
- (id)_addWalletKeyWithExpressMode;	// IMP=0x0010000000028032
- (id)_shouldShowSingleContinueButton;	// IMP=0x0010000000027d6e
- (id)_requireAuthenticationButtonTapped;	// IMP=0x0010000000027b94
- (void)_enableExpressModeAfterAuthWithPromise:(id)arg1;	// IMP=0x0010000000027b78
- (id)_enableExpressModeButtonTapped;	// IMP=0x001000000002738c
- (id)commitConfiguration;	// IMP=0x0010000000027238
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000027209
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000000271da
- (id)initWithCoordinator:(id)arg1 config:(id)arg2;	// IMP=0x00100000000268a8

// Remaining properties
@property(retain, nonatomic) UIViewController *contentVC;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIViewController",?,&,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
