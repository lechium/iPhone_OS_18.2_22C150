//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIFocusContainerGuide.h"

@class UICollectionView;

__attribute__((visibility("hidden")))
@interface _UIFocusCollectionViewSectionContainerGuide : UIFocusContainerGuide
{
    long long _section;	// 64 = 0x40
    UICollectionView *_collectionView;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000001406bdf
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) long long section; // @synthesize section=_section;
- (void)_searchForFocusRegionsInContext:(id)arg1;	// IMP=0x0000000001406998
- (id)initWithCollectionView:(id)arg1;	// IMP=0x0000000001406931

@end

