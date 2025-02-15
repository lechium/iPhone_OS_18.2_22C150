//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSLayoutConstraint, NSString, ShortcutsRowBackgroundView, SuggestionsDataProvider, UICollectionView, UICollectionViewCompositionalLayout, UICollectionViewDiffableDataSource, UITraitCollection, _TtC4Maps20MapsFavoritesManager;
@protocol ShortcutsRowCellProviderDelegate;

@interface ShortcutsRowCellProvider : NSObject
{
    UICollectionViewCompositionalLayout *_collectionViewLayout;	// 8 = 0x8
    NSArray *_shortcuts;	// 16 = 0x10
    NSArray *_shortcutsLegacy;	// 24 = 0x18
    NSArray *_cellModels;	// 32 = 0x20
    UICollectionViewDiffableDataSource *_diffableDataSource;	// 40 = 0x28
    ShortcutsRowBackgroundView *_backgroundView;	// 48 = 0x30
    NSDate *_lastCellTappedTimestamp;	// 56 = 0x38
    UICollectionView *_collectionView;	// 64 = 0x40
    id <ShortcutsRowCellProviderDelegate> _delegate;	// 72 = 0x48
    NSLayoutConstraint *_heightConstraint;	// 80 = 0x50
    SuggestionsDataProvider *_suggestionsDataProvider;	// 88 = 0x58
    _TtC4Maps20MapsFavoritesManager *_favoritesDataProvider;	// 96 = 0x60
    UITraitCollection *_traitCollection;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00200000009d271e
@property(retain, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(retain, nonatomic) _TtC4Maps20MapsFavoritesManager *favoritesDataProvider; // @synthesize favoritesDataProvider=_favoritesDataProvider;
@property(retain, nonatomic) SuggestionsDataProvider *suggestionsDataProvider; // @synthesize suggestionsDataProvider=_suggestionsDataProvider;
@property(readonly, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(nonatomic) __weak id <ShortcutsRowCellProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)_captureTapActionWithModel:(id)arg1;	// IMP=0x00100000009d2589
- (id)collectionView:(id)arg1 contextMenuConfiguration:(id)arg2 highlightPreviewForItemAtIndexPath:(id)arg3;	// IMP=0x00100000009d2481
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemsAtIndexPaths:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x00100000009d1f4a
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00100000009d1d59
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00100000009d1bdb
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00100000009d1bc9
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 itemIdentifier:(id)arg3;	// IMP=0x00100000009d1935
- (void)homeDataProvidingObjectDidUpdate:(id)arg1;	// IMP=0x00100000009d191e
- (id)_modelAtIndexPath:(id)arg1;	// IMP=0x00100000009d1877
- (void)_updateBackgroundView;	// IMP=0x00100000009d1861
- (void)_buildModels;	// IMP=0x00100000009d13f9
- (void)_updateContentAnimated:(_Bool)arg1;	// IMP=0x00100000009d10f9
- (id)_collectionViewLayout;	// IMP=0x00100000009d0a35
- (void)_updateHeightConstraint;	// IMP=0x00100000009d09a1
- (void)fetchMissingImages;	// IMP=0x00100000009d0879
- (id)initWithCollectionView:(id)arg1;	// IMP=0x00100000009d0413

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

