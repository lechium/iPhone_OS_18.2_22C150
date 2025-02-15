//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, UIGestureRecognizer, UIView;
@protocol UIDragInteractionEffect, _UIDragInteractionDriverDelegate;

@protocol _UIDragInteractionDriving <NSObject>
@property(readonly, nonatomic, getter=isActive) _Bool active;
@property(readonly, nonatomic) _Bool shouldAnimateLift;
@property(readonly, nonatomic) struct CGPoint initialLocationInWindow;
@property(readonly, copy, nonatomic) CDUnknownBlockType itemUpdater;
@property(copy, nonatomic) NSArray *allowedTouchTypes;
@property(nonatomic) _Bool automaticallyAddsFailureRelationships;
@property(nonatomic) _Bool cancellationTimerEnabled;
@property(nonatomic) double competingLongPressDelay;
@property(nonatomic) double cancellationDelay;
@property(nonatomic) _Bool allowsSimultaneousRecognitionDuringLift;
@property(nonatomic) _Bool competingLongPressOnLift;
@property(nonatomic) _Bool additionalTouchesCancelLift;
@property(nonatomic) double liftMoveHysteresis;
@property(nonatomic) double liftDelay;
@property(nonatomic, getter=isEnabled) _Bool enabled;
@property(nonatomic) __weak UIView *view;
@property(nonatomic) __weak id <_UIDragInteractionDriverDelegate> delegate;
- (_Bool)isGestureRecognizerForDragInitiation:(UIGestureRecognizer *)arg1;
- (void)cancel;

@optional
@property(readonly, nonatomic) id <UIDragInteractionEffect> interactionEffect;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<UIDragInteractionEffect>",?,R,N

@end

