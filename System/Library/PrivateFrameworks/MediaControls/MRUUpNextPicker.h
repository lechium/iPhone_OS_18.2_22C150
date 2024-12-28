//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MRUDiffableDataSource, MRUUpNextDataSource, NSString, UITableView;

__attribute__((visibility("hidden")))
@interface MRUUpNextPicker : UIView
{
    MRUUpNextDataSource *_dataSource;	// 8 = 0x8
    UITableView *_tableView;	// 16 = 0x10
    MRUDiffableDataSource *_diffableDataSource;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000010ce50
@property(retain, nonatomic) MRUDiffableDataSource *diffableDataSource; // @synthesize diffableDataSource=_diffableDataSource;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) MRUUpNextDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)configureCell:(id)arg1 forMovie:(id)arg2;	// IMP=0x000000000010cd1d
- (void)configureCell:(id)arg1 forTVEpisode:(id)arg2;	// IMP=0x000000000010cbcc
- (void)configureCell:(id)arg1 forSong:(id)arg2;	// IMP=0x000000000010ca7b
- (id)reponseItemForIndexPath:(id)arg1;	// IMP=0x000000000010ca09
- (void)updateDiffableDataSourceAnimated:(_Bool)arg1;	// IMP=0x000000000010c95e
- (void)upNextDataSource:(id)arg1 didChangeResponseItemIDs:(id)arg2;	// IMP=0x000000000010c947
- (void)dataSource:(id)arg1 moveItemWithIdentifier:(id)arg2 aferIndentifier:(id)arg3;	// IMP=0x000000000010c921
- (void)dataSource:(id)arg1 moveItemToTopWithIdentifier:(id)arg2;	// IMP=0x000000000010c8ff
- (void)dataSource:(id)arg1 didDeleteItemWithIdentifier:(id)arg2;	// IMP=0x000000000010c8dd
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x000000000010c8d5
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;	// IMP=0x000000000010c8cd
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000010c803
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000010c788
- (void)layoutSubviews;	// IMP=0x000000000010c713
- (id)initWithFrame:(struct CGRect)arg1 dataSource:(id)arg2;	// IMP=0x000000000010c371

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
