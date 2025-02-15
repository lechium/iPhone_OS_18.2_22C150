//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VKTimedAnimation;
@protocol VKTrackableAnnotation, VKTrackableAnnotationPresentation;

__attribute__((visibility("hidden")))
@interface VKAnnotationTrackingCameraController
{
    id <VKTrackableAnnotation> _annotation;	// 8 = 0x8
    id <VKTrackableAnnotationPresentation> _annotationPresentation;	// 16 = 0x10
    VKTimedAnimation *_currentAnimation;	// 24 = 0x18
    Matrix_6e1d3589 _currentAnimationStartPoint;	// 32 = 0x20
    Matrix_6e1d3589 _currentAnimationStartCameraPosition;	// 56 = 0x38
    Matrix_6e1d3589 _currentAnimationEndPoint;	// 80 = 0x50
    Matrix_6e1d3589 _currentAnimationEndCameraPosition;	// 104 = 0x68
    double _pendingChangeDuration;	// 128 = 0x80
    VKTimedAnimation *_currentHeadingAnimation;	// 136 = 0x88
    double _pendingHeadingChangeDuration;	// 144 = 0x90
    float _headingAnimationCompletedAngle;	// 152 = 0x98
    long long _headingAnimationDisplayRate;	// 160 = 0xa0
    CDStruct_211b8904 _behavior;	// 168 = 0xa8
    _Bool _hasUserSpecifiedZoomLevel;	// 192 = 0xc0
    struct {
        unsigned int hasPendingChange:1;
        unsigned int paused:1;
        unsigned int trackingHeading:1;
        unsigned int hasPendingHeadingChange:1;
        unsigned int isInitialRegionChange:1;
        unsigned int isJumpingToAnnotation:1;
        unsigned int hasVehicleHeading:1;
        unsigned int annotationImplementsAccuracy:1;
        unsigned int annotationImplementsHasValidHeading:1;
        unsigned int annotationImplementsHeading:1;
        unsigned int annotationImplementsExpectedCoordinateUpdateInterval:1;
        unsigned int annotationImplementsExpectedHeadingUpdateInterval:1;
    } _flags;	// 193 = 0xc1
    _Bool _hasVehicleHeading;	// 195 = 0xc3
    void *_elevationLogic;	// 200 = 0xc8
}

- (id).cxx_construct;	// IMP=0x000000000061c250
- (void).cxx_destruct;	// IMP=0x000000000061c1f0
@property(nonatomic) void *elevationLogic; // @synthesize elevationLogic=_elevationLogic;
@property(nonatomic) _Bool hasVehicleHeading; // @synthesize hasVehicleHeading=_hasVehicleHeading;
@property(nonatomic) _Bool hasUserSpecifiedZoomLevel; // @synthesize hasUserSpecifiedZoomLevel=_hasUserSpecifiedZoomLevel;
@property(nonatomic) long long headingAnimationDisplayRate; // @synthesize headingAnimationDisplayRate=_headingAnimationDisplayRate;
@property(nonatomic) CDStruct_211b8904 behavior; // @synthesize behavior=_behavior;
@property(readonly, nonatomic) id <VKTrackableAnnotation> annotation; // @synthesize annotation=_annotation;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000061be80
- (void)resumeAnimation;	// IMP=0x000000000061bd80
- (void)pauseAnimation;	// IMP=0x000000000061bd10
- (_Bool)isAnimating;	// IMP=0x000000000061bca0
@property(readonly, nonatomic) _Bool shouldForceZoomToFit;
- (void)setGesturing:(_Bool)arg1;	// IMP=0x000000000061bc00
- (void)stopTrackingAnnotation;	// IMP=0x000000000061ba90
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(_Bool)arg2 animated:(_Bool)arg3 duration:(double)arg4 timingFunction:(CDUnknownBlockType)arg5;	// IMP=0x000000000061b6e0
- (void)_rotateToHeadingAnimated:(_Bool)arg1 duration:(double)arg2;	// IMP=0x000000000061b6d0
- (void)_goToAnnotationAnimated:(_Bool)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3 isInitial:(_Bool)arg4;	// IMP=0x000000000061b6c0
- (void)updateFramerate;	// IMP=0x000000000061b5c0
@property(readonly, nonatomic, getter=isTrackingHeading) _Bool trackingHeading;
- (void)dealloc;	// IMP=0x000000000061b460
- (id)initWithMapDataAccess:(struct MapDataAccess *)arg1 animationRunner:(struct AnimationRunner *)arg2 runLoopController:(struct RunLoopController *)arg3 cameraDelegate:(id)arg4;	// IMP=0x000000000061b400

@end

