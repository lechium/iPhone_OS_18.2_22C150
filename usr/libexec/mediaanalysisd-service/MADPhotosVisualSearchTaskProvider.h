//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCPObjectPool, VNSession;

@interface MADPhotosVisualSearchTaskProvider
{
    VCPObjectPool *_servicePool;	// 8 = 0x8
    VNSession *_visionSession;	// 16 = 0x10
}

+ (unsigned long long)taskID;	// IMP=0x0040000000005f25
+ (id)name;	// IMP=0x0010000000005f18
- (void).cxx_destruct;	// IMP=0x0020000000006018
- (id)assetTaskWithAnalysisDatabase:(id)arg1;	// IMP=0x0010000000005fe3
- (id)initWithPhotoLibrary:(id)arg1 cancelBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005f30

@end

