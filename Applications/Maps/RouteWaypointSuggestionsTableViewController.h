//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, RouteNoQueryDataSource, SearchDataSource, SearchHomeDataSource;
@protocol RouteWaypointSuggestionsTableViewControllerDelegate;

@interface RouteWaypointSuggestionsTableViewController
{
    _Bool _wasLocationServicesApproved;	// 8 = 0x8
    _Bool _wasAuthorizedForPreciseLocation;	// 9 = 0x9
    struct CGSize _lastSize;	// 16 = 0x10
    RouteNoQueryDataSource *_noQueryDataSource;	// 32 = 0x20
    SearchDataSource *_acDataSource;	// 40 = 0x28
    SearchHomeDataSource *_browseCategoryDataSource;	// 48 = 0x30
    _Bool _supportsFullTextSearch;	// 56 = 0x38
    id <RouteWaypointSuggestionsTableViewControllerDelegate> _delegate;	// 64 = 0x40
    CDUnknownBlockType _tableViewDidReloadHandler;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000d488de
@property(copy, nonatomic) CDUnknownBlockType tableViewDidReloadHandler; // @synthesize tableViewDidReloadHandler=_tableViewDidReloadHandler;
@property(nonatomic) __weak id <RouteWaypointSuggestionsTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)newTraits;	// IMP=0x0010000000d48848
- (int)currentMapViewTargetForAnalytics;	// IMP=0x0010000000d4883d
- (int)currentUITargetForAnalytics;	// IMP=0x0010000000d48832
- (void)searchDataSource:(id)arg1 replaceQueryWithItem:(id)arg2;	// IMP=0x0010000000d4878b
- (_Bool)shouldFilterMapsSuggestionsEntry:(id)arg1;	// IMP=0x0010000000d48761
- (_Bool)searchDataSource:(id)arg1 shouldFilterItem:(id)arg2;	// IMP=0x0010000000d48536
- (void)dataSource:(id)arg1 itemTapped:(id)arg2;	// IMP=0x0010000000d47bf1
- (void)dataSource:(id)arg1 itemFocused:(id)arg2;	// IMP=0x0010000000d47beb
- (void)dataSourceUpdated:(id)arg1;	// IMP=0x0010000000d47bd9
- (int)listForDataSource:(id)arg1;	// IMP=0x0010000000d47bce
- (void)updateRowHeightForCurrentDataSource;	// IMP=0x0010000000d47a3d
- (void)_callTableHandlerIfNeeded;	// IMP=0x0010000000d478e2
- (void)reloadSuggestionsTableView;	// IMP=0x0010000000d4787d
- (void)reset;	// IMP=0x0010000000d4782c
- (void)updateTableViewHeader:(_Bool)arg1;	// IMP=0x0010000000d4780f
- (void)reloadData;	// IMP=0x0010000000d477fd
- (void)updateInputText:(id)arg1 traits:(id)arg2 source:(int)arg3;	// IMP=0x0010000000d47739
- (void)updateDataSourceHasInput:(_Bool)arg1 isEditing:(_Bool)arg2;	// IMP=0x0010000000d47330
- (void)updateCategoryDataSource:(_Bool)arg1;	// IMP=0x0010000000d471f1
- (void)reconfigureDataSources;	// IMP=0x0010000000d47119
- (void)viewDidLayoutSubviews;	// IMP=0x0010000000d46f46
- (void)viewDidLoad;	// IMP=0x0010000000d46828
- (void)loadView;	// IMP=0x0010000000d467ef
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000d46751

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

