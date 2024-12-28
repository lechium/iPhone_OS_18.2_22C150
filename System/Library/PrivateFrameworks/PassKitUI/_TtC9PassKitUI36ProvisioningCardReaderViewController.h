//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PKPaymentSetupFieldsViewController.h"

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9PassKitUI36ProvisioningCardReaderViewController : PKPaymentSetupFieldsViewController
{
    MISSING_TYPE *coordinator;	// 8 = 0x8
    MISSING_TYPE *provisioningContext;	// 16 = 0x10
    MISSING_TYPE *delegate;	// 24 = 0x18
    MISSING_TYPE *reporter;	// 40 = 0x28
    MISSING_TYPE *animationView;	// 48 = 0x30
    MISSING_TYPE *backgroundView;	// 56 = 0x38
    MISSING_TYPE *contentBlurView;	// 64 = 0x40
    MISSING_TYPE *contentBlurBackgroundView;	// 72 = 0x48
    MISSING_TYPE *contentBlurBackgroundMask;	// 80 = 0x50
    MISSING_TYPE *readFailureBlurView;	// 88 = 0x58
    MISSING_TYPE *manualEntryButton;	// 96 = 0x60
    MISSING_TYPE *springFactory;	// 104 = 0x68
    MISSING_TYPE *hapticEngine;	// 112 = 0x70
    MISSING_TYPE *isScanningCard;	// 120 = 0x78
    MISSING_TYPE *didScanCard;	// 121 = 0x79
    MISSING_TYPE *isShowingReadFailure;	// 122 = 0x7a
    MISSING_TYPE *isShowingTryAgainButton;	// 123 = 0x7b
    MISSING_TYPE *deferredIsShowingTryAgainButton;	// 124 = 0x7c
    MISSING_TYPE *tryAgainButtonTransitionIndex;	// 128 = 0x80
    MISSING_TYPE *isCanceling;	// 136 = 0x88
    MISSING_TYPE *shouldContinueOnDidBecomeActive;	// 137 = 0x89
    MISSING_TYPE *isPresentedModally;	// 138 = 0x8a
    MISSING_TYPE *showManualEntryPresentFallBackButton;	// 139 = 0x8b
}

- (void).cxx_destruct;	// IMP=0x0000000000785510
- (id)initWithWebService:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 setupFieldsModel:(id)arg4;	// IMP=0x00000000007854b0
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000785400
- (void)didBecomeActiveNotification;	// IMP=0x0000000000784e60
- (void)applicationWillResignActive;	// IMP=0x0000000000784d90
- (void)backButtonPressed;	// IMP=0x0000000000784c50
- (void)cancelButtonPressed;	// IMP=0x0000000000784c20
- (void)tryAgainButtonPressed;	// IMP=0x0000000000784aa0
- (void)setupLaterButtonPressed;	// IMP=0x0000000000784a70
- (void)manualEntryButtonPressed;	// IMP=0x0000000000784840
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000784630
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000783f20
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000783e30
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000783c30
- (void)loadView;	// IMP=0x0000000000783a90
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000783130
- (id)defaultFields;	// IMP=0x0000000000785c90
- (id)defaultHeaderViewSubTitle;	// IMP=0x0000000000785c20
- (id)defaultHeaderViewTitle;	// IMP=0x0000000000785bc0
- (void)handleNextButtonTapped:(id)arg1;	// IMP=0x0000000000785770
- (id)visibleFieldIdentifiers;	// IMP=0x0000000000785600
- (long long)visibilityBackdropView:(id)arg1 preferredStyleForTraitCollection:(id)arg2;	// IMP=0x0000000000787d60
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;	// IMP=0x000000000078c2e0
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x000000000078c250
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x000000000078c1f0

@end
