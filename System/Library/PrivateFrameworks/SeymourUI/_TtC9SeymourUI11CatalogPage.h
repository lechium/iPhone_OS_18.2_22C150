//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, UICollectionView;

@interface _TtC9SeymourUI11CatalogPage : NSObject
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *dataSource;	// 24 = 0x18
    MISSING_TYPE *shouldAutomaticallyDeselectItem;	// 32 = 0x20
    MISSING_TYPE *currentSnapshotBacking;	// 40 = 0x28
    MISSING_TYPE *previousSnapshotBacking;	// 48 = 0x30
    MISSING_TYPE *collectionView;	// 56 = 0x38
    MISSING_TYPE *identifier;	// 64 = 0x40
    MISSING_TYPE *impressionsTracker;	// 80 = 0x50
    MISSING_TYPE *layoutSections;	// 120 = 0x78
    MISSING_TYPE *locationStore;	// 128 = 0x80
    MISSING_TYPE *platform;	// 168 = 0xa8
    MISSING_TYPE *shelves;	// 176 = 0xb0
    MISSING_TYPE *shelfOffsetPerLayoutSection;	// 184 = 0xb8
    MISSING_TYPE *storefrontRTLHandlingCellsFlag;	// 192 = 0xc0
    MISSING_TYPE *viewFactory;	// 200 = 0xc8
    MISSING_TYPE *pendingUpdatesCount;	// 216 = 0xd8
    MISSING_TYPE *registrationProviderByShelfID;	// 224 = 0xe0
    MISSING_TYPE *safeAreaObservingIndexPaths;	// 232 = 0xe8
    MISSING_TYPE *snapshotTimestamps;	// 240 = 0xf0
    MISSING_TYPE *mostRecentlyPresentedOverlayDisplayingCell;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x0000000000971430
- (id)init;	// IMP=0x00000000009713b0
@property(nonatomic, readonly) UICollectionView *accessibilityCollectionView;
- (void)rebuildLocations;	// IMP=0x0000000000971fa0
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x0000000000979180
- (void)collectionView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x0000000000979000
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemsAtIndexPaths:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x0000000000978f00
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0000000000978e00
- (struct CGPoint)collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint)arg2;	// IMP=0x0000000000978ca0
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(struct CGPoint *)arg3;	// IMP=0x0000000000978b40
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000000978a60
- (void)scrollViewDidChangeAdjustedContentInset:(id)arg1;	// IMP=0x0000000000978940
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000000978440
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000000978410
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x0000000000978340
- (id)collectionView:(id)arg1 targetIndexPathForMoveOfItemFromOriginalIndexPath:(id)arg2 atCurrentIndexPath:(id)arg3 toProposedIndexPath:(id)arg4;	// IMP=0x0000000000978200
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000978080
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;	// IMP=0x00000000009796b0

@end
