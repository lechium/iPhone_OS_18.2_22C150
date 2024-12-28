//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, UIPointerInteractionAnimator, UIPointerRegion, UIPointerStyle, UIView, UIViewFloatAnimatableProperty, UIWindow, _UIPointerEffectPlatterView;
@protocol _UIContentEffectDescriptor;

__attribute__((visibility("hidden")))
@interface _UIPointerContentEffect : NSObject
{
    struct {
        _Bool isRearrangingEffectViews;
        _Bool stopViewOrderPreservation;
        _Bool sourceViewDidAllowEdgeAntialiasing;
        _Bool sourceViewDidAlignContentsToPixels;
    } _flags;	// 8 = 0x8
    _Bool _pressed;	// 12 = 0xc
    _Bool _sourceViewDidAllowEdgeAntialiasing;	// 13 = 0xd
    UIPointerRegion *_region;	// 16 = 0x10
    UIPointerStyle *_style;	// 24 = 0x18
    UIPointerInteractionAnimator *_entranceAnimator;	// 32 = 0x20
    UIPointerInteractionAnimator *_exitAnimator;	// 40 = 0x28
    double _liftProgress;	// 48 = 0x30
    _UIPointerEffectPlatterView *_platterView;	// 56 = 0x38
    UIView *_lumaSamplingBackdrop;	// 64 = 0x40
    UIView *_pointerPortal;	// 72 = 0x48
    NSMutableArray *_completions;	// 80 = 0x50
    long long _state;	// 88 = 0x58
    unsigned long long _animationCount;	// 96 = 0x60
    UIView *_positionReferenceView;	// 104 = 0x68
    UIWindow *_subtreeMonitoredWindow;	// 112 = 0x70
    UIView *_sublayerObservationView;	// 120 = 0x78
    UIView *_boundsObservationView;	// 128 = 0x80
    UIViewFloatAnimatableProperty *_liftProgressProperty;	// 136 = 0x88
    struct CGPoint _initialEffectPlatterPosition;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x000000000164f3f1
@property(retain, nonatomic) UIViewFloatAnimatableProperty *liftProgressProperty; // @synthesize liftProgressProperty=_liftProgressProperty;
@property(nonatomic) _Bool sourceViewDidAllowEdgeAntialiasing; // @synthesize sourceViewDidAllowEdgeAntialiasing=_sourceViewDidAllowEdgeAntialiasing;
@property(nonatomic) struct CGPoint initialEffectPlatterPosition; // @synthesize initialEffectPlatterPosition=_initialEffectPlatterPosition;
@property(nonatomic) __weak UIView *boundsObservationView; // @synthesize boundsObservationView=_boundsObservationView;
@property(nonatomic) __weak UIView *sublayerObservationView; // @synthesize sublayerObservationView=_sublayerObservationView;
@property(nonatomic) __weak UIWindow *subtreeMonitoredWindow; // @synthesize subtreeMonitoredWindow=_subtreeMonitoredWindow;
@property(nonatomic) __weak UIView *positionReferenceView; // @synthesize positionReferenceView=_positionReferenceView;
@property(nonatomic) unsigned long long animationCount; // @synthesize animationCount=_animationCount;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSMutableArray *completions; // @synthesize completions=_completions;
@property(nonatomic) __weak UIView *pointerPortal; // @synthesize pointerPortal=_pointerPortal;
@property(nonatomic) __weak UIView *lumaSamplingBackdrop; // @synthesize lumaSamplingBackdrop=_lumaSamplingBackdrop;
@property(retain, nonatomic) _UIPointerEffectPlatterView *platterView; // @synthesize platterView=_platterView;
@property(nonatomic) double liftProgress; // @synthesize liftProgress=_liftProgress;
@property(retain, nonatomic) UIPointerInteractionAnimator *exitAnimator; // @synthesize exitAnimator=_exitAnimator;
@property(retain, nonatomic) UIPointerInteractionAnimator *entranceAnimator; // @synthesize entranceAnimator=_entranceAnimator;
@property(retain, nonatomic) UIPointerStyle *style; // @synthesize style=_style;
@property(copy, nonatomic) UIPointerRegion *region; // @synthesize region=_region;
- (void)addCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000164f16a
- (id)previewForContinuingToEffectWithPreview:(id)arg1;	// IMP=0x000000000164f004
- (void)setDescriptor:(id)arg1 andKey:(id)arg2;	// IMP=0x000000000164ee98
@property(readonly, nonatomic) id <_UIContentEffectDescriptor> descriptor;
- (void)_monitoredView:(id)arg1 didMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;	// IMP=0x000000000164ee80
- (void)_monitoredView:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;	// IMP=0x000000000164ecd1
- (_Bool)_monitorsView:(id)arg1;	// IMP=0x000000000164ec1e
- (void)_ensureRelativeEffectViewOrderInContainer;	// IMP=0x000000000164e757
- (void)_modifyEffectContainerViewHierarchy:(CDUnknownBlockType)arg1 waitForCACommit:(_Bool)arg2;	// IMP=0x000000000164e674
- (void)_cleanUpObservation;	// IMP=0x000000000164e516
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000164e128
- (void)_anchorPlatterView:(id)arg1 toPreview:(id)arg2 updateBounds:(_Bool)arg3;	// IMP=0x000000000164d75d
- (id)_positionReferenceViewForPreview:(id)arg1;	// IMP=0x000000000164d4e8
- (void)_tearDownPlatterView;	// IMP=0x000000000164d481
- (void)_createAndInstallPlatterView;	// IMP=0x000000000164ccd7
- (void)_commitPointerStyleToArbiterWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000164c79c
- (void)_updateFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x000000000164b899
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000164b615
- (void)end:(_Bool)arg1;	// IMP=0x000000000164b5ad
- (void)begin;	// IMP=0x000000000164b550
- (void)_updatePlatterView:(id)arg1 forStyle:(id)arg2;	// IMP=0x000000000164b119
- (void)_setStyle:(id)arg1 andRegion:(id)arg2;	// IMP=0x000000000164aff6
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000164af02
- (void)dealloc;	// IMP=0x000000000164aec4
- (id)initWithStyle:(id)arg1 region:(id)arg2;	// IMP=0x000000000164ab7e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
