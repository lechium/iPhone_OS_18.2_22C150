//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionView.h>

@class NSArray;

@interface UICollectionView (MailUI)
- (_Bool)mui_isIndexPathVisible:(id)arg1;	// IMP=0x003000000003a9e4
@property(readonly, nonatomic) struct CGRect mui_safeVisibleBounds;
- (void)mui_scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(long long)arg2 animated:(_Bool)arg3;	// IMP=0x003000000003a945
- (void)mui_selectItemAtIndexPath:(id)arg1 animated:(_Bool)arg2 scrollPosition:(long long)arg3;	// IMP=0x003000000003a927
@property(readonly, nonatomic) NSArray *mui_indexPathsForPreparedItems;
@property(readonly, nonatomic) NSArray *mui_sortedIndexPathsForVisibleItems;
- (void)mui_interactiveDeselectAllSelectedIndexPathsUsingTransitionCoordinator:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0030000000062b22
@end
