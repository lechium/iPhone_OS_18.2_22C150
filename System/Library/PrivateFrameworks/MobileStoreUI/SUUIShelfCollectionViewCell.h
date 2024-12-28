//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUICollectionViewCell.h"

@class NSString, UICollectionView;

__attribute__((visibility("hidden")))
@interface SUUIShelfCollectionViewCell : SUUICollectionViewCell
{
    UICollectionView *_collectionView;	// 8 = 0x8
    struct UIEdgeInsets _contentInset;	// 16 = 0x10
    _Bool _rendersWithPerspective;	// 48 = 0x30
    _Bool _rendersWithParallax;	// 49 = 0x31
}

+ (double)maximumPerspectiveHeightForSize:(struct CGSize)arg1;	// IMP=0x00100000002103a5
- (void).cxx_destruct;	// IMP=0x0000000000210431
@property(nonatomic) _Bool rendersWithParallax; // @synthesize rendersWithParallax=_rendersWithParallax;
@property(nonatomic) _Bool rendersWithPerspective; // @synthesize rendersWithPerspective=_rendersWithPerspective;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)updateForChangedDistanceFromVanishingPoint;	// IMP=0x00000000002103ba
- (void)setVanishingPoint:(struct CGPoint)arg1;	// IMP=0x00000000002103b4
- (void)setPerspectiveTargetView:(id)arg1;	// IMP=0x00000000002103ae
- (void)setBackgroundColor:(id)arg1;	// IMP=0x0000000000210333
- (void)layoutSubviews;	// IMP=0x0000000000210194
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x0000000000210103
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x000000000021000f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
