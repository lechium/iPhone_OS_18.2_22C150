//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface QLPUTimedAnimationGroup
{
    _Bool _areAnimationsPaused;	// 8 = 0x8
    double _pausedElapsedTime;	// 16 = 0x10
    double _beginTime;	// 24 = 0x18
}

@property(nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
- (void)_update;	// IMP=0x000000000009bea5
- (void)updateAnimations;	// IMP=0x000000000009be9f
@property(readonly, nonatomic) double currentTime;
- (void)resumeAnimations;	// IMP=0x000000000009be18
- (void)pauseAnimations;	// IMP=0x000000000009bd9b
- (void)setElapsedTime:(double)arg1;	// IMP=0x000000000009bd6e
- (double)elapsedTime;	// IMP=0x000000000009bd05
- (id)init;	// IMP=0x000000000009bcad

@end
