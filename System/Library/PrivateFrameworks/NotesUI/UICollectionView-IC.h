//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionView.h>

@class NSArray, NSIndexPath;

@interface UICollectionView (IC)
@property(readonly) _Bool ic_selectionContainsFocusedItem;
@property(readonly, nonatomic) NSArray *indexPathsForFocusedItems;
- (void)ic_reloadDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x003000000009586a
- (void)ic_selectCellAtIndexPath:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0030000000095613
- (_Bool)ic_selectFirstItemIfNoneSelected;	// IMP=0x0030000000095577
- (struct CGRect)ic_frameForItemAtIndexPath:(id)arg1;	// IMP=0x00300000000954b4
@property(readonly, nonatomic) NSIndexPath *ic_middleVisibleIndexPath;
@property(readonly, nonatomic) struct CGRect ic_firstSelectedItemFrame;
@property(readonly, nonatomic) NSIndexPath *ic_firstItemIndexPath;
- (id)ic_cellAtLocation:(struct CGPoint)arg1;	// IMP=0x0030000000095218
- (void)ic_deselectAllItemsAnimated:(_Bool)arg1;	// IMP=0x00300000000950c7
- (void)ic_deselectAllItems;	// IMP=0x00300000000950b3
@end

