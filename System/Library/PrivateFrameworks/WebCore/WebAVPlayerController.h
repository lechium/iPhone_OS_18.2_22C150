//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVPlayerController, AVValueTiming, NSArray, NSString, WebAVMediaSelectionOption;

__attribute__((visibility("hidden")))
@interface WebAVPlayerController : NSObject
{
    struct WeakPtr<WebCore::PlaybackSessionModel, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> _delegate;	// 8 = 0x8
    struct WeakPtr<WebCore::PlaybackSessionInterfaceIOS, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> _playbackSessionInterface;	// 16 = 0x10
    double _defaultPlaybackRate;	// 24 = 0x18
    double _rate;	// 32 = 0x20
    _Bool _liveStreamEventModePossible;	// 40 = 0x28
    _Bool _isScrubbing;	// 41 = 0x29
    _Bool _allowsPictureInPicture;	// 42 = 0x2a
    _Bool _pictureInPictureInterrupted;	// 43 = 0x2b
    _Bool _muted;	// 44 = 0x2c
    double _seekToTime;	// 48 = 0x30
    WebAVMediaSelectionOption *_currentAudioMediaSelectionOption;	// 56 = 0x38
    WebAVMediaSelectionOption *_currentLegibleMediaSelectionOption;	// 64 = 0x40
    struct RetainPtr<AVPlayer> _player;	// 72 = 0x48
    _Bool _canScanBackward;	// 80 = 0x50
    _Bool _hasContentChapters;	// 81 = 0x51
    _Bool _canPlay;	// 82 = 0x52
    _Bool _canPause;	// 83 = 0x53
    _Bool _canTogglePlayback;	// 84 = 0x54
    _Bool _canSeek;	// 85 = 0x55
    _Bool _hasEnabledAudio;	// 86 = 0x56
    _Bool _hasEnabledVideo;	// 87 = 0x57
    _Bool _hasVideo;	// 88 = 0x58
    _Bool _playingOnSecondScreen;	// 89 = 0x59
    _Bool _externalPlaybackActive;	// 90 = 0x5a
    _Bool _allowsExternalPlayback;	// 91 = 0x5b
    AVPlayerController *_playerControllerProxy;	// 96 = 0x60
    double _contentDuration;	// 104 = 0x68
    double _contentDurationWithinEndTimes;	// 112 = 0x70
    NSArray *_loadedTimeRanges;	// 120 = 0x78
    long long _status;	// 128 = 0x80
    AVValueTiming *_timing;	// 136 = 0x88
    NSArray *_seekableTimeRanges;	// 144 = 0x90
    NSArray *_audioMediaSelectionOptions;	// 152 = 0x98
    NSArray *_legibleMediaSelectionOptions;	// 160 = 0xa0
    long long _externalPlaybackType;	// 168 = 0xa8
    NSString *_externalPlaybackAirPlayDeviceLocalizedName;	// 176 = 0xb0
    double _seekableTimeRangesLastModifiedTime;	// 184 = 0xb8
    double _liveUpdateInterval;	// 192 = 0xc0
    AVValueTiming *_minTiming;	// 200 = 0xc8
    AVValueTiming *_maxTiming;	// 208 = 0xd0
    struct CGSize _contentDimensions;	// 216 = 0xd8
}

