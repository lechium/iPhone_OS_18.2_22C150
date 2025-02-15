//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PXPhotoKitAssetCollectionActionPerformer.h"

__attribute__((visibility("hidden")))
@interface PXSocialGroupRejectGroupActionPerformer : PXPhotoKitAssetCollectionActionPerformer
{
}

+ (id)systemImageNameForAssetCollectionReference:(id)arg1 withInputs:(id)arg2;	// IMP=0x00400000000a25f0
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollectionReference:(id)arg2 withInputs:(id)arg3;	// IMP=0x00400000000a2560
+ (_Bool)canPerformOnAssetCollectionReference:(id)arg1 withInputs:(id)arg2;	// IMP=0x00400000000a2510
+ (_Bool)isActionDestructive;	// IMP=0x00400000000a2210
- (id)initWithActionType:(id)arg1 assetCollectionReference:(id)arg2 displayTitleInfo:(id)arg3;	// IMP=0x00000000000a26b0
- (void)performBackgroundTask;	// IMP=0x00000000000a24e0

@end

