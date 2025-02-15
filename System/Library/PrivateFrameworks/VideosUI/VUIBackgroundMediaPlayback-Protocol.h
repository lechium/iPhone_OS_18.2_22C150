//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVPlayerViewController, NSArray, NSObject, NSString, TVPPlayer, VUIMediaInfo;

@protocol VUIBackgroundMediaPlayback
@property(nonatomic, getter=shouldStopWhenAnotherMediaControllerStarts) _Bool stopWhenAnotherMediaControllerStarts;
@property(nonatomic) _Bool keepVideoGravityUnchangedByVideoControlsVisibility;
@property(nonatomic) struct UIEdgeInsets legibleContentInsets;
@property(nonatomic, getter=isPreloadPlaybackEnabled) _Bool preloadPlaybackEnabled;
@property(nonatomic) _Bool prefersAudioOverPictureInPicture;
@property(nonatomic) _Bool allowsPictureInPicturePlayback;
@property(nonatomic) _Bool showsPlaybackControlsInForeground;
@property(retain, nonatomic) NSString *videoGravity;
@property(nonatomic, getter=isAutomaticPlaybackStart) _Bool automaticPlaybackStart;
@property(nonatomic) unsigned long long imageSwappingAnimationType;
@property(nonatomic) double playbackStartDelay;
@property(nonatomic) unsigned long long imageContentMode;
@property(nonatomic) _Bool animateImageChange;
@property(nonatomic) _Bool clearPreviousImageBeforeLoading;
@property(nonatomic, getter=shouldStopPlayerWhenExitingFullScreen) _Bool stopPlayerWhenExitingFullScreen;
@property(nonatomic, getter=shouldStopPlayerWhenViewDisappears) _Bool stopPlayerWhenViewDisappears;
@property(nonatomic) _Bool stopsPlaybackWhenInactive;
@property(nonatomic) _Bool updatesNowPlayingInfoCenter;
@property(nonatomic) _Bool allowsExternalPlayback;
@property(nonatomic, getter=isVideoFrameFallbackEnabled) _Bool videoFrameFallbackEnabled;
@property(nonatomic) _Bool recordPausedMediaEventAsStop;
@property(nonatomic) double videoAudioRampDuration;
@property(nonatomic) _Bool prefetchesVideoFrame;
@property(nonatomic) _Bool autoPlayInSharePlay;
@property(nonatomic) _Bool forceAutoPlay;
@property(nonatomic, getter=isPlaybackEnabled) _Bool playbackEnabled;
@property(readonly, nonatomic, getter=isForeground) _Bool foreground;
@property(readonly, nonatomic) unsigned long long state;
@property(nonatomic) unsigned long long mediaInfoIndex;
@property(copy, nonatomic) NSArray *mediaInfos;
@property(readonly, copy, nonatomic) VUIMediaInfo *currentMediaInfo;
@property(retain, nonatomic) AVPlayerViewController *avPlayerViewController;
@property(retain, nonatomic) TVPPlayer *player;
- (NSObject *)notificationObject;
- (void)setMediaInfo:(VUIMediaInfo *)arg1 atIndex:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)setMediaInfos:(NSArray *)arg1 animated:(_Bool)arg2;
- (void)removeMediaInfoAtIndex:(unsigned long long)arg1;
- (void)appendMediaInfos:(NSArray *)arg1;
- (void)stop;
- (void)replay;
- (void)play;
- (void)pause;
- (void)setShowsVideoControls:(_Bool)arg1;
- (void)setControlsVisible:(_Bool)arg1;
- (void)adoptAVPlayerViewController:(AVPlayerViewController *)arg1 player:(TVPPlayer *)arg2;
- (TVPPlayer *)surrenderCurrentPlayer;
- (void)transitionToFullScreenAnimated:(_Bool)arg1;
- (void)transitionToForeground:(_Bool)arg1 withPlaybackControls:(_Bool)arg2 animated:(_Bool)arg3;
- (void)transitionToForeground:(_Bool)arg1 animated:(_Bool)arg2;
@end

