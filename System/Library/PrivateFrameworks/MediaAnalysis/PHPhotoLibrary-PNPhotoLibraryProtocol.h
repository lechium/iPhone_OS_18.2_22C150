//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHPhotoLibrary.h>

@class NSString;

@interface PHPhotoLibrary (PNPhotoLibraryProtocol)
+ (id)_defaultFacePropertySets;	// IMP=0x001000000000b164
+ (id)_defaultAssetPropertySets;	// IMP=0x001000000000b0cc
+ (id)_phPeopleSortDescriptors;	// IMP=0x001000000000b030
+ (id)_phFaceSortDescriptors;	// IMP=0x001000000000af94
+ (_Bool)mad_clusterVideoFaces;	// IMP=0x00100000000f5c9e
+ (_Bool)mad_isProcessingNeededOnAsset:(id)arg1 forTaskID:(unsigned long long)arg2;	// IMP=0x00100000000f1f22
+ (unsigned long long)mad_maxIgnoredAssetsToMarkAsProcessed;	// IMP=0x00100000000f1f17
+ (id)vcp_defaultMediaAnalysisDatabaseFilepath;	// IMP=0x00100000000f1eab
+ (id)vcp_defaultURL;	// IMP=0x00100000000f1e3f
+ (id)vcp_defaultPhotoLibrary;	// IMP=0x00100000000f1dd4
- (id)pn_fetchAssetsForFaceLocalIdentifiers:(id)arg1;	// IMP=0x001000000000d35e
- (id)pn_lastAssetDate;	// IMP=0x001000000000d1fc
- (id)pn_fetchInvalidAssetIdentifiersForCommonComparison;	// IMP=0x001000000000cde1
- (float)pn_faceProcessingProgress;	// IMP=0x001000000000cdca
- (double)_progressFromWorkerStatesDictionary:(id)arg1;	// IMP=0x001000000000cb57
- (id)pn_fetchFaceGroupsForPerson:(id)arg1;	// IMP=0x001000000000cad6
- (id)pn_fetchFaceGroups;	// IMP=0x001000000000ca7f
- (id)pn_fetchAssetsForFaceGroup:(id)arg1;	// IMP=0x001000000000c99e
- (id)pn_fetchAssetsForPerson:(id)arg1;	// IMP=0x001000000000c8bd
- (id)pn_fetchAssetsInMoment:(id)arg1;	// IMP=0x001000000000c83c
- (id)pn_fetchAssetsWithLocalIdentifiers:(id)arg1;	// IMP=0x001000000000c7bb
- (id)pn_fetchMomentsForAssetsWithLocalIdentifiers:(id)arg1;	// IMP=0x001000000000c6ff
- (id)pn_fetchMomentsForPerson:(id)arg1;	// IMP=0x001000000000c6ed
- (id)pn_fetchMomentsWithLocalIdentifiers:(id)arg1;	// IMP=0x001000000000c631
- (id)pn_fetchMoments;	// IMP=0x001000000000c59c
- (id)pn_fetchFacesGroupedByAssetLocalIdentifierForAssets:(id)arg1;	// IMP=0x001000000000c46e
- (id)pn_fetchFacesForFaceGroup:(id)arg1;	// IMP=0x001000000000c340
- (id)pn_fetchFacesForPersonLocalIdentifiers:(id)arg1 inMoment:(id)arg2;	// IMP=0x001000000000c2e1
- (id)pn_fetchFacesForPerson:(id)arg1 inMoment:(id)arg2;	// IMP=0x001000000000c204
- (id)pn_fetchFacesForPerson:(id)arg1;	// IMP=0x001000000000c0c4
- (id)pn_fetchFacesWithLocalIdentifiers:(id)arg1;	// IMP=0x001000000000bf96
- (unsigned long long)pn_numberOfFacesWithFaceprints;	// IMP=0x001000000000be4b
- (id)pn_fetchPersonsGroupedByAssetLocalIdentifierForAssets:(id)arg1;	// IMP=0x001000000000bd59
- (id)pn_fetchInvalidCandidatePersonsForPerson:(id)arg1;	// IMP=0x001000000000bc8b
- (id)pn_fetchCandidatePersonsForPerson:(id)arg1;	// IMP=0x001000000000bbbd
- (id)pn_fetchPersonsInMoment:(id)arg1;	// IMP=0x001000000000bacb
- (id)pn_fetchPersonsWithType:(unsigned long long)arg1;	// IMP=0x001000000000b5f7
- (id)pn_fetchPersonsWithLocalIdentifiers:(id)arg1;	// IMP=0x001000000000b505
- (id)pn_persistentStorageDirectoryURL;	// IMP=0x001000000000b2b2
- (id)_defaultAssetFetchOptions;	// IMP=0x001000000000b23e
- (id)_defaultFetchOptions;	// IMP=0x001000000000b1ea
- (_Bool)pn_performChangesAndWait:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x001000000000b152
- (_Bool)vcp_requiresDownloadForTask:(unsigned long long)arg1;	// IMP=0x00100000000f6a72
- (id)vcp_description;	// IMP=0x00100000000f6a22
- (unsigned long long)vcp_requiredFaceLibraryProcessingSubTasks;	// IMP=0x00100000000f6a05
- (_Bool)vcp_requiresProcessingForTask:(unsigned long long)arg1;	// IMP=0x00100000000f68fe
- (_Bool)vcp_isSyndicationLibrary;	// IMP=0x00100000000f68e4
- (id)mad_allPersonsFetchOptionsWithDetectionTypes:(id)arg1 andVerifiedTypes:(id)arg2;	// IMP=0x00100000000f655c
- (id)mad_allPersonsFetchOptions;	// IMP=0x00100000000f64cc
- (id)mad_allFacesFetchOptions;	// IMP=0x00100000000f640e
- (unsigned long long)mad_countOfUnclusteredFaces;	// IMP=0x00100000000f635f
- (id)mad_clusteredAndUnidentifiedFacesFetchOptions;	// IMP=0x00100000000f6185
- (id)mad_clusteredFacesFetchOptions;	// IMP=0x00100000000f5fab
- (id)mad_unclusteredFacesFetchOptions;	// IMP=0x00100000000f5da0
- (long long)mad_pauseFCPeopleFurtherProcessing;	// IMP=0x00100000000f5d85
- (_Bool)mad_useVUGallery;	// IMP=0x00100000000f5d08
- (int)mad_faceProcessingInternalVersion;	// IMP=0x00100000000f5ca6
- (id)vcp_faceAnalysisStateFilepath;	// IMP=0x00100000000f5bce
- (id)vcp_vipModelLastGenerationDateForVIPType:(unsigned long long)arg1;	// IMP=0x00100000000f5a1a
- (id)vcp_vipModelFilepathForVIPType:(unsigned long long)arg1;	// IMP=0x00100000000f5776
- (void)vcp_setAnalysisPreferencesValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000000f55be
- (void)_updateAnalysisPreferencesWithEntries:(id)arg1 keysToRemove:(id)arg2;	// IMP=0x00100000000f51d5
- (id)vcp_analysisPreferences;	// IMP=0x00100000000f511e
- (id)_analysisPreferencesURL;	// IMP=0x00100000000f50b3
- (id)vcp_visionCacheStorageDirectoryURL;	// IMP=0x00100000000f4b15
- (_Bool)mad_performChangesAndWait:(CDUnknownBlockType)arg1 cancelBlock:(CDUnknownBlockType)arg2 extendTimeoutBlock:(CDUnknownBlockType)arg3 error:(id *)arg4;	// IMP=0x00100000000f3cd8
- (void)mad_markAsProcessedByTask:(unsigned long long)arg1 forAssets:(id)arg2;	// IMP=0x00100000000f385c
- (void)_mad_markAsProcessedByTask:(unsigned long long)arg1 forAsset:(id)arg2;	// IMP=0x00100000000f327b
- (id)mad_localIdentifierForCloudIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000f3097
- (id)mad_cloudIdentifierForLocalIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000f2ec3
- (id)vcp_libraryScaleShortDescription;	// IMP=0x00100000000f2de7
- (unsigned long long)vcp_libraryScale;	// IMP=0x00100000000f2d5e
- (_Bool)vcp_allowInMemoryDownload;	// IMP=0x00100000000f2ce9
- (_Bool)vcp_supportsInMemoryDownload;	// IMP=0x00100000000f2cb0
- (_Bool)vcp_eligibleForStreaming:(_Bool)arg1;	// IMP=0x00100000000f2c6e
- (_Bool)vcp_isCPLDownloadComplete;	// IMP=0x00100000000f2ba2
- (_Bool)vcp_isCPLSyncComplete;	// IMP=0x00100000000f2ad6
- (_Bool)vcp_isCPLEnabled;	// IMP=0x00100000000f2ac4
- (_Bool)mad_calculateProgressPercentage:(unsigned long long *)arg1 totalAssetCount:(unsigned long long *)arg2 progressPercentageWithFailure:(unsigned long long *)arg3 taskID:(unsigned long long)arg4 phTaskID:(unsigned long long)arg5 priority:(unsigned long long)arg6 failedAssetCount:(unsigned long long)arg7 error:(id *)arg8;	// IMP=0x00100000000f26f6
- (unsigned long long)vcp_assetCountWithInternalPredicate:(id)arg1 forTaskID:(unsigned long long)arg2;	// IMP=0x00100000000f2422
- (unsigned long long)vcp_assetCountWithMediaType:(long long)arg1 forTaskID:(unsigned long long)arg2;	// IMP=0x00100000000f2363
- (unsigned long long)vcp_processedAssetCountForTaskID:(unsigned long long)arg1;	// IMP=0x00100000000f234f
- (unsigned long long)vcp_processedAssetCountForTaskID:(unsigned long long)arg1 withPriority:(unsigned long long)arg2;	// IMP=0x00100000000f226a
- (unsigned long long)vcp_assetCountForTaskID:(unsigned long long)arg1;	// IMP=0x00100000000f2256
- (unsigned long long)vcp_assetCountForTaskID:(unsigned long long)arg1 withPriority:(unsigned long long)arg2;	// IMP=0x00100000000f21c5
- (_Bool)vcp_anyAssetsForTaskID:(unsigned long long)arg1;	// IMP=0x00100000000f20f0
- (id)vcp_mediaAnalysisDatabaseFilepath;	// IMP=0x00100000000f207c
- (id)vcp_mediaAnalysisDirectory;	// IMP=0x00100000000f1fad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

