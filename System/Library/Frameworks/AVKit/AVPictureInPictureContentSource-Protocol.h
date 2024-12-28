//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVKit/NSObject-Protocol.h>

@class AVPictureInPictureViewController, AVPlayerController, UIWindow;

@protocol AVPictureInPictureContentSource <NSObject>
@property(readonly, nonatomic) UIWindow *avkit_window;
@property(readonly, nonatomic) _Bool avkit_isVisible;
@property(readonly, nonatomic) struct CGRect avkit_videoRectInWindow;
- (_Bool)avkit_wantsManagedSecondScreenPlayback;
- (long long)avkit_contentSourceType;
- (void)avkit_willBeginStoppingPictureInPictureForPictureInPictureViewController:(AVPictureInPictureViewController *)arg1;
- (void)avkit_endReducingResourcesForPictureInPictureViewController:(AVPictureInPictureViewController *)arg1 playerController:(AVPlayerController *)arg2;
- (void)avkit_beginReducingResourcesForPictureInPictureViewController:(AVPictureInPictureViewController *)arg1 playerController:(AVPlayerController *)arg2;
- (void)avkit_stopRoutingVideoToPictureInPictureViewController:(AVPictureInPictureViewController *)arg1;
- (void)avkit_startRoutingVideoToPictureInPictureViewController:(AVPictureInPictureViewController *)arg1;
- (AVPictureInPictureViewController *)avkit_pictureInPictureViewController;
- (AVPlayerController *)avkit_makePlayerControllerIfNeeded:(AVPlayerController *)arg1;

@optional
- (_Bool)avkit_isFullScreen;
@end
