//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NANowPlayingViewController, UIMenu;

@protocol NANowPlayingViewControllerDelegate
- (UIMenu *)nowPlayingViewControllerProvidePlaybackRateMenu:(NANowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerDidRequestNavigateToArticle:(NANowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerDidTapDismissButton:(NANowPlayingViewController *)arg1;
- (void)nowPlayingViewController:(NANowPlayingViewController *)arg1 seekToPosition:(double)arg2;
- (void)nowPlayingViewControllerDidTapEllipsis:(NANowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerDidTapPlay:(NANowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerDidTapPause:(NANowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerDidTapNextTrack:(NANowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerDidTapSkipForward:(NANowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerDidTapRewind:(NANowPlayingViewController *)arg1;
@end
