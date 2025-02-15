//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, UITableView, _UIDataSourceSnapshotter, _UIDataSourceUpdateMap;

__attribute__((visibility("hidden")))
@interface _UITableViewShadowUpdatesController : NSObject
{
    NSMutableArray *_shadowUpdates;	// 8 = 0x8
    UITableView *_tableView;	// 16 = 0x10
    _UIDataSourceSnapshotter *_initialSnapshot;	// 24 = 0x18
    _UIDataSourceUpdateMap *_updateMap;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000001679a3b
@property(retain, nonatomic) _UIDataSourceUpdateMap *updateMap; // @synthesize updateMap=_updateMap;
@property(retain, nonatomic) _UIDataSourceSnapshotter *initialSnapshot; // @synthesize initialSnapshot=_initialSnapshot;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *shadowUpdates; // @synthesize shadowUpdates=_shadowUpdates;
- (id)indexPathAfterShadowUpdates:(id)arg1 startingAtUpdate:(id)arg2;	// IMP=0x00000000016798fb
- (id)indexPathBeforeShadowUpdates:(id)arg1 startingBeforeUpdate:(id)arg2;	// IMP=0x000000000167981f
- (id)indexPathsAfterShadowUpdates:(id)arg1 allowAppendingInsert:(_Bool)arg2;	// IMP=0x0000000001679474
- (id)indexPathsAfterShadowUpdates:(id)arg1;	// IMP=0x0000000001679460
- (id)indexPathsBeforeShadowUpdates:(id)arg1;	// IMP=0x000000000167922d
- (id)indexPathAfterShadowUpdates:(id)arg1 allowAppendingInsert:(_Bool)arg2;	// IMP=0x0000000001679141
- (id)indexPathAfterShadowUpdates:(id)arg1;	// IMP=0x000000000167912d
- (id)indexPathBeforeShadowUpdates:(id)arg1;	// IMP=0x0000000001679095
- (id)sectionsAfterShadowUpdates:(id)arg1 allowAppendingInsert:(_Bool)arg2;	// IMP=0x0000000001678e63
- (id)sectionsAfterShadowUpdates:(id)arg1;	// IMP=0x0000000001678e4f
- (id)sectionsBeforeShadowUpdates:(id)arg1;	// IMP=0x0000000001678cc7
- (long long)sectionAfterShadowUpdates:(long long)arg1;	// IMP=0x0000000001678c5d
- (long long)sectionBeforeShadowUpdates:(long long)arg1;	// IMP=0x0000000001678bf3
- (id)_rebasedShadowUpdatesForUpdate:(id)arg1 initialSnapshot:(id)arg2;	// IMP=0x000000000167851d
- (void)rebaseExistingShadowUpdatesForUpdates:(id)arg1;	// IMP=0x0000000001678253
- (void)removeShadowUpdate:(id)arg1;	// IMP=0x0000000001678154
- (void)appendShadowUpdate:(id)arg1;	// IMP=0x0000000001677eea
- (void)regenerateUpdateMap;	// IMP=0x0000000001677de6
- (void)reset;	// IMP=0x0000000001677d72
@property(readonly, nonatomic) _UIDataSourceSnapshotter *dataSourceAfterShadowUpdates;
@property(readonly, nonatomic) _UIDataSourceSnapshotter *dataSourceBeforeShadowUpdates;
- (id)shadowUpdateWithIdentifier:(id)arg1;	// IMP=0x0000000001677afb
@property(readonly, nonatomic) _Bool hasShadowUpdates;
- (id)initWithTableView:(id)arg1;	// IMP=0x0000000001677a42
- (id)tableView:(id)arg1 detailTextForHeaderInSection:(long long)arg2;	// IMP=0x000000000167a33e
- (id)tableView:(id)arg1 indexPathForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;	// IMP=0x000000000167a277
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;	// IMP=0x000000000167a193
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000000167a0ec
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;	// IMP=0x000000000167a043
- (id)_tableView:(id)arg1 sectionIndexTitlesTrimmedToCount:(unsigned long long)arg2;	// IMP=0x0000000001679fc6
- (id)sectionIndexTitlesForTableView:(id)arg1;	// IMP=0x0000000001679f4f
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;	// IMP=0x0000000001679ead
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x0000000001679e0b
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x0000000001679d65
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000001679cbf
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000001679bda
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000001679b24
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000001679a77
- (id)indexPathForElementWithModelIdentifier:(id)arg1 inView:(id)arg2;	// IMP=0x000000000167a4bf
- (id)modelIdentifierForElementAtIndexPath:(id)arg1 inView:(id)arg2;	// IMP=0x000000000167a3e4
- (void)tableView:(id)arg1 willEndContextMenuInteractionWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x000000000167e1ab
- (void)tableView:(id)arg1 willDisplayContextMenuWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x000000000167e10e
- (void)tableView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x000000000167e071
- (void)tableView:(id)arg1 willCommitMenuWithAnimator:(id)arg2;	// IMP=0x000000000167dff2
- (id)tableView:(id)arg1 previewForDismissingContextMenuWithConfiguration:(id)arg2;	// IMP=0x000000000167df59
- (id)tableView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2;	// IMP=0x000000000167dec0
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x000000000167ddf6
- (id)indexPathForPreferredFocusedItemForTableView:(id)arg1;	// IMP=0x000000000167dd53
- (_Bool)tableView:(id)arg1 shouldUpdateFocusFromRowAtIndexPath:(id)arg2 toView:(id)arg3 heading:(unsigned long long)arg4;	// IMP=0x000000000167dc87
- (void)tableView:(id)arg1 didUnfocusRowAtIndexPath:(id)arg2;	// IMP=0x000000000167dbef
- (void)tableView:(id)arg1 didFocusRowAtIndexPath:(id)arg2;	// IMP=0x000000000167db57
- (_Bool)_tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2;	// IMP=0x000000000167dab5
- (void)tableView:(id)arg1 didEndSwipingRowAtIndexPath:(id)arg2;	// IMP=0x000000000167da1d
- (void)tableView:(id)arg1 willBeginSwipingRowAtIndexPath:(id)arg2;	// IMP=0x000000000167d985
- (_Bool)tableView:(id)arg1 shouldHaveFullLengthBottomSeparatorForSection:(long long)arg2;	// IMP=0x000000000167d8eb
- (_Bool)tableView:(id)arg1 shouldHaveFullLengthTopSeparatorForSection:(long long)arg2;	// IMP=0x000000000167d851
- (_Bool)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;	// IMP=0x000000000167d7b7
- (_Bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;	// IMP=0x000000000167d71d
- (void)tableView:(id)arg1 swipeAccessoryButtonPushedForRowAtIndexPath:(id)arg2;	// IMP=0x000000000167d685
- (id)tableView:(id)arg1 titleForSwipeAccessoryButtonForRowAtIndexPath:(id)arg2;	// IMP=0x000000000167d5d7
- (id)tableView:(id)arg1 backgroundColorForSwipeAccessoryButtonForRowAtIndexPath:(id)arg2;	// IMP=0x000000000167d529
- (id)tableView:(id)arg1 backgroundColorForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;	// IMP=0x000000000167d47b
- (void)tableView:(id)arg1 didCancelReorderingRowAtIndexPath:(id)arg2;	// IMP=0x000000000167d3e3
- (void)tableView:(id)arg1 didEndReorderingRowAtIndexPath:(id)arg2;	// IMP=0x000000000167d34b
- (void)tableView:(id)arg1 willBeginReorderingRowAtIndexPath:(id)arg2;	// IMP=0x000000000167d2b3
- (id)tableView:(id)arg1 trailingSwipeActionsForRowAtIndexPath:(id)arg2;	// IMP=0x000000000167d205
- (id)tableView:(id)arg1 leadingSwipeActionsForRowAtIndexPath:(id)arg2;	// IMP=0x000000000167d157
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;	// IMP=0x000000000167d0a9
- (id)tableView:(id)arg1 leadingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;	// IMP=0x000000000167cffb
- (struct CGRect)tableView:(id)arg1 calloutTargetRectForCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000000167cef5
- (id)viewForFooterInTableView:(id)arg1;	// IMP=0x000000000167ce7e
- (id)viewForHeaderInTableView:(id)arg1;	// IMP=0x000000000167ce07
- (double)heightForFooterInTableView:(id)arg1;	// IMP=0x000000000167cd97
- (double)heightForHeaderInTableView:(id)arg1;	// IMP=0x000000000167cd27
- (void)tableViewDidFinishReload:(id)arg1;	// IMP=0x000000000167ccc0
- (struct CGRect)tableView:(id)arg1 frameForSectionIndexGivenProposedFrame:(struct CGRect)arg2;	// IMP=0x000000000167cc2a
- (double)tableView:(id)arg1 maxTitleWidthForFooterInSection:(long long)arg2;	// IMP=0x000000000167cb81
- (double)tableView:(id)arg1 maxTitleWidthForHeaderInSection:(long long)arg2;	// IMP=0x000000000167cad8
- (_Bool)_tableView:(id)arg1 shouldSpringLoadRowAtIndexPath:(id)arg2 withContext:(id)arg3;	// IMP=0x000000000167ca14
- (_Bool)tableView:(id)arg1 shouldSpringLoadRowAtIndexPath:(id)arg2 withContext:(id)arg3;	// IMP=0x000000000167c950
- (long long)tableView:(id)arg1 titleAlignmentForFooterInSection:(long long)arg2;	// IMP=0x000000000167c8b5
- (long long)tableView:(id)arg1 titleAlignmentForHeaderInSection:(long long)arg2;	// IMP=0x000000000167c81a
- (double)marginForTableView:(id)arg1;	// IMP=0x000000000167c7aa
- (void)tableView:(id)arg1 didUpdateTextFieldForRowAtIndexPath:(id)arg2 withValue:(id)arg3;	// IMP=0x000000000167c6f0
- (struct CGPoint)tableView:(id)arg1 newContentOffsetAfterUpdate:(struct CGPoint)arg2 context:(id)arg3;	// IMP=0x000000000167c642
- (double)tableViewSpacingForExtraSeparators:(id)arg1;	// IMP=0x000000000167c5d2
- (_Bool)tableView:(id)arg1 wantsHeaderForSection:(long long)arg2;	// IMP=0x000000000167c538
- (id)indexPathForPreferredFocusedViewInTableView:(id)arg1;	// IMP=0x000000000167c495
- (_Bool)tableView:(id)arg1 selectionFollowsFocusForRowAtIndexPath:(id)arg2;	// IMP=0x000000000167c3e3
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x000000000167c168
- (_Bool)tableView:(id)arg1 shouldUpdateFocusInContext:(id)arg2;	// IMP=0x000000000167bf03
- (_Bool)tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2;	// IMP=0x000000000167be61
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;	// IMP=0x000000000167bd9f
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;	// IMP=0x000000000167bcd3
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;	// IMP=0x000000000167bc31
- (long long)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2;	// IMP=0x000000000167bb8f
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;	// IMP=0x000000000167ba0f
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;	// IMP=0x000000000167b977
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;	// IMP=0x000000000167b8df
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;	// IMP=0x000000000167b83d
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;	// IMP=0x000000000167b78f
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;	// IMP=0x000000000167b6e1
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x000000000167b63f
- (void)tableView:(id)arg1 performPrimaryActionForRowAtIndexPath:(id)arg2;	// IMP=0x000000000167b5a7
- (_Bool)tableView:(id)arg1 canPerformPrimaryActionForRowAtIndexPath:(id)arg2;	// IMP=0x000000000167b505
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;	// IMP=0x000000000167b46d
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000167b3d5
- (id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;	// IMP=0x000000000167b327
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000167b279
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;	// IMP=0x000000000167b1e1
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;	// IMP=0x000000000167b149
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x000000000167b0a7
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;	// IMP=0x000000000167b00f
- (long long)tableView:(id)arg1 accessoryTypeForRowWithIndexPath:(id)arg2;	// IMP=0x000000000167af6d
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x000000000167aec7
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x000000000167ae21
- (double)tableView:(id)arg1 estimatedHeightForFooterInSection:(long long)arg2;	// IMP=0x000000000167ad78
- (double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2;	// IMP=0x000000000167accf
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x000000000167ac26
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x000000000167ab7d
- (void)tableView:(id)arg1 didEndDisplayingFooterView:(id)arg2 forSection:(long long)arg3;	// IMP=0x000000000167aac7
- (void)tableView:(id)arg1 didEndDisplayingHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x000000000167aa11
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000000167a957
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;	// IMP=0x000000000167a8a1
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x000000000167a7eb
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000000167a731
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x000000000167a679
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000000167a5a2
- (void)tableView:(id)arg1 cancelPrefetchingForRowsAtIndexPaths:(id)arg2;	// IMP=0x000000000167e2ea
- (void)tableView:(id)arg1 prefetchRowsAtIndexPaths:(id)arg2;	// IMP=0x000000000167e248
- (id)_tableView:(id)arg1 dragSessionPropertiesForSession:(id)arg2;	// IMP=0x000000000167e962
- (_Bool)_tableView:(id)arg1 dragSessionSupportsSystemDrag:(id)arg2;	// IMP=0x000000000167e8d5
- (long long)_tableView:(id)arg1 dataOwnerForDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000000167e811
- (_Bool)tableView:(id)arg1 dragSessionIsRestrictedToDraggingApplication:(id)arg2;	// IMP=0x000000000167e784
- (_Bool)tableView:(id)arg1 dragSessionAllowsMoveOperation:(id)arg2;	// IMP=0x000000000167e6f7
- (void)tableView:(id)arg1 dragSessionDidEnd:(id)arg2;	// IMP=0x000000000167e678
- (void)tableView:(id)arg1 dragSessionWillBegin:(id)arg2;	// IMP=0x000000000167e5f9
- (id)tableView:(id)arg1 dragPreviewParametersForRowAtIndexPath:(id)arg2;	// IMP=0x000000000167e54b
- (id)tableView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint)arg4;	// IMP=0x000000000167e460
- (id)tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000000167e38c
- (long long)_tableView:(id)arg1 dataOwnerForDropSession:(id)arg2 withDestinationIndexPath:(id)arg3;	// IMP=0x000000000167eec5
- (id)tableView:(id)arg1 dropPreviewParametersForRowAtIndexPath:(id)arg2;	// IMP=0x000000000167ee17
- (void)tableView:(id)arg1 dropSessionDidEnd:(id)arg2;	// IMP=0x000000000167ed98
- (void)tableView:(id)arg1 dropSessionDidExit:(id)arg2;	// IMP=0x000000000167ed19
- (id)tableView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;	// IMP=0x000000000167ec57
- (void)tableView:(id)arg1 dropSessionDidEnter:(id)arg2;	// IMP=0x000000000167ebd8
- (_Bool)tableView:(id)arg1 canHandleDropSession:(id)arg2;	// IMP=0x000000000167eb4b
- (void)tableView:(id)arg1 performDropWithCoordinator:(id)arg2;	// IMP=0x000000000167e9fb
- (long long)__tableView:(id)arg1 dataOwnerForDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000000167f238
- (void)_tableView:(id)arg1 dragSessionDidEnd:(id)arg2;	// IMP=0x000000000167f1b9
- (void)_tableView:(id)arg1 dragSessionWillBegin:(id)arg2;	// IMP=0x000000000167f13a
- (id)_tableView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint)arg4;	// IMP=0x000000000167f04f
- (id)_tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000000167ef7b
- (long long)__tableView:(id)arg1 dataOwnerForDropSession:(id)arg2 withDestinationIndexPath:(id)arg3;	// IMP=0x000000000167f829
- (id)_tableView:(id)arg1 targetIndexPathForProposedIndexPath:(id)arg2 currentIndexPath:(id)arg3 dropSession:(id)arg4;	// IMP=0x000000000167f718
- (void)_tableView:(id)arg1 dropSessionDidEnd:(id)arg2;	// IMP=0x000000000167f699
- (void)_tableView:(id)arg1 dropSessionDidExit:(id)arg2;	// IMP=0x000000000167f61a
- (id)_tableView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;	// IMP=0x000000000167f558
- (void)_tableView:(id)arg1 dropSessionDidEnter:(id)arg2;	// IMP=0x000000000167f4d9
- (_Bool)_tableView:(id)arg1 canHandleDropSession:(id)arg2;	// IMP=0x000000000167f44c
- (void)_tableView:(id)arg1 performDropWithCoordinator:(id)arg2;	// IMP=0x000000000167f2fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

