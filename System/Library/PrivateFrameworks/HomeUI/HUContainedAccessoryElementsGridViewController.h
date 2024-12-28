//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HUControllableItemCollectionViewController.h"

@class HFItem, HFMediaAccessoryItem, MISSING_TYPE;
@protocol HFAccessoryRepresentableItem, HUContainedAccessoryElementsGridViewControllerDelegate, HUPresentationDelegate, HUServiceContainerItem><NSCopying;

@interface HUContainedAccessoryElementsGridViewController : HUControllableItemCollectionViewController
{
    MISSING_TYPE *isPresentedModally;	// 8 = 0x8
    MISSING_TYPE *requiresPresentingViewControllerDismissal;	// 9 = 0x9
    MISSING_TYPE *presentationDelegate;	// 16 = 0x10
    MISSING_TYPE *$__lazy_storage_$_collectionLayoutManager;	// 24 = 0x18
    MISSING_TYPE *serviceContainingItem;	// 32 = 0x20
    MISSING_TYPE *mediaItem;	// 40 = 0x28
    MISSING_TYPE *serviceGridDelegate;	// 48 = 0x30
    MISSING_TYPE *cellBackgroundDisplayStyle;	// 56 = 0x38
    MISSING_TYPE *shouldGroupByRoom;	// 64 = 0x40
    MISSING_TYPE *showTilePrefixes;	// 65 = 0x41
    MISSING_TYPE *cellInsetsLayoutMarginsFromSafeArea;	// 66 = 0x42
    MISSING_TYPE *dataModelObservationCancelable;	// 72 = 0x48
    MISSING_TYPE *actionSetDataModel;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000016d3e0
- (id)initUsingCompositionalLayoutWithItemManager:(id)arg1;	// IMP=0x000000000016d390
- (id)initWithItemManager:(id)arg1 collectionViewLayout:(id)arg2;	// IMP=0x000000000016d2e0
- (id)detailsViewControllerForPresentationCoordinator:(id)arg1 item:(id)arg2;	// IMP=0x000000000016d1f0
- (_Bool)hasDetailsActionForPresentationCoordinator:(id)arg1 item:(id)arg2;	// IMP=0x000000000016d110
- (void)accessoryControlViewControllerFor:(HFItem<HFAccessoryRepresentableItem> *)arg1 tileItem:(HFItem *)arg2 completionHandler:(void (^)(UIViewController<HUPresentationDelegateHost> *))arg3;	// IMP=0x000000000016cea0
- (id)layoutSectionForSection:(long long)arg1 layoutEnvironment:(id)arg2;	// IMP=0x000000000016ce40
- (void)itemManagerDidUpdate:(id)arg1;	// IMP=0x000000000016caa0
- (void)configureCell:(id)arg1 forItem:(id)arg2;	// IMP=0x000000000016c7f0
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;	// IMP=0x000000000016c360
- (void)viewDidLoad;	// IMP=0x000000000016c2a0
- (id)initWithServiceContainingItem:(id)arg1 mediaItem:(id)arg2 isPresentedModally:(_Bool)arg3 shouldGroupByRoom:(_Bool)arg4 valueSource:(id)arg5;	// IMP=0x000000000016c240
- (id)initWithMediaItem:(id)arg1 isPresentedModally:(_Bool)arg2 shouldGroupByRoom:(_Bool)arg3 valueSource:(id)arg4;	// IMP=0x000000000016bdf0
- (id)initWithServiceContainingItem:(id)arg1 isPresentedModally:(_Bool)arg2 shouldGroupByRoom:(_Bool)arg3 valueSource:(id)arg4;	// IMP=0x000000000016bc90
@property(nonatomic) __weak id <HUContainedAccessoryElementsGridViewControllerDelegate> serviceGridDelegate; // @synthesize serviceGridDelegate;
@property(nonatomic, retain) HFMediaAccessoryItem *mediaItem; // @synthesize mediaItem;
@property(nonatomic, retain) HFItem<HUServiceContainerItem><NSCopying> *serviceContainingItem; // @synthesize serviceContainingItem;
@property(nonatomic, retain) id <HUPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate;
@property(nonatomic) _Bool requiresPresentingViewControllerDismissal; // @synthesize requiresPresentingViewControllerDismissal;
- (id)finishPresentation:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000016d7b0
- (_Bool)shouldShowHeaderForSection:(id)arg1;	// IMP=0x000000000016d680
- (id)displayedItemsInSection:(id)arg1;	// IMP=0x000000000016d540
- (void)editWithSender:(id)arg1;	// IMP=0x000000000016dbe0
- (void)doneWithSender:(id)arg1;	// IMP=0x000000000016d820

@end
