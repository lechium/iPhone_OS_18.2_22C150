//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CADisplayLink, NSString, UIPanGestureRecognizer;

__attribute__((visibility("hidden")))
@interface UISplitKeyboardSupport
{
    UIPanGestureRecognizer *_singleFingerPanRecognizer;	// 32 = 0x20
    UIPanGestureRecognizer *_twoFingerPanRecognizer;	// 40 = 0x28
    _Bool _isTranslating;	// 48 = 0x30
    _Bool _isSplitting;	// 49 = 0x31
    _Bool _splitLockState;	// 50 = 0x32
    struct CGPoint _targetTranslation;	// 56 = 0x38
    struct CGPoint _initialTranslation;	// 72 = 0x48
    struct CGPoint _translationVelocity;	// 88 = 0x58
    CADisplayLink *_displayLink;	// 104 = 0x68
    double _lastBounceTime;	// 112 = 0x70
    double _lastTranslationNotificationTime;	// 120 = 0x78
    CDUnknownBlockType _bounceCompletionBlock;	// 128 = 0x80
    _Bool _shouldUpdateKLGForTransition;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000001092b31
- (void)transitionDidFinish:(_Bool)arg1;	// IMP=0x0000000001092747
- (void)finishTransitionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000001092371
- (void)updateProgress:(double)arg1 startHeight:(double)arg2 endHeight:(double)arg3;	// IMP=0x0000000001091f93
- (void)prepareForTransition;	// IMP=0x0000000001091d31
- (void)undock;	// IMP=0x0000000001091d2b
- (void)dock;	// IMP=0x0000000001091c7d
- (void)_updateBounceAnimation:(id)arg1;	// IMP=0x00000000010919c8
- (void)invalidateDisplayLink;	// IMP=0x0000000001091986
- (void)bounceAnimationDidFinish;	// IMP=0x00000000010914fb
- (void)cancelBounceAnimation;	// IMP=0x00000000010913dc
- (_Bool)_updateKeyboardLayoutGuideForHostFrame:(struct CGRect)arg1 animated:(_Bool)arg2;	// IMP=0x0000000001090d4c
- (void)_updateKeyboardLayoutGuideForSplitTransition:(_Bool)arg1;	// IMP=0x0000000001090c28
- (void)translateDetected:(id)arg1;	// IMP=0x000000000108f3a8
- (void)cancelGestureRecognizers;	// IMP=0x000000000108f2ef
- (_Bool)completedPlacementFrom:(id)arg1 to:(id)arg2 forController:(id)arg3;	// IMP=0x000000000108f25f
- (_Bool)startedPlacementFrom:(id)arg1 to:(id)arg2 forController:(id)arg3;	// IMP=0x000000000108f0ba
- (void)willPerformPlacementFrom:(id)arg1 to:(id)arg2 forController:(id)arg3;	// IMP=0x000000000108f098
- (void)updatedControllerApplicator:(id)arg1;	// IMP=0x000000000108f027
@property(readonly, nonatomic) _Bool isSplitting;
@property(readonly, nonatomic) _Bool isTranslating;
- (_Bool)generateSplitNotificationForNewPlacement:(id)arg1;	// IMP=0x000000000108ef80
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000000108eafb
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x000000000108eab7
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x000000000108e9c3
- (void)_updatedController;	// IMP=0x000000000108e6dd
- (void)_connectController:(id)arg1;	// IMP=0x000000000108e45b
- (void)_disconnectingController:(id)arg1;	// IMP=0x000000000108e31a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

