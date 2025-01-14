//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class LibraryConfiguration, LibraryItemController, NSArray, NSString, UICollectionView, UICollectionViewDiffableDataSource, UIView, WebBookmarkCollection;
@protocol LibraryViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface LibraryViewController : UIViewController
{
    UICollectionViewDiffableDataSource *_dataSource;	// 8 = 0x8
    UICollectionView *_collectionView;	// 16 = 0x10
    UICollectionViewDiffableDataSource *_floatingCollectionViewDataSource;	// 24 = 0x18
    UICollectionView *_floatingCollectionView;	// 32 = 0x20
    UIView *_separator;	// 40 = 0x28
    struct {
        _Bool needsReload;
        _Bool needsReloadForProfileSwitcher;
        _Bool needsUpdateSelection;
        _Bool animated;
    } _reloadFlags;	// 48 = 0x30
    id <LibraryViewControllerDelegate> _delegate;	// 56 = 0x38
    WebBookmarkCollection *_collection;	// 64 = 0x40
    LibraryConfiguration *_configuration;	// 72 = 0x48
    NSArray *_sectionControllers;	// 80 = 0x50
    LibraryItemController *_presentedItemController;	// 88 = 0x58
    NSArray *_profilesInSwitcherMenu;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000010dc7f
@property(readonly, nonatomic) NSArray *profilesInSwitcherMenu; // @synthesize profilesInSwitcherMenu=_profilesInSwitcherMenu;
@property(retain, nonatomic) LibraryItemController *presentedItemController; // @synthesize presentedItemController=_presentedItemController;
@property(copy, nonatomic) NSArray *sectionControllers; // @synthesize sectionControllers=_sectionControllers;
@property(retain, nonatomic) LibraryConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) WebBookmarkCollection *collection; // @synthesize collection=_collection;
@property(nonatomic) __weak id <LibraryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_applySnapshotForSection:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000010d902
- (void)librarySectionContentDidChange:(id)arg1;	// IMP=0x000000000010d8eb
- (void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;	// IMP=0x000000000010d717
- (id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;	// IMP=0x000000000010d622
- (void)collectionView:(id)arg1 dragSessionWillBegin:(id)arg2;	// IMP=0x000000000010d5d9
- (id)collectionView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint)arg4;	// IMP=0x000000000010d532
- (id)collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000000010d48b
- (void)collectionView:(id)arg1 performPrimaryActionForItemAtIndexPath:(id)arg2;	// IMP=0x000000000010d3e4
- (_Bool)collectionView:(id)arg1 selectionFollowsFocusForItemAtIndexPath:(id)arg2;	// IMP=0x000000000010d34b
- (_Bool)collectionView:(id)arg1 shouldSpringLoadItemAtIndexPath:(id)arg2 withContext:(id)arg3;	// IMP=0x000000000010d2b2
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemsAtIndexPaths:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x000000000010d09c
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000010d094
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000010d046
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000010cfc6
- (void)_collectionViewDidSelectItem:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000000010ceaa
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000000010ce5b
@property(retain, nonatomic) LibraryItemController *selectedItemController;
- (id)_swipeActionsConfigurationForIndexPath:(id)arg1;	// IMP=0x000000000010c7d9
- (void)_enumerateItemControllersWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000010c683
- (id)_diffableDataSourceForCollectionView:(id)arg1;	// IMP=0x000000000010c620
- (void)viewWillLayoutSubviews;	// IMP=0x000000000010c5ca
- (void)scrollToTopAnimated:(_Bool)arg1;	// IMP=0x000000000010c5ad
- (void)_reloadSectionControllersImmediatelyAnimated:(_Bool)arg1;	// IMP=0x000000000010c387
- (void)reloadSectionControllersIfNeeded;	// IMP=0x000000000010c319
- (void)setNeedsUpdateSelection;	// IMP=0x000000000010c2d0
- (void)_reloadFloatingSectionControllersImmediately;	// IMP=0x000000000010bfa4
- (void)setNeedsReloadForProfileSwitcher;	// IMP=0x000000000010bf5b
- (void)setNeedsReloadSectionControllersAnimated:(_Bool)arg1;	// IMP=0x000000000010bf05
- (void)reloadExpansionStateForItem:(id)arg1 inSection:(id)arg2;	// IMP=0x000000000010bdc6
- (void)_updateSelectionIfNeeded;	// IMP=0x000000000010bd9a
- (void)updateSelectionByIgnoringExistingSelection:(_Bool)arg1;	// IMP=0x000000000010bca9
- (void)updateSelection;	// IMP=0x000000000010bc95
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000010bc52
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000010bc23
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000010bbe0
- (void)_layOutFloatingViews;	// IMP=0x000000000010baf9
- (struct CGRect)_frameForFloatingCollectionView;	// IMP=0x000000000010b853
- (void)viewDidLayoutSubviews;	// IMP=0x000000000010b4ae
- (void)viewDidLoad;	// IMP=0x000000000010a7e3
- (void)collectionViewContentSizeDidChange:(id)arg1;	// IMP=0x000000000010a7a6
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000010a62c
- (void)dealloc;	// IMP=0x000000000010a5d2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

