//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface QLPinchRotationTracker : NSObject
{
    double _trackedScale;	// 8 = 0x8
    double _rotation;	// 16 = 0x10
    double _previousScale;	// 24 = 0x18
    double _targetZoom;	// 32 = 0x20
    struct CGRect _initialBounds;	// 40 = 0x28
    struct CGPoint _initialTrackingCenter;	// 72 = 0x48
    struct CGPoint _initialGestureLocation;	// 88 = 0x58
    struct CGPoint _location;	// 104 = 0x68
    struct CGPoint _anchorLocationOffset;	// 120 = 0x78
    struct CGAffineTransform _trackedTransform;	// 136 = 0x88
    _Bool _shouldFinishDismissal;	// 184 = 0xb8
    double _dismissalProgress;	// 192 = 0xc0
    double _minimumZoomForDismissal;	// 200 = 0xc8
    struct CGPoint _anchorPoint;	// 208 = 0xd0
    struct CGPoint _trackedCenter;	// 224 = 0xe0
}

@property(nonatomic) double minimumZoomForDismissal; // @synthesize minimumZoomForDismissal=_minimumZoomForDismissal;
@property(nonatomic) double targetZoom; // @synthesize targetZoom=_targetZoom;
@property(readonly, nonatomic) _Bool shouldFinishDismissal; // @synthesize shouldFinishDismissal=_shouldFinishDismissal;
@property(readonly, nonatomic) double dismissalProgress; // @synthesize dismissalProgress=_dismissalProgress;
@property(readonly, nonatomic) struct CGAffineTransform trackedTransform; // @synthesize trackedTransform=_trackedTransform;
@property(readonly, nonatomic) struct CGPoint trackedCenter; // @synthesize trackedCenter=_trackedCenter;
@property(readonly, nonatomic) struct CGPoint anchorPoint; // @synthesize anchorPoint=_anchorPoint;
- (void)update;	// IMP=0x000000000004e898
@property(readonly, nonatomic) double finalAnimationSpringDamping;
@property(readonly, nonatomic) double finalAnimationDuration;
@property(readonly, nonatomic) struct CGRect trackedBounds;
@property(readonly, nonatomic) struct _QLDismissGestureTrackingVelocity trackedVelocity;
- (void)trackRotation:(double)arg1;	// IMP=0x000000000004e836
- (void)trackScale:(double)arg1;	// IMP=0x000000000004e815
- (void)trackGestureLocation:(struct CGPoint)arg1;	// IMP=0x000000000004e7db
- (void)startTrackingCenter:(struct CGPoint)arg1 bounds:(struct CGRect)arg2 transform:(struct CGAffineTransform)arg3 withInitialGestureLocation:(struct CGPoint)arg4;	// IMP=0x000000000004e6a3
- (id)init;	// IMP=0x000000000004e650

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
