//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewImplicitlyAnimating-Protocol.h>
#import <UIKitCore/_UIViewInProcessProgressAnimating-Protocol.h>

@class UIViewFloatAnimatableProperty;
@protocol UIViewSpringAnimationBehaviorDescribing;

@protocol _UIViewHybridPropertyAnimator <UIViewImplicitlyAnimating, _UIViewInProcessProgressAnimating>
@property(readonly, nonatomic) UIViewFloatAnimatableProperty *progressValue;
- (void)continueAnimationWithSpring:(id <UIViewSpringAnimationBehaviorDescribing>)arg1;
@end
