//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, NSURL;

@interface MADComputeServiceProcessingTask : NSObject
{
    NSArray *_requests;	// 8 = 0x8
    NSString *_requestID;	// 16 = 0x10
    NSArray *_localIdentifiers;	// 24 = 0x18
    NSURL *_photoLibraryURL;	// 32 = 0x20
    NSArray *_assetURLs;	// 40 = 0x28
    NSURL *_resultDirectoryURL;	// 48 = 0x30
    NSMutableArray *_videoProcessingRequests;	// 56 = 0x38
    NSString *_resumedAssetIdentifier;	// 64 = 0x40
    double _totalTaskCount;	// 72 = 0x48
    double _finishedTaskCount;	// 80 = 0x50
    CDUnknownBlockType _progressHandler;	// 88 = 0x58
    CDUnknownBlockType _resultsHandler;	// 96 = 0x60
    CDUnknownBlockType _completionHandler;	// 104 = 0x68
    CDUnknownBlockType _cancelBlock;	// 112 = 0x70
    struct atomic<bool> _started;	// 120 = 0x78
    struct atomic<bool> _canceled;	// 121 = 0x79
}

+ (id)taskWithRequestID:(id)arg1 cancelBlock:(CDUnknownBlockType)arg2 progressHandler:(CDUnknownBlockType)arg3 resultsHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00200000000aa247
+ (id)taskWithManagedRequests:(id)arg1 cancelBlock:(CDUnknownBlockType)arg2 progressHandler:(CDUnknownBlockType)arg3 resultsHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000a83bc
+ (id)_taskWithURLAssets:(id)arg1 requestID:(id)arg2 requests:(id)arg3 resultDirectoryURL:(id)arg4 cancelBlock:(CDUnknownBlockType)arg5 progressHandler:(CDUnknownBlockType)arg6 resultsHandler:(CDUnknownBlockType)arg7 completionHandler:(CDUnknownBlockType)arg8;	// IMP=0x00100000000a7d91
+ (id)_taskWithPhotosAssets:(id)arg1 photoLibraryURLPath:(id)arg2 requestID:(id)arg3 requests:(id)arg4 resultDirectoryURL:(id)arg5 cancelBlock:(CDUnknownBlockType)arg6 progressHandler:(CDUnknownBlockType)arg7 resultsHandler:(CDUnknownBlockType)arg8 completionHandler:(CDUnknownBlockType)arg9;	// IMP=0x00100000000a7739
+ (int)_saveResult:(id)arg1 fileURL:(id)arg2;	// IMP=0x00100000000a74b8
+ (int)_saveResultData:(id)arg1 fileURL:(id)arg2;	// IMP=0x00100000000a7281
+ (id)taskWithRequests:(id)arg1 requestID:(id)arg2 assetURLs:(id)arg3 resultDirectoryURL:(id)arg4 cancelBlock:(CDUnknownBlockType)arg5 progressHandler:(CDUnknownBlockType)arg6 resultsHandler:(CDUnknownBlockType)arg7 completionHandler:(CDUnknownBlockType)arg8;	// IMP=0x00100000000a7124
+ (id)taskWithRequests:(id)arg1 requestID:(id)arg2 localIdentifiers:(id)arg3 photoLibraryURL:(id)arg4 resultDirectoryURL:(id)arg5 cancelBlock:(CDUnknownBlockType)arg6 progressHandler:(CDUnknownBlockType)arg7 resultsHandler:(CDUnknownBlockType)arg8 completionHandler:(CDUnknownBlockType)arg9;	// IMP=0x00100000000a6d16
- (void).cxx_destruct;	// IMP=0x00200000000b7483
- (int)run;	// IMP=0x00100000000b5488
- (void)_processVideoRequests;	// IMP=0x00100000000b539f
- (void)_processVideoLocalIdentifiers;	// IMP=0x00100000000b4ccb
- (void)_processVideoAssetURLs;	// IMP=0x00100000000b4133
- (int)_resumePausedVideoAnalysis;	// IMP=0x00100000000b2c56
- (id)_processVideoAsset:(id)arg1 partialAnalysis:(id)arg2 analysisTypes:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x00100000000b1b14
- (int)_processVideoAnalysis:(id)arg1 analysisError:(id)arg2 assetIdentifierType:(id)arg3 assetIdentifier:(id)arg4;	// IMP=0x00100000000b1519
- (void)_savePartialAnalysis:(id)arg1 assetIdentifierType:(id)arg2 assetIdentifier:(id)arg3;	// IMP=0x00100000000b0cae
- (id)_partialAnalysisURL;	// IMP=0x00100000000b0c26
- (unsigned long long)_videoAnalysisTypes;	// IMP=0x00100000000b08e8
- (id)_prepareVideoAnalysisResults:(id)arg1;	// IMP=0x00100000000ade94
- (void)_processVisionRequest:(id)arg1;	// IMP=0x00100000000ad7ca
- (void)_runVisionRequest:(id)arg1 assetURL:(id)arg2 localIdentifier:(id)arg3;	// IMP=0x00100000000ad289
- (id)_prepareFaceAssetProcessingTask;	// IMP=0x00100000000ac0ed
- (id)_prepareFaceResultWithFaces:(id)arg1;	// IMP=0x00100000000abc21
- (id)_prepareSceneAssetProcessingTask;	// IMP=0x00100000000aacb9
- (id)_prepareSceneResultWithClassifications:(id)arg1;	// IMP=0x00100000000aa7a8
- (id)_loadAssetsForTaskID:(unsigned long long)arg1;	// IMP=0x00100000000aa6b9
- (_Bool)isCancelled;	// IMP=0x00100000000aa695
- (void)cancel;	// IMP=0x00100000000aa68a
- (_Bool)autoCancellable;	// IMP=0x00100000000aa682
- (float)resourceRequirement;	// IMP=0x00100000000aa674
- (void)dealloc;	// IMP=0x00100000000aa4d9
- (id)initWithRequests:(id)arg1 requestID:(id)arg2 assetURLs:(id)arg3 resultDirectoryURL:(id)arg4 cancelBlock:(CDUnknownBlockType)arg5 progressHandler:(CDUnknownBlockType)arg6 resultsHandler:(CDUnknownBlockType)arg7 completionHandler:(CDUnknownBlockType)arg8;	// IMP=0x00100000000a6e9a
- (id)initWithRequests:(id)arg1 requestID:(id)arg2 localIdentifiers:(id)arg3 photoLibraryURL:(id)arg4 resultDirectoryURL:(id)arg5 cancelBlock:(CDUnknownBlockType)arg6 progressHandler:(CDUnknownBlockType)arg7 resultsHandler:(CDUnknownBlockType)arg8 completionHandler:(CDUnknownBlockType)arg9;	// IMP=0x00100000000a6a52

@end

