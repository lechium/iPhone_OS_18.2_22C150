//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSString, SKUIVerticalLockupView;

__attribute__((visibility("hidden")))
@interface SKUIEditorialCardCollectionViewCell
{
    NSMutableArray *_allLockupViews;	// 8 = 0x8
    SKUIVerticalLockupView *_primaryLockupView;	// 16 = 0x10
    struct CGSize _primaryLockupSize;	// 24 = 0x18
}

+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x00100000002013e3
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0010000000201225
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x0010000000201192
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x0010000000201021
+ (double)maximumPerspectiveHeightForSize:(struct CGSize)arg1;	// IMP=0x0010000000200f90
- (void).cxx_destruct;	// IMP=0x000000000020243b
- (void)layoutSubviews;	// IMP=0x0000000000201fab
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x0000000000201e34
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000201c90
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x0000000000201adc
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x000000000020163b
- (void)updateForChangedDistanceFromVanishingPoint;	// IMP=0x0000000000201004
- (void)setVanishingPoint:(struct CGPoint)arg1;	// IMP=0x0000000000200fe7
- (void)setPerspectiveTargetView:(id)arg1;	// IMP=0x0000000000200fa9
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000200ea9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

