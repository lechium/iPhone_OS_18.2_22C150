//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIStorePageSection.h"

@class NSMutableArray, NSString, SUUIInfoListViewElement, SUUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SUUIVerticalInfoListPageSection : SUUIStorePageSection
{
    SUUIViewElementLayoutContext *_cellLayoutContext;	// 8 = 0x8
    double _columnHeight;	// 16 = 0x10
    NSMutableArray *_columns;	// 24 = 0x18
    double _columnWidth;	// 32 = 0x20
    SUUIInfoListViewElement *_infoList;	// 40 = 0x28
    long long _numberOfColumns;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000023893a
- (void)_requestCellLayout;	// IMP=0x00000000002387c5
- (id)_reloadColumnDataIfNecessary;	// IMP=0x000000000023833d
- (long long)_numberOfColumnsForWidth:(double)arg1;	// IMP=0x00000000002382bd
- (void)_enumerateVisibleIndexPathsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000238158
- (struct UIEdgeInsets)_contentInsetForIndexPath:(id)arg1;	// IMP=0x000000000023806d
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;	// IMP=0x0000000000237ee9
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000237e48
- (void)willAppearInContext:(id)arg1;	// IMP=0x0000000000237cfe
- (struct UIEdgeInsets)sectionContentInset;	// IMP=0x0000000000237c98
- (void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2;	// IMP=0x0000000000237b72
- (long long)numberOfCells;	// IMP=0x0000000000237b2e
- (void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2;	// IMP=0x0000000000237aa5
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;	// IMP=0x00000000002379ae
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;	// IMP=0x00000000002378b7
- (struct CGSize)cellSizeForIndexPath:(id)arg1;	// IMP=0x000000000023780f
- (id)cellForIndexPath:(id)arg1;	// IMP=0x00000000002376a3
- (id)backgroundColorForIndexPath:(id)arg1;	// IMP=0x00000000002375b8
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;	// IMP=0x0000000000237531
- (id)initWithPageComponent:(id)arg1;	// IMP=0x0000000000237486

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

