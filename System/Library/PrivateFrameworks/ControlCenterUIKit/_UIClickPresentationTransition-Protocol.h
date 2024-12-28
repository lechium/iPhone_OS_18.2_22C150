//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ControlCenterUIKit/NSObject-Protocol.h>

@class UITargetedPreview, UIView, UIViewPropertyAnimator;

@protocol _UIClickPresentationTransition <NSObject>
- (void)transitionDidEnd:(_Bool)arg1;
- (void)performTransitionFromView:(UIView *)arg1 toView:(UIView *)arg2 containerView:(UIView *)arg3;

@optional
@property(readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIViewPropertyAnimator",?,R,N

@property(copy, nonatomic) UITargetedPreview *sourcePreview;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UITargetedPreview",?,C,N

- (void)transitionWillReverse;
- (void)prepareTransitionFromView:(UIView *)arg1 toView:(UIView *)arg2 containerView:(UIView *)arg3;
@end
