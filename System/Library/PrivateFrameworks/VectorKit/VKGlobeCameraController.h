//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface VKGlobeCameraController
{
    void *_globeView;	// 112 = 0x70
    struct CameraManager _cameraManager;	// 120 = 0x78
    double _currentDoublePanPitch;	// 544 = 0x220
    _Bool _isPitching;	// 552 = 0x228
    _Bool _isRotating;	// 553 = 0x229
    _Bool _wasPitched;	// 554 = 0x22a
    _Bool _couldEnter3DMode;	// 555 = 0x22b
    double _currentZoomLevel;	// 560 = 0x230
    double _maxZoomLevel;	// 568 = 0x238
    double _minZoomLevel;	// 576 = 0x240
    double _lastRotation;	// 584 = 0x248
    struct CGPoint _panStartScreenPoint;	// 592 = 0x250
    struct CGPoint _panLastScreenPoint;	// 608 = 0x260
    double _beganDoublePanPitch;	// 624 = 0x270
    shared_ptr_e963992e _taskContext;	// 632 = 0x278
    _Bool _tourShouldResumeWhenDoneGesturing;	// 648 = 0x288
}

- (id).cxx_construct;	// IMP=0x0000000000c6eef0
- (void).cxx_destruct;	// IMP=0x0000000000c6eea0
@property(nonatomic) _Bool tourShouldResumeWhenDoneGesturing; // @synthesize tourShouldResumeWhenDoneGesturing=_tourShouldResumeWhenDoneGesturing;
@property(nonatomic) void *globeView; // @synthesize globeView=_globeView;
- (void)animateToRestriction:(id)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3;	// IMP=0x0000000000c6ebe0
- (void)setRegionRestriction:(id)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3;	// IMP=0x0000000000c6e820
- (void)animateRegionWithDuration:(double)arg1 timingFunction:(CDUnknownBlockType)arg2 cursor:(Matrix_443f5d51)arg3 stepHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000c6e630
- (void)setCenterCoordinateDistanceRange:(CDStruct_fbb5cfe5)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3;	// IMP=0x0000000000c6e240
- (void)setMinZoomLevel:(double)arg1;	// IMP=0x0000000000c6e220
- (void)setMaxZoomLevel:(double)arg1;	// IMP=0x0000000000c6e200
- (void)setCurrentZoomLevel:(double)arg1;	// IMP=0x0000000000c6e1e0
- (double)topDownMinimumZoomLevel;	// IMP=0x0000000000c6e1c0
- (double)currentZoomLevel;	// IMP=0x0000000000c6e1a0
- (double)maximumZoomLevel;	// IMP=0x0000000000c6e180
- (double)minimumZoomLevel;	// IMP=0x0000000000c6e160
- (double)_fovAdjustment;	// IMP=0x0000000000c6e0f0
- (double)pitch;	// IMP=0x0000000000c6e0c0
- (double)heading;	// IMP=0x0000000000c6e070
- (double)altitude;	// IMP=0x0000000000c6e000
- (double)distanceFromCenterCoordinate;	// IMP=0x0000000000c6dfe0
- (CDStruct_2c43369c)centerCoordinate;	// IMP=0x0000000000c6df20
- (CDStruct_2c43369c)_centerCoordinateForMapRegion:(id)arg1;	// IMP=0x0000000000c6ded0
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 timingCurve:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000c6dd40
- (double)durationToAnimateToMapRegion:(id)arg1;	// IMP=0x0000000000c6dd30
- (double)zoomForMapRegion:(id)arg1;	// IMP=0x0000000000c6d750
- (double)widestLatitudeForMapRegion:(id)arg1;	// IMP=0x0000000000c6d6b0
- (double)greatCircleMidPointLatitude:(double)arg1 fromLongitude:(double)arg2 toLongitude:(double)arg3;	// IMP=0x0000000000c6d630
- (double)earthRadiusAt:(double)arg1;	// IMP=0x0000000000c6d5e0
- (double)geocAngleBetween:(CDStruct_2c43369c)arg1 andCoordinate:(CDStruct_2c43369c)arg2;	// IMP=0x0000000000c6d480
- (id)mapRegionIgnoringEdgeInsets;	// IMP=0x0000000000c6d460
- (id)mapRegion;	// IMP=0x0000000000c6d000
- (void)setYaw:(double)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000c6cf70
- (double)presentationYaw;	// IMP=0x0000000000c6cf50
- (void)updateCameraManager;	// IMP=0x0000000000c6cf20
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(_Bool)arg2 animated:(_Bool)arg3 duration:(double)arg4 timingFunction:(CDUnknownBlockType)arg5;	// IMP=0x0000000000c6cbc0
- (void)setGesturing:(_Bool)arg1;	// IMP=0x0000000000c6cb00
- (void)updateState;	// IMP=0x0000000000c6cad0
- (void)_updateCanEnter3DMode;	// IMP=0x0000000000c6ca40
- (void)_updateIsPitched;	// IMP=0x0000000000c6c9a0
- (double)maxPitch;	// IMP=0x0000000000c6c870
- (double)minPitch;	// IMP=0x0000000000c6c860
- (_Bool)isFullyPitched;	// IMP=0x0000000000c6c720
- (_Bool)isPitched;	// IMP=0x0000000000c6c6f0
- (_Bool)canEnter3DMode;	// IMP=0x0000000000c6c5c0
- (void)exit3DMode;	// IMP=0x0000000000c6c5a0
- (void)enter3DMode;	// IMP=0x0000000000c6c450
- (void)stopGlobeAnimations;	// IMP=0x0000000000c6c380
- (Geocentric_d8fde6f2)cameraPosition;	// IMP=0x0000000000c6c330
- (void)adjustLoadingForAnimation:(float)arg1 progressFactor:(float)arg2;	// IMP=0x0000000000c6c1c0
- (float)slowDownFactorFromLoadProgress;	// IMP=0x0000000000c6c140
- (_Bool)isFlyoverTourStarted;	// IMP=0x0000000000c6c110
- (void)interruptFlyoverTourAnimation;	// IMP=0x0000000000c6c020
- (void)stopFlyoverTourAnimation;	// IMP=0x0000000000c6bef0
- (void)resumeFlyoverTourAnimation;	// IMP=0x0000000000c6be60
- (void)pauseFlyoverTourAnimation;	// IMP=0x0000000000c6be10
- (void)flyoverTourAnimation:(id)arg1 animateToStart:(_Bool)arg2 labelChanged:(CDUnknownBlockType)arg3 stateChange:(CDUnknownBlockType)arg4;	// IMP=0x0000000000c6ba10
- (void)moveToZoomOutZoomInTransition:(CDStruct_2c43369c)arg1 height:(double)arg2 useHeight:(_Bool)arg3 zoom:(double)arg4 rotation:(double)arg5 tilt:(double)arg6 duration:(double)arg7 timingCurve:(CDUnknownBlockType)arg8 completion:(CDUnknownBlockType)arg9;	// IMP=0x0000000000c6af40
- (CDUnknownBlockType)createMoveToZoomOutZoomInFrameFunction:(CameraFrame_b765d6d7)arg1 toLatLon:(CameraFrame_b765d6d7)arg2;	// IMP=0x0000000000c6a720
- (void)moveTo:(CDStruct_2c43369c)arg1 height:(double)arg2 useHeight:(_Bool)arg3 zoom:(double)arg4 rotation:(double)arg5 tilt:(double)arg6 duration:(double)arg7 timingCurve:(CDUnknownBlockType)arg8 completion:(CDUnknownBlockType)arg9;	// IMP=0x0000000000c69e60
- (void)moveTo:(CDStruct_2c43369c)arg1 zoom:(double)arg2 rotation:(double)arg3 tilt:(double)arg4 duration:(double)arg5 timingCurve:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0000000000c69e30
- (void)panWithOffset:(struct CGPoint)arg1 relativeToScreenPoint:(struct CGPoint)arg2 animated:(_Bool)arg3 duration:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000c69b00
- (void)zoomToDistance:(struct CGPoint)arg1 distance:(double)arg2 time:(double)arg3;	// IMP=0x0000000000c69ae0
- (void)zoomToDistance:(struct CGPoint)arg1 distance:(double)arg2 time:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000c69790
- (void)tapZoom:(struct CGPoint)arg1 levels:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000c69430
- (void)tiltTo:(double)arg1 animated:(_Bool)arg2 exaggerate:(_Bool)arg3;	// IMP=0x0000000000c69060
- (void)rotateTo:(double)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000c68c90
- (_Bool)snapMapIfNecessary:(_Bool)arg1;	// IMP=0x0000000000c68ab0
- (void)setCenterCoordinate3D:(CDStruct_071ac149)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x0000000000c68960
- (void)setCenterCoordinate:(CDStruct_2c43369c)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x0000000000c68800
- (void)stopPinchingWithFocusPoint:(struct CGPoint)arg1;	// IMP=0x0000000000c68720
- (void)updatePinchWithFocusPoint:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;	// IMP=0x0000000000c68580
- (void)startPinchingWithFocusPoint:(struct CGPoint)arg1;	// IMP=0x0000000000c68490
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000c68370
- (void)pitch:(struct CGPoint)arg1 translation:(double)arg2;	// IMP=0x0000000000c68040
- (void)rotate:(double)arg1 atScreenPoint:(struct CGPoint)arg2;	// IMP=0x0000000000c67f70
- (void)setCamera:(shared_ptr_46708168)arg1;	// IMP=0x0000000000c67e90
- (long long)tileSize;	// IMP=0x0000000000c67e80
- (id)initWithTaskContext:(shared_ptr_e963992e)arg1 mapDataAccess:(void *)arg2 animationRunner:(struct AnimationRunner *)arg3 runLoopController:(struct RunLoopController *)arg4 cameraDelegate:(id)arg5;	// IMP=0x0000000000c67c10

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
