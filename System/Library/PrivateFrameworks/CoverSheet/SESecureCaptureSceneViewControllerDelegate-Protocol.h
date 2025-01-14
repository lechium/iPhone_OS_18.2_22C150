//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoverSheet/NSObject-Protocol.h>

@class BSAction, FBScene, SESecureCaptureSceneViewController;

@protocol SESecureCaptureSceneViewControllerDelegate <NSObject>
- (void)secureCaptureSceneViewController:(SESecureCaptureSceneViewController *)arg1 didDestroyScene:(FBScene *)arg2;
- (void)secureCaptureSceneViewController:(SESecureCaptureSceneViewController *)arg1 sceneDidDeactivate:(FBScene *)arg2;
- (void)secureCaptureSceneViewController:(SESecureCaptureSceneViewController *)arg1 didCreateScene:(FBScene *)arg2;
- (void)secureCaptureSceneViewController:(SESecureCaptureSceneViewController *)arg1 requestsIdleTimerDisabled:(_Bool)arg2;

@optional
- (void)secureCaptureSceneViewController:(SESecureCaptureSceneViewController *)arg1 requestsLaunchWithAction:(BSAction *)arg2;
- (void)secureCaptureSceneViewController:(SESecureCaptureSceneViewController *)arg1 requestsLaunchAfterTransitionCompletionWithAction:(BSAction *)arg2 completion:(void (^)(NSError *))arg3;
- (void)secureCaptureSceneViewController:(SESecureCaptureSceneViewController *)arg1 requestsLaunchWithAction:(BSAction *)arg2 completion:(void (^)(NSError *))arg3;
@end

