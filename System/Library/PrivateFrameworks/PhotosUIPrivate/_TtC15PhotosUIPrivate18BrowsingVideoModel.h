//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC15PhotosUIPrivate18BrowsingVideoModel : NSObject
{
    MISSING_TYPE *__audioMuteState;	// 0 = 0x0
    MISSING_TYPE *__currentTime;	// 0 = 0x0
    MISSING_TYPE *__totalDuration;	// 0 = 0x0
    MISSING_TYPE *videoPlayer;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *__isPlaying;	// 0 = 0x0
    MISSING_TYPE *browsingViewModel;	// 0 = 0x0
    MISSING_TYPE *assetViewModel;	// 18068 = 0x4694
    MISSING_TYPE *_timelineControlInteractionState;	// 0 = 0x0
    MISSING_TYPE *_controlSource;	// 0 = 0x0
    MISSING_TYPE *timeRangeMarkUIProvider;	// 0 = 0x0
    MISSING_TYPE *videoMuteObservation;	// 0 = 0x0
    MISSING_TYPE *assetViewModelObservation;	// 0 = 0x0
    MISSING_TYPE *videoPlayerObservation;	// 0 = 0x0
    MISSING_TYPE *scrubberIdentifier;	// 0 = 0x0
    MISSING_TYPE *_$observationRegistrar;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00000000000224f8
- (void)videoPlayer:(id)arg1 currentTimeDidChange:(CDStruct_1b6d18a9)arg2;	// IMP=0x0000000000021668
- (void)videoPlayer:(id)arg1 desiredSeekTimeDidChange:(CDStruct_1b6d18a9)arg2;	// IMP=0x0000000000021658
- (id)init;	// IMP=0x0000000000020c53
- (void)mediaTimelineControlDidEndDecelerating:(id)arg1;	// IMP=0x0000000000022e91
- (void)mediaTimelineControlDidEndChanging:(id)arg1;	// IMP=0x0000000000022c5b
- (void)mediaTimelineControlWillBeginChanging:(id)arg1;	// IMP=0x0000000000022b33
- (void)mediaTimelineControl:(id)arg1 didChangeValue:(float)arg2;	// IMP=0x0000000000022933

@end

