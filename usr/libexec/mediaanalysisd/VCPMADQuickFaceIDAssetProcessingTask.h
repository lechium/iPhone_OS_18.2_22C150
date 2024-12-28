//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCPPhotosQuickFaceIdentificationManager;

@interface VCPMADQuickFaceIDAssetProcessingTask
{
    VCPPhotosQuickFaceIdentificationManager *_quickFaceIDManager;	// 8 = 0x8
}

+ (unsigned long long)taskID;	// IMP=0x0020000000102bfa
+ (id)name;	// IMP=0x0010000000102bed
- (void).cxx_destruct;	// IMP=0x0020000000102c44
- (id)batchWithAnalysisDatabase:(id)arg1 allowDownload:(_Bool)arg2 cancelBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000102c1d
- (_Bool)shouldProcessAsset:(id)arg1;	// IMP=0x0010000000102c05
- (id)initWithLocalIdentifiers:(id)arg1 fromPhotoLibraryWithURL:(id)arg2 cancelBlock:(CDUnknownBlockType)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000102969

@end
