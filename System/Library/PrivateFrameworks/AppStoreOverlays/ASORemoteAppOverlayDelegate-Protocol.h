//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppStoreOverlays/NSObject-Protocol.h>

@class ASOOverlayTransitionContext, NSError;

@protocol ASORemoteAppOverlayDelegate <NSObject>
- (void)remoteStoreOverlayDidFinishDismissal:(ASOOverlayTransitionContext *)arg1;
- (void)remoteStoreOverlayWillStartDismissing:(ASOOverlayTransitionContext *)arg1 executeBlock:(void (^)(void))arg2;
- (void)remoteStoreOverlayDidFinishPresentation:(ASOOverlayTransitionContext *)arg1;
- (void)remoteStoreOverlayWillStartPresenting:(ASOOverlayTransitionContext *)arg1 executeBlock:(void (^)(void))arg2;
- (void)remoteStoreOverlayDidFailToLoadWithError:(NSError *)arg1;
@end
