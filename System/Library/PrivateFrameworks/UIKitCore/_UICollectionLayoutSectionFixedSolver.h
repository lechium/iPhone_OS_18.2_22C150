//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCollectionLayoutSection, NSIndexSet, NSString, UITraitCollection, _UICollectionLayoutAuxillaryItemSolver, _UICollectionLayoutContainer, _UICollectionLayoutItemSolver, _UICollectionLayoutSectionGeometryTranslator, _UICollectionLayoutSupplementaryEnroller;
@protocol NSCollectionLayoutContainer;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutSectionFixedSolver : NSObject
{
    _Bool _shouldAdjustContentSizeForPartialLastGroupSolution;	// 8 = 0x8
    _Bool _layoutRTL;	// 9 = 0x9
    NSString *_errorDescription;	// 16 = 0x10
    _UICollectionLayoutItemSolver *_solution;	// 24 = 0x18
    _UICollectionLayoutAuxillaryItemSolver *_sectionAuxillarySolution;	// 32 = 0x20
    _UICollectionLayoutSupplementaryEnroller *_sectionSupplementaryEnroller;	// 40 = 0x28
    _UICollectionLayoutSectionGeometryTranslator *_sectionGeometryTranslator;	// 48 = 0x30
    id <NSCollectionLayoutContainer> _memoizedAuxillaryHostContainer;	// 56 = 0x38
    NSCollectionLayoutSection *_layoutSection;	// 64 = 0x40
    _UICollectionLayoutContainer *_container;	// 72 = 0x48
    _UICollectionLayoutContainer *_supplementaryContainer;	// 80 = 0x50
    UITraitCollection *_traitCollection;	// 88 = 0x58
    unsigned long long _layoutAxis;	// 96 = 0x60
    unsigned long long _containerLayoutAxis;	// 104 = 0x68
    long long _frameCount;	// 112 = 0x70
    struct CGPoint _orthogonalOffset;	// 120 = 0x78
    struct CGVector _orthogonalScrollingPrefetchingUnitVector;	// 136 = 0x88
    struct CGRect _overrideContentRectForPinning;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x00000000005bff39
@property(nonatomic) struct CGVector orthogonalScrollingPrefetchingUnitVector; // @synthesize orthogonalScrollingPrefetchingUnitVector=_orthogonalScrollingPrefetchingUnitVector;
@property(nonatomic) long long frameCount; // @synthesize frameCount=_frameCount;
@property(nonatomic) unsigned long long containerLayoutAxis; // @synthesize containerLayoutAxis=_containerLayoutAxis;
@property(nonatomic) unsigned long long layoutAxis; // @synthesize layoutAxis=_layoutAxis;
@property(nonatomic) _Bool layoutRTL; // @synthesize layoutRTL=_layoutRTL;
@property(retain, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(retain, nonatomic) _UICollectionLayoutContainer *supplementaryContainer; // @synthesize supplementaryContainer=_supplementaryContainer;
@property(retain, nonatomic) _UICollectionLayoutContainer *container; // @synthesize container=_container;
@property(retain, nonatomic) NSCollectionLayoutSection *layoutSection; // @synthesize layoutSection=_layoutSection;
@property(readonly, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property(nonatomic) struct CGPoint orthogonalOffset; // @synthesize orthogonalOffset=_orthogonalOffset;
@property(nonatomic) _Bool shouldAdjustContentSizeForPartialLastGroupSolution; // @synthesize shouldAdjustContentSizeForPartialLastGroupSolution=_shouldAdjustContentSizeForPartialLastGroupSolution;
- (double)_dimensionForRootGroupAlongAxis:(unsigned long long)arg1;	// IMP=0x00000000005bfd0e
- (double)auxillaryHostPaddingBeforeBoundarySupplementaries;	// IMP=0x00000000005bfbf6
- (id)auxillaryHostTraitCollection;	// IMP=0x00000000005bfbe4
- (id)auxillaryHostPreferredSizes;	// IMP=0x00000000005bfbdc
- (id)auxillaryHostSupplementaryEnroller;	// IMP=0x00000000005bfbc2
- (long long)auxillaryHostAuxillaryKind;	// IMP=0x00000000005bfbb7
- (unsigned long long)auxillaryHostLayoutAxis;	// IMP=0x00000000005bfba5
- (_Bool)auxillaryHostShouldLayoutRTL;	// IMP=0x00000000005bfb93
- (id)auxillaryHostAuxillaryItems;	// IMP=0x00000000005bfb43
- (id)auxillaryHostContainer;	// IMP=0x00000000005bf9b4
- (_Bool)auxillaryHostWantsOverlapAdjustmentForMatchingAlignmentsOnly;	// IMP=0x00000000005bf988
- (struct CGRect)auxillaryHostPinningRect;	// IMP=0x00000000005bf8e4
- (struct CGSize)auxillaryHostContentSize;	// IMP=0x00000000005bf7d5
- (struct _NSRange)preferredSizeGroupingRangeForItemAtIndex:(long long)arg1;	// IMP=0x00000000005bf436
@property(readonly, nonatomic) unsigned long long containerSizeDependentAxes;
- (id)sectionSupplementaryFrameWithKind:(id)arg1 index:(long long)arg2;	// IMP=0x00000000005bf250
- (long long)sectionSupplementaryKindIndexForEnrollmentIdentifier:(id)arg1;	// IMP=0x00000000005bf1a1
- (id)unpinnedSectionSupplementaryFrameWithKind:(id)arg1 forIndex:(long long)arg2;	// IMP=0x00000000005bf061
- (id)unpinnedSectionSupplementaryFrameForIndex:(long long)arg1;	// IMP=0x00000000005bee6b
- (id)sectionSupplementaryFrameForIndex:(long long)arg1;	// IMP=0x00000000005bec91
- (id)supplementaryFrameWithKind:(id)arg1 index:(long long)arg2;	// IMP=0x00000000005be9a5
- (id)frameForIndex:(long long)arg1;	// IMP=0x00000000005be8be
@property(readonly, nonatomic) struct CGRect primaryContentFrame;
@property(readonly, nonatomic) struct CGRect contentFrameIncludingAuxiliaries;
@property(readonly, nonatomic) NSIndexSet *pinnedSupplementaryIndexes;
- (id)visualDescription;	// IMP=0x00000000005be49c
- (id)queryFramesIntersectingRect:(struct CGRect)arg1 frameOffset:(struct CGPoint)arg2;	// IMP=0x00000000005be492
- (id)queryFramesIntersectingRect:(struct CGRect)arg1;	// IMP=0x00000000005bdee5
- (void)updatePinnedSupplementaryItemsWithVisibleBounds:(struct CGRect)arg1 overrideContentRectForPinning:(struct CGRect)arg2;	// IMP=0x00000000005bde82
- (void)updatePinnedSupplementaryItemsWithVisibleBounds:(struct CGRect)arg1;	// IMP=0x00000000005bddf1
- (id)resolveWithParameters:(id)arg1 preferredSizes:(id)arg2;	// IMP=0x00000000005bdd63
- (void)solveForContainer:(id)arg1 supplementaryContainer:(id)arg2 traitCollection:(id)arg3 layoutAxis:(unsigned long long)arg4 frameCount:(long long)arg5 preferredSizes:(id)arg6 layoutRTL:(_Bool)arg7;	// IMP=0x00000000005bd600
- (void)solveForContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(unsigned long long)arg3 frameCount:(long long)arg4 preferredSizes:(id)arg5;	// IMP=0x00000000005bd5d4
- (void)solveForContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(unsigned long long)arg3 frameCount:(long long)arg4;	// IMP=0x00000000005bd5a9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

