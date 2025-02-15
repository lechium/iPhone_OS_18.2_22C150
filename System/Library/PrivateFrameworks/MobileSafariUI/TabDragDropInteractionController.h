//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableSet, NSString, TabDocumentDropHandler;
@protocol TabDragDropDataSource, UIDragSession;

__attribute__((visibility("hidden")))
@interface TabDragDropInteractionController : NSObject
{
    NSMapTable *_sessionToPlaceholderItemMap;	// 8 = 0x8
    NSMapTable *_insertedTabsForDragItems;	// 16 = 0x10
    unsigned long long _dropAnimationCount;	// 24 = 0x18
    NSMapTable *_hasHiddenDocumentsForDragSessions;	// 32 = 0x20
    id <UIDragSession> _pendingDragSession;	// 40 = 0x28
    NSMutableSet *_tabViewsPendingActivation;	// 48 = 0x30
    id <TabDragDropDataSource> _dataSource;	// 56 = 0x38
    TabDocumentDropHandler *_dropHandler;	// 64 = 0x40
}

+ (_Bool)canDelegateDragDropForTabCollectionView:(id)arg1;	// IMP=0x00100000001d7af2
- (void).cxx_destruct;	// IMP=0x00000000001dd0ba
@property(readonly, nonatomic) TabDocumentDropHandler *dropHandler; // @synthesize dropHandler=_dropHandler;
@property(readonly, nonatomic) __weak id <TabDragDropDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x00000000001dcf3e
- (void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x00000000001dcd9e
- (id)contextMenuInteraction:(id)arg1 configuration:(id)arg2 dismissalPreviewForItemWithIdentifier:(id)arg3;	// IMP=0x00000000001dcc74
- (id)contextMenuInteraction:(id)arg1 configuration:(id)arg2 highlightPreviewForItemWithIdentifier:(id)arg3;	// IMP=0x00000000001dcb38
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;	// IMP=0x00000000001dc83d
- (void)_updatePreviewsForInteraction:(id)arg1 session:(id)arg2 pinned:(_Bool)arg3;	// IMP=0x00000000001dc502
- (id)_autoscrollerForInteraction:(id)arg1;	// IMP=0x00000000001dc4a1
- (void)_transitionToDragState:(long long)arg1 fromDragState:(long long)arg2 forTabCollectionItemsInSession:(id)arg3 interaction:(id)arg4;	// IMP=0x00000000001dc0dd
- (id)_insertPlaceholderIfNeededForSession:(id)arg1 interaction:(id)arg2;	// IMP=0x00000000001dbd5f
- (id)_viewForTransitionToItem:(id)arg1 withTabCollectionView:(id)arg2;	// IMP=0x00000000001dbccc
- (void)_unhideTabsForLocalDragSession:(id)arg1;	// IMP=0x00000000001dbc23
- (id)_tabCollectionItemAtPoint:(struct CGPoint)arg1 interaction:(id)arg2;	// IMP=0x00000000001dbbbd
- (id)_newDragItemsAtPoint:(struct CGPoint)arg1 excludingTabUUIDs:(id)arg2 interaction:(id)arg3 session:(id)arg4;	// IMP=0x00000000001db8aa
- (long long)_dragInteraction:(id)arg1 dataOwnerForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;	// IMP=0x00000000001db89f
- (long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;	// IMP=0x00000000001db894
- (void)_cleanUpDragPreviewForSesssion:(id)arg1;	// IMP=0x00000000001db6ca
- (_Bool)dragInteraction:(id)arg1 prefersFullSizePreviewsForSession:(id)arg2;	// IMP=0x00000000001db6c2
- (void)_dragInteractionDidCancelLiftWithoutDragging:(id)arg1;	// IMP=0x00000000001db690
- (void)dragInteraction:(id)arg1 session:(id)arg2 willAddItems:(id)arg3 forInteraction:(id)arg4;	// IMP=0x00000000001db49e
- (void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3;	// IMP=0x00000000001db345
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;	// IMP=0x00000000001db1b1
- (id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;	// IMP=0x00000000001dae73
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;	// IMP=0x00000000001dad39
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;	// IMP=0x00000000001dab3b
- (long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2;	// IMP=0x00000000001dab30
- (void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;	// IMP=0x00000000001da533
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;	// IMP=0x00000000001d9f1c
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;	// IMP=0x00000000001d9d67
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;	// IMP=0x00000000001d9285
- (void)_cleanUpDropPlaceholderForSession:(id)arg1 interaction:(id)arg2;	// IMP=0x00000000001d90b6
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;	// IMP=0x00000000001d909b
- (_Bool)_tabViewIsFilteringTabs:(id)arg1;	// IMP=0x00000000001d8f97
- (_Bool)_placeholderMoveSatisfiesDelay;	// IMP=0x00000000001d8f8f
- (_Bool)_shouldMovePlaceholderItem:(id)arg1 overTargetItem:(id)arg2 withDropLocation:(struct CGPoint)arg3 interaction:(id)arg4;	// IMP=0x00000000001d8a59
- (_Bool)_canOpenInCurrentTabForSession:(id)arg1 tabView:(id)arg2;	// IMP=0x00000000001d8867
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;	// IMP=0x00000000001d7e18
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;	// IMP=0x00000000001d7cab
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;	// IMP=0x00000000001d7b6a
- (id)initWithDataSource:(id)arg1 dropHandler:(id)arg2;	// IMP=0x00000000001d79a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

