//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface PUPXPhotoKitPlaybackRateActionPerformer
{
    float _playbackRate;	// 8 = 0x8
}

+ (_Bool)_canPerformOnAsset:(id)arg1;	// IMP=0x0060000000433c12
+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3 socialGroup:(id)arg4;	// IMP=0x0060000000433c00
+ (_Bool)canPerformWithSelectionSnapshot:(id)arg1 person:(id)arg2 socialGroup:(id)arg3;	// IMP=0x0060000000433ae3
@property(nonatomic) float playbackRate; // @synthesize playbackRate=_playbackRate;
- (void)performUserInteractionTask;	// IMP=0x00000000004336f1

@end
