//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class CSCoverSheetViewController, NSString, SBLockScreenUnlockRequest, SBSearchGesture;

@protocol CSCoverSheetViewControllerDelegate <NSObject>
- (void)coverSheetViewController:(CSCoverSheetViewController *)arg1 requestsPreArmDisabled:(_Bool)arg2 forReason:(NSString *)arg3;
- (_Bool)coverSheetViewControllerShouldPreserveOrientationForExternalTransition:(CSCoverSheetViewController *)arg1;
- (_Bool)coverSheetViewControllerHasBeenDismissedSinceKeybagLock:(CSCoverSheetViewController *)arg1;
- (_Bool)coverSheetViewControllerTraitsArbiterOrientationActuationEnabled:(CSCoverSheetViewController *)arg1;
- (_Bool)coverSheetViewControllerIsShowingSecureApp:(CSCoverSheetViewController *)arg1;
- (_Bool)coverSheetViewControllerHasSecureApp:(CSCoverSheetViewController *)arg1;
- (void)coverSheetViewController:(CSCoverSheetViewController *)arg1 startSpotlightInteractiveGestureTransactionForGesture:(SBSearchGesture *)arg2;
- (void)coverSheetViewController:(CSCoverSheetViewController *)arg1 requestsTransientOverlaysDismissedAnimated:(_Bool)arg2;
- (void)coverSheetViewControllerDidDismissInlinePasscode:(CSCoverSheetViewController *)arg1;
- (void)coverSheetViewControllerWillPresentInlinePasscode:(CSCoverSheetViewController *)arg1;
- (_Bool)coverSheetViewControllerIsPasscodeVisible:(CSCoverSheetViewController *)arg1;
- (void)coverSheetViewControllerHandleUnlockAttemptSucceeded:(CSCoverSheetViewController *)arg1;
- (void)coverSheetWindowedAccessoryViewControllerDidPresent:(CSCoverSheetViewController *)arg1;
- (void)coverSheetWindowedAccessoryViewControllerDidDismiss:(CSCoverSheetViewController *)arg1;
- (void)coverSheetViewControllerShouldDismissContextMenu:(CSCoverSheetViewController *)arg1;
- (void)coverSheetViewController:(CSCoverSheetViewController *)arg1 unlockWithRequest:(SBLockScreenUnlockRequest *)arg2 completion:(void (^)(_Bool))arg3;
- (void)coverSheetViewController:(CSCoverSheetViewController *)arg1 requestsTouchIDDisabled:(_Bool)arg2 forReason:(NSString *)arg3;
- (void)coverSheetViewControllerIrisPlayingDidFinish:(CSCoverSheetViewController *)arg1;
@end

