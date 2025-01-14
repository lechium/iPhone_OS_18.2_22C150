//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionView.h>

@class SUUIIndexBarControl, UICollectionViewLayout, UIRefreshControl;

__attribute__((visibility("hidden")))
@interface SUUICollectionView : UICollectionView
{
    _Bool _delegateWantsWillLayoutSubviews;	// 8 = 0x8
    _Bool _externalShowsHorizontalScrollIndicator;	// 9 = 0x9
    _Bool _externalShowsVerticalScrollIndicator;	// 10 = 0xa
    double _overrideBoundsWidth;	// 16 = 0x10
    UICollectionViewLayout *_pendingCollectionViewLayout;	// 24 = 0x18
    UIRefreshControl *_refreshControl;	// 32 = 0x20
    SUUIIndexBarControl *_indexBarControl;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000213700
@property(retain, nonatomic) SUUIIndexBarControl *indexBarControl; // @synthesize indexBarControl=_indexBarControl;
@property(retain, nonatomic) UIRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(nonatomic) double overrideBoundsWidth; // @synthesize overrideBoundsWidth=_overrideBoundsWidth;
- (void)_updateShowsScrollIndicators;	// IMP=0x000000000021360a
- (void)_updateIndexBarControlFrame;	// IMP=0x000000000021340a
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x00000000002133ca
- (void)setShowsVerticalScrollIndicator:(_Bool)arg1;	// IMP=0x0000000000213258
- (void)setShowsHorizontalScrollIndicator:(_Bool)arg1;	// IMP=0x0000000000213235
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;	// IMP=0x00000000002131f4
- (void)layoutSubviews;	// IMP=0x0000000000213146
- (struct CGRect)bounds;	// IMP=0x00000000002130e5
- (void)setDelegate:(id)arg1;	// IMP=0x0000000000213069
- (void)setCollectionViewLayout:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000212fea
- (id)collectionViewLayout;	// IMP=0x0000000000212f91
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;	// IMP=0x0000000000212eea

@end

