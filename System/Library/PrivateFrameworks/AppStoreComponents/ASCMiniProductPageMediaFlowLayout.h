//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewFlowLayout.h>

__attribute__((visibility("hidden")))
@interface ASCMiniProductPageMediaFlowLayout : UICollectionViewFlowLayout
{
    long long _indexAtInitialScroll;	// 8 = 0x8
}

@property(nonatomic) long long indexAtInitialScroll; // @synthesize indexAtInitialScroll=_indexAtInitialScroll;
- (void)panGestureRecognizedByRecognizer:(id)arg1;	// IMP=0x000000000004bc99
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;	// IMP=0x000000000004b724
- (void)prepareForTransitionToLayout:(id)arg1;	// IMP=0x000000000004b68d
- (void)prepareLayout;	// IMP=0x000000000004b597
- (struct CGPoint)collectionViewBoundsMidpoint;	// IMP=0x000000000004b46a
- (void)dealloc;	// IMP=0x000000000004b3d4
- (id)init;	// IMP=0x000000000004b383

@end

