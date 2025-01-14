//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class BKSHIDEventDeliveryManager, NSString, SBKeyboardFocusTarget;
@protocol SBKeyboardFocusSceneProviding, _UIEventDeferringSystemShellBehaviorDelegate;

@protocol _SBKeyboardFocusSceneControllerDependencyProviding <NSObject>
@property(readonly, nonatomic, getter=isSpotlightVisible) _Bool spotlightVisible;
@property(readonly, nonatomic, getter=isSiriVisible) _Bool siriVisible;
@property(readonly, nonatomic, getter=isScreenDim) _Bool screenDim;
@property(readonly, nonatomic) id <SBKeyboardFocusSceneProviding> sceneProvider;
@property(readonly, nonatomic) id <_UIEventDeferringSystemShellBehaviorDelegate> eventDeferringSystemShellBehaviorDelegate;
@property(readonly, nonatomic) SBKeyboardFocusTarget *focusTargetForActiveTransientOverlayPresentation;
@property(readonly, nonatomic, getter=isSpolightPresentedAsTransientOverlay) _Bool spotlightPresentedAsTransientOverlay;
@property(readonly, nonatomic) _Bool activeTransientOverlayPresentationShouldUseSceneBasedKeyboardFocus;
@property(readonly, nonatomic) _Bool activeTransientOverlayPresentationCanBecomeFirstResponder;
@property(readonly, nonatomic) _Bool hasActiveTransientOverlayPresentation;
@property(readonly, nonatomic, getter=isShowingSystemModalAlert) _Bool showingSystemModalAlert;
@property(readonly, nonatomic, getter=isPresentingModalBannerInLongLook) _Bool presentingModalBannerInLongLook;
@property(readonly, nonatomic, getter=isCoverSheetHostingAnApp) _Bool coverSheetHostingAnApp;
@property(readonly, nonatomic) BKSHIDEventDeliveryManager *deliveryManager;
- (_Bool)isActiveTransientOverlayPresentationIsFromSceneWithIdentityTokenString:(NSString *)arg1;
- (_Bool)isBannerKitHostingSceneWithIdentityTokenString:(NSString *)arg1;
- (SBKeyboardFocusTarget *)focusTargetForCoverSheetHostedAppGetCameraIsHosted:(out _Bool *)arg1;
@end

