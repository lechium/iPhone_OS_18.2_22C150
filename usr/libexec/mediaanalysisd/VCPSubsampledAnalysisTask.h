//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, VCPBatchAnalysisTask, VCPDatabaseWriter, VCPPhotosAssetChangeManager;

@interface VCPSubsampledAnalysisTask
{
    VCPDatabaseWriter *_database;	// 8 = 0x8
    VCPPhotosAssetChangeManager *_changeManager;	// 16 = 0x10
    VCPBatchAnalysisTask *_pendingBatch;	// 24 = 0x18
    unsigned long long _highlightCount;	// 32 = 0x20
    unsigned long long _memoryCountPerAssetType;	// 40 = 0x28
    MISSING_TYPE *_wallpaperSuggestionCount;	// 48 = 0x30
    _Bool _networkAvailable;	// 56 = 0x38
}

+ (id)taskWithPhotoLibrary:(id)arg1 options:(id)arg2;	// IMP=0x004000000018d9f7
+ (_Bool)prioritizeWallpaperSuggestion;	// IMP=0x001000000018d892
- (void).cxx_destruct;	// IMP=0x0020000000192e3a
- (int)mainInternal;	// IMP=0x0010000000192230
- (int)processPriorityAssets:(id)arg1 progressReporter:(id)arg2;	// IMP=0x0010000000191de7
- (int)checkAndMarkPriorityAssets;	// IMP=0x001000000019112f
- (unsigned long long)queryMemoryCount;	// IMP=0x0010000000191099
- (unsigned long long)queryHighlightCount;	// IMP=0x0010000000190fe5
- (unsigned long long)queryWallpaperSuggestionCount;	// IMP=0x0010000000190da0
- (int)collectWallpaperSuggestionwithProgressReporter:(id)arg1;	// IMP=0x0010000000190a65
- (int)collectWallpaperSuggestionWithAssetPredicate:(id)arg1 andProgressReporter:(id)arg2;	// IMP=0x0010000000190414
- (int)collectMemorieswithProgressReporter:(id)arg1;	// IMP=0x001000000019006b
- (int)collectMemoriesWithAssetPredicate:(id)arg1 andProgressReporter:(id)arg2;	// IMP=0x001000000018fd32
- (int)collectMemory:(id)arg1 withAssetPredicate:(id)arg2 andAnalyzedAssetCount:(unsigned long long *)arg3;	// IMP=0x001000000018f9d6
- (id)memorySpecificFetchOptions;	// IMP=0x001000000018f928
- (int)collectHighlightsOfTypes:(long long)arg1 withHighlightPredicate:(id)arg2 andLimit:(_Bool)arg3 andProgressReporter:(id)arg4;	// IMP=0x001000000018f663
- (int)collectHighlightsOfTypes:(long long)arg1 withHighlightPredicate:(id)arg2 assetPredicate:(id)arg3 andLimit:(_Bool)arg4 andProgressReporter:(id)arg5;	// IMP=0x001000000018f15d
- (int)collectHighlight:(id)arg1 withAssetPredicate:(id)arg2 andLimit:(_Bool)arg3;	// IMP=0x001000000018eaee
- (int)markPrioritizedAsset:(id)arg1 skipped:(_Bool *)arg2;	// IMP=0x001000000018e963
- (int)processAsset:(id)arg1 skipped:(_Bool *)arg2;	// IMP=0x001000000018e19f
- (_Bool)assetWouldBeSkipped:(id)arg1 withAnalysis:(id)arg2;	// IMP=0x001000000018db8f
- (int)processPendingBatch;	// IMP=0x001000000018db33
- (void)resetPendingBatch;	// IMP=0x001000000018da6d
- (id)initWithPhotoLibrary:(id)arg1 options:(id)arg2;	// IMP=0x001000000018d89a

@end

