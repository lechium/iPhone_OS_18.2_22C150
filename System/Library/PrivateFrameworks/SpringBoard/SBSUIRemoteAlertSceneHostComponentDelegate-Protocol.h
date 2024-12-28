//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class BSAnimationSettings, NSString, SBSUIRemoteAlertSceneHostComponent;

@protocol SBSUIRemoteAlertSceneHostComponentDelegate <NSObject>
- (void)remoteAlertSceneHostComponentDidChangeHIDEventDeferringDisabled:(SBSUIRemoteAlertSceneHostComponent *)arg1;
- (void)remoteAlertSceneHostComponentDidChangePreferredSceneDeactivationReason:(SBSUIRemoteAlertSceneHostComponent *)arg1;
- (void)remoteAlertSceneHostComponentDidChangeWhitePointAdaptivityStyle:(SBSUIRemoteAlertSceneHostComponent *)arg1;
- (void)remoteAlertSceneHostComponent:(SBSUIRemoteAlertSceneHostComponent *)arg1 didChangePreferredStatusBarVisibilityWithAnimationSettings:(BSAnimationSettings *)arg2;
- (void)remoteAlertSceneHostComponentDidChangeSupportedInterfaceOrientations:(SBSUIRemoteAlertSceneHostComponent *)arg1;
- (void)remoteAlertSceneHostComponentDidChangeShouldDisableOrientationUpdates:(SBSUIRemoteAlertSceneHostComponent *)arg1;
- (void)remoteAlertSceneHostComponentDidChangeDesiredIdleTimerSettings:(SBSUIRemoteAlertSceneHostComponent *)arg1;
- (void)remoteAlertSceneHostComponentDidChangeDesiredAutoLockDuration:(SBSUIRemoteAlertSceneHostComponent *)arg1;
- (void)remoteAlertSceneHostComponent:(SBSUIRemoteAlertSceneHostComponent *)arg1 didSetIdleTimerDisabled:(_Bool)arg2 forReason:(NSString *)arg3;
- (void)remoteAlertSceneHostComponent:(SBSUIRemoteAlertSceneHostComponent *)arg1 didChangeBackgroundActivitiesToSuppressWithAnimationSettings:(BSAnimationSettings *)arg2;
- (void)remoteAlertSceneHostComponentDidChangeSwipeDismissalStyle:(SBSUIRemoteAlertSceneHostComponent *)arg1;
- (void)remoteAlertSceneHostComponentDidChangeDismissalAnimationStyle:(SBSUIRemoteAlertSceneHostComponent *)arg1;
- (void)remoteAlertSceneHostComponent:(SBSUIRemoteAlertSceneHostComponent *)arg1 didChangeWallpaperStyleWithAnimationSettings:(BSAnimationSettings *)arg2;
- (void)remoteAlertSceneHostComponentDidChangeContentOpaque:(SBSUIRemoteAlertSceneHostComponent *)arg1;
- (void)remoteAlertSceneHostComponentDidChangeAllowsAlertStacking:(SBSUIRemoteAlertSceneHostComponent *)arg1;
- (void)remoteAlertSceneHostComponentDidInvalidate:(SBSUIRemoteAlertSceneHostComponent *)arg1;
- (void)remoteAlertSceneHostComponentDidDeactivate:(SBSUIRemoteAlertSceneHostComponent *)arg1;
@end
