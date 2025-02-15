//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSArray, NSMutableArray, SCATGestureArrowView, SCATOutlineLabel;

@interface SCATGestureDrawingView : UIView
{
    NSMutableArray *_arrowViews;	// 8 = 0x8
    _Bool _fingersPressed;	// 16 = 0x10
    _Bool _fingersHighlighted;	// 17 = 0x11
    _Bool _showsRotationControls;	// 18 = 0x12
    _Bool _showsRotation90Controls;	// 19 = 0x13
    _Bool _showsCurvatureControls;	// 20 = 0x14
    SCATGestureArrowView *_rotateClockwiseControl;	// 24 = 0x18
    SCATGestureArrowView *_rotateCounterclockwiseControl;	// 32 = 0x20
    SCATOutlineLabel *_rotate90ClockwiseButton;	// 40 = 0x28
    SCATOutlineLabel *_rotate90CounterclockwiseButton;	// 48 = 0x30
    SCATGestureArrowView *_increaseCurveControl;	// 56 = 0x38
    SCATGestureArrowView *_decreaseCurveControl;	// 64 = 0x40
    SCATGestureArrowView *_straightenCurveControl;	// 72 = 0x48
    NSArray *_rotation90Controls;	// 80 = 0x50
    struct CGRect _frameForToolbar;	// 88 = 0x58
}

+ (struct CGRect)_frameWithIntegralOrigin:(struct CGRect)arg1;	// IMP=0x00400000000d0683
+ (struct CGRect)_bestFrameFor90ControlAtAngle:(double)arg1 size:(struct CGSize)arg2 centerPoint:(struct CGPoint)arg3;	// IMP=0x00100000000d02f7
+ (_Bool)_isValidPositionFor90ControlWithXAlignment:(unsigned long long)arg1 yAlignment:(unsigned long long)arg2 size:(struct CGSize)arg3 nearestPoint:(struct CGPoint)arg4 centerPoint:(struct CGPoint)arg5 frame:(struct CGRect *)arg6;	// IMP=0x00100000000cff16
+ (struct CGRect)_frameFor90ControlWithXAlignment:(unsigned long long)arg1 yAlignment:(unsigned long long)arg2 size:(struct CGSize)arg3 nearestPoint:(struct CGPoint)arg4;	// IMP=0x00100000000cfea7
- (void).cxx_destruct;	// IMP=0x00200000000d12e9
@property(readonly, nonatomic) NSArray *rotation90Controls; // @synthesize rotation90Controls=_rotation90Controls;
@property(nonatomic) struct CGRect frameForToolbar; // @synthesize frameForToolbar=_frameForToolbar;
@property(readonly, nonatomic) SCATGestureArrowView *straightenCurveControl; // @synthesize straightenCurveControl=_straightenCurveControl;
@property(readonly, nonatomic) SCATGestureArrowView *decreaseCurveControl; // @synthesize decreaseCurveControl=_decreaseCurveControl;
@property(readonly, nonatomic) SCATGestureArrowView *increaseCurveControl; // @synthesize increaseCurveControl=_increaseCurveControl;
@property(readonly, nonatomic) SCATOutlineLabel *rotate90CounterclockwiseButton; // @synthesize rotate90CounterclockwiseButton=_rotate90CounterclockwiseButton;
@property(readonly, nonatomic) SCATOutlineLabel *rotate90ClockwiseButton; // @synthesize rotate90ClockwiseButton=_rotate90ClockwiseButton;
@property(readonly, nonatomic) SCATGestureArrowView *rotateCounterclockwiseControl; // @synthesize rotateCounterclockwiseControl=_rotateCounterclockwiseControl;
@property(readonly, nonatomic) SCATGestureArrowView *rotateClockwiseControl; // @synthesize rotateClockwiseControl=_rotateClockwiseControl;
@property(nonatomic) _Bool showsCurvatureControls; // @synthesize showsCurvatureControls=_showsCurvatureControls;
@property(nonatomic) _Bool showsRotation90Controls; // @synthesize showsRotation90Controls=_showsRotation90Controls;
@property(nonatomic) _Bool showsRotationControls; // @synthesize showsRotationControls=_showsRotationControls;
@property(nonatomic, getter=areFingersHighlighted) _Bool fingersHighlighted; // @synthesize fingersHighlighted=_fingersHighlighted;
@property(nonatomic, getter=areFingersPressed) _Bool fingersPressed; // @synthesize fingersPressed=_fingersPressed;
- (void)_updateCurvatureControls;	// IMP=0x00100000000d0f90
- (void)_updateCurvatureControl:(id)arg1 withTailPoint:(struct CGPoint)arg2 tailAngle:(double)arg3 distance:(double)arg4 curvature:(double)arg5;	// IMP=0x00100000000d0ef4
- (void)_updateRotationControls;	// IMP=0x00100000000d0bae
- (double)_midAngleForCurvedTrailWithTailPoint:(struct CGPoint)arg1 fingerTrailDistance:(double)arg2 distanceAlongArc:(double)arg3 useSecondIntersectionPointIfNecessary:(_Bool)arg4;	// IMP=0x00100000000d09a7
- (void)_updateRotation90Controls;	// IMP=0x00100000000d06cd
- (void)_updateControls;	// IMP=0x00100000000cfe6c
- (double)_actualDistanceForFingerTrail;	// IMP=0x00100000000cfe11
- (struct CGPoint)_tailPoint;	// IMP=0x00100000000cfd96
- (void)_adjustArrowViewsForNumberOfFingers:(unsigned long long)arg1;	// IMP=0x00100000000cfc06
- (id)_newRotate90Button;	// IMP=0x00100000000cf9fc
- (id)_newControlArrowForCurvature:(_Bool)arg1;	// IMP=0x00100000000cf986
@property(nonatomic) double previewDistance;
@property(nonatomic) double curvature;
@property(nonatomic) double angle;
@property(copy, nonatomic) NSArray *fingerPositions;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000000ceaf2

@end

