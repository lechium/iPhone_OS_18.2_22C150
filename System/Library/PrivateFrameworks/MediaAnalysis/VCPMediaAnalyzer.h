//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSNumber, NSXPCConnection, VCPFreeFormSearch, VCPTextEncoder;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface VCPMediaAnalyzer : NSObject
{
    NSObject<OS_dispatch_queue> *_analysisQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_searchQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_storageQueue;	// 24 = 0x18
    NSObject<OS_dispatch_group> *_storageGroup;	// 32 = 0x20
    NSNumber *_standalone;	// 40 = 0x28
    NSNumber *_minHighlightDuration;	// 48 = 0x30
    NSNumber *_noResultStrip;	// 56 = 0x38
    NSXPCConnection *_connection;	// 64 = 0x40
    NSXPCConnection *_mediaAnalysisServiceConnection;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_sandboxQueue;	// 80 = 0x50
    NSMutableDictionary *_sandboxHandles;	// 88 = 0x58
    struct atomic<int> _nextRequestID;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_cancelQueue;	// 104 = 0x68
    NSMutableDictionary *_cancelTokens;	// 112 = 0x70
    VCPTextEncoder *_textEncoder;	// 120 = 0x78
    VCPFreeFormSearch *_freeFormSearch;	// 128 = 0x80
}

