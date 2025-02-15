//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUISwooshViewController.h"

@class NSString, SKUISwooshPageComponent, SKUISwooshView, UICollectionView;
@protocol SKUIGallerySwooshViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUIGallerySwooshViewController : SKUISwooshViewController
{
    UICollectionView *_collectionView;	// 8 = 0x8
    _Bool _delegateWantsWillDisplay;	// 16 = 0x10
    SKUISwooshPageComponent *_gallerySwoosh;	// 24 = 0x18
    double _itemHeight;	// 32 = 0x20
    SKUISwooshView *_swooshView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000034da9d
@property(readonly, nonatomic) SKUISwooshPageComponent *gallerySwoosh; // @synthesize gallerySwoosh=_gallerySwoosh;
- (id)_newViewWithMediaComponent:(id)arg1;	// IMP=0x000000000034d9a9
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000000034d925
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x000000000034d8fb
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000034d867
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000034d818
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000034d4a6
- (void)mediaView:(id)arg1 playbackStateDidChange:(long long)arg2;	// IMP=0x000000000034d354
- (void)loadView;	// IMP=0x000000000034cfdb
- (void)setImage:(id)arg1 forItemAtIndex:(long long)arg2;	// IMP=0x000000000034cf16
@property(nonatomic) __weak id <SKUIGallerySwooshViewControllerDelegate> delegate; // @dynamic delegate;
- (id)indexPathsForVisibleItems;	// IMP=0x000000000034ce8a
- (void)setColorScheme:(id)arg1;	// IMP=0x000000000034cdf5
- (void)performActionForItemAtIndex:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000034cd4a
- (id)artworkForItemAtIndex:(long long)arg1;	// IMP=0x000000000034ccbf
- (id)initWithGallerySwoosh:(id)arg1;	// IMP=0x000000000034caf0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

