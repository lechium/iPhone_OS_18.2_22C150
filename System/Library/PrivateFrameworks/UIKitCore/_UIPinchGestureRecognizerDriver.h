//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIGestureRecognizerTransformAnalyzer;

__attribute__((visibility("hidden")))
@interface _UIPinchGestureRecognizerDriver
{
    double _initialTouchDistance;	// 8 = 0x8
    double _initialScale;	// 16 = 0x10
    double _lastEventTime;	// 24 = 0x18
    double _velocity;	// 32 = 0x20
    double _previousVelocity;	// 40 = 0x28
    double _lastNonZeroTimestampDelta;	// 48 = 0x30
    double _scaleThreshold;	// 56 = 0x38
    struct CGAffineTransform _transform;	// 64 = 0x40
    double _hysteresis;	// 112 = 0x70
    _UIGestureRecognizerTransformAnalyzer *_transformAnalyzer;	// 120 = 0x78
    struct {
        unsigned int endsOnSingleTouch:1;
        unsigned int receivedTwoTouches:1;
    } _flags;	// 128 = 0x80
    struct CGPoint _anchorPoint;	// 136 = 0x88
    struct CGPoint _initialAnchorPoint;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x0000000000aac9b7
- (void)transformChangedWithEvent:(id)arg1;	// IMP=0x0000000000aac7a9
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000aac708
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000aac63e
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000aabd70
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000aabc2e
- (_Bool)shouldReceiveComponent:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000aabc1a
- (void)reset;	// IMP=0x0000000000aababf
- (id)init;	// IMP=0x0000000000aab9bc

@end

