//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, _FEFocusEnvironmentContainerTuple;
@protocol _FEFocusEnvironment, _FEFocusItemContainer;

__attribute__((visibility("hidden")))
@interface _FEFocusRegionContainerProxy : NSObject
{
    _Bool _allowsLazyLoading;	// 8 = 0x8
    _Bool _shouldCreateRegionForOwningItem;	// 9 = 0x9
    _Bool _shouldCreateRegionForGuideBehavior;	// 10 = 0xa
    _FEFocusEnvironmentContainerTuple *_environmentContainer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000252b
@property(retain, nonatomic) _FEFocusEnvironmentContainerTuple *environmentContainer; // @synthesize environmentContainer=_environmentContainer;
@property(nonatomic) _Bool shouldCreateRegionForGuideBehavior; // @synthesize shouldCreateRegionForGuideBehavior=_shouldCreateRegionForGuideBehavior;
@property(nonatomic) _Bool shouldCreateRegionForOwningItem; // @synthesize shouldCreateRegionForOwningItem=_shouldCreateRegionForOwningItem;
@property(nonatomic) _Bool allowsLazyLoading; // @synthesize allowsLazyLoading=_allowsLazyLoading;
- (void)_searchForFocusRegionsInContext:(id)arg1;	// IMP=0x0000000000002427
- (id)_preferredFocusRegionCoordinateSpace;	// IMP=0x000000000000236f
@property(readonly, nonatomic, getter=_isEligibleForFocusOcclusion) _Bool eligibleForFocusOcclusion;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N,G_isEligibleForFocusOcclusion

@property(readonly, nonatomic, getter=_isEligibleForFocusInteraction) _Bool eligibleForFocusInteraction;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N,G_isEligibleForFocusInteraction

- (struct CGRect)_clippingRectInCoordinateSpace:(id)arg1;	// IMP=0x0000000000002254
@property(readonly, nonatomic) id <_FEFocusItemContainer> _focusItemContainer;
@property(readonly, nonatomic) __weak id <_FEFocusEnvironment> _parentFocusEnvironment;
- (void)updateFocusIfNeeded;	// IMP=0x0000000000002190
- (void)setNeedsFocusUpdate;	// IMP=0x0000000000002120
- (void)_didUpdateFocusInContext:(id)arg1;	// IMP=0x000000000000208f
- (_Bool)_shouldUpdateFocusInContext:(id)arg1;	// IMP=0x0000000000002010
- (id)preferredFocusEnvironments;	// IMP=0x0000000000001fc9
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000001d94
- (id)_itemContainer;	// IMP=0x0000000000001d7e
@property(readonly, nonatomic) id <_FEFocusEnvironment> owningEnvironment;
- (id)_focusSystem;	// IMP=0x0000000000001d4c
- (_Bool)_ui_isUIFocusRegionContainerProxy;	// IMP=0x0000000000001d44
- (id)initWithEnvironmentContainer:(id)arg1;	// IMP=0x0000000000001c52
- (id)initWithOwningEnvironment:(id)arg1 itemContainer:(id)arg2;	// IMP=0x0000000000001bf8

// Remaining properties
@property(nonatomic) _Bool _areChildrenFocused;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(readonly, copy, nonatomic) NSString *_focusGroupIdentifier;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

@property(readonly, copy, nonatomic) NSArray *_focusLinearMovementSequence;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,C,N

@property(readonly, nonatomic) long long _focusPreferredMovementStyle;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,R,N

@property(readonly, copy, nonatomic) NSArray *_preferredFocusEnvironments;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,C,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, nonatomic, getter=_isFocusDirectionFlippedHorizontally) _Bool focusDirectionFlippedHorizontally;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N,G_isFocusDirectionFlippedHorizontally

@property(readonly) Class superclass;

@end

