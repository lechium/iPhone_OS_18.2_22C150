//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewController.h>

@class MISSING_TYPE, NSUndoManager, UIBarButtonItem;

@interface _TtC9Reminders29TTRIListSharingViewController : UITableViewController
{
    MISSING_TYPE *doneButton;	// 8 = 0x8
    MISSING_TYPE *presenter;	// 16 = 0x10
    MISSING_TYPE *style;	// 32 = 0x20
    MISSING_TYPE *localUndoManager;	// 40 = 0x28
    MISSING_TYPE *allowsEditing;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x004000000005a5f0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x001000000005a590
- (id)initWithStyle:(long long)arg1;	// IMP=0x001000000005a560
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x001000000005a4b0
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0010000000059dd0
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0010000000059d30
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x0010000000059cd0
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000059be0
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000059b10
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0010000000059a60
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x0010000000059480
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00100000000593d0
- (void)didTapDone:(id)arg1;	// IMP=0x0010000000058dd0
@property(nonatomic, retain) UIBarButtonItem *doneButton; // @synthesize doneButton;
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000058cf0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000058cd0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000058c40
- (void)viewDidLoad;	// IMP=0x0010000000058c10
@property(nonatomic, readonly) NSUndoManager *undoManager;
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000588c0

@end
