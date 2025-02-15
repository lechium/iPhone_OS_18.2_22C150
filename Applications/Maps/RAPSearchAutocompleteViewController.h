//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class GEOMapRegion, NSString, RAPSearchAutocompleteBlockFilter, SearchDataSource, UISearchController, UITableView;
@protocol RAPSearchAutocompleteDelegate;

@interface RAPSearchAutocompleteViewController : UIViewController
{
    UISearchController *_searchController;	// 8 = 0x8
    UITableView *_tableView;	// 16 = 0x10
    SearchDataSource *_dataSource;	// 24 = 0x18
    NSString *_currentSearchString;	// 32 = 0x20
    unsigned long long _resultTypes;	// 40 = 0x28
    RAPSearchAutocompleteBlockFilter *_autocompleteFilter;	// 48 = 0x30
    _Bool _allowsFreeformResultText;	// 56 = 0x38
    int _entryPoint;	// 60 = 0x3c
    id <RAPSearchAutocompleteDelegate> _delegate;	// 64 = 0x40
    NSString *_titleText;	// 72 = 0x48
    GEOMapRegion *_boundedMapRegion;	// 80 = 0x50
    NSString *_placeholderText;	// 88 = 0x58
}

+ (id)poiAutocompleteViewControllerWithBoundedMapRegion:(id)arg1 excludedMUIDs:(id)arg2;	// IMP=0x0020000000b22d2e
+ (id)addressAutocompleteViewControllerWithInitialSearchString:(id)arg1;	// IMP=0x0010000000b22c3a
- (void).cxx_destruct;	// IMP=0x0020000000b24250
@property(nonatomic) _Bool allowsFreeformResultText; // @synthesize allowsFreeformResultText=_allowsFreeformResultText;
@property(retain, nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
@property(retain, nonatomic) GEOMapRegion *boundedMapRegion; // @synthesize boundedMapRegion=_boundedMapRegion;
@property(nonatomic) int entryPoint; // @synthesize entryPoint=_entryPoint;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(nonatomic) __weak id <RAPSearchAutocompleteDelegate> delegate; // @synthesize delegate=_delegate;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;	// IMP=0x0010000000b24173
- (void)_updateWithInputText:(id)arg1;	// IMP=0x0010000000b23ff2
- (void)searchBarSearchButtonClicked:(id)arg1;	// IMP=0x0010000000b23eea
- (void)updateSearchResultsForSearchController:(id)arg1;	// IMP=0x0010000000b23e79
- (_Bool)searchDataSource:(id)arg1 shouldFilterItem:(id)arg2;	// IMP=0x0010000000b23e59
- (void)dataSourceUpdated:(id)arg1;	// IMP=0x0010000000b23e3c
- (void)dataSource:(id)arg1 itemTapped:(id)arg2;	// IMP=0x0010000000b23aa4
- (void)dataSource:(id)arg1 itemFocused:(id)arg2;	// IMP=0x0010000000b23a9e
- (void)_dismissViewController;	// IMP=0x0010000000b239d9
- (void);	// IMP=0x0010000000b2394e
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000b237e4
- (void)viewDidLoad;	// IMP=0x0010000000b22fd5
- (id)initWithPlaceholderText:(id)arg1 initialSearchString:(id)arg2 allowsFreeformResultText:(_Bool)arg3 resultTypes:(unsigned long long)arg4 blockFilter:(id)arg5;	// IMP=0x0010000000b22e4a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

