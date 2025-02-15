//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCPObjectPool;

@interface VCPMADPECLibraryProcessingTask
{
    VCPObjectPool *_servicePool;	// 8 = 0x8
}

+ (unsigned long long)taskID;	// IMP=0x00200000000995b5
+ (id)name;	// IMP=0x00100000000995a8
+ (id)taskWithPhotoLibraries:(id)arg1 cancelBlock:(CDUnknownBlockType)arg2 progressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000994dd
- (void).cxx_destruct;	// IMP=0x002000000009a20c
- (int)processAllAssetsInPhotoLibrary:(id)arg1 withAnalysisDatabase:(id)arg2 andProgress:(id)arg3;	// IMP=0x00100000000996bf
- (id)batchWithAnalysisDatabase:(id)arg1 allowDownload:(_Bool)arg2 cancelBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000099685
- (_Bool)shouldProcessAsset:(id)arg1;	// IMP=0x0010000000099670
- (void)dealloc;	// IMP=0x00100000000995c0
- (id)initWithPhotoLibraries:(id)arg1 cancelBlock:(CDUnknownBlockType)arg2 progressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000993a1

@end

