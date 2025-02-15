//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIGestureRecognizer, UIView, _UISecondaryClickDriverGestureRecognizer;
@protocol _UIClickInteractionDriverDelegate;

__attribute__((visibility("hidden")))
@interface _UISecondaryClickClickInteractionDriver : NSObject
{
    unsigned long long _currentState;	// 8 = 0x8
    _Bool _cancelsTouchesInView;	// 16 = 0x10
    _Bool _clicksUpAutomaticallyAfterTimeout;	// 17 = 0x11
    id <_UIClickInteractionDriverDelegate> _delegate;	// 24 = 0x18
    UIView *_view;	// 32 = 0x20
    double _allowableMovement;	// 40 = 0x28
    _UISecondaryClickDriverGestureRecognizer *_gestureRecognizer;	// 48 = 0x30
}

+ (_Bool)prefersCancelsTouchesInView;	// IMP=0x001000000150ea70
+ (_Bool)requiresForceCapability;	// IMP=0x001000000150ea68
- (void).cxx_destruct;	// IMP=0x000000000150f3c4
@property(retain, nonatomic) _UISecondaryClickDriverGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(readonly, nonatomic) _Bool clicksUpAutomaticallyAfterTimeout; // @synthesize clicksUpAutomaticallyAfterTimeout=_clicksUpAutomaticallyAfterTimeout;
@property(nonatomic) _Bool cancelsTouchesInView; // @synthesize cancelsTouchesInView=_cancelsTouchesInView;
@property(nonatomic) double allowableMovement; // @synthesize allowableMovement=_allowableMovement;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(nonatomic) __weak id <_UIClickInteractionDriverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_attemptSecondaryClick;	// IMP=0x000000000150f179
- (void)_handleGestureRecognizer:(id)arg1;	// IMP=0x000000000150f0e0
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;	// IMP=0x000000000150efdd
- (_Bool)_gestureRecognizer:(id)arg1 canCancelGestureRecognizer:(id)arg2;	// IMP=0x000000000150efd5
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x000000000150efcd
- (void)_gestureRecognizerFailed:(id)arg1;	// IMP=0x000000000150efac
@property(nonatomic) unsigned long long driverStyle;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,N

@property(readonly, nonatomic) unsigned long long inputPrecision;
@property(readonly, nonatomic) _Bool allowsFeedback;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

- (struct CGPoint)locationInCoordinateSpace:(id)arg1;	// IMP=0x000000000150ec3d
- (void)cancelInteraction;	// IMP=0x000000000150ebb5
@property(readonly, nonatomic) _Bool isCurrentlyAcceleratedByForce;
@property(readonly, nonatomic) UIGestureRecognizer *primaryGestureRecognizer;
@property(readonly, nonatomic) _Bool hasExceededAllowableMovement;
@property(readonly, nonatomic) double touchDuration;
@property(readonly, nonatomic) double maximumEffectProgress;
- (id)init;	// IMP=0x000000000150e9ce

// Remaining properties
@property(nonatomic) unsigned long long behavior;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

