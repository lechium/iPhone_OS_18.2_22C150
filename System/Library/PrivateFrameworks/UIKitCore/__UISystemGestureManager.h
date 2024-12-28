//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSTouchStream, FBSDisplayIdentity, NSMutableSet, NSSet, NSString, UIGestureRecognizer, _UISystemGestureWindow;
@protocol BSInvalidatable;

__attribute__((visibility("hidden")))
@interface __UISystemGestureManager : NSObject
{
    FBSDisplayIdentity *_displayIdentity;	// 8 = 0x8
    _UISystemGestureWindow *_systemGestureWindow;	// 16 = 0x10
    NSMutableSet *_recognizingGestures;	// 24 = 0x18
    NSMutableSet *_externalEdgeSwipeGestures;	// 32 = 0x20
    NSMutableSet *_internalGestures;	// 40 = 0x28
    NSMutableSet *_externalGestures;	// 48 = 0x30
    id <BSInvalidatable> _stateCaptureToken;	// 56 = 0x38
    _Bool _achievedMaximumMovement;	// 64 = 0x40
    _Bool _didSeeExclusiveTouchBegan;	// 65 = 0x41
    _Bool _didProcessPendingSwipeBegan;	// 66 = 0x42
    UIGestureRecognizer *_exclusiveTouchGesture;	// 72 = 0x48
    UIGestureRecognizer *_pendingSwipeGesture;	// 80 = 0x50
    UIGestureRecognizer *_catchEdgeSwipeFailureGesture;	// 88 = 0x58
    UIGestureRecognizer *_directTouchGesture;	// 96 = 0x60
    BKSTouchStream *_touchStream;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000c4e07f
@property(retain, nonatomic) BKSTouchStream *touchStream; // @synthesize touchStream=_touchStream;
@property(nonatomic) _Bool didProcessPendingSwipeBegan; // @synthesize didProcessPendingSwipeBegan=_didProcessPendingSwipeBegan;
@property(nonatomic) _Bool didSeeExclusiveTouchBegan; // @synthesize didSeeExclusiveTouchBegan=_didSeeExclusiveTouchBegan;
@property(nonatomic) _Bool achievedMaximumMovement; // @synthesize achievedMaximumMovement=_achievedMaximumMovement;
@property(retain, nonatomic) UIGestureRecognizer *directTouchGesture; // @synthesize directTouchGesture=_directTouchGesture;
@property(retain, nonatomic) UIGestureRecognizer *catchEdgeSwipeFailureGesture; // @synthesize catchEdgeSwipeFailureGesture=_catchEdgeSwipeFailureGesture;
@property(retain, nonatomic) UIGestureRecognizer *pendingSwipeGesture; // @synthesize pendingSwipeGesture=_pendingSwipeGesture;
@property(retain, nonatomic) UIGestureRecognizer *exclusiveTouchGesture; // @synthesize exclusiveTouchGesture=_exclusiveTouchGesture;
- (void)_handleTooMuchMovementWithLastTouchTimestamp:(double)arg1;	// IMP=0x0000000000c4dca9
- (void)_externalGestureRecognizerChanged:(id)arg1;	// IMP=0x0000000000c4d5db
- (void)_directTouchDown:(id)arg1;	// IMP=0x0000000000c4d1cc
- (void)_catchSwipeFailureGestureChanged:(id)arg1;	// IMP=0x0000000000c4d190
- (void)_pendingSwipeGestureChanged:(id)arg1;	// IMP=0x0000000000c4cf7e
- (void)_pendingSwipeGestureDidTerminate:(id)arg1;	// IMP=0x0000000000c4ceb0
- (void)_pendingSwipeGestureDidBegin:(id)arg1;	// IMP=0x0000000000c4cdd9
- (void)_failedPendingSwipe;	// IMP=0x0000000000c4cca0
- (void)_exclusiveTouchGestureChanged:(id)arg1;	// IMP=0x0000000000c4c92c
- (void)_exclusiveTouchGestureDidTerminate:(id)arg1;	// IMP=0x0000000000c4c80b
- (unsigned char)_dispatchModeForExternalGestureCompletion;	// IMP=0x0000000000c4c7e8
- (void)exclusiveTouchGestureRecognizer:(id)arg1 achievedMaximumAbsoluteAccumulatedMovement:(_Bool)arg2 timestamp:(double)arg3;	// IMP=0x0000000000c4c745
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000c4c69d
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;	// IMP=0x0000000000c4c3a8
- (id)windowForSystemGestures;	// IMP=0x0000000000c4c39a
- (void)clearTransform;	// IMP=0x0000000000c4c29b
- (void)setTransform:(struct CGAffineTransform)arg1;	// IMP=0x0000000000c4c198
- (void)removeGestureRecognizer:(id)arg1;	// IMP=0x0000000000c4c060
- (void)addGestureRecognizer:(id)arg1;	// IMP=0x0000000000c4c015
- (void)addGestureRecognizer:(id)arg1 recognitionEvent:(long long)arg2;	// IMP=0x0000000000c4bab0
@property(readonly, copy, nonatomic) NSSet *gestureRecognizers;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000c4b936
- (void)_removeInternalGestures;	// IMP=0x0000000000c4b87d
- (void)_addInternalGesturesToView:(id)arg1;	// IMP=0x0000000000c4b811
- (id)initWithDisplayIdentity:(id)arg1;	// IMP=0x0000000000c4aa90

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