+ (id)keyPathsForValuesAffectingHasSeekableLiveStreamingContent;	// IMP=0x0060000000fffb50
+ (id)keyPathsForValuesAffectingPlayingOnExternalScreen;	// IMP=0x0060000000fff030
+ (id)keyPathsForValuesAffectingHasLegibleMediaSelectionOptions;	// IMP=0x0060000000ffedf0
+ (id)keyPathsForValuesAffectingHasAudioMediaSelectionOptions;	// IMP=0x0060000000ffeda0
+ (id)keyPathsForValuesAffectingHasMediaSelectionOptions;	// IMP=0x0060000000ffed40
+ (id)keyPathsForValuesAffectingCanSeekToEnd;	// IMP=0x0060000000ffec50
+ (id)keyPathsForValuesAffectingCanSeekToBeginning;	// IMP=0x0060000000ffe960
+ (id)keyPathsForValuesAffectingCanScanForward;	// IMP=0x0060000000ffe620
+ (id)keyPathsForValuesAffectingMinTime;	// IMP=0x0060000000ffe0a0
+ (id)keyPathsForValuesAffectingMaxTime;	// IMP=0x0060000000ffdff0
+ (id)keyPathsForValuesAffectingHasLiveStreamingContent;	// IMP=0x0060000000ffdf00
+ (id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;	// IMP=0x0060000000ffde90
+ (id)keyPathsForValuesAffectingPlaying;	// IMP=0x0060000000ffdc10
- (id).cxx_construct;	// IMP=0x0000000001000070
- (void).cxx_destruct;	// IMP=0x0000000000ffffe0
@property(retain, nonatomic) AVValueTiming *maxTiming; // @synthesize maxTiming=_maxTiming;
@property(retain, nonatomic) AVValueTiming *minTiming; // @synthesize minTiming=_minTiming;
@property double liveUpdateInterval; // @synthesize liveUpdateInterval=_liveUpdateInterval;
@property double seekableTimeRangesLastModifiedTime; // @synthesize seekableTimeRangesLastModifiedTime=_seekableTimeRangesLastModifiedTime;
@property _Bool allowsExternalPlayback; // @synthesize allowsExternalPlayback=_allowsExternalPlayback;
@property(retain) NSString *externalPlaybackAirPlayDeviceLocalizedName; // @synthesize externalPlaybackAirPlayDeviceLocalizedName=_externalPlaybackAirPlayDeviceLocalizedName;
@property long long externalPlaybackType; // @synthesize externalPlaybackType=_externalPlaybackType;
@property(getter=isExternalPlaybackActive) _Bool externalPlaybackActive; // @synthesize externalPlaybackActive=_externalPlaybackActive;
@property(nonatomic, getter=isPlayingOnSecondScreen) _Bool playingOnSecondScreen; // @synthesize playingOnSecondScreen=_playingOnSecondScreen;
@property(retain) NSArray *legibleMediaSelectionOptions; // @synthesize legibleMediaSelectionOptions=_legibleMediaSelectionOptions;
@property(retain) NSArray *audioMediaSelectionOptions; // @synthesize audioMediaSelectionOptions=_audioMediaSelectionOptions;
@property(retain) NSArray *seekableTimeRanges; // @synthesize seekableTimeRanges=_seekableTimeRanges;
@property(retain) AVValueTiming *timing; // @synthesize timing=_timing;
@property long long status; // @synthesize status=_status;
@property(retain) NSArray *loadedTimeRanges; // @synthesize loadedTimeRanges=_loadedTimeRanges;
@property double contentDurationWithinEndTimes; // @synthesize contentDurationWithinEndTimes=_contentDurationWithinEndTimes;
@property _Bool hasVideo; // @synthesize hasVideo=_hasVideo;
@property _Bool hasEnabledVideo; // @synthesize hasEnabledVideo=_hasEnabledVideo;
@property _Bool hasEnabledAudio; // @synthesize hasEnabledAudio=_hasEnabledAudio;
@property struct CGSize contentDimensions; // @synthesize contentDimensions=_contentDimensions;
@property double contentDuration; // @synthesize contentDuration=_contentDuration;
@property _Bool canSeek; // @synthesize canSeek=_canSeek;
@property _Bool canTogglePlayback; // @synthesize canTogglePlayback=_canTogglePlayback;
@property _Bool canPause; // @synthesize canPause=_canPause;
@property _Bool canPlay; // @synthesize canPlay=_canPlay;
@property(readonly) _Bool hasContentChapters; // @synthesize hasContentChapters=_hasContentChapters;
@property _Bool canScanBackward; // @synthesize canScanBackward=_canScanBackward;
@property(retain) AVPlayerController *playerControllerProxy; // @synthesize playerControllerProxy=_playerControllerProxy;
- (_Bool)hasSeekableLiveStreamingContent;	// IMP=0x0000000000fffa00
- (void)updateMinMaxTiming;	// IMP=0x0000000000fff5d0
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000fff280
- (void)volumeChanged:(double)arg1;	// IMP=0x0000000000fff230
@property double volume;
- (void)toggleMuted:(id)arg1;	// IMP=0x0000000000fff140
@property(getter=isMuted) _Bool muted;
@property(getter=isPictureInPictureInterrupted) _Bool pictureInPictureInterrupted;
@property(readonly, getter=isPictureInPicturePossible) _Bool pictureInPicturePossible;
- (void)setAllowsPictureInPicture:(_Bool)arg1;	// IMP=0x0000000000fff060
@property(readonly, getter=isPlayingOnExternalScreen) _Bool playingOnExternalScreen;
@property(retain) WebAVMediaSelectionOption *currentLegibleMediaSelectionOption;
@property(retain) WebAVMediaSelectionOption *currentAudioMediaSelectionOption;
@property(readonly) _Bool hasLegibleMediaSelectionOptions;
@property(readonly) _Bool hasAudioMediaSelectionOptions;
@property(readonly) _Bool hasMediaSelectionOptions;
@property(readonly) _Bool canSeekFrameForward;
@property(readonly) _Bool canSeekFrameBackward;
- (void)seekChapterForward:(id)arg1;	// IMP=0x0000000000ffecc0
- (void)seekToEnd:(id)arg1;	// IMP=0x0000000000ffec70
@property(readonly) _Bool canSeekToEnd;
- (void)seekChapterBackward:(id)arg1;	// IMP=0x0000000000ffe9d0
- (void)seekToBeginning:(id)arg1;	// IMP=0x0000000000ffe980
@property(readonly) _Bool canSeekToBeginning;
- (void)endScanningBackward:(id)arg1;	// IMP=0x0000000000ffe700
- (void)beginScanningBackward:(id)arg1;	// IMP=0x0000000000ffe6c0
- (void)endScanningForward:(id)arg1;	// IMP=0x0000000000ffe680
- (void)beginScanningForward:(id)arg1;	// IMP=0x0000000000ffe640
@property(readonly) _Bool canScanForward;
@property(readonly) double seekToTime;
@property(readonly) _Bool isSeeking;
@property(readonly) _Bool isScrubbing;
- (void)gotoEndOfSeekableRanges:(id)arg1;	// IMP=0x0000000000ffe380
- (void)skipBackwardThirtySeconds:(id)arg1;	// IMP=0x0000000000ffe0d0
@property(readonly) double minTime;
@property(readonly) double maxTime;
- (_Bool)hasLiveStreamingContent;	// IMP=0x0000000000ffdeb0
- (void)setCurrentTimeWithinEndTimes:(double)arg1;	// IMP=0x0000000000ffde70
- (double)currentTimeWithinEndTimes;	// IMP=0x0000000000ffde40
- (void)seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;	// IMP=0x0000000000ffddd0
- (void)seekByTimeInterval:(double)arg1;	// IMP=0x0000000000ffddb0
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;	// IMP=0x0000000000ffdd40
- (void)seekToTime:(double)arg1;	// IMP=0x0000000000ffdcd0
- (void)endScrubbing:(id)arg1;	// IMP=0x0000000000ffdc80
- (void)beginScrubbing:(id)arg1;	// IMP=0x0000000000ffdc30
- (void)setRate:(double)arg1 fromJavaScript:(_Bool)arg2;	// IMP=0x0000000000ffdb00
@property double rate;
- (void)setDefaultPlaybackRate:(double)arg1 fromJavaScript:(_Bool)arg2;	// IMP=0x0000000000ffd9c0
@property double defaultPlaybackRate;
@property void *playbackSessionInterface;
@property void *delegate;
@property(getter=isPlaying) _Bool playing;
- (void)togglePlaybackEvenWhenInBackground:(id)arg1;	// IMP=0x0000000000ffd760
- (void)togglePlayback:(id)arg1;	// IMP=0x0000000000ffd6f0
- (void)pause:(id)arg1;	// IMP=0x0000000000ffd6b0
- (void)play:(id)arg1;	// IMP=0x0000000000ffd670
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x0000000000ffd650
- (id)currentItem;	// IMP=0x0000000000ffd630
- (id)player;	// IMP=0x0000000000ffd620
- (void)dealloc;	// IMP=0x0000000000ffd520
- (id)init;	// IMP=0x0000000000ffd340

@end
