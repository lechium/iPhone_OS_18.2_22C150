//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVKit/UIInteraction-Protocol.h>

@class UIGestureRecognizer, UIPanGestureRecognizer;
@protocol AVTransitionDriver, AVTransitionDriverDelegate;

@protocol AVTransitionDriver <UIInteraction>
@property(nonatomic) __weak UIPanGestureRecognizer *contentTransitioningViewGestureRecognizer;
@property(readonly, nonatomic) _Bool lastNonZeroVelocityWasDownward;
@property(readonly, nonatomic) double pinchVelocity;
@property(readonly, nonatomic) double pinchScale;
@property(readonly, nonatomic) double rotationVelocity;
@property(readonly, nonatomic) double rotation;
@property(readonly, nonatomic) long long transitionInteraction;
@property(nonatomic) __weak id <AVTransitionDriverDelegate> transitionDriverDelegate;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
- (_Bool)transitionDriver:(id <AVTransitionDriver>)arg1 shouldRequireFailureOfGestureRecognizer:(UIGestureRecognizer *)arg2;
- (double)angleOfVelocityInWindow;
- (struct CGPoint)velocityInWindow;
- (struct CGPoint)translationInWindow;
- (struct CGPoint)locationInWindow;
@end

