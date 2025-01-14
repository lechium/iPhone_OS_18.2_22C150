//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, _LTDAssetModel, _LTDOfflineConfigurationModel, _LTLocalePair, _LTOfflineAssetManager;

__attribute__((visibility("hidden")))
@interface _LTSpeechTranslationAssetInfo : NSObject
{
    _LTOfflineAssetManager *_assetManager;	// 8 = 0x8
    _LTLocalePair *_localePair;	// 16 = 0x10
    _LTDOfflineConfigurationModel *_offlineConfig;	// 24 = 0x18
    _LTDAssetModel *_sourceASRModel;	// 32 = 0x20
    _LTDAssetModel *_targetASRModel;	// 40 = 0x28
    NSArray *_allAssets;	// 48 = 0x30
    NSArray *_mtAssets;	// 56 = 0x38
    NSArray *_missingAssets;	// 64 = 0x40
    NSArray *_missingMTAssets;	// 72 = 0x48
    _Bool _needsUpdate;	// 80 = 0x50
    NSArray *_modelURLs;	// 88 = 0x58
}

+ (_Bool)_createSymlinkDirectoryForLocalePair:(id)arg1 assets:(id)arg2 validateIfNeeded:(_Bool)arg3;	// IMP=0x006000000006a67b
+ (void)_createSymlinksFromDirectory:(id)arg1 target:(id)arg2 error:(id *)arg3;	// IMP=0x006000000006a1cd
+ (void)_createSymlink:(id)arg1 target:(id)arg2 error:(id *)arg3;	// IMP=0x0060000000069fda
+ (id)_languagePairDirectoryForLocalePair:(id)arg1;	// IMP=0x0060000000069ccf
- (void).cxx_destruct;	// IMP=0x000000000006c8ea
- (void)purgeAssetUserInitiated:(_Bool)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006bdff
- (void)downloadAssetsUserInitiated:(_Bool)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006b672
- (_Bool)_validateSymlinksForAssets:(id)arg1;	// IMP=0x0000000000069d74
- (id)availabilityInfo;	// IMP=0x0000000000069b56
- (long long)_mtModelOfflineState;	// IMP=0x0000000000069627
- (_Bool)isCompleteBidirectionalModel;	// IMP=0x00000000000694d5
- (_Bool)isCompletePassthroughModel;	// IMP=0x0000000000069497
- (id)translationModelURLs;	// IMP=0x0000000000069366
- (id)speechModelVersionForLocale:(id)arg1;	// IMP=0x000000000006928a
- (id)speechModelURLForLocale:(id)arg1;	// IMP=0x00000000000691e6
- (_Bool)updateAvailableInAssets:(id)arg1;	// IMP=0x0000000000068f62
- (void)_referenceAssets:(id)arg1 catalogAssets:(id)arg2;	// IMP=0x00000000000686d5
- (void)createSymlinkDirectoryForMTAssets;	// IMP=0x0000000000068678
- (id)initWithInstalledAssets:(id)arg1 catalogAssets:(id)arg2 localePair:(id)arg3 offlineConfig:(id)arg4 assetManager:(id)arg5;	// IMP=0x0000000000068425
- (id)description;	// IMP=0x000000000006833c

@end

