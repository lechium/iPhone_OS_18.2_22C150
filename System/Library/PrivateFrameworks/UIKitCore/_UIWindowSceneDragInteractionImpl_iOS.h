//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIPanGestureRecognizer, UIView, _UIClientToHostRelationshipGestureInteraction, _UIRelationshipGestureRecognizer;

__attribute__((visibility("hidden")))
@interface _UIWindowSceneDragInteractionImpl_iOS : NSObject
{
    UIView *_view;	// 8 = 0x8
    _UIClientToHostRelationshipGestureInteraction *_clientRelationshipInteraction;	// 16 = 0x10
    UIPanGestureRecognizer *_directTouchPanGestureRecognizer;	// 24 = 0x18
    UIPanGestureRecognizer *_pointerTouchPanGestureRecognizer;	// 32 = 0x20
    _UIRelationshipGestureRecognizer *_failureRelationshipGestureRecognizer;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000009d1292
@property(retain, nonatomic) _UIRelationshipGestureRecognizer *failureRelationshipGestureRecognizer; // @synthesize failureRelationshipGestureRecognizer=_failureRelationshipGestureRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *pointerTouchPanGestureRecognizer; // @synthesize pointerTouchPanGestureRecognizer=_pointerTouchPanGestureRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *directTouchPanGestureRecognizer; // @synthesize directTouchPanGestureRecognizer=_directTouchPanGestureRecognizer;
@property(retain, nonatomic) _UIClientToHostRelationshipGestureInteraction *clientRelationshipInteraction; // @synthesize clientRelationshipInteraction=_clientRelationshipInteraction;
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
- (id)gestureForFailureRelationships;	// IMP=0x00000000009d1202
- (void)willMoveToView:(id)arg1;	// IMP=0x00000000009d1183
- (void)didMoveToView:(id)arg1;	// IMP=0x00000000009d10f2
- (void)_didRecognizePanGesture:(id)arg1;	// IMP=0x00000000009d0efb
- (id)_makeDraggingPanGestureRecognizer;	// IMP=0x00000000009d0e92
- (id)init;	// IMP=0x00000000009d0d4d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
