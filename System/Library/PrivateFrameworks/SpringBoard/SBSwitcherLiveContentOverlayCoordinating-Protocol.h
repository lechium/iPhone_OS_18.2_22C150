//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/SBLayoutStateTransitionObserver-Protocol.h>

@class NSString, SBAppLayout, SBSwitcherCoordinatedLayoutStateTransitionContext, UIView;
@protocol SBSwitcherLiveContentOverlayCoordinatorDelegate;

@protocol SBSwitcherLiveContentOverlayCoordinating <SBLayoutStateTransitionObserver>
@property(nonatomic) __weak id <SBSwitcherLiveContentOverlayCoordinatorDelegate> delegate;
@property(nonatomic) long long containerOrientation;
@property(nonatomic, getter=areLiveContentOverlayUpdatesSuspended) _Bool liveContentOverlayUpdatesSuspended;
- (void)invalidate;
- (void)cleanUpAfterCoordinatedLayoutStateTransitionWithContext:(SBSwitcherCoordinatedLayoutStateTransitionContext *)arg1;
- (void)prepareForCoordinatedLayoutStateTransitionWithContext:(SBSwitcherCoordinatedLayoutStateTransitionContext *)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2;
- (void)willRotateFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2 alongsideContainerView:(UIView *)arg3 animated:(_Bool)arg4;
- (_Bool)wantsHomeAffordanceAutoHideForAppLayout:(SBAppLayout *)arg1;
- (_Bool)wantsEdgeProtectForHomeGestureForAppLayout:(SBAppLayout *)arg1;
- (void)itemContainerForAppLayout:(SBAppLayout *)arg1 willBeReusedForAppLayout:(SBAppLayout *)arg2;
- (void)appLayoutDidBecomeHidden:(SBAppLayout *)arg1;
- (void)appLayoutWillBecomeVisible:(SBAppLayout *)arg1;
- (_Bool)performSwitcherKeyboardShortcutAction:(long long)arg1;
- (SBAppLayout *)appLayoutForKeyboardFocusedScene;
- (void)noteKeyboardFocusDidChangeToSceneID:(NSString *)arg1;
@end
