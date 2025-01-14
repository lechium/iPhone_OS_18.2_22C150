//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LPVideo, LPYouTubePlayerView, NSString;

__attribute__((visibility("hidden")))
@interface LPYouTubeVideoView
{
    LPYouTubePlayerView *_platformYouTubeView;	// 8 = 0x8
    _Bool _allowingInteractionUntilPlaybackResumes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003c04f
- (void)enterCustomFullScreen;	// IMP=0x000000000003c032
- (_Bool)usesCustomFullScreenImplementation;	// IMP=0x000000000003c02a
- (void)youTubePlayer:(id)arg1 didChangeToFullScreen:(_Bool)arg2;	// IMP=0x000000000003bfb1
- (void)youTubePlayer:(id)arg1 didReceiveError:(id)arg2;	// IMP=0x000000000003bf48
- (void)youTubePlayer:(id)arg1 didChangeToState:(long long)arg2;	// IMP=0x000000000003be10
- (void)setAllowsUserInteractionWithVideoPlayer:(_Bool)arg1;	// IMP=0x000000000003bdbf
- (id)createVideoPlayerView;	// IMP=0x000000000003bc45
- (void)setPlaying:(_Bool)arg1;	// IMP=0x000000000003bbc1
- (void)setVolume:(double)arg1;	// IMP=0x000000000003bbbb
- (double)volume;	// IMP=0x000000000003bbad
- (void)setMuted:(_Bool)arg1;	// IMP=0x000000000003bb67
- (_Bool)isMuted;	// IMP=0x000000000003bb4a
- (_Bool)shouldShowMuteButton;	// IMP=0x000000000003bb42
- (_Bool)usesSharedAudioSession;	// IMP=0x000000000003bb3a
- (id)initWithHost:(id)arg1 video:(id)arg2 style:(id)arg3 posterFrame:(id)arg4 posterFrameStyle:(id)arg5 configuration:(id)arg6;	// IMP=0x000000000003b9a9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) LPVideo *media; // @dynamic media;
@property(readonly) Class superclass;

@end

