//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PHPhotoLibrary;

@interface VCPPhotosAutoCounterWorker : NSObject
{
    PHPhotoLibrary *_photoLibrary;	// 8 = 0x8
    unsigned long long _detectionVersion;	// 16 = 0x10
    unsigned long long _recognitionVersion;	// 24 = 0x18
    unsigned long long _personClusterVersion;	// 32 = 0x20
    int _processingVersion;	// 40 = 0x28
    unsigned long long _madVersion;	// 48 = 0x30
    unsigned long long _vuVersion;	// 56 = 0x38
    unsigned long long _clusterDumpFaceFetched;	// 64 = 0x40
}

+ (_Bool)_dumpAssetsToFaces;	// IMP=0x0060000000312fc0
+ (_Bool)_dumpFaceprint;	// IMP=0x006000000030c3a0
+ (id)workerWithPhotoLibrary:(id)arg1;	// IMP=0x006000000030bb0d
- (void).cxx_destruct;	// IMP=0x000000000031f13f
- (int)validateClusterAccuracyWithSIMLGroundtruth:(id)arg1 results:(id *)arg2 extendTimeoutBlock:(CDUnknownBlockType)arg3 cancelBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000031e6df
- (int)_parseSIMLGroundTruthWithURL:(id)arg1 faceCountPerPerson:(id *)arg2 personInformation:(id *)arg3 faceToPerson:(id *)arg4 assetToFaces:(id *)arg5 extendTimeoutBlock:(CDUnknownBlockType)arg6 cancelBlock:(CDUnknownBlockType)arg7;	// IMP=0x000000000031d6e1
- (int)calculateAndReportClusterAccuracyWithVisionClusterURL:(id)arg1 andPersonClusters:(id)arg2 results:(id *)arg3 extendTimeoutBlock:(CDUnknownBlockType)arg4 cancelBlock:(CDUnknownBlockType)arg5;	// IMP=0x000000000031d5d4
- (int)calculateAndReportClusterAccuracyWithVisionClusterURL:(id)arg1 andPersonClusters:(id)arg2 withGroundtruth:(id)arg3 results:(id *)arg4 extendTimeoutBlock:(CDUnknownBlockType)arg5 cancelBlock:(CDUnknownBlockType)arg6;	// IMP=0x000000000031cae4
- (int)_reportCoreAnalyticsWithVisionClusterMeasure:(id)arg1 personClusterMeasure:(id)arg2 personClusters:(id)arg3 andGroundTruthInformation:(id)arg4;	// IMP=0x000000000031a6b8
- (int)_measurePNPersonClusters:(id)arg1 groundTruthFaceCountPerPerson:(id)arg2 groundTruthPersonInformation:(id)arg3 groundTruthFaceToPerson:(id)arg4 groundTruthAssetToFaces:(id)arg5 measures:(id *)arg6 extendTimeoutBlock:(CDUnknownBlockType)arg7 cancelBlock:(CDUnknownBlockType)arg8;	// IMP=0x00000000003170a5
- (int)_measureClusterWithClusterStateURL:(id)arg1 groundTruthFaceCountPerPerson:(id)arg2 groundTruthPersonInformation:(id)arg3 groundTruthFaceToPerson:(id)arg4 groundTruthAssetToFaces:(id)arg5 measures:(id *)arg6 extendTimeoutBlock:(CDUnknownBlockType)arg7 cancelBlock:(CDUnknownBlockType)arg8;	// IMP=0x0000000000312fc8
- (void)_exportAssetsToFacesDetails:(id)arg1;	// IMP=0x0000000000312cf6
- (int)_parseGroundTruthWithURL:(id)arg1 faceCountPerPerson:(id *)arg2 personInformation:(id *)arg3 faceToPerson:(id *)arg4 assetToFaces:(id *)arg5 extendTimeoutBlock:(CDUnknownBlockType)arg6 cancelBlock:(CDUnknownBlockType)arg7;	// IMP=0x0000000000311f8a
- (double)_overlapRatioOf:(struct CGRect)arg1 with:(struct CGRect)arg2;	// IMP=0x0000000000311f0a
- (int)exportClustersStates:(id *)arg1 error:(id *)arg2 extendTimeoutBlock:(CDUnknownBlockType)arg3 cancelBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000310c0a
- (int)_processFetchedVURawCluster:(id)arg1 forPersonLocalIdentifier:(id)arg2 facesPerAsset:(id)arg3 assetInformation:(id)arg4 extendTimeoutBlock:(CDUnknownBlockType)arg5 cancelBlock:(CDUnknownBlockType)arg6;	// IMP=0x000000000030ef52
- (_Bool)optInUserPickedPerson:(id)arg1 error:(id *)arg2 extendTimeoutBlock:(CDUnknownBlockType)arg3 cancelBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000030e117
- (_Bool)optInStatus:(id)arg1 error:(id *)arg2;	// IMP=0x000000000030dfe2
- (void)_fetchPersonWithIdentifier:(id)arg1 facesPerAsset:(id)arg2 assetInformation:(id)arg3 extendTimeoutBlock:(CDUnknownBlockType)arg4 cancelBlock:(CDUnknownBlockType)arg5;	// IMP=0x000000000030dc9b
- (int)_processFetchedFaceGroup:(id)arg1 forPersonID:(id)arg2 facesPerAsset:(id)arg3 assetInformation:(id)arg4 extendTimeoutBlock:(CDUnknownBlockType)arg5 cancelBlock:(CDUnknownBlockType)arg6;	// IMP=0x000000000030c3a8
- (id)_anonymizedName:(id)arg1;	// IMP=0x000000000030c236
- (id)_fetchPeopleHomePersons;	// IMP=0x000000000030c09e
- (unsigned long long)optInPersonCount;	// IMP=0x000000000030c021
- (int)_loadGroundTruth:(id *)arg1 error:(id *)arg2;	// IMP=0x000000000030bfa6
- (int)_loadGroundTruthURL:(id)arg1 toGroundTruth:(id *)arg2 error:(id *)arg3;	// IMP=0x000000000030bd12
- (id)_groundTruthURL;	// IMP=0x000000000030bbeb
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x000000000030b9c0

@end

