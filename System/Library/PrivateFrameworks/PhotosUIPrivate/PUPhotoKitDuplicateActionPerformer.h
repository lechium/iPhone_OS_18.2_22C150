//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXPhotoKitDuplicateActionController;

__attribute__((visibility("hidden")))
@interface PUPhotoKitDuplicateActionPerformer
{
    PXPhotoKitDuplicateActionController *_duplicateActionController;	// 16 = 0x10
    long long _action;	// 24 = 0x18
    CDStruct_1b6d18a9 _newStillImageTime;	// 32 = 0x20
}

+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;	// IMP=0x00600000004abf6c
- (void).cxx_destruct;	// IMP=0x00000000004abee1
@property(nonatomic) CDStruct_1b6d18a9 newStillImageTime; // @synthesize newStillImageTime=_newStillImageTime;
@property(nonatomic) long long action; // @synthesize action=_action;
@property(retain, nonatomic) PXPhotoKitDuplicateActionController *duplicateActionController; // @synthesize duplicateActionController=_duplicateActionController;
- (void)performBackgroundTask;	// IMP=0x00000000004abd57
- (void)performUserInteractionTask;	// IMP=0x00000000004abb29

@end
