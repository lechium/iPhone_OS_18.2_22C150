//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/NSObject-Protocol.h>

@class SBUISystemApertureElementTransitionContext;
@protocol SBUISystemApertureAutomaticallyInvalidatable;

@protocol SBUISystemApertureElementContext <NSObject>
@property(readonly, nonatomic, getter=isBeingRemoved) _Bool beingRemoved;
@property(readonly, nonatomic) SBUISystemApertureElementTransitionContext *transitionContext;
@property(readonly, nonatomic, getter=isFallbackContext) _Bool fallbackContext;
- (void)elementDidDismissMenu;
- (void)elementWillPresentMenu;
- (id <SBUISystemApertureAutomaticallyInvalidatable>)requestAlertingAssertion;
- (id <SBUISystemApertureAutomaticallyInvalidatable>)requestAlertingAssertionWithOptions:(unsigned long long)arg1;
- (void)requestNegativeResponseAnimation;
- (void)requestTransitionToPreferredLayoutMode;
- (void)requestTransitionToMaximumSupportedLayoutMode;
- (void)setElementNeedsUpdateWithCoordinatedAnimations:(void (^)(void))arg1;
- (void)setElementNeedsLayoutUpdateWithOptions:(unsigned long long)arg1 coordinatedAnimations:(void (^)(void))arg2;
- (void)setElementNeedsUpdate;
@end

