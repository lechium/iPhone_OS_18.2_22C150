//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, VKAnimation, VKAnnotationTrackingCameraController, VKCameraRegionRestriction, VKGestureCameraBehavior, VKTimedAnimation;
@protocol VKTrackableAnnotation;

__attribute__((visibility("hidden")))
@interface VKScreenCameraController
{
    VKAnimation *_zoomAnimation;	// 8 = 0x8
    VKTimedAnimation *_pitchAnimation;	// 16 = 0x10
    VKTimedAnimation *_rotationAnimation;	// 24 = 0x18
    VKTimedAnimation *_regionAnimation;	// 32 = 0x20
    VKTimedAnimation *_flyoverAnimation;	// 40 = 0x28
    VKTimedAnimation *_moveToTourPositionAnimation;	// 48 = 0x30
    VKAnnotationTrackingCameraController *_annotationTrackingCameraController;	// 56 = 0x38
    VKGestureCameraBehavior *_gestureCameraControllerBehavior;	// 64 = 0x40
    CDStruct_211b8904 _annotationTrackingBehavior;	// 72 = 0x48
    long long _annotationTrackingHeadingAnimationDisplayRate;	// 96 = 0x60
    _Bool _isPitchIncreasing;	// 104 = 0x68
    _Bool _userChangedZoomSinceLastProgrammaticRegionChange;	// 105 = 0x69
    _Bool _zoomAnimationCanBeInterrupted;	// 106 = 0x6a
    _Bool _hasVehicleHeading;	// 107 = 0x6b
    VKCameraRegionRestriction *_regionRestriction;	// 112 = 0x70
    CDStruct_fbb5cfe5 _centerCoordinateDistanceRange;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000c24390
@property(retain, nonatomic) VKCameraRegionRestriction *regionRestriction; // @synthesize regionRestriction=_regionRestriction;
@property(nonatomic) _Bool userChangedZoomSinceLastProgrammaticRegionChange; // @synthesize userChangedZoomSinceLastProgrammaticRegionChange=_userChangedZoomSinceLastProgrammaticRegionChange;
@property(nonatomic) CDStruct_fbb5cfe5 centerCoordinateDistanceRange; // @synthesize centerCoordinateDistanceRange=_centerCoordinateDistanceRange;
@property(nonatomic) _Bool hasVehicleHeading; // @synthesize hasVehicleHeading=_hasVehicleHeading;
@property(nonatomic) CDStruct_211b8904 annotationTrackingBehavior; // @synthesize annotationTrackingBehavior=_annotationTrackingBehavior;
- (_Bool)isFlyoverTourStarted;	// IMP=0x0000000000c242d0
- (void)interruptFlyoverTourAnimation;	// IMP=0x0000000000c242c0
- (void)stopFlyoverTourAnimation;	// IMP=0x0000000000c242b0
- (void)resumeFlyoverTourAnimation;	// IMP=0x0000000000c242a0
- (void)pauseFlyoverTourAnimation;	// IMP=0x0000000000c24290
- (void)updateWithTimestamp:(double)arg1 withContext:(void *)arg2;	// IMP=0x0000000000c24220
- (void)setCamera:(shared_ptr_46708168)arg1;	// IMP=0x0000000000c24170
- (void)setVkCamera:(id)arg1;	// IMP=0x0000000000c240f0
- (_Bool)canEnter3DMode;	// IMP=0x0000000000c240e0
- (void)exit3DMode;	// IMP=0x0000000000c240d0
- (void)enter3DMode;	// IMP=0x0000000000c240c0
- (void)panWithOffset:(struct CGPoint)arg1 relativeToScreenPoint:(struct CGPoint)arg2 animated:(_Bool)arg3 duration:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000c240b0
- (long long)tileSize;	// IMP=0x0000000000c240a0
- (void)setYaw:(double)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000c24090
- (void)setCenterCoordinate3D:(CDStruct_071ac149)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x0000000000c24080
- (void)setCenterCoordinate:(CDStruct_2c43369c)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x0000000000c24070
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 timingCurve:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000c24060
- (double)durationToAnimateToMapRegion:(id)arg1;	// IMP=0x0000000000c24050
- (_Bool)tapAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000c24040
- (void)transferGestureState:(id)arg1;	// IMP=0x0000000000c24020
- (void)stopPitchingWithFocusPoint:(struct CGPoint)arg1;	// IMP=0x0000000000c23fc0
- (void)updatePitchWithFocusPoint:(struct CGPoint)arg1 degrees:(double)arg2;	// IMP=0x0000000000c23fa0
- (void)updatePitchWithFocusPoint:(struct CGPoint)arg1 translation:(double)arg2;	// IMP=0x0000000000c23f80
- (void)startPitchingWithFocusPoint:(struct CGPoint)arg1;	// IMP=0x0000000000c23f00
- (void)stopRotatingWithFocusPoint:(struct CGPoint)arg1;	// IMP=0x0000000000c23eb0
- (void)updateRotationWithFocusPoint:(struct CGPoint)arg1 newValue:(double)arg2;	// IMP=0x0000000000c23e90
- (void)startRotatingWithFocusPoint:(struct CGPoint)arg1;	// IMP=0x0000000000c23e30
- (void)stopPanningAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000c23de0
- (void)updatePanWithTranslation:(struct CGPoint)arg1;	// IMP=0x0000000000c23da0
- (void)startPanningAtPoint:(struct CGPoint)arg1 panAtStartPoint:(_Bool)arg2;	// IMP=0x0000000000c23d40
- (void)stopPinchingWithFocusPoint:(struct CGPoint)arg1;	// IMP=0x0000000000c23cc0
- (void)updatePinchWithFocusPoint:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;	// IMP=0x0000000000c23c60
- (void)startPinchingWithFocusPoint:(struct CGPoint)arg1;	// IMP=0x0000000000c23ba0
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000c23b00
- (void)setRegionRestriction:(id)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3;	// IMP=0x0000000000c23a40
- (void)setCenterCoordinateDistanceRange:(CDStruct_fbb5cfe5)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3;	// IMP=0x0000000000c23700
- (void)updateState;	// IMP=0x0000000000c236d0
- (void)clampZoomLevelIfNecessaryAnimated:(_Bool)arg1;	// IMP=0x0000000000c236c0
- (void)clampZoomLevelIfNecessary;	// IMP=0x0000000000c236a0
- (_Bool)snapMapIfNecessary:(_Bool)arg1;	// IMP=0x0000000000c23690
- (_Bool)isAnimating;	// IMP=0x0000000000c23630
- (void)stopAnimations;	// IMP=0x0000000000c23560
- (void)stopRegionAnimation;	// IMP=0x0000000000c23520
- (void)stopSnappingAnimations;	// IMP=0x0000000000c234d0
- (void)setEdgeInsets:(struct VKEdgeInsets)arg1;	// IMP=0x0000000000c23470
@property(readonly, nonatomic) _Bool isAnimatingToTrackAnnotation;
@property(readonly, nonatomic) _Bool isTrackingHeading;
@property(readonly, nonatomic) id <VKTrackableAnnotation> trackingAnnotation;
- (void)stopTrackingAnnotation;	// IMP=0x0000000000c23340
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(_Bool)arg2 animated:(_Bool)arg3 duration:(double)arg4 timingFunction:(CDUnknownBlockType)arg5;	// IMP=0x0000000000c23330
- (void)dealloc;	// IMP=0x0000000000c231d0
- (id)initWithMapDataAccess:(struct MapDataAccess *)arg1 animationRunner:(struct AnimationRunner *)arg2 runLoopController:(struct RunLoopController *)arg3 cameraDelegate:(id)arg4;	// IMP=0x0000000000c230d0

// Remaining properties
@property(readonly, nonatomic, getter=isAnimatingToTrackAnnotation) _Bool animatingToTrackAnnotation;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isTrackingHeading) _Bool trackingHeading;

@end
