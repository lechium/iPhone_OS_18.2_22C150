//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppStoreOverlays/NSObject-Protocol.h>

@class ASOHostContext, ASOOverlayTransitionContext, ASORemoteOverlay, _UIRemoteViewController;

@protocol ASORemoteOverlayHost <NSObject>
- (void)didFinishDismissingOverlay:(ASORemoteOverlay *)arg1;
- (void)willStartPresentingOverlay:(ASORemoteOverlay *)arg1 transitionContext:(ASOOverlayTransitionContext *)arg2;
- (_UIRemoteViewController *)remoteViewControllerForOverlayViewService;
- (ASOHostContext *)hostContextForOverlayViewService;
@end

