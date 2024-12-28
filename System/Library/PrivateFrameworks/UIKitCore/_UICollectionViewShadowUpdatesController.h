//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, UICollectionView, _UIDataSourceSnapshotter, _UIDataSourceUpdateMap;

__attribute__((visibility("hidden")))
@interface _UICollectionViewShadowUpdatesController : NSObject
{
    UICollectionView *_collectionView;	// 8 = 0x8
    _UIDataSourceSnapshotter *_initialSnapshot;	// 16 = 0x10
    _UIDataSourceUpdateMap *_updateMap;	// 24 = 0x18
    NSMutableArray *__shadowUpdates;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000757eb1
@property(retain, nonatomic) NSMutableArray *_shadowUpdates; // @synthesize _shadowUpdates=__shadowUpdates;
@property(retain, nonatomic) _UIDataSourceUpdateMap *updateMap; // @synthesize updateMap=_updateMap;
@property(retain, nonatomic) _UIDataSourceSnapshotter *initialSnapshot; // @synthesize initialSnapshot=_initialSnapshot;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)_pruneAndRebaseShadowUpdatesForShadowInsertWithIdentifier:(id)arg1;	// IMP=0x0000000000757d3b
- (id)_findInsertShadowUpdateForFinalIndexPath:(id)arg1;	// IMP=0x0000000000757aba
- (id)_findShadowUpdateForIdentifier:(id)arg1 inShadowUpdates:(id)arg2;	// IMP=0x00000000007578db
- (void)_updateCellIfNeeded:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000007578d5
- (id)_shadowUpdateReuseIdentifierForItemItemAtIndexPath:(id)arg1;	// IMP=0x00000000007578c8
- (id)_supplementaryIndexPathBeforeShadowUpdates:(id)arg1;	// IMP=0x00000000007578b2
- (id)_indexPathsBeforeShadowUpdates:(id)arg1;	// IMP=0x0000000000757701
- (long long)sectionIndexAfterShadowUpdates:(long long)arg1 allowingAppendingInserts:(_Bool)arg2;	// IMP=0x00000000007575cd
- (long long)sectionIndexAfterShadowUpdates:(long long)arg1;	// IMP=0x00000000007575b9
- (long long)sectionIndexBeforeShadowUpdates:(long long)arg1;	// IMP=0x000000000075754a
- (id)indexPathAfterShadowUpdates:(id)arg1 allowingAppendingInserts:(_Bool)arg2;	// IMP=0x00000000007573c6
- (id)indexPathsAfterShadowUpdates:(id)arg1;	// IMP=0x00000000007571b1
- (id)indexPathAfterShadowUpdates:(id)arg1;	// IMP=0x000000000075719d
- (id)indexPathsBeforeShadowUpdates:(id)arg1;	// IMP=0x0000000000756f88
- (id)indexPathBeforeShadowUpdates:(id)arg1;	// IMP=0x0000000000756eee
- (id)_coalesceUpdatesIfPossible:(id)arg1;	// IMP=0x0000000000756c40
- (id)_rebasedUpdateMapForUpdates:(id)arg1;	// IMP=0x0000000000756ac2
- (void)_regenerateUpdateMap;	// IMP=0x00000000007569f5
- (id)_rebasedShadowUpdatesForUpdate:(id)arg1 initialSnapshot:(id)arg2 shadowUpdates:(id)arg3;	// IMP=0x000000000075627a
- (_Bool)_shadowUpdatesAreSimpleInsertWithOptionalMoveSequenceForIndexPath:(id)arg1;	// IMP=0x0000000000756080
- (_Bool)_shouldPerformTranslationForDelegateBasedFlowLayoutSizing;	// IMP=0x0000000000756078
- (_Bool)collectionView:(id)arg1 shouldSpringLoadItemAtIndexPath:(id)arg2 withContext:(id)arg3;	// IMP=0x0000000000755f7b
- (_Bool)_collectionView:(id)arg1 shouldSpringLoadItemAtIndexPath:(id)arg2 withContext:(id)arg3;	// IMP=0x0000000000755e7e
- (_Bool)_collectionView:(id)arg1 canHandleDropSesson:(id)arg2;	// IMP=0x0000000000755dc8
- (id)_collectionView:(id)arg1 dragDestinationTargetIndexPathForProposedIndexPath:(id)arg2 currentIndexPath:(id)arg3 dropSession:(id)arg4;	// IMP=0x0000000000755c8c
- (id)_collectionView:(id)arg1 liftingPreviewParametersForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000755bc0
- (long long)_collectionView:(id)arg1 dataOwnerForDropSession:(id)arg2 withDestinationIndexPath:(id)arg3;	// IMP=0x0000000000755ac3
- (id)collectionView:(id)arg1 dropPreviewParametersForItemAtIndexPath:(id)arg2;	// IMP=0x00000000007559e3
- (void)collectionView:(id)arg1 dropSessionDidEnd:(id)arg2;	// IMP=0x0000000000755932
- (void)collectionView:(id)arg1 dropSessionDidExit:(id)arg2;	// IMP=0x0000000000755881
- (id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;	// IMP=0x0000000000755745
- (void)collectionView:(id)arg1 dropSessionDidEnter:(id)arg2;	// IMP=0x0000000000755694
- (_Bool)collectionView:(id)arg1 canHandleDropSession:(id)arg2;	// IMP=0x00000000007555de
- (void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;	// IMP=0x000000000075552d
- (id)_collectionView:(id)arg1 dragSessionPropertiesForSession:(id)arg2;	// IMP=0x0000000000755469
- (_Bool)_collectionView:(id)arg1 dragSessionSupportsSystemDrag:(id)arg2;	// IMP=0x00000000007553b3
- (long long)_collectionView:(id)arg1 dataOwnerForDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000007552b6
- (_Bool)_collectionView:(id)arg1 prefersFullSizePreviewsForDragSession:(id)arg2;	// IMP=0x0000000000755200
- (_Bool)collectionView:(id)arg1 dragSessionIsRestrictedToDraggingApplication:(id)arg2;	// IMP=0x000000000075514a
- (_Bool)collectionView:(id)arg1 dragSessionAllowsMoveOperation:(id)arg2;	// IMP=0x0000000000755094
- (void)collectionView:(id)arg1 dragSessionDidEnd:(id)arg2;	// IMP=0x0000000000754fe3
- (void)collectionView:(id)arg1 dragSessionWillBegin:(id)arg2;	// IMP=0x0000000000754f32
- (id)collectionView:(id)arg1 dragPreviewParametersForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000754e66
- (id)collectionView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint)arg4;	// IMP=0x0000000000754d5b
- (id)collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000000754c67
- (id)collectionView:(id)arg1 tableLayout:(id)arg2 trailingSwipeActionsForRowAtIndexPath:(id)arg3;	// IMP=0x0000000000754b5d
- (id)collectionView:(id)arg1 tableLayout:(id)arg2 leadingSwipeActionsForRowAtIndexPath:(id)arg3;	// IMP=0x0000000000754a53
- (long long)collectionView:(id)arg1 tableLayout:(id)arg2 indentationLevelForRowAtIndexPath:(id)arg3;	// IMP=0x0000000000754955
- (void)collectionView:(id)arg1 tableLayout:(id)arg2 didEndEditingRowAtIndexPath:(id)arg3;	// IMP=0x0000000000754863
- (void)collectionView:(id)arg1 tableLayout:(id)arg2 willBeginEditingRowAtIndexPath:(id)arg3;	// IMP=0x0000000000754771
- (_Bool)collectionView:(id)arg1 tableLayout:(id)arg2 shouldIndentWhileEditingRowAtIndexPath:(id)arg3;	// IMP=0x0000000000754673
- (id)collectionView:(id)arg1 tableLayout:(id)arg2 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg3;	// IMP=0x0000000000754569
- (id)collectionView:(id)arg1 tableLayout:(id)arg2 leadingSwipeActionsConfigurationForRowAtIndexPath:(id)arg3;	// IMP=0x000000000075445f
- (void)collectionView:(id)arg1 tableLayout:(id)arg2 commitEditingStyle:(long long)arg3 forRowAtIndexPath:(id)arg4;	// IMP=0x0000000000754360
- (long long)collectionView:(id)arg1 tableLayout:(id)arg2 editingStyleForRowAtIndexPath:(id)arg3;	// IMP=0x0000000000754262
- (void)collectionView:(id)arg1 tableLayout:(id)arg2 accessoryButtonTappedForRowWithIndexPath:(id)arg3;	// IMP=0x0000000000754170
- (double)collectionView:(id)arg1 heightForFooterViewInTableLayout:(id)arg2;	// IMP=0x00000000007540af
- (double)collectionView:(id)arg1 heightForHeaderViewInTableLayout:(id)arg2;	// IMP=0x0000000000753fee
- (double)collectionView:(id)arg1 tableLayout:(id)arg2 heightForFooterInSection:(long long)arg3;	// IMP=0x0000000000753eeb
- (double)collectionView:(id)arg1 tableLayout:(id)arg2 heightForHeaderInSection:(long long)arg3;	// IMP=0x0000000000753de8
- (double)collectionView:(id)arg1 tableLayout:(id)arg2 estimatedHeightForFooterInSection:(long long)arg3;	// IMP=0x0000000000753cfd
- (double)collectionView:(id)arg1 tableLayout:(id)arg2 estimatedHeightForHeaderInSection:(long long)arg3;	// IMP=0x0000000000753c12
- (double)collectionView:(id)arg1 tableLayout:(id)arg2 estimatedHeightForRowAtIndexPath:(id)arg3;	// IMP=0x0000000000753b1c
- (double)collectionView:(id)arg1 tableLayout:(id)arg2 heightForRowAtIndexPath:(id)arg3;	// IMP=0x000000000075391f
- (id)_collectionView:(id)arg1 layout:(id)arg2 sizesForItemsInSection:(long long)arg3;	// IMP=0x000000000075381c
- (id)_collectionView:(id)arg1 layout:(id)arg2 flowLayoutRowAlignmentOptionsForSection:(long long)arg3;	// IMP=0x0000000000753719
- (id)_collectionView:(id)arg1 flowLayoutRowAlignmentOptionsForSection:(long long)arg2;	// IMP=0x0000000000753631
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;	// IMP=0x0000000000753516
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x00000000007533fb
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x0000000000753300
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x0000000000753205
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x00000000007530e1
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000000752de4
- (void)_collectionView:(id)arg1 dropSessionDidEnd:(id)arg2;	// IMP=0x0000000000752d33
- (void)_collectionView:(id)arg1 dropSessionDidExit:(id)arg2;	// IMP=0x0000000000752c82
- (id)_collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;	// IMP=0x0000000000752b8e
- (void)_collectionView:(id)arg1 dropSessionDidEnter:(id)arg2;	// IMP=0x0000000000752add
- (_Bool)collectionView:(id)arg1 canHandleDropSesson:(id)arg2;	// IMP=0x0000000000752a27
- (void)_collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;	// IMP=0x0000000000752976
- (void)_collectionView:(id)arg1 dragSessionDidEnd:(id)arg2;	// IMP=0x00000000007528c5
- (void)_collectionView:(id)arg1 dragSessionWillBegin:(id)arg2;	// IMP=0x0000000000752814
- (id)_collectionView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint)arg4;	// IMP=0x00000000007526f3
- (id)_collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000007525e6
- (void)collectionView:(id)arg1 cancelPrefetchingForItemsAtIndexPaths:(id)arg2;	// IMP=0x00000000007523b6
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;	// IMP=0x0000000000752186
- (id)_dci_collectionView:(id)arg1 contextMenuConfiguration:(id)arg2 previewForDismissingToItemAtIndexPath:(id)arg3;	// IMP=0x00000000007520d6
- (id)_dci_collectionView:(id)arg1 contextMenuConfiguration:(id)arg2 previewForHighlightingItemAtIndexPath:(id)arg3;	// IMP=0x0000000000752026
- (id)_dci_collectionView:(id)arg1 contextMenuConfigurationForSelectedItemsAtIndexPaths:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x0000000000751f76
- (id)_dci_collectionView:(id)arg1 contextMenuConfigurationForItemsAtIndexPaths:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x0000000000751ec6
- (id)_collectionView:(id)arg1 accessoriesForContextMenuWithConfiguration:(id)arg2 layoutAnchor:(CDStruct_17a0fc55)arg3;	// IMP=0x0000000000751e10
- (id)_collectionView:(id)arg1 styleForContextMenuWithConfiguration:(id)arg2;	// IMP=0x0000000000751d77
- (id)_collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;	// IMP=0x0000000000751c5d
- (id)_collectionView:(id)arg1 indexPathOfReferenceItemToPreserveContentOffsetWithProposedReference:(id)arg2;	// IMP=0x0000000000751b36
- (void)_collectionView:(id)arg1 orthogonalScrollViewDidScroll:(id)arg2 section:(long long)arg3;	// IMP=0x0000000000751a9a
- (_Bool)_collectionView:(id)arg1 shouldApplyTransitionContentOffset:(struct CGPoint)arg2 contentSize:(struct CGSize)arg3;	// IMP=0x00000000007519da
- (struct CGPoint)_collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint)arg2;	// IMP=0x0000000000751924
- (id)_indexPathOfReferenceItemForLayoutTransitionInCollectionView:(id)arg1;	// IMP=0x0000000000751883
- (id)_collectionView:(id)arg1 sceneActivationConfigurationForItemAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x00000000007517d3
- (id)collectionView:(id)arg1 sceneActivationConfigurationForItemAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x0000000000751723
- (void)collectionView:(id)arg1 performPrimaryActionForItemAtIndexPath:(id)arg2;	// IMP=0x000000000075168b
- (_Bool)collectionView:(id)arg1 canPerformPrimaryActionForItemAtIndexPath:(id)arg2;	// IMP=0x00000000007515e9
- (void)collectionView:(id)arg1 willEndContextMenuInteractionWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x000000000075154c
- (void)collectionView:(id)arg1 willDisplayContextMenuWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x00000000007514af
- (void)collectionView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x0000000000751412
- (id)collectionView:(id)arg1 previewForDismissingContextMenuWithConfiguration:(id)arg2;	// IMP=0x0000000000751379
- (id)collectionView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2;	// IMP=0x00000000007512e0
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x0000000000751230
- (id)collectionView:(id)arg1 contextMenuConfiguration:(id)arg2 dismissalPreviewForItemAtIndexPath:(id)arg3;	// IMP=0x0000000000751180
- (id)collectionView:(id)arg1 contextMenuConfiguration:(id)arg2 highlightPreviewForItemAtIndexPath:(id)arg3;	// IMP=0x00000000007510d0
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemsAtIndexPaths:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x0000000000751020
- (void)_collectionView:(id)arg1 horizontalIndexTitleBar:(id)arg2 selectedEntry:(id)arg3;	// IMP=0x0000000000750f5b
- (_Bool)collectionView:(id)arg1 shouldUpdateFocusFromItemAtIndexPath:(id)arg2 toView:(id)arg3 heading:(unsigned long long)arg4;	// IMP=0x0000000000750e71
- (void)collectionView:(id)arg1 didUnfocusItemAtIndexPath:(id)arg2;	// IMP=0x0000000000750dae
- (void)_collectionView:(id)arg1 didFocusItemAtIndexPath:(id)arg2;	// IMP=0x0000000000750ceb
- (void)collectionView:(id)arg1 didFocusItemAtIndexPath:(id)arg2;	// IMP=0x0000000000750c28
- (id)indexPathForPreferredFocusedItemForCollectionView:(id)arg1;	// IMP=0x0000000000750b5b
- (_Bool)_collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x0000000000750a8c
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x00000000007509bd
- (_Bool)collectionView:(id)arg1 selectionFollowsFocusForItemAtIndexPath:(id)arg2;	// IMP=0x00000000007508da
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0000000000750816
- (_Bool)collectionView:(id)arg1 shouldUpdateFocusInContext:(id)arg2;	// IMP=0x0000000000750760
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x0000000000750691
- (struct CGPoint)collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint)arg2;	// IMP=0x00000000007505db
- (id)collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;	// IMP=0x0000000000750504
- (id)collectionView:(id)arg1 targetIndexPathForMoveOfItemFromOriginalIndexPath:(id)arg2 atCurrentIndexPath:(id)arg3 toProposedIndexPath:(id)arg4;	// IMP=0x0000000000750409
- (id)collectionView:(id)arg1 transitionLayoutForOldLayout:(id)arg2 newLayout:(id)arg3;	// IMP=0x0000000000750332
- (void)collectionView:(id)arg1 performAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;	// IMP=0x000000000075024c
- (_Bool)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;	// IMP=0x0000000000750162
- (_Bool)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000750093
- (_Bool)collectionView:(id)arg1 canEditItemAtIndexPath:(id)arg2;	// IMP=0x000000000074ffae
- (void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x000000000074fec0
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000074fde2
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x000000000074fcf4
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000074fc16
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;	// IMP=0x000000000074fb53
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000074fa90
- (_Bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;	// IMP=0x000000000074f9c1
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000074f8f2
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;	// IMP=0x000000000074f82f
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;	// IMP=0x000000000074f76c
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x000000000074f69d
- (void)_collectionView:(id)arg1 willPerformUpdates:(id)arg2;	// IMP=0x000000000074f364
- (id)_collectionView:(id)arg1 indexPathForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;	// IMP=0x000000000074f2aa
- (id)_collectionView:(id)arg1 sectionIndexTitlesTrimmedToCount:(unsigned long long)arg2;	// IMP=0x000000000074f203
- (id)_sectionIndexTitlesForCollectionView:(id)arg1;	// IMP=0x000000000074f162
- (_Bool)_collectionView:(id)arg1 canEditItemAtIndexPath:(id)arg2;	// IMP=0x000000000074f093
- (void)_collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;	// IMP=0x000000000074ef8f
- (_Bool)_collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;	// IMP=0x000000000074eebb
- (id)indexPathForElementWithModelIdentifier:(id)arg1 inView:(id)arg2;	// IMP=0x000000000074edd8
- (id)modelIdentifierForElementAtIndexPath:(id)arg1 inView:(id)arg2;	// IMP=0x000000000074ecfd
- (id)collectionView:(id)arg1 indexPathForIndexTitle:(id)arg2 atIndex:(long long)arg3;	// IMP=0x000000000074ec31
- (id)indexTitlesForCollectionView:(id)arg1;	// IMP=0x000000000074eb8b
- (id)_expandCollapseAnimationContextForCollectionView:(id)arg1;	// IMP=0x000000000074eaea
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;	// IMP=0x000000000074e9e6
- (_Bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;	// IMP=0x000000000074e917
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000000074e81b
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000074e68e
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000000074e579
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000074e45a
- (id)computeRevertShadowUpdates;	// IMP=0x000000000074e2b7
- (id)shadowUpdates;	// IMP=0x000000000074e2a5
- (void)appendShadowUpdate:(id)arg1;	// IMP=0x000000000074df25
- (_Bool)_rebaseForUpdateMap:(id)arg1;	// IMP=0x000000000074dd94
- (_Bool)rebaseForUpdates:(id)arg1;	// IMP=0x000000000074dd03
- (_Bool)shouldRebaseForUpdates;	// IMP=0x000000000074dc22
- (void)reset;	// IMP=0x000000000074dbb9
- (id)initWithCollectionView:(id)arg1;	// IMP=0x000000000074db15

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
