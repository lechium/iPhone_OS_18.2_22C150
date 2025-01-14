//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, VUILibraryMenuItemViewCell, VUIViewControllerContentPresenter;
@protocol VUIHomeShareViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VUIHomeShareViewController
{
    id <VUIHomeShareViewControllerDelegate> _delegate;	// 8 = 0x8
    NSArray *_homeShares;	// 16 = 0x10
    VUILibraryMenuItemViewCell *_menuItemSizingCell;	// 24 = 0x18
    VUIViewControllerContentPresenter *_contentPresenter;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001f295b
@property(retain, nonatomic) VUIViewControllerContentPresenter *contentPresenter; // @synthesize contentPresenter=_contentPresenter;
@property(retain, nonatomic) VUILibraryMenuItemViewCell *menuItemSizingCell; // @synthesize menuItemSizingCell=_menuItemSizingCell;
@property(retain, nonatomic) NSArray *homeShares; // @synthesize homeShares=_homeShares;
@property(nonatomic) __weak id <VUIHomeShareViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_homeShareMediaLibrariesDidChange:(id)arg1;	// IMP=0x00000000001f27ab
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000001f26c4
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000000001f24d4
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x00000000001f24c9
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000001f2485
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000001f2309
- (void)configureWithCollectionView:(id)arg1;	// IMP=0x00000000001f2244
- (void)viewDidLoad;	// IMP=0x00000000001f20bd
- (void)viewWillLayoutSubviews;	// IMP=0x00000000001f1ff4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000001f1d8a
- (void)loadView;	// IMP=0x00000000001f1c80
- (void)dealloc;	// IMP=0x00000000001f1c0b
- (id)init;	// IMP=0x00000000001f1b2a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

