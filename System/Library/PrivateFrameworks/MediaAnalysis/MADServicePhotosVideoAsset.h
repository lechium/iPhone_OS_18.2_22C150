//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, PHAsset;

__attribute__((visibility("hidden")))
@interface MADServicePhotosVideoAsset
{
    PHAsset *_photosAsset;	// 8 = 0x8
    NSArray *_resources;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000242232
- (id)animatedStickerScore;	// IMP=0x0000000000242215
- (id)scoresForLabels;	// IMP=0x0000000000241f21
- (id)isSensitive;	// IMP=0x0000000000241dc5
- (CDStruct_e83c9415)trimTimeRange;	// IMP=0x0000000000241bdc
- (CDStruct_1b6d18a9)stillTime;	// IMP=0x0000000000241b77
- (id)url;	// IMP=0x000000000024134f
- (id)resources;	// IMP=0x00000000002412f3
- (id)identifier;	// IMP=0x00000000002412d6
- (unsigned long long)assetType;	// IMP=0x00000000002412cb
- (id)initWithPhotosAsset:(id)arg1 clientBundleID:(id)arg2 clientTeamID:(id)arg3;	// IMP=0x0000000000241249

@end
