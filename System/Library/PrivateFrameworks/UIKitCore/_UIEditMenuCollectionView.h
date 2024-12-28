//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UICollectionView.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIEditMenuCollectionView : UICollectionView
{
    NSArray *_pages;	// 168 = 0xa8
    long long _targetPage;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x000000000124843a
@property(nonatomic) long long targetPage; // @synthesize targetPage=_targetPage;
@property(retain, nonatomic) NSArray *pages; // @synthesize pages=_pages;
- (_Bool)_contentOffsetIsAtPagingBoundary:(struct CGPoint)arg1;	// IMP=0x00000000012483d2
- (void)_prepareToPageWithHorizontalVelocity:(double)arg1 verticalVelocity:(double)arg2;	// IMP=0x00000000012481a2
- (double)clampedPageForPageProgress:(double)arg1;	// IMP=0x000000000124812c
- (void)scrollToTargetPageAnimated:(_Bool)arg1;	// IMP=0x0000000001247ecd
- (void)decrementTargetPage;	// IMP=0x0000000001247e9d
- (void)incrementTargetPage;	// IMP=0x0000000001247e37
- (void)resetTargetPage;	// IMP=0x0000000001247e04
- (double)viewWidthForPageProgress:(double)arg1;	// IMP=0x0000000001247c7f
- (struct CGPoint)contentOffsetForPage:(long long)arg1;	// IMP=0x0000000001247b17
- (double)pageProgressForContentOffset:(struct CGPoint)arg1 clamped:(_Bool)arg2;	// IMP=0x000000000124788c
@property(readonly, nonatomic) double currentPage;

@end
