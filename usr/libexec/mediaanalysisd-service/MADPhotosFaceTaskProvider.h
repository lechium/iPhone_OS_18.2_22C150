//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString, PHPhotoLibrary, VCPFaceClusterer, VCPPhotosFaceProcessingContext;
@protocol OS_dispatch_queue;

@interface MADPhotosFaceTaskProvider
{
    PHPhotoLibrary *_photoLibrary;	// 8 = 0x8
    VCPPhotosFaceProcessingContext *_context;	// 16 = 0x10
    unsigned long long _personProcessingRequirement;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_managementQueue;	// 32 = 0x20
    VCPFaceClusterer *_faceClusterer;	// 40 = 0x28
    NSString *_logPrefix;	// 48 = 0x30
    unsigned long long _previousCountOfFaceCropsToBeGenerated;	// 56 = 0x38
    unsigned long long _previousCountOfUnprocessedFaceCrops;	// 64 = 0x40
    _Bool _assetProcessingTaskDone;	// 72 = 0x48
    _Bool _downloadAssetProcessingTaskDone;	// 73 = 0x49
}

+ (unsigned long long)taskID;	// IMP=0x004000000018a169
+ (id)name;	// IMP=0x001000000018a15c
- (void).cxx_destruct;	// IMP=0x002000000018adfb
- (void)retireTask:(id)arg1;	// IMP=0x001000000018abbe
- (id)nextClusterProcessingTask;	// IMP=0x001000000018a7f7
- (id)nextDownloadAssetProcessingTask;	// IMP=0x001000000018a65b
- (id)nextAssetProcessingTask;	// IMP=0x001000000018a3b7
- (id)assetPriorities;	// IMP=0x001000000018a3aa
- (id)assetTaskWithAnalysisDatabase:(id)arg1;	// IMP=0x001000000018a383
- (_Bool)shouldProcessAsset:(id)arg1;	// IMP=0x001000000018a1f7
- (void)dealloc;	// IMP=0x001000000018a174
- (id)initWithPhotoLibrary:(id)arg1 skipSyncGallery:(_Bool)arg2 cancelBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000189e97

@end
