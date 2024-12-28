//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UICollectionView, UICollectionViewLayoutAttributes, UIFocusEffect, UIScrollView, UIView;
@protocol UICoordinateSpace, UIFocusEnvironment, UIFocusItemContainer;

__attribute__((visibility("hidden")))
@interface _UICollectionViewCellPromiseRegion : NSObject
{
    UICollectionView *_collectionView;	// 8 = 0x8
    UIScrollView *_parentScrollView;	// 16 = 0x10
    UICollectionViewLayoutAttributes *_layoutAttributes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000006f0e08
@property(retain, nonatomic) UICollectionViewLayoutAttributes *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
@property(nonatomic) __weak UIScrollView *parentScrollView; // @synthesize parentScrollView=_parentScrollView;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)_searchForFocusRegionsInContext:(id)arg1;	// IMP=0x00000000006f0d36
- (id)createPromiseRegion;	// IMP=0x00000000006f0b76
- (id)_preferredFocusRegionCoordinateSpace;	// IMP=0x00000000006f0afc
- (_Bool)_isLazyFocusItemContainer;	// IMP=0x00000000006f0af4
@property(readonly, nonatomic) id <UICoordinateSpace> coordinateSpace;
- (id)focusItemsInRect:(struct CGRect)arg1;	// IMP=0x00000000006f0a0c
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000006f0a06
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x00000000006f09fe
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly, nonatomic) id <UIFocusItemContainer> focusItemContainer;
- (void)updateFocusIfNeeded;	// IMP=0x00000000006f09a1
- (void)setNeedsFocusUpdate;	// IMP=0x00000000006f094b
@property(readonly, nonatomic, getter=_isEligibleForFocusInteraction) _Bool eligibleForFocusInteraction;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N,G_isEligibleForFocusInteraction

@property(readonly, nonatomic) struct CGRect frame;
@property(readonly, nonatomic) _Bool canBecomeFocused;
@property(readonly, nonatomic) __weak id <UIFocusEnvironment> parentFocusEnvironment;
- (id)_focusDebugOverlayParentView;	// IMP=0x00000000006f08c5
- (id)_focusRegionGuides;	// IMP=0x00000000006f08bd
- (id)_focusRegionView;	// IMP=0x00000000006f08b5
- (_Bool)_isTransparentFocusRegion;	// IMP=0x00000000006f08ad
- (id)_fulfillPromisedFocusRegion;	// IMP=0x00000000006f084e
- (_Bool)_isPromiseFocusRegion;	// IMP=0x00000000006f0846
- (id)_childFocusRegionsInRect:(struct CGRect)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x00000000006f083e
- (_Bool)_legacy_isEligibleForFocusInteraction;	// IMP=0x00000000006f082c
- (struct CGRect)_focusRegionFrame;	// IMP=0x00000000006f0762
- (id)_focusRegionFocusSystem;	// IMP=0x00000000006f0712
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, nonatomic, getter=_isEligibleForFocusOcclusion) _Bool eligibleForFocusOcclusion;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N,G_isEligibleForFocusOcclusion

@property(readonly, nonatomic, getter=_isFocusDirectionFlippedHorizontally) _Bool focusDirectionFlippedHorizontally;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N,G_isFocusDirectionFlippedHorizontally

@property(readonly, copy, nonatomic) UIFocusEffect *focusEffect;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIFocusEffect",?,R,C,N

@property(readonly, copy, nonatomic) NSString *focusGroupIdentifier;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

@property(readonly, nonatomic) long long focusGroupPriority;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,R,N

@property(readonly, nonatomic) long long focusItemDeferralMode;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,R,N

@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isTransparentFocusItem;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, copy, nonatomic, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,C,N,G_linearFocusMovementSequences

@property(readonly, nonatomic, getter=_preferredFocusMovementStyle) long long preferredFocusMovementStyle;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,R,N,G_preferredFocusMovementStyle

@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIView",?,R,W,N

@property(readonly) Class superclass;

@end
