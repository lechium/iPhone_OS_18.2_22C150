//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewController.h>

@class MISSING_TYPE, NSArray;

@interface _TtC5Files33DOCSuggestionsTableViewController : UITableViewController
{
    MISSING_TYPE *suggestionsTableViewDelegate;	// 8 = 0x8
    MISSING_TYPE *suggestions;	// 24 = 0x18
    MISSING_TYPE *sortedSuggestions;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0040000000445af0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000445a70
- (id)initWithStyle:(long long)arg1;	// IMP=0x0010000000445a40
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000445990
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0010000000445360
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0010000000445350
- (_Bool)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;	// IMP=0x0010000000445340
- (_Bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;	// IMP=0x0010000000445330
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000445290
- (void)keyCommandCancelSelection;	// IMP=0x0010000000444760
- (void)keyCommandConfirmSelection;	// IMP=0x0010000000444730
- (void)keyCommandMoveSelectionDown;	// IMP=0x0010000000444580
- (void)keyCommandMoveSelectionUp;	// IMP=0x0010000000444540
@property(nonatomic, readonly) NSArray *keyCommands;
- (_Bool)resignFirstResponder;	// IMP=0x00100000004444c0
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
- (void)viewDidLoad;	// IMP=0x00100000004442a0
- (void)loadView;	// IMP=0x0010000000443ef0
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000443e50
- (id)init;	// IMP=0x0010000000443e30

@end
