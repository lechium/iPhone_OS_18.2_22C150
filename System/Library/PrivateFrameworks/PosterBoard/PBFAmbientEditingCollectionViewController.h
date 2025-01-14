//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewController.h>

#import <PosterBoard/BSInvalidatable-Protocol.h>

@class FBSDisplayConfiguration, MISSING_TYPE, UIView;
@protocol PBFAmbientEditingCollectionViewControllerDelegate;

@interface PBFAmbientEditingCollectionViewController : UICollectionViewController <BSInvalidatable>
{
    MISSING_TYPE *_displayConfiguration;	// 8 = 0x8
    MISSING_TYPE *ambientEditingDelegate;	// 16 = 0x10
    MISSING_TYPE *transitionOverlayView;	// 24 = 0x18
    MISSING_TYPE *layout;	// 32 = 0x20
    MISSING_TYPE *hasScrolledToActivePosterForInitialViewLayout;	// 40 = 0x28
    MISSING_TYPE *desiredSpacingFromCardToPageControl;	// 48 = 0x30
    MISSING_TYPE *buttonDistanceFromScreenTop;	// 56 = 0x38
    MISSING_TYPE *buttonDistanceFromScreenEdge;	// 64 = 0x40
    MISSING_TYPE *buttonWidth;	// 72 = 0x48
    MISSING_TYPE *buttonHeight;	// 80 = 0x50
    MISSING_TYPE *dataStore;	// 88 = 0x58
    MISSING_TYPE *posters;	// 96 = 0x60
    MISSING_TYPE *activePosterConfiguration;	// 104 = 0x68
    MISSING_TYPE *activePosterProvider;	// 112 = 0x70
    MISSING_TYPE *doneButton;	// 128 = 0x80
    MISSING_TYPE *addButton;	// 136 = 0x88
    MISSING_TYPE *finishDismiss;	// 144 = 0x90
    MISSING_TYPE *pageControl;	// 152 = 0x98
    MISSING_TYPE *pageControlPreferredNumberOfVisibleIndicators;	// 160 = 0xa0
    MISSING_TYPE *availableInstanceIdentifiers;	// 168 = 0xa8
    MISSING_TYPE *$__lazy_storage_$_snapshotController;	// 176 = 0xb0
    MISSING_TYPE *editingSceneHiddenWindow;	// 184 = 0xb8
    MISSING_TYPE *editingSceneViewController;	// 192 = 0xc0
    MISSING_TYPE *presentedEditingRemoteViewController;	// 200 = 0xc8
    MISSING_TYPE *presentedEditingRemoteViewContentScreenRect;	// 208 = 0xd0
    MISSING_TYPE *isScrollingOrSettling;	// 241 = 0xf1
    MISSING_TYPE *observers;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x000000000017fa00
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000017f9a0
- (id)initWithCollectionViewLayout:(id)arg1;	// IMP=0x000000000017f8d0
- (void)invalidate;	// IMP=0x000000000017f7e0
- (void)posterExtensionDataStore:(id)arg1 didUpdateConfiguration:(id)arg2;	// IMP=0x000000000017f3e0
- (void)posterExtensionDataStore:(id)arg1 didDeleteConfiguration:(id)arg2;	// IMP=0x000000000017eb80
- (void)posterExtensionDataStore:(id)arg1 didAddConfiguration:(id)arg2;	// IMP=0x000000000017e500
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x000000000017dd00
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x000000000017dca0
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x0000000000181eb0
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(struct CGPoint *)arg3;	// IMP=0x000000000017dc10
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x000000000017dbe0
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000000017db50
- (void)editingSceneViewController:(id)arg1 wantsRemotePresentationOfViewController:(id)arg2 contentScreenRect:(struct CGRect)arg3;	// IMP=0x000000000017da70
- (void)editingSceneViewController:(id)arg1 userDidDismissWithAction:(long long)arg2 updatedConfiguration:(id)arg3 updatedConfiguredProperties:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000017d530
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000017d310
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000017d250
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000017d190
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000000017cd40
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000017c9b0
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000017c5e0
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000000017c510
- (void)pageControlDidChangePage:(id)arg1;	// IMP=0x000000000017a480
- (void)dismiss;	// IMP=0x0000000000174730
@property(nonatomic, retain) UIView *transitionOverlayView; // @synthesize transitionOverlayView;
@property(nonatomic) __weak id <PBFAmbientEditingCollectionViewControllerDelegate> ambientEditingDelegate; // @synthesize ambientEditingDelegate;
- (void)viewDidLayoutSubviews;	// IMP=0x00000000001730a0
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000172cb0
- (void)viewDidLoad;	// IMP=0x0000000000172bb0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000172ae0
- (id)init:(id)arg1;	// IMP=0x0000000000172680
- (id)init;	// IMP=0x0000000000171f50
@property(nonatomic, retain) FBSDisplayConfiguration *displayConfiguration;

@end

