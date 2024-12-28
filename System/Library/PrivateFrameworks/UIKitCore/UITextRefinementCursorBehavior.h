//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _UIKeyboardTextSelectionController;

__attribute__((visibility("hidden")))
@interface UITextRefinementCursorBehavior : NSObject
{
    _UIKeyboardTextSelectionController *_activeSelectionController;	// 8 = 0x8
    id _grabberHandleSuppressionAssertion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000001a77b4f
- (void)textLoupeInteraction:(id)arg1 gestureChangedWithState:(long long)arg2 location:(CDUnknownBlockType)arg3 translation:(CDUnknownBlockType)arg4 velocity:(CDUnknownBlockType)arg5 modifierFlags:(long long)arg6 shouldCancel:(_Bool *)arg7;	// IMP=0x0000000001a7766a
- (struct CGPoint)velocityInView:(id)arg1 forLoupeGesture:(id)arg2;	// IMP=0x0000000001a77655
- (struct CGPoint)translationInView:(id)arg1 forLoupeGesture:(id)arg2;	// IMP=0x0000000001a77640
- (struct CGPoint)startPointForLoupeGesture:(id)arg1;	// IMP=0x0000000001a7762b
- (_Bool)triggeredByLongPressGesture:(id)arg1;	// IMP=0x0000000001a77623
- (_Bool)usesTouchAlignment;	// IMP=0x0000000001a7761b
- (_Bool)loupeGestureRecognizerShouldBegin:(id)arg1 forTextLoupeInteraction:(id)arg2;	// IMP=0x0000000001a77613
- (_Bool)shouldAllowEnforcedTouchTypeForTouch:(id)arg1 forGestureRecognizer:(id)arg2;	// IMP=0x0000000001a775fe
- (void)configureLoupeGestureRecognizer:(id)arg1 forTextLoupeInteraction:(id)arg2;	// IMP=0x0000000001a77584
- (void)configureGestureExclusionRequirementsForTextLoupeInteraction:(id)arg1;	// IMP=0x0000000001a774be
- (void)adjustVariableDelaySettingsForLoupeInteraction:(id)arg1;	// IMP=0x0000000001a774b8
- (Class)gestureRecognizerClassForLoupeInteraction:(id)arg1;	// IMP=0x0000000001a774a7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
