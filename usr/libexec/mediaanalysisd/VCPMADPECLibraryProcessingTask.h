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

+ (unsigned long long)taskID;	// IMP=0x0020000000099595
+ (id)name;	// IMP=0x0010000000099588
+ (id)taskWithPhotoLibraries:(id)arg1 cancelBlock:(CDUnknownBlockType)arg2 progressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000994bd
- (void).cxx_destruct;	// IMP=0x002000000009a1ec
- (int)processAllAssetsInPhotoLibrary:(id)arg1 withAnalysisDatabase:(id)arg2 andProgress:(id)arg3;	// IMP=0x001000000009969f
- (id)batchWithAnalysisDatabase:(id)arg1 allowDownload:(_Bool)arg2 cancelBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000099665
- (_Bool)shouldProcessAsset:(id)arg1;	// IMP=0x0010000000099650
- (void)dealloc;	// IMP=0x00100000000995a0
- (id)initWithPhotoLibraries:(id)arg1 cancelBlock:(CDUnknownBlockType)arg2 progressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000099381

@end
