//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIStorePageSection.h"

@class NSMapTable, NSString, SKUIGridComponent, SKUIMissingItemLoader, UIImage;

__attribute__((visibility("hidden")))
@interface SKUIBrickGridPageSection : SKUIStorePageSection
{
    NSMapTable *_artworkRequests;	// 8 = 0x8
    double _baseHeight;	// 16 = 0x10
    double _columnWidth;	// 24 = 0x18
    NSMapTable *_editorialLayouts;	// 32 = 0x20
    SKUIMissingItemLoader *_missingItemLoader;	// 40 = 0x28
    long long _numberOfColumns;	// 48 = 0x30
    double _paddingHorizontal;	// 56 = 0x38
    double _paddingTop;	// 64 = 0x40
    UIImage *_placeholderImage;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000003566ed
- (id)_missingItemLoader;	// IMP=0x0000000000356626
- (void)_loadMissingItemsFromIndex:(long long)arg1 withReason:(long long)arg2;	// IMP=0x0000000000356594
- (void)_loadArtworkForBrick:(id)arg1 artworkLoader:(id)arg2 reason:(long long)arg3;	// IMP=0x00000000003563fc
- (void)_enumerateVisibleBricksUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000003561d0
- (id)_editorialLayoutForBrick:(id)arg1;	// IMP=0x000000000035607c
- (struct UIEdgeInsets)_contentInsetsForColumnIndex:(long long)arg1 rowWidth:(double)arg2;	// IMP=0x0000000000355f41
- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3;	// IMP=0x0000000000355cbf
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;	// IMP=0x0000000000355acf
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000003556f8
- (void)willAppearInContext:(id)arg1;	// IMP=0x00000000003553e3
- (void)prefetchResourcesWithReason:(long long)arg1;	// IMP=0x00000000003551dc
- (long long)numberOfCells;	// IMP=0x000000000035514f
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;	// IMP=0x0000000000354fc2
- (id)clickEventWithLink:(id)arg1 elementName:(id)arg2 index:(long long)arg3;	// IMP=0x0000000000354ead
- (struct CGSize)cellSizeForIndexPath:(id)arg1;	// IMP=0x0000000000354bb5
- (id)cellForIndexPath:(id)arg1;	// IMP=0x0000000000354743
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;	// IMP=0x00000000003545f5
- (void)dealloc;	// IMP=0x00000000003545aa
- (id)initWithPageComponent:(id)arg1;	// IMP=0x00000000003543c6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SKUIGridComponent *pageComponent; // @dynamic pageComponent;
@property(readonly) Class superclass;

@end

