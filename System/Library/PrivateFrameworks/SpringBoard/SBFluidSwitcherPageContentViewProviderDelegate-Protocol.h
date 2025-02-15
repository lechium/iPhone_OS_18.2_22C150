//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBAppLayout, SBFluidSwitcherPageContentViewProvider, SBTransientOverlayViewController, UIViewController;
@protocol SBAppSwitcherReusableSnapshotViewDelegate;

@protocol SBFluidSwitcherPageContentViewProviderDelegate <NSObject>
- (id <SBAppSwitcherReusableSnapshotViewDelegate>)delegateForSnapshotPageViewFromProvider:(SBFluidSwitcherPageContentViewProvider *)arg1;
- (SBTransientOverlayViewController *)viewControllerForTransientOverlayAppLayout:(SBAppLayout *)arg1 fromProvider:(SBFluidSwitcherPageContentViewProvider *)arg2;
- (UIViewController *)containerViewControllerForPageViewFromProvider:(SBFluidSwitcherPageContentViewProvider *)arg1;
- (struct CGSize)sizeForAppLayout:(SBAppLayout *)arg1 fromProvider:(SBFluidSwitcherPageContentViewProvider *)arg2;
- (long long)orientationForPageViewFromProvider:(SBFluidSwitcherPageContentViewProvider *)arg1;
@end

