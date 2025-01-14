//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, SKUIGiftThemeCollectionView, SKUIGiftThemePickerFlowLayout, UIImage, UIPageControl, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface SKUIGiftThemePickerViewController
{
    _Bool _animatingScrollView;	// 8 = 0x8
    SKUIGiftThemePickerFlowLayout *_flowLayout;	// 16 = 0x10
    SKUIGiftThemeCollectionView *_collectionView;	// 24 = 0x18
    UIImage *_itemImage;	// 32 = 0x20
    UIPageControl *_pageControl;	// 40 = 0x28
    long long _selectedThemeIndex;	// 48 = 0x30
    UITapGestureRecognizer *_tapGestureRecognizer;	// 56 = 0x38
    NSArray *_themes;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000a0e50
- (void)_setSelectedThemeIndex:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000a0df7
- (void)_setItemImage:(id)arg1 error:(id)arg2;	// IMP=0x00000000000a0c5d
- (double)_scrollInsetHorizontal:(id)arg1;	// IMP=0x00000000000a0c0e
- (void)_layoutCollectionViewWithTraits:(id)arg1;	// IMP=0x00000000000a0a0f
- (_Bool)_isIPadLarge;	// IMP=0x00000000000a0914
- (id)_flowLayout;	// IMP=0x00000000000a088e
- (double)_collectionViewWidth:(id)arg1;	// IMP=0x00000000000a0750
- (id)_collectionView;	// IMP=0x00000000000a0615
- (double)_cardWidth;	// IMP=0x00000000000a0583
- (double)_cardHeight:(id)arg1;	// IMP=0x00000000000a0434
- (void)_nextAction:(id)arg1;	// IMP=0x00000000000a02fa
- (void)_backgroundTapAction:(id)arg1;	// IMP=0x00000000000a014e
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00000000000a013d
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000000a006a
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x00000000000a0059
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x000000000009fff0
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000009ffd3
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000009fe67
- (void)giftConfigurationController:(id)arg1 didLoadImageForTheme:(id)arg2;	// IMP=0x000000000009fdae
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000009fd3a
- (void)viewWillLayoutSubviews;	// IMP=0x000000000009fcee
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000009fa0e
- (void)loadView;	// IMP=0x000000000009f4c4
- (void)dealloc;	// IMP=0x000000000009f443
- (id)initWithGift:(id)arg1 configuration:(id)arg2;	// IMP=0x000000000009f28d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

