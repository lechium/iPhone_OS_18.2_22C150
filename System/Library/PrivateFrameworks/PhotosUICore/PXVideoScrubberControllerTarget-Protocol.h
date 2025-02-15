//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class AVPlayerItem, NSObject, PXVideoScrubberController;
@protocol OS_dispatch_queue;

@protocol PXVideoScrubberControllerTarget <NSObject>
@property(copy, nonatomic) CDUnknownBlockType playerItemChangeHandler;
@property(copy, nonatomic) CDUnknownBlockType statusChangeHandler;
@property(copy, nonatomic) CDUnknownBlockType durationChangeHandler;
- (void)removeTimeObserver:(id)arg1;
- (id)addPeriodicTimeObserverForInterval:(CDStruct_198678f7)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 usingBlock:(void (^)(struct))arg3;
- (void)cancelPendingSeeks;
- (void)videoScrubberController:(PXVideoScrubberController *)arg1 seekToTime:(CDStruct_198678f7)arg2 toleranceBefore:(CDStruct_198678f7)arg3 toleranceAfter:(CDStruct_198678f7)arg4 completionHandler:(void (^)(_Bool))arg5;
- (CDStruct_198678f7)currentItemDuration;
- (CDStruct_198678f7)playerCurrentTime;
- (float)playRate;
- (long long)playerStatus;
- (AVPlayerItem *)playerItem;

@optional
- (void)videoScrubberControllerDidEndSeeking:(PXVideoScrubberController *)arg1;
- (void)videoScrubberControllerWillBeginSeeking:(PXVideoScrubberController *)arg1;
@end

