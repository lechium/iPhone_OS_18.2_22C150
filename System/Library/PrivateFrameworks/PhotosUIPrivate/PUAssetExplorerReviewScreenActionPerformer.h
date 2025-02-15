//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUAssetActionPerformer.h"

@class PXActivityProgressController;

__attribute__((visibility("hidden")))
@interface PUAssetExplorerReviewScreenActionPerformer : PUAssetActionPerformer
{
    CDUnknownBlockType _performUserInteractionTaskBlock;	// 8 = 0x8
    PXActivityProgressController *__requestProgressController;	// 16 = 0x10
}

+ (_Bool)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2;	// IMP=0x0060000000202dce
+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;	// IMP=0x0060000000202dc6
- (void).cxx_destruct;	// IMP=0x0000000000203682
@property(retain, nonatomic, setter=_setRequestProgressController:) PXActivityProgressController *_requestProgressController; // @synthesize _requestProgressController=__requestProgressController;
@property(copy, nonatomic) CDUnknownBlockType performUserInteractionTaskBlock; // @synthesize performUserInteractionTaskBlock=_performUserInteractionTaskBlock;
- (void)_showFailedReviewAssetRequestAlert;	// IMP=0x00000000002034fa
- (void)_handleProgressControllerCanceled:(id)arg1;	// IMP=0x0000000000203404
- (id)_setupProgressControllerForProgress:(id)arg1;	// IMP=0x000000000020328c
- (void)_handleReviewAssetRequestCompletedWithSuccess:(_Bool)arg1 canceled:(_Bool)arg2 error:(id)arg3 reviewAsset:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000203192
- (void)requestReviewAssetForDisplayAsset:(id)arg1 reviewAssetProvider:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000202fa4
- (void)executePerformUserInteractionTaskBlock;	// IMP=0x0000000000202ee0
- (void)performUserInteractionTask;	// IMP=0x0000000000202eab

@end