+ (id)classifyFaceObservation:(id)arg1 withPersonsModel:(id)arg2 error:(id *)arg3;	// IMP=0x00600000002cf3ac
+ (unsigned long long)faceprintRevisionForPersonModel:(id)arg1;	// IMP=0x00600000002cf351
+ (id)loadPersonModelAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x00600000002cf323
+ (id)personModelFilepathForPhotoLibrary:(id)arg1;	// IMP=0x00600000002cf2fc
+ (_Bool)includeTorsoOnlyForOneUP;	// IMP=0x00600000002c7277
+ (Class)_getDistanceDescriptorClass;	// IMP=0x00600000002c720d
+ (void)getEmbeddingFormatForVersion:(unsigned long long)arg1 dimension:(int *)arg2 type:(unsigned long long *)arg3 error:(id *)arg4;	// IMP=0x00600000002be6b5
+ (unsigned long long)getUnifiedEmbeddingVersion;	// IMP=0x00600000002be69c
+ (id)sharedMediaAnalyzer;	// IMP=0x00600000002be647
- (void).cxx_destruct;	// IMP=0x00000000002dcc55
- (id)prepareContextsQueryEmbedding:(id)arg1;	// IMP=0x00000000002dc8e2
- (id)rankAssetsWithContext:(id)arg1 forAssetIdentifiers:(id)arg2 forPhotoLibraryURL:(id)arg3 withOptions:(id)arg4 error:(id *)arg5;	// IMP=0x00000000002dc111
- (void)addVideoRankingSignalsToDictionary:(id)arg1 fromPhotoLibraryURL:(id)arg2 amongAssets:(id)arg3;	// IMP=0x00000000002db1d2
- (id)loadEmbeddingSearchResultWithContext:(id)arg1 forPhotoLibraryURL:(id)arg2 fromAssets:(id)arg3 withOptions:(id)arg4;	// IMP=0x00000000002daaaf
- (id)loadVideoAssetsFromPhotoLibraryURL:(id)arg1 withAssetIdentifiers:(id)arg2;	// IMP=0x00000000002da4f9
- (id)mergeTimeRanges:(id)arg1 mergeGap:(id)arg2;	// IMP=0x00000000002d9b7c
- (id)postProcessTimeRanges:(id)arg1 options:(id)arg2;	// IMP=0x00000000002d967b
- (int)findTimeRangesWithContext:(id)arg1 inURLAsset:(id)arg2 withOptions:(id)arg3 andProgressHandler:(CDUnknownBlockType)arg4 andCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000002d9575
- (int)findTimeRangesWithContext:(id)arg1 inAsset:(id)arg2 withOptions:(id)arg3 andProgressHandler:(CDUnknownBlockType)arg4 andCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000002d946f
- (int)findTimeRangesFor:(id)arg1 inURLAsset:(id)arg2 withOptions:(id)arg3 andProgressHandler:(CDUnknownBlockType)arg4 andCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000002d70c0
- (int)findTimeRangesFor:(id)arg1 inAsset:(id)arg2 withOptions:(id)arg3 andProgressHandler:(CDUnknownBlockType)arg4 andCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000002d66d4
- (id)findTimeRangesFor:(id)arg1 inAsset:(id)arg2 withOptions:(id)arg3 results:(id)arg4 andError:(id *)arg5;	// IMP=0x00000000002d4f18
- (id)requestSearchResultsForAssets:(id)arg1 forPhotoLibraryURL:(id)arg2 withQueryEmbeddings:(id)arg3 matchingScoreOnly:(_Bool)arg4 options:(id)arg5;	// IMP=0x00000000002d4885
- (id)requestSearchResultsForAssets:(id)arg1 forPhotoLibraryURL:(id)arg2 withQueryEmbeddings:(id)arg3 options:(id)arg4;	// IMP=0x00000000002d4789
- (id)loadAssetsFromPhotoLibrary:(id)arg1 withAssetIdentifiers:(id)arg2;	// IMP=0x00000000002d424c
- (id)searchForQuery:(id)arg1 forAssets:(id)arg2 withOptions:(id)arg3 matchingScoreOnly:(_Bool)arg4 isURLAsset:(_Bool)arg5 analyses:(id)arg6;	// IMP=0x00000000002d3615
- (id)getAnalysisResultsForURLAsset:(id)arg1;	// IMP=0x00000000002d35ec
- (id)getTimeRangesWithSearchResults:(id)arg1;	// IMP=0x00000000002d2c6e
- (id)getTimeRangesInAsset:(id)arg1 forFaces:(id)arg2 withAnalysis:(id)arg3;	// IMP=0x00000000002d16c2
- (id)getTimeRangesInAsset:(id)arg1 forPersonLocalIdentifiers:(id)arg2 withAnalysis:(id)arg3;	// IMP=0x00000000002d100b
- (id)getTimeRangesForSoundIdentifiers:(id)arg1 withResults:(id)arg2;	// IMP=0x00000000002d07ce
- (id)getTimeRangesForActionIDs:(id)arg1 withResults:(id)arg2;	// IMP=0x00000000002cff01
- (id)getTimeRangesForSceneIdentifiers:(id)arg1 withResults:(id)arg2;	// IMP=0x00000000002cf3d5
- (void)completeStorage;	// IMP=0x00000000002cf2e7
- (id)requestLivePhotoEffectsForAssets:(id)arg1 allowOnDemand:(_Bool)arg2 flags:(unsigned long long)arg3;	// IMP=0x00000000002ce594
- (CDStruct_e83c9415)postProcessMovieHighlightDuration:(id)arg1 withOptions:(id)arg2;	// IMP=0x00000000002cd9c1
- (id)requestMovieHighlightsForAssets:(id)arg1 withOptions:(id)arg2;	// IMP=0x00000000002ccb6d
- (id)curateMovieAssetsForCollection:(id)arg1 withAlreadyCuratedAssets:(id)arg2 andDesiredCount:(unsigned long long)arg3 allowOnDemand:(_Bool)arg4;	// IMP=0x00000000002cb914
- (id)requestAnalysis:(unsigned long long)arg1 forAssets:(id)arg2 withOptions:(id)arg3 andProgressHandler:(CDUnknownBlockType)arg4 andError:(id *)arg5;	// IMP=0x00000000002cb550
- (id)requestAnalysisTypes:(unsigned long long)arg1 forAssets:(id)arg2 allowOndemand:(_Bool)arg3 progressHandler:(CDUnknownBlockType)arg4 error:(id *)arg5;	// IMP=0x00000000002cb3e5
- (int)requestAnalysis:(unsigned long long)arg1 forAssets:(id)arg2 withOptions:(id)arg3 andProgressHandler:(CDUnknownBlockType)arg4 andCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000002cac63
- (int)requestAnalysesForAssets:(id)arg1 analysisTypes:(unsigned long long)arg2 allowOndemand:(_Bool)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000002caaef
- (int)requestAnalysisTypes:(unsigned long long)arg1 forAssets:(id)arg2 withOptions:(id)arg3 andProgressHandler:(CDUnknownBlockType)arg4 cancelBlock:(CDUnknownBlockType)arg5 analyses:(id)arg6;	// IMP=0x00000000002c7cbd
- (void)distanceFromAsset:(id)arg1 timeRange:(CDStruct_e83c9415)arg2 toAsset:(id)arg3 timeRange:(CDStruct_e83c9415)arg4 duplicate:(long long *)arg5 distance:(float *)arg6;	// IMP=0x00000000002c77a4
- (void)distanceFromAsset:(id)arg1 toAsset:(id)arg2 duplicate:(long long *)arg3 distance:(float *)arg4;	// IMP=0x00000000002c727f
- (id)_queryDistanceDescriptor:(Class)arg1 ofAsset:(id)arg2 withExistingAnalysis:(id)arg3 andDatabase:(id)arg4 timeRange:(CDStruct_e83c9415)arg5 lastFeature:(_Bool)arg6 isDegraded:(_Bool *)arg7;	// IMP=0x00000000002c63f4
- (void)_getSceneDescriptors:(id)arg1 asDescriptorClass:(Class)arg2 withSceneRange:(CDStruct_e83c9415)arg3 andAnalysisResults:(id)arg4;	// IMP=0x00000000002c5bb1
- (void)_checkDuplicate:(id)arg1 withAsset:(id)arg2 duplicate:(long long *)arg3;	// IMP=0x00000000002c5a92
- (void)assetsAnalyzedSinceDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002c5a78
- (void)assetsFromPhotoLibrary:(id)arg1 analyzedSinceDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002c5615
- (_Bool)cancelAnalysisWithRequestID:(int)arg1;	// IMP=0x00000000002c53d1
- (int)requestAnalysisForAsset:(id)arg1 analysisTypes:(unsigned long long)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000002c4ebf
- (id)_requestAnalysis:(unsigned long long)arg1 forAsset:(id)arg2 withExistingAnalysis:(id)arg3 andDatabase:(id)arg4 andOptions:(id)arg5 cancelBlock:(CDUnknownBlockType)arg6;	// IMP=0x00000000002c3963
- (id)analyzeOndemand:(id)arg1 pairedURL:(id)arg2 forAnalysisTypes:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x00000000002c3301
- (id)requestAnalysisTypes:(unsigned long long)arg1 forAssetWithResourceURLs:(id)arg2 withOptions:(id)arg3 error:(id *)arg4;	// IMP=0x00000000002c315c
- (id)_analyzeOndemand:(id)arg1 forAnalysisTypes:(unsigned long long)arg2 withExistingAnalysis:(id)arg3 andOptions:(id)arg4 storeAnalysis:(_Bool)arg5 cancelBlock:(CDUnknownBlockType)arg6;	// IMP=0x00000000002c2213
- (id)_getCaptionFor:(CDStruct_e83c9415)arg1 withCaptions:(id)arg2 hasSegment:(_Bool)arg3;	// IMP=0x00000000002c1edb
- (id)_addCaptionToHighlightResults:(id)arg1;	// IMP=0x00000000002c15cd
- (id)_postProcessMovieHighlights:(id)arg1 analysis:(id)arg2 withOptions:(id)arg3;	// IMP=0x00000000002bffc1
- (unsigned long long)_typesToRemove:(unsigned long long)arg1 requested:(unsigned long long)arg2;	// IMP=0x00000000002bff53
- (unsigned long long)_metaAnalysisTypesForAsset:(id)arg1;	// IMP=0x00000000002bff2d
- (id)_addClassificationResults:(id)arg1 analysis:(id)arg2;	// IMP=0x00000000002bf92f
- (id)_databaseForPhotoLibrary:(id)arg1;	// IMP=0x00000000002bf66a
- (long long)_getDatabaseSandboxExtensionForPhotoLibraryURL:(id)arg1;	// IMP=0x00000000002bf289
- (id)connection;	// IMP=0x00000000002bf1c0
- (long long)_getSandboxExtensionForMediaAnalysisDatabaseWithPhotoLibraryURL:(id)arg1;	// IMP=0x00000000002bece6
- (void)_setupMediaAnalysisServiceConnection;	// IMP=0x00000000002bea04
- (void)dealloc;	// IMP=0x00000000002be809
- (id)init;	// IMP=0x00000000002be456

@end

