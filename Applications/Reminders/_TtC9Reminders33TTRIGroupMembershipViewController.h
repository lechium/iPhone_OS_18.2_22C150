//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewController.h>

@class MISSING_TYPE, NSUndoManager;

@interface _TtC9Reminders33TTRIGroupMembershipViewController : UITableViewController
{
    MISSING_TYPE *presenter;	// 8 = 0x8
    MISSING_TYPE *localUndoManager;	// 24 = 0x18
    MISSING_TYPE *viewModel;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x004000000002d680
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x001000000002d620
- (id)initWithStyle:(long long)arg1;	// IMP=0x001000000002d5f0
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x001000000002d4f0
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;	// IMP=0x001000000002d300
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;	// IMP=0x001000000002d230
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;	// IMP=0x001000000002d180
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;	// IMP=0x001000000002d090
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x001000000002d000
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x001000000002cf20
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x001000000002ce20
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x001000000002cd70
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x001000000002cad0
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x001000000002ca70
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000002c260
- (void)viewDidLoad;	// IMP=0x001000000002c190
@property(nonatomic, readonly) NSUndoManager *undoManager;
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000002bf10

@end

