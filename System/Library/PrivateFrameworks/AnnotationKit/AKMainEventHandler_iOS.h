//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AKMainEventHandler.h"

@class AKPanGestureRecognizer, AKRotationGestureRecognizer, NSString, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface AKMainEventHandler_iOS : AKMainEventHandler
{
    UITapGestureRecognizer *_tapRecognizer;	// 8 = 0x8
    UITapGestureRecognizer *_doubleTapRecognizer;	// 16 = 0x10
    UILongPressGestureRecognizer *_pressRecognizer;	// 24 = 0x18
    AKPanGestureRecognizer *_panRecognizer;	// 32 = 0x20
    AKRotationGestureRecognizer *_rotationRecognizer;	// 40 = 0x28
    double _lastRotationAngleInRotationGesture;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000f5a84
@property double lastRotationAngleInRotationGesture; // @synthesize lastRotationAngleInRotationGesture=_lastRotationAngleInRotationGesture;
@property(retain) AKRotationGestureRecognizer *rotationRecognizer; // @synthesize rotationRecognizer=_rotationRecognizer;
@property(retain) AKPanGestureRecognizer *panRecognizer; // @synthesize panRecognizer=_panRecognizer;
@property(retain) UILongPressGestureRecognizer *pressRecognizer; // @synthesize pressRecognizer=_pressRecognizer;
@property(retain) UITapGestureRecognizer *doubleTapRecognizer; // @synthesize doubleTapRecognizer=_doubleTapRecognizer;
@property(retain) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000000f5927
- (void)applyToAllSelectedAnnotationsRotateEvent:(id)arg1 orRecognizer:(id)arg2;	// IMP=0x00000000000f5597
- (_Bool)selectionInteractionShouldBegin:(id)arg1 atPoint:(struct CGPoint)arg2 forEvent:(id)arg3 orGestureRecognizer:(id)arg4;	// IMP=0x00000000000f5492
- (_Bool)_shouldAllowTapAtLocationInWindow:(struct CGPoint)arg1;	// IMP=0x00000000000f539f
- (_Bool)_doubleTapRecognizerCanBeginAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000000f52bc
- (_Bool)_tapRecognizerCanBeginAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000000f5155
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000000f4ade
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x00000000000f4999
- (void)forwardRecognizerToMainHandleEvent:(id)arg1;	// IMP=0x00000000000f4858
- (void)teardown;	// IMP=0x00000000000f44b5
- (id)initWithController:(id)arg1;	// IMP=0x00000000000f418c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

