//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, _UIKeyShortcutHUDIndexPath, _UIKeyShortcutHUDViewController;
@protocol _UIKeyShortcutHUDCollectionViewManagerClient;

__attribute__((visibility("hidden")))
@interface _UIKeyShortcutHUDCollectionViewManager : NSObject
{
    _Bool _nextFocusUpdatePrefersTopSearchResult;	// 8 = 0x8
    _UIKeyShortcutHUDViewController *_hudVC;	// 16 = 0x10
    id <_UIKeyShortcutHUDCollectionViewManagerClient> _menu;	// 24 = 0x18
    id <_UIKeyShortcutHUDCollectionViewManagerClient> _toolbar;	// 32 = 0x20
    id <_UIKeyShortcutHUDCollectionViewManagerClient> _searchButton;	// 40 = 0x28
    _UIKeyShortcutHUDIndexPath *_selectedIndexPath;	// 48 = 0x30
    _UIKeyShortcutHUDIndexPath *_highlightedIndexPath;	// 56 = 0x38
    _UIKeyShortcutHUDIndexPath *_categoryVisibleIndexPath;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000081c883
@property(retain, nonatomic) _UIKeyShortcutHUDIndexPath *categoryVisibleIndexPath; // @synthesize categoryVisibleIndexPath=_categoryVisibleIndexPath;
@property(retain, nonatomic) _UIKeyShortcutHUDIndexPath *highlightedIndexPath; // @synthesize highlightedIndexPath=_highlightedIndexPath;
@property(retain, nonatomic) _UIKeyShortcutHUDIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(nonatomic) _Bool nextFocusUpdatePrefersTopSearchResult; // @synthesize nextFocusUpdatePrefersTopSearchResult=_nextFocusUpdatePrefersTopSearchResult;
@property(nonatomic) __weak id <_UIKeyShortcutHUDCollectionViewManagerClient> searchButton; // @synthesize searchButton=_searchButton;
@property(nonatomic) __weak id <_UIKeyShortcutHUDCollectionViewManagerClient> toolbar; // @synthesize toolbar=_toolbar;
@property(nonatomic) __weak id <_UIKeyShortcutHUDCollectionViewManagerClient> menu; // @synthesize menu=_menu;
@property(nonatomic) __weak _UIKeyShortcutHUDViewController *hudVC; // @synthesize hudVC=_hudVC;
- (void)_collectionView:(id)arg1 updateSeparatorVisibilityForCellAtIndexPath:(id)arg2;	// IMP=0x000000000081c3fa
- (void)_collectionView:(id)arg1 performActionForSelectingCellAtIndexPath:(id)arg2;	// IMP=0x000000000081c37c
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000000081c33f
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x000000000081c20a
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000081c0f7
- (_Bool)collectionView:(id)arg1 selectionFollowsFocusForItemAtIndexPath:(id)arg2;	// IMP=0x000000000081c07a
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000081bf6a
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;	// IMP=0x000000000081beef
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;	// IMP=0x000000000081be74
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;	// IMP=0x000000000081bdf9
- (void)_client:(id)arg1 performBookkeepingForSettingCategoryVisibleForCellAtIndexPath:(id)arg2;	// IMP=0x000000000081bdc0
- (void)_client:(id)arg1 setCategoryVisibleForCellAtIndexPath:(id)arg2;	// IMP=0x000000000081bcf6
- (void)_client:(id)arg1 performBookkeepingForRemovingCategoryVisibleForCellAtIndexPath:(id)arg2;	// IMP=0x000000000081bcdc
- (void)_client:(id)arg1 removeCategoryVisibleForCellAtIndexPath:(id)arg2;	// IMP=0x000000000081bc15
- (void)client:(id)arg1 setCategoryVisibleForCellAtIndexPath:(id)arg2;	// IMP=0x000000000081bb44
- (_Bool)client:(id)arg1 isCategoryVisibleForCellAtIndexPath:(id)arg2;	// IMP=0x000000000081ba88
- (void)_client:(id)arg1 performBookkeepingForHighlightingCellAtIndexPath:(id)arg2;	// IMP=0x000000000081b9ca
- (void)_client:(id)arg1 highlightCellAtIndexPath:(id)arg2;	// IMP=0x000000000081b900
- (void)_client:(id)arg1 performBookkeepingForUnhighlightingCellAtIndexPath:(id)arg2;	// IMP=0x000000000081b879
- (void)_client:(id)arg1 unhighlightCellAtIndexPath:(id)arg2;	// IMP=0x000000000081b7b2
- (void)client:(id)arg1 highlightCellAtIndexPath:(id)arg2;	// IMP=0x000000000081b6e1
- (void)deselectCurrentlySelectedCell;	// IMP=0x000000000081b65d
- (void)_client:(id)arg1 performBookkeepingForSelectingCellAtIndexPath:(id)arg2;	// IMP=0x000000000081b59f
- (void)_client:(id)arg1 selectCellAtIndexPath:(id)arg2;	// IMP=0x000000000081b4f2
- (void)_client:(id)arg1 performBookkeepingForDeselectingCellAtIndexPath:(id)arg2;	// IMP=0x000000000081b46b
- (void)_client:(id)arg1 deselectCellAtIndexPath:(id)arg2;	// IMP=0x000000000081b3c1
- (void)client:(id)arg1 selectCellAtIndexPath:(id)arg2;	// IMP=0x000000000081b2f0
- (void)client:(id)arg1 flashCellIfPossibleAtIndexPath:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000081af62
- (void)reloadAllVisibleSeparatorsForClient:(id)arg1;	// IMP=0x000000000081ada7
- (void)client:(id)arg1 reloadSeparatorAtIndexPath:(id)arg2;	// IMP=0x000000000081ac95
- (_Bool)client:(id)arg1 shouldHideSeparatorAtIndexPath:(id)arg2;	// IMP=0x000000000081a8a0
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000081a733
@property(readonly, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly, nonatomic) NSArray *allClients;
- (id)_clientForCollectionView:(id)arg1;	// IMP=0x000000000081a232
- (void)_configureCollectionView:(id)arg1;	// IMP=0x000000000081a12e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
