//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, PHAsset, PHFetchResult, PHPerson, PHResourceLocalAvailabilityRequest, PUActivitySharingViewModel, PUActivityViewController, PUCarouselSharingViewController, PUPhotosSharingStackViewController, PXSelectionSnapshot, UIActivityViewController;
@protocol PXActivitySharingControllerDelegate, PXActivityViewController;

__attribute__((visibility("hidden")))
@interface PUActivitySharingController : NSObject
{
    _Bool _activityViewControllerWasCreated;	// 8 = 0x8
    PUPhotosSharingStackViewController *_stackViewController;	// 16 = 0x10
    PHFetchResult *_initialAssetsFetchResult;	// 24 = 0x18
    _Bool _usePhotosStack;	// 32 = 0x20
    _Bool _allowsAirPlayActivity;	// 33 = 0x21
    _Bool _allowsSuggestLessPersonActivity;	// 34 = 0x22
    _Bool _excludeShareActivity;	// 35 = 0x23
    id <PXActivitySharingControllerDelegate> _delegate;	// 40 = 0x28
    PUActivitySharingViewModel *_viewModel;	// 48 = 0x30
    NSDictionary *_assetsFetchResultsByAssetCollection;	// 56 = 0x38
    PHPerson *_person;	// 64 = 0x40
    NSArray *_excludedActivityTypes;	// 72 = 0x48
    NSArray *_activities;	// 80 = 0x50
    PUCarouselSharingViewController *_carouselViewController;	// 88 = 0x58
    PHResourceLocalAvailabilityRequest *_resourcesPreheatRequest;	// 96 = 0x60
    PUActivityViewController *_internalActivityViewController;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000001aae49
@property(nonatomic) __weak PUActivityViewController *internalActivityViewController; // @synthesize internalActivityViewController=_internalActivityViewController;
@property(retain, nonatomic) PHResourceLocalAvailabilityRequest *resourcesPreheatRequest; // @synthesize resourcesPreheatRequest=_resourcesPreheatRequest;
@property(readonly, nonatomic) _Bool excludeShareActivity; // @synthesize excludeShareActivity=_excludeShareActivity;
@property(retain, nonatomic) PUCarouselSharingViewController *carouselViewController; // @synthesize carouselViewController=_carouselViewController;
@property(copy, nonatomic) NSArray *activities; // @synthesize activities=_activities;
@property(copy, nonatomic) NSArray *excludedActivityTypes; // @synthesize excludedActivityTypes=_excludedActivityTypes;
@property(retain, nonatomic) PHPerson *person; // @synthesize person=_person;
@property(nonatomic) _Bool allowsSuggestLessPersonActivity; // @synthesize allowsSuggestLessPersonActivity=_allowsSuggestLessPersonActivity;
@property(nonatomic) _Bool allowsAirPlayActivity; // @synthesize allowsAirPlayActivity=_allowsAirPlayActivity;
@property(copy, nonatomic) NSDictionary *assetsFetchResultsByAssetCollection; // @synthesize assetsFetchResultsByAssetCollection=_assetsFetchResultsByAssetCollection;
@property(retain, nonatomic) PUActivitySharingViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <PXActivitySharingControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updatePreheatResourcesRequest;	// IMP=0x00000000001aac36
- (void)_cancelPreheatResourcesRequest;	// IMP=0x00000000001aabdc
- (void)_handlePreheatRequestCompletionWithSuccess:(_Bool)arg1 cancelled:(_Bool)arg2 error:(id)arg3;	// IMP=0x00000000001aa94f
- (void)_preheatResources;	// IMP=0x00000000001aa800
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000001aa746
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x00000000001aa6fa
- (void)carouselSharingViewController:(id)arg1 replaceAssetItem:(id)arg2 withAssetItem:(id)arg3;	// IMP=0x00000000001aa65c
- (void)carouselSharingViewController:(id)arg1 setAssetItems:(id)arg2;	// IMP=0x00000000001aa4e4
- (void)carouselSharingViewController:(id)arg1 removeAssetItem:(id)arg2;	// IMP=0x00000000001aa38b
- (void)carouselSharingViewController:(id)arg1 addAssetItem:(id)arg2;	// IMP=0x00000000001aa1e3
- (void)_updateSelectedAssetIdentifiers;	// IMP=0x00000000001aa0ff
- (void)_updateActionSheetPresentationStyleIfNeeded;	// IMP=0x00000000001a9f2a
- (void)activityViewControllerWillDisappear:(id)arg1;	// IMP=0x00000000001a9f18
- (_Bool)activityViewControllerShouldCancelAfterPreparationCanceled:(id)arg1;	// IMP=0x00000000001a9e1a
- (void)activityViewControllerDidFinishAirdropTransfer:(id)arg1;	// IMP=0x00000000001a9e08
- (void)_activitySharingControllerWillDismissActivityViewController;	// IMP=0x00000000001a9d6a
- (void)_cancel;	// IMP=0x00000000001a9c2a
- (void)_incrementShareCountForSelectedAssets;	// IMP=0x00000000001a99c6
- (_Bool)_shouldIncrementShareCountForActivityType:(id)arg1;	// IMP=0x00000000001a9961
@property(readonly, nonatomic) PHAsset *currentAsset;
- (void)_activityViewControllerDidCompleteWithActivityType:(id)arg1 success:(_Bool)arg2 error:(id)arg3;	// IMP=0x00000000001a966e
- (void)_updateExcludedActivityTypes;	// IMP=0x00000000001a93d1
- (id)_createActivityViewControllerWithActivities:(id)arg1;	// IMP=0x00000000001a8c06
- (id)_assetItemsForAssetsFetchResult:(id)arg1;	// IMP=0x00000000001a8a2d
- (void)selectInitialAssets;	// IMP=0x00000000001a8953
@property(readonly, nonatomic) NSArray *selectedAssets;
@property(readonly, nonatomic) NSDictionary *selectedAssetsByAssetCollection;
@property(readonly, nonatomic) PXSelectionSnapshot *selectionSnapshot;
- (id)photosDataSource;	// IMP=0x00000000001a874d
@property(readonly, nonatomic) UIActivityViewController<PXActivityViewController> *activityViewController;
- (id)activityViewControllerIfAvailable;	// IMP=0x00000000001a83a8
- (void)_createPhotosViewControllerIfNeeded;	// IMP=0x00000000001a8067
- (id)initWithActivitySharingConfiguration:(id)arg1;	// IMP=0x00000000001a7dc0
- (id)new;	// IMP=0x00000000001a7d46
- (id)init;	// IMP=0x00000000001a7ccc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

