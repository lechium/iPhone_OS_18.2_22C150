//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FocusEngine/_FEFocusEnvironment-Protocol.h>

@class NSArray;
@protocol _FECoordinateSpace, _FEFocusEnvironment;

@protocol _FEFocusEnvironmentPrivate <_FEFocusEnvironment>

@optional
@property(readonly, copy, nonatomic) NSArray *_focusLinearMovementSequence;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,C,N

@property(readonly, nonatomic) long long _focusPreferredMovementStyle;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,R,N

@property(readonly, nonatomic, getter=_isEligibleForFocusOcclusion) _Bool eligibleForFocusOcclusion;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N,G_isEligibleForFocusOcclusion

@property(readonly, nonatomic, getter=_isEligibleForFocusInteraction) _Bool eligibleForFocusInteraction;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N,G_isEligibleForFocusInteraction

@property(readonly, nonatomic, getter=_isFocusDirectionFlippedHorizontally) _Bool focusDirectionFlippedHorizontally;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N,G_isFocusDirectionFlippedHorizontally

@property(nonatomic) _Bool _areChildrenFocused;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

- (struct CGRect)_clippingRectInCoordinateSpace:(id <_FECoordinateSpace>)arg1;
- (id <_FEFocusEnvironment>)_focusFallbackScroller;
- (long long)_focusRotaryMovementAxis;
- (void)_setNeedsNonDeferredFocusUpdate;
- (_Bool)_focusAllowsLeavingWithHeading:(unsigned long long)arg1;
@end
