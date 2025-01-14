//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, VCPDatabaseWriter;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface MADFullAnalysisResultsSynchronizationTask
{
    int _status;	// 8 = 0x8
    VCPDatabaseWriter *_analysisDatabase;	// 16 = 0x10
    NSObject<OS_dispatch_group> *_dispatchGroup;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 32 = 0x20
}

+ (id)taskWithPhotoLibrary:(id)arg1;	// IMP=0x00400000000a1fb0
- (void).cxx_destruct;	// IMP=0x00200000000a3a83
- (int)mainInternal;	// IMP=0x00100000000a38d7
- (int)synchronizePhotosDatabaseForProcessedAssets;	// IMP=0x00100000000a3609
- (int)synchronizePhotosDatabaseForProcessedAssetsWithImageOnly:(_Bool)arg1;	// IMP=0x00100000000a26be
- (void)resetAnalysisVersionForMediaProcessingTaskID:(unsigned long long)arg1 assetIdentifiers:(id)arg2;	// IMP=0x00100000000a20e5
- (unsigned long long)versionResetOptionsForTaskID:(unsigned long long)arg1;	// IMP=0x00100000000a2015
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x00100000000a1e8c

@end

