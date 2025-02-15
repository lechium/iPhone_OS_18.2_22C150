//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OnBoardingKit/OBNavigationController.h>

@class NSObject, NSString, OBWelcomeController, STHeroWelcomeController, _TtC20ScreenTimeSettingsUI19STEyeReliefMicaView;
@protocol STRootViewModelCoordinator;

__attribute__((visibility("hidden")))
@interface STEyeReliefOnboardingController : OBNavigationController
{
    NSObject<STRootViewModelCoordinator> *_coordinator;	// 8 = 0x8
    STHeroWelcomeController *_primaryWelcomeViewController;	// 16 = 0x10
    OBWelcomeController *_secondaryWelcomeViewController;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
    _TtC20ScreenTimeSettingsUI19STEyeReliefMicaView *_micaView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000028523
@property(readonly, nonatomic) _TtC20ScreenTimeSettingsUI19STEyeReliefMicaView *micaView; // @synthesize micaView=_micaView;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) OBWelcomeController *secondaryWelcomeViewController; // @synthesize secondaryWelcomeViewController=_secondaryWelcomeViewController;
@property(retain, nonatomic) STHeroWelcomeController *primaryWelcomeViewController; // @synthesize primaryWelcomeViewController=_primaryWelcomeViewController;
@property(retain) NSObject<STRootViewModelCoordinator> *coordinator; // @synthesize coordinator=_coordinator;
- (id)_createPINController;	// IMP=0x0000000000028439
- (void)didCancelEnteringPIN;	// IMP=0x0000000000028402
- (void)didAcceptEnteredPIN;	// IMP=0x0000000000028254
- (_Bool)validatePIN:(id)arg1 forPINController:(id)arg2;	// IMP=0x0000000000028179
- (void)_cancelOnboarding;	// IMP=0x0000000000028137
- (void)_dismissOnboardingAndEnable;	// IMP=0x00000000000280f2
- (void)_continueButtonPressed;	// IMP=0x000000000002806e
- (void)_handleResponse:(long long)arg1;	// IMP=0x000000000002800b
- (id)_createSecondaryWelcomeController;	// IMP=0x0000000000027efa
- (id)_createEyeReliefEDUController;	// IMP=0x0000000000027c25
- (id)_createInitialViewControllerWithCoordinator:(id)arg1;	// IMP=0x0000000000027b53
- (void)play;	// IMP=0x00000000000278d8
- (void)_presentationControllerDidDismiss:(id)arg1;	// IMP=0x0000000000027895
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000027747
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000002769b
- (void)presentOverViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000027632
- (id)initWithCoordinator:(id)arg1;	// IMP=0x0000000000027501

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

