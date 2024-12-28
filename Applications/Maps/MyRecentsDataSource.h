//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;
@protocol ShareDelegate;

@interface MyRecentsDataSource
{
    NSArray *_recentsContent;	// 8 = 0x8
    NSArray *_sections;	// 16 = 0x10
    _Bool _includeRecentSearches;	// 24 = 0x18
    NSArray *_keyCommands;	// 32 = 0x20
    id <ShareDelegate> _shareDelegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000006631b0
@property(nonatomic) __weak id <ShareDelegate> shareDelegate; // @synthesize shareDelegate=_shareDelegate;
- (id)keyCommands;	// IMP=0x0010000000663172
- (id)shareContextualActionAtIndexPath:(id)arg1;	// IMP=0x0010000000663040
- (id)deleteContextualActionForIndexPath:(id)arg1;	// IMP=0x0010000000662efa
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000662d56
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000662d3d
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000662d24
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000662c5d
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0010000000662af1
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000662ae9
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x0010000000662ae0
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x0010000000662ad8
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00100000006628cc
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x0010000000662655
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000662556
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00100000006624e5
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00100000006624c8
- (void)_updateKeyCommandsAtIndexPath:(id)arg1;	// IMP=0x00100000006622f7
- (void)shareRow:(id)arg1;	// IMP=0x00100000006622ab
- (void)removeItem:(id)arg1;	// IMP=0x0010000000662261
- (void)shareRowAtIndexPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000066210d
- (void)clearSectionAtIndex:(long long)arg1;	// IMP=0x0010000000661fcd
- (void)removeItemAtIndexPath:(id)arg1;	// IMP=0x0010000000661e53
- (long long)indexOfItem:(id)arg1;	// IMP=0x0010000000661b9e
- (id)objectAtIndexPath:(id)arg1;	// IMP=0x0010000000661aab
- (id)sectionAtIndex:(long long)arg1;	// IMP=0x0010000000661a40
- (void)_buildContent;	// IMP=0x001000000066101a
- (void)_loadContent;	// IMP=0x0010000000660f51
- (void)_recentsChanged;	// IMP=0x0010000000660f3f
- (id)initWithTableView:(id)arg1 updateLocation:(_Bool)arg2 includeRecentSearches:(_Bool)arg3;	// IMP=0x0010000000660dcb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
