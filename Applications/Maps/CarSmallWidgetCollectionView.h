//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class CarReloadWithCompletionCollectionView, NSArray, NSLayoutConstraint, NSString;

@interface CarSmallWidgetCollectionView : UIView
{
    CarReloadWithCompletionCollectionView *_collectionView;	// 8 = 0x8
    NSLayoutConstraint *_heightConstraint;	// 16 = 0x10
    double _cellWidth;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000eb76f4
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x0010000000eb76af
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0010000000eb769d
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0010000000eb7528
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0010000000eb7347
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0010000000eb7332
- (void)didSelectFocusableCollectionCell:(id)arg1;	// IMP=0x0010000000eb72db
- (void)didSelectItemAtIndexPath:(id)arg1;	// IMP=0x0010000000eb72d5
- (id)modelForItemAtIndexPath:(id)arg1;	// IMP=0x0010000000eb72cd
@property(readonly, nonatomic) NSArray *data;
- (void)refreshData;	// IMP=0x0010000000eb6fa9
- (struct CGSize)_cellSize;	// IMP=0x0010000000eb6cb5
- (void)layoutSubviews;	// IMP=0x0010000000eb6be1
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000eb6bcf
- (void)_updateHeightConstraint;	// IMP=0x0010000000eb6ae3
- (void)_commonInit;	// IMP=0x0010000000eb6594
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000eb6548
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000eb64eb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
