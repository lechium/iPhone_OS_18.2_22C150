//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBAppViewController;

@protocol SBAppViewControllerDelegate <NSObject>

@optional
- (_Bool)appViewControllerIsInNonRotatingWindow:(SBAppViewController *)arg1;
- (_Bool)appViewControllerShouldHideHomeGrabberView:(SBAppViewController *)arg1;
- (_Bool)appViewControllerShouldReactivateApplicationOnDestruction:(SBAppViewController *)arg1;
- (_Bool)appViewControllerShouldBackgroundApplicationOnDeactivate:(SBAppViewController *)arg1;
- (void)appViewControllerDidBecomeReady:(SBAppViewController *)arg1;
- (void)appViewControllerDidFailToActivateApplication:(SBAppViewController *)arg1;
- (void)appViewControllerDidDeactivateApplication:(SBAppViewController *)arg1;
- (void)appViewControllerWillActivateApplication:(SBAppViewController *)arg1;
- (void)appViewController:(SBAppViewController *)arg1 didTransitionFromMode:(long long)arg2 toMode:(long long)arg3;
- (_Bool)appViewController:(SBAppViewController *)arg1 shouldTransitionToMode:(long long)arg2;
@end
