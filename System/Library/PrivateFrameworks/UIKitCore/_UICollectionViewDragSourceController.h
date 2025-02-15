//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UICollectionView, UIDragInteraction, _UICollectionViewDragAndDropController, _UICollectionViewDragSourceControllerDragState, _UICollectionViewDragSourceControllerSessionState;

__attribute__((visibility("hidden")))
@interface _UICollectionViewDragSourceController : NSObject
{
    UICollectionView *_collectionView;	// 8 = 0x8
    UIDragInteraction *_dragInteraction;	// 16 = 0x10
    _UICollectionViewDragAndDropController *_delegate;	// 24 = 0x18
    _UICollectionViewDragSourceControllerSessionState *_sessionState;	// 32 = 0x20
    _UICollectionViewDragSourceControllerDragState *_dragState;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000074a177
- (id)_filterCandidateIndexPaths:(id)arg1 forUserSelectedIndexPath:(id)arg2 session:(id)arg3;	// IMP=0x00000000007498db
- (void)_sessionWillBegin:(id)arg1 forDragInteraction:(id)arg2;	// IMP=0x000000000074972c
- (id)_previewParametersForItemAtIndexPath:(id)arg1;	// IMP=0x00000000007494c2
- (id)_queryForItemsFromClientForSession:(id)arg1 dataSourceIndexPath:(id)arg2 location:(struct CGPoint)arg3 isInitialQuery:(_Bool)arg4;	// IMP=0x00000000007491a2
- (void)_addDragItemsToExistingSession:(id)arg1 forDataSourceIndexPath:(id)arg2;	// IMP=0x0000000000748f20
- (_Bool)_delegateImplementsSelector:(SEL)arg1;	// IMP=0x0000000000748e6a
- (_Bool)_delegateImplementsDragSourceDidAddItem;	// IMP=0x0000000000748e51
- (_Bool)_delegateImplementsDragItemsForItemAtIndexPathWithDefaultPreview;	// IMP=0x0000000000748e38
- (_Bool)_delegateImplementsDragItemsForItemAtIndexPath;	// IMP=0x0000000000748e1f
- (_Bool)_delegateImplementsDragSourceItemsAtIndexPath;	// IMP=0x0000000000748e06
- (void)_configureInteraction;	// IMP=0x0000000000748d88
- (id)_dragSourceDelegateProxy;	// IMP=0x0000000000748d3c
- (id)_dragSourceDelegateActual;	// IMP=0x0000000000748cf0
- (id)_dragDelegateProxy;	// IMP=0x0000000000748ca4
- (id)_dragDelegateActual;	// IMP=0x0000000000748c58
- (long long)_dataOwnerForDragSession:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000000748b5a
- (id)_dragInteraction:(id)arg1 sessionPropertiesForSession:(id)arg2;	// IMP=0x00000000007489a0
- (long long)_dragInteraction:(id)arg1 dataOwnerForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;	// IMP=0x00000000007488f4
- (long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;	// IMP=0x00000000007487f7
- (_Bool)dragInteraction:(id)arg1 sessionIsRestrictedToDraggingApplication:(id)arg2;	// IMP=0x000000000074871f
- (_Bool)dragInteraction:(id)arg1 sessionAllowsMoveOperation:(id)arg2;	// IMP=0x0000000000748648
- (void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3;	// IMP=0x0000000000748369
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;	// IMP=0x0000000000748195
- (void)dragInteraction:(id)arg1 session:(id)arg2 willAddItems:(id)arg3 forInteraction:(id)arg4;	// IMP=0x0000000000748123
- (id)dragInteraction:(id)arg1 sessionForAddingItems:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;	// IMP=0x000000000074803e
- (id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;	// IMP=0x0000000000747dd6
- (void)dragInteraction:(id)arg1 sessionDidTransferItems:(id)arg2;	// IMP=0x0000000000747dd0
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;	// IMP=0x0000000000747c01
- (void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3;	// IMP=0x0000000000747b73
- (void)dragInteraction:(id)arg1 sessionDidMove:(id)arg2;	// IMP=0x0000000000747b6d
- (_Bool)dragInteraction:(id)arg1 prefersFullSizePreviewsForSession:(id)arg2;	// IMP=0x0000000000747a96
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;	// IMP=0x0000000000747a7b
- (void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;	// IMP=0x00000000007477bc
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;	// IMP=0x0000000000747625
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;	// IMP=0x0000000000746d7b
- (void)dealloc;	// IMP=0x00000000007467dd
@property(readonly, copy) NSString *description;
- (id)initWithCollectionView:(id)arg1 delegate:(id)arg2;	// IMP=0x00000000007465b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

