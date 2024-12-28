//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol PUOneUpActionsControllerDelegate, PUOneUpActionsControllerPopoverHelper, PUOneUpDefaultActionsControllerActionManagerSource;

@interface PUOneUpDefaultActionsController : NSObject
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *assetActionManagerSource;	// 16 = 0x10
    MISSING_TYPE *popoverHelper;	// 24 = 0x18
    MISSING_TYPE *activeActionPerformer;	// 32 = 0x20
    MISSING_TYPE *activeAssetActionPerformer;	// 40 = 0x28
    MISSING_TYPE *browsingSession;	// 48 = 0x30
    MISSING_TYPE *viewController;	// 56 = 0x38
    MISSING_TYPE *preheatedSharingPerformer;	// 64 = 0x40
    MISSING_TYPE *preheatedSharingAssetReferences;	// 72 = 0x48
    MISSING_TYPE *$__lazy_storage_$_scrubbingIdentifier;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000011e702
- (id)init;	// IMP=0x000000000011e6cf
- (_Bool)executeActionPerformer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000011e354
- (_Bool)prefersAssetInclusionAfterRemovalForActionPerformer:(id)arg1;	// IMP=0x000000000011db2f
- (double)assetActionPerformerBottomPaddingForPresentingToast:(id)arg1;	// IMP=0x000000000011da56
- (id)assetActionPerformerHostViewControllerForPresentingToast:(id)arg1;	// IMP=0x000000000011d9a1
- (_Bool)assetActionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000011d873
- (_Bool)assetActionPerformer:(id)arg1 presentViewController:(id)arg2;	// IMP=0x000000000011d66a
- (id)undoManagerForAssetActionPerformer:(id)arg1;	// IMP=0x000000000011d604
- (void)internalToggleGainMapImage;	// IMP=0x000000000011d58d
- (_Bool)shouldEnableToggleDetailsAction;	// IMP=0x000000000011d41e
- (_Bool)shouldEnableSimpleActionWithActionType:(unsigned long long)arg1;	// IMP=0x000000000011d390
- (void)dismissOneUp;	// IMP=0x000000000011d0bd
- (void)jumpToPreviousAsset;	// IMP=0x000000000011d051
- (void)jumpToNextAsset;	// IMP=0x000000000011ce45
- (_Bool)presentViewController:(id)arg1;	// IMP=0x000000000011cdcd
- (_Bool)performSimpleActionWithActionType:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000011cb73
- (_Bool)performSimpleActionWithActionType:(unsigned long long)arg1;	// IMP=0x000000000011c73a
- (_Bool)canPerformSimpleActionWithActionType:(unsigned long long)arg1;	// IMP=0x000000000011c6fc
- (void)toggleSelectionMode;	// IMP=0x000000000011c53a
- (_Bool)canPerformTrashAction;	// IMP=0x000000000011c2e8
- (void)performTrashAction;	// IMP=0x000000000011c234
- (void)performDuplicateActionWithAssetsByAssetCollection:(id)arg1;	// IMP=0x000000000011c026
- (void)performActionType:(unsigned long long)arg1 assetsByAssetCollection:(id)arg2;	// IMP=0x000000000011bd9a
- (void)performPendingEditsActionWithRequest:(id)arg1;	// IMP=0x000000000011bcba
- (void)performEditAudioMixModeActionWithAudioMixMode:(id)arg1;	// IMP=0x000000000011b856
- (void)performEditPlaybackRateActionWithPlaybackRate:(float)arg1;	// IMP=0x000000000011b57f
- (void)performQuickCropActionWithContext:(id)arg1;	// IMP=0x000000000011b2ce
- (void)performMergeDuplicatesAction;	// IMP=0x000000000011b287
- (void)performCancelEditingAction;	// IMP=0x000000000011b0cf
- (void)performDoneEditingAction;	// IMP=0x000000000011af81
- (void)performShowInLibraryAction;	// IMP=0x000000000011af3d
- (void)performToggleCommentsActionAndBeginEditing:(_Bool)arg1;	// IMP=0x000000000011a9b2
- (void)performZoomAt:(id)arg1;	// IMP=0x000000000011a6b6
- (void)performToggleDetailsAction;	// IMP=0x000000000011a633
- (void)performToggleMuteAction;	// IMP=0x000000000011a5a8
- (void)performPlayPauseActionWithDesiredState:(long long)arg1;	// IMP=0x000000000011a517
- (void)toggleImmersiveMode;	// IMP=0x000000000011a0af
- (void)toggleChromeVisibility;	// IMP=0x0000000000119fae
- (void)togglePlayback;	// IMP=0x0000000000119f78
- (void)performSyndicationSaveAction;	// IMP=0x0000000000119e98
- (void)performToggleFavoriteAction;	// IMP=0x00000000001199d6
- (void)performMuteActionWithShouldMute:(_Bool)arg1;	// IMP=0x00000000001195c5
- (void)performRestoreAction;	// IMP=0x0000000000119544
- (void)performLikeActionWithLike:(_Bool)arg1;	// IMP=0x00000000001191ec
- (void)preheatShareAction;	// IMP=0x0000000000119045
- (void)performShareAction;	// IMP=0x0000000000118e16
- (id)initWithBrowsingSession:(id)arg1 viewController:(id)arg2;	// IMP=0x0000000000118a1b
@property(nonatomic) __weak id <PUOneUpActionsControllerPopoverHelper> popoverHelper; // @synthesize popoverHelper;
@property(nonatomic) __weak id <PUOneUpDefaultActionsControllerActionManagerSource> assetActionManagerSource; // @synthesize assetActionManagerSource;
@property(nonatomic) __weak id <PUOneUpActionsControllerDelegate> delegate; // @synthesize delegate;
- (void)prepareForPopoverPresentation:(id)arg1;	// IMP=0x000000000011eb60

@end
