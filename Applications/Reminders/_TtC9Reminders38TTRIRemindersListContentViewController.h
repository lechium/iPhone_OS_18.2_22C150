//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE;

@interface _TtC9Reminders38TTRIRemindersListContentViewController : UIViewController
{
    MISSING_TYPE *initialFrameForLoadingView;	// 8 = 0x8
    MISSING_TYPE *preferredChromelessBarStates;	// 48 = 0x30
    MISSING_TYPE *presenter;	// 56 = 0x38
    MISSING_TYPE *scrollingController;	// 72 = 0x48
    MISSING_TYPE *itemStateTracker;	// 80 = 0x50
    MISSING_TYPE *pencilAutoCommitTracker;	// 88 = 0x58
    MISSING_TYPE *pencilHoverCleanupAction;	// 96 = 0x60
    MISSING_TYPE *chromelessToolbarUpdater;	// 104 = 0x68
    MISSING_TYPE *$__lazy_storage_$_treeView;	// 112 = 0x70
    MISSING_TYPE *canMoveItemReturnValueTempOverrides;	// 120 = 0x78
    MISSING_TYPE *automaticSubtaskSelectionController;	// 128 = 0x80
    MISSING_TYPE *contextMenuOriginatorItem;	// 0 = 0x0
    MISSING_TYPE *treeViewHasSwipedItem;	// 0 = 0x0
    MISSING_TYPE *isHighlightingItemsProgrammatically;	// 0 = 0x0
    MISSING_TYPE *firstVisibleItemToRestore;	// 0 = 0x0
    MISSING_TYPE *internalFocusedCell;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_completedTasksRotor;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_incompleteTasksRotor;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_overdueTasksRotor;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00200000002d0710
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00100000002d4400
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00100000002d25c0
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000002d2590
- (void)viewDidLayoutSubviews;	// IMP=0x00100000002d24b0
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00100000002d2280
- (void)viewDidLoad;	// IMP=0x00100000002d1f30
- (void)loadView;	// IMP=0x00100000002d0870
- (void)dealloc;	// IMP=0x00100000002d0680
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000002d04b0
- (void)hoverInteractionDidEndHoverAndHold:(id)arg1;	// IMP=0x00100000002dcad0
- (void)hoverInteraction:(id)arg1 didBeginHoverAndHoldAtLocation:(struct CGPoint)arg2 elevation:(double)arg3;	// IMP=0x00100000002dca60

@end
