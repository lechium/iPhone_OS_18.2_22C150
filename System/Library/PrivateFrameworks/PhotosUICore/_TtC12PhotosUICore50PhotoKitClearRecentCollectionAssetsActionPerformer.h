//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PXPhotoKitAssetActionPerformer.h"

@class MISSING_TYPE;

@interface _TtC12PhotosUICore50PhotoKitClearRecentCollectionAssetsActionPerformer : PXPhotoKitAssetActionPerformer
{
    MISSING_TYPE *assetsToProcess;	// 8 = 0x8
}

+ (id)systemImageNameForActionManager:(id)arg1;	// IMP=0x006000000088a000
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 actionManager:(id)arg2;	// IMP=0x0060000000889840
+ (_Bool)canPerformOnImplicitSelectionInContainerCollection:(id)arg1;	// IMP=0x0060000000889790
+ (_Bool)canPerformOnSubsetOfSelection;	// IMP=0x0060000000889740
+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3 socialGroup:(id)arg4;	// IMP=0x0060000000889690
+ (_Bool)canPerformWithSelectionSnapshot:(id)arg1 person:(id)arg2 socialGroup:(id)arg3;	// IMP=0x0060000000889600
- (void).cxx_destruct;	// IMP=0x000000000088a290
- (id)initWithActionType:(id)arg1;	// IMP=0x000000000088a1f0
- (void)performBackgroundTask;	// IMP=0x0000000000889fd0
- (void)performUserInteractionTask;	// IMP=0x0000000000889e50

@end
