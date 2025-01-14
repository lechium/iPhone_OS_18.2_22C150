//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PUActivitySharingController, UIViewController;

__attribute__((visibility("hidden")))
@interface PUPhotoKitShareActionPerformer
{
    UIViewController *_preheatedSharingViewController;	// 16 = 0x10
    PUActivitySharingController *_activitySharingController;	// 24 = 0x18
}

+ (_Bool)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2;	// IMP=0x00600000004ab27f
+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;	// IMP=0x00600000004ab1e1
- (void).cxx_destruct;	// IMP=0x00000000004ab136
@property(retain, nonatomic) PUActivitySharingController *activitySharingController; // @synthesize activitySharingController=_activitySharingController;
@property(retain, nonatomic) UIViewController *preheatedSharingViewController; // @synthesize preheatedSharingViewController=_preheatedSharingViewController;
- (id)_assetsFetchResultByAssetCollectionFromCollectionListFetchResult:(id)arg1 inDataSource:(id)arg2;	// IMP=0x00000000004aadef
- (void)performUserInteractionTask;	// IMP=0x00000000004aabd7
- (void)preheatUserInteractionTask;	// IMP=0x00000000004aaacf
- (id)_createSharingViewControllerFromCurrentSelection;	// IMP=0x00000000004aa23c

@end

