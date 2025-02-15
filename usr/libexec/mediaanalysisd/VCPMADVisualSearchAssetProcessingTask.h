//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCPObjectPool, VNSession;

@interface VCPMADVisualSearchAssetProcessingTask
{
    VCPObjectPool *_servicePool;	// 8 = 0x8
    VNSession *_visionSession;	// 16 = 0x10
}

+ (unsigned long long)taskID;	// IMP=0x002000000000f9b3
+ (id)name;	// IMP=0x001000000000f9a6
- (void).cxx_destruct;	// IMP=0x002000000000fb71
- (id)batchWithAnalysisDatabase:(id)arg1 allowDownload:(_Bool)arg2 cancelBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000000fb39
- (_Bool)shouldProcessAsset:(id)arg1;	// IMP=0x001000000000faeb
- (void)dealloc;	// IMP=0x001000000000fa79
- (id)initWithLocalIdentifiers:(id)arg1 fromPhotoLibraryWithURL:(id)arg2 cancelBlock:(CDUnknownBlockType)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000000f9be

@end

