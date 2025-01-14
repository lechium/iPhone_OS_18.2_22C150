//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class BSAnimationSettings, NSError, NSString, SBRemoteTransientOverlayHostViewController, SBUIRemoteAlertIdleTimerSettings;

@protocol SBRemoteTransientOverlayHostViewControllerDelegate <NSObject>
- (void)remoteTransientOverlayHostViewController:(SBRemoteTransientOverlayHostViewController *)arg1 requestsWallpaperEffectUpdateWithAnimationSettings:(BSAnimationSettings *)arg2;
- (void)remoteTransientOverlayHostViewController:(SBRemoteTransientOverlayHostViewController *)arg1 didTerminateWithError:(NSError *)arg2;
- (void)remoteTransientOverlayHostViewControllerRequestsInvalidation:(SBRemoteTransientOverlayHostViewController *)arg1;
- (void)remoteTransientOverlayHostViewControllerRequestsDeactivation:(SBRemoteTransientOverlayHostViewController *)arg1;
- (void)remoteTransientOverlayHostViewController:(SBRemoteTransientOverlayHostViewController *)arg1 didSetDesiredIdleTimerSettings:(SBUIRemoteAlertIdleTimerSettings *)arg2;
- (void)remoteTransientOverlayHostViewController:(SBRemoteTransientOverlayHostViewController *)arg1 didSetDesiredAutoLockDuration:(double)arg2;
- (void)remoteTransientOverlayHostViewController:(SBRemoteTransientOverlayHostViewController *)arg1 didSetIdleTimerDisabled:(_Bool)arg2 forReason:(NSString *)arg3;
- (void)remoteTransientOverlayHostViewControllerDidChangeShouldDisableOrientationUpdates:(SBRemoteTransientOverlayHostViewController *)arg1;
- (void)remoteTransientOverlayHostViewController:(SBRemoteTransientOverlayHostViewController *)arg1 didChangeLaunchingInterfaceOrientation:(long long)arg2;
- (void)remoteTransientOverlayHostViewController:(SBRemoteTransientOverlayHostViewController *)arg1 didChangeBackgroundActivitiesToSuppressWithAnimationSettings:(BSAnimationSettings *)arg2;
- (void)remoteTransientOverlayHostViewControllerDidChangePreferredSceneDeactivationReasonValue:(SBRemoteTransientOverlayHostViewController *)arg1;
- (void)remoteTransientOverlayHostViewController:(SBRemoteTransientOverlayHostViewController *)arg1 didChangeWhitePointAdaptivityStyle:(long long)arg2;
- (void)remoteTransientOverlayHostViewControllerDidChangeSwipeDismissalStyle:(SBRemoteTransientOverlayHostViewController *)arg1;
- (void)remoteTransientOverlayHostViewControllerDidChangeDismissalAnimationStyle:(SBRemoteTransientOverlayHostViewController *)arg1;
- (void)remoteTransientOverlayHostViewControllerDidChangeDesiredHardwareButtonEvents:(SBRemoteTransientOverlayHostViewController *)arg1;
- (void)remoteTransientOverlayHostViewControllerDidChangeAllowsMenuButtonDismissal:(SBRemoteTransientOverlayHostViewController *)arg1;
- (void)remoteTransientOverlayHostViewControllerDidChangeFeaturePolicy:(SBRemoteTransientOverlayHostViewController *)arg1;
- (void)remoteTransientOverlayHostViewControllerDidChangeRequestedBackgroundStyle:(SBRemoteTransientOverlayHostViewController *)arg1 withAnimationSettings:(BSAnimationSettings *)arg2;
- (void)remoteTransientOverlayHostViewControllerDidChangePrefersWallpaperTunnel:(SBRemoteTransientOverlayHostViewController *)arg1;
- (void)remoteTransientOverlayHostViewControllerDidChangeContentOpaque:(SBRemoteTransientOverlayHostViewController *)arg1;
@end

