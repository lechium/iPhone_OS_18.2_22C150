//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewFlowLayout.h>

@class NSIndexPath;

__attribute__((visibility("hidden")))
@interface SKUICarouselCollectionViewLayout : UICollectionViewFlowLayout
{
    NSIndexPath *_startScrollingIndexPath;	// 8 = 0x8
}

+ (Class)layoutAttributesClass;	// IMP=0x00600000000e2aeb
- (void).cxx_destruct;	// IMP=0x00000000000e34ef
@property(retain, nonatomic) NSIndexPath *startScrollingIndexPath; // @synthesize startScrollingIndexPath=_startScrollingIndexPath;
- (void)_panGestureRecognized:(id)arg1;	// IMP=0x00000000000e3402
- (struct CGPoint)_collectionViewBoundsCenter;	// IMP=0x00000000000e3368
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;	// IMP=0x00000000000e2f78
- (void)prepareForTransitionToLayout:(id)arg1;	// IMP=0x00000000000e2e7c
- (void)prepareLayout;	// IMP=0x00000000000e2d3c
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x00000000000e2afc

@end

