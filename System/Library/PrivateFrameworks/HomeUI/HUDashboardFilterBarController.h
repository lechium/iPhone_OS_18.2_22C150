//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HUControllableItemCollectionViewController.h"

@class MISSING_TYPE, NSString;
@protocol HUDashboardFilterBarDelegate;

@interface HUDashboardFilterBarController : HUControllableItemCollectionViewController
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *contextTypeDescriptionForAnalytics;	// 16 = 0x10
    MISSING_TYPE *layoutConstraints;	// 32 = 0x20
    MISSING_TYPE *$__lazy_storage_$_heightConstraint;	// 40 = 0x28
    MISSING_TYPE *preferredHeight;	// 48 = 0x30
    MISSING_TYPE *$__lazy_storage_$_blurGroupingEffectView;	// 56 = 0x38
    MISSING_TYPE *_layoutOptions;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000001a6560
- (id)initUsingCompositionalLayoutWithItemManager:(id)arg1;	// IMP=0x00000000001a6500
- (id)initWithItemManager:(id)arg1 collectionViewLayout:(id)arg2;	// IMP=0x00000000001a6450
- (_Bool)presentationCoordinator:(id)arg1 shouldBeginLongPressPresentationWithContext:(id)arg2;	// IMP=0x00000000001a63c0
- (void)setReorderableItemList:(id)arg1 forSection:(long long)arg2;	// IMP=0x00000000001a57c0
- (id)reorderableItemListForSection:(long long)arg1;	// IMP=0x00000000001a5710
- (_Bool)canReorderItemAtIndexPath:(id)arg1;	// IMP=0x00000000001a5650
- (id)_performTapActionForItem:(id)arg1 tappedArea:(id)arg2;	// IMP=0x00000000001a5520
- (_Bool)_hasTapActionForItem:(id)arg1;	// IMP=0x00000000001a5100
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x00000000001a5050
- (void)diffableDataItemManager:(id)arg1 willUpdateItems:(id)arg2 addItems:(id)arg3 removeItems:(id)arg4 isInitialLoad:(_Bool)arg5;	// IMP=0x00000000001a4610
- (id)layoutSectionForSection:(long long)arg1 layoutEnvironment:(id)arg2;	// IMP=0x00000000001a4370
- (id)compositionalLayoutConfigurationForTraitCollection:(id)arg1;	// IMP=0x00000000001a42e0
- (void)configureCell:(id)arg1 forItem:(id)arg2;	// IMP=0x00000000001a4270
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;	// IMP=0x00000000001a4070
@property(nonatomic, readonly) double intrinsicHeight;
- (void)updateWithContext:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001a3dc0
- (void)resetAnimated:(_Bool)arg1;	// IMP=0x00000000001a3760
@property(nonatomic, copy) NSString *contextTypeDescriptionForAnalytics;
@property(nonatomic) __weak id <HUDashboardFilterBarDelegate> delegate; // @synthesize delegate;
- (void)viewDidLayoutSubviews;	// IMP=0x00000000001a31b0
- (void)viewIsAppearing:(_Bool)arg1;	// IMP=0x00000000001a2fe0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000001a2f50
- (void)viewDidLoad;	// IMP=0x00000000001a2f20
- (id)init;	// IMP=0x00000000001a2d30
- (void)handleTraitChanges;	// IMP=0x00000000001a74a0

@end

