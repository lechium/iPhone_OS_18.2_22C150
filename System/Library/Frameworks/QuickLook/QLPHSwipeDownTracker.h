//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class QLPXSwipeDownTracker;

__attribute__((visibility("hidden")))
@interface QLPHSwipeDownTracker : NSObject
{
    QLPXSwipeDownTracker *_impl;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000004a7b0
@property(readonly, nonatomic) QLPXSwipeDownTracker *impl; // @synthesize impl=_impl;
@property(readonly, nonatomic) double finalAnimationSpringDamping;
@property(readonly, nonatomic) double finalAnimationDuration;
@property(readonly, nonatomic) struct QLPHDisplayVelocity trackedVelocity;
@property(readonly, nonatomic) struct CGAffineTransform trackedTransform;
@property(readonly, nonatomic) struct CGRect trackedBounds;
@property(readonly, nonatomic) struct CGPoint trackedCenter;
@property(readonly, nonatomic) _Bool shouldFinishDismissal;
@property(readonly, nonatomic) double dismissalProgress;
- (void)trackGestureTranslation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;	// IMP=0x000000000004a470
- (void)startTrackingCenter:(struct CGPoint)arg1 bounds:(struct CGRect)arg2 transform:(struct CGAffineTransform)arg3 withInitialGestureLocation:(struct CGPoint)arg4;	// IMP=0x000000000004a3d7
- (id)init;	// IMP=0x000000000004a381

@end

