//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBTransientOverlayViewController;
@protocol SBTransientOverlayPresenting;

@protocol SBTransientOverlayScenePresenterObserver <NSObject>

@optional
- (void)transientOverlayScenePresenter:(id <SBTransientOverlayPresenting>)arg1 didDismissViewController:(SBTransientOverlayViewController *)arg2 wasTopmostPresentation:(_Bool)arg3;
- (void)transientOverlayScenePresenter:(id <SBTransientOverlayPresenting>)arg1 willPresentViewController:(SBTransientOverlayViewController *)arg2;
@end

