//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSArray;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI23AlertTemplateController
{
    MISSING_TYPE *contextMenuDelegate;	// 24 = 0x18
    MISSING_TYPE *dynamicButtons;	// 40 = 0x28
    MISSING_TYPE *collectionViewModels;	// 48 = 0x30
    MISSING_TYPE *collectionTableItems;	// 56 = 0x38
    MISSING_TYPE *templateViewModel;	// 64 = 0x40
    MISSING_TYPE *lastFocusedIndexPath;	// 3219098600 = 0xbfdf8be8
    MISSING_TYPE *updateAutoHighlight;	// 1581341761 = 0x5e415c41
}

- (void).cxx_destruct;	// IMP=0x00000000009203f9
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000920332
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000920220
- (void)vui_viewDidLayoutSubviews;	// IMP=0x000000000091f23a
- (void)vui_viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000091f024
- (void)vui_loadView;	// IMP=0x000000000091ef44
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;
- (void)collectionView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000920fab
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000920f36
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0000000000920ebd
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x0000000000920c78
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x0000000000920ae0
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000920a37
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000092057c
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000000920556

@end
