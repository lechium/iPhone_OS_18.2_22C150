//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, PHPhotoLibrary;

@interface VCPPhotosAssetChangeManager : NSObject
{
    PHPhotoLibrary *_photoLibrary;	// 8 = 0x8
    MISSING_TYPE *_pendingChanges;	// 16 = 0x10
    unsigned long long _pendingResourceChangeCount;	// 24 = 0x18
}

+ (short)sensitivityFromAnalysis:(id)arg1;	// IMP=0x0040000000147656
+ (id)managerForPhotoLibrary:(id)arg1;	// IMP=0x00100000001475f1
- (void).cxx_destruct;	// IMP=0x0020000000153d02
- (int)publishPendingChanges;	// IMP=0x00100000001537a3
- (int)updateAsset:(id)arg1 withAnalysis:(id)arg2 imageOnly:(_Bool)arg3;	// IMP=0x001000000015306f
- (int)updateLegacyAsset:(id)arg1 withAnalysis:(id)arg2;	// IMP=0x001000000015280f
- (int)updateMovieAsset:(id)arg1 withAnalysis:(id)arg2 imageOnly:(_Bool)arg3;	// IMP=0x001000000014de76
- (int)updateImageAsset:(id)arg1 withAnalysis:(id)arg2 imageOnly:(_Bool)arg3;	// IMP=0x001000000014b3c8
- (int)associateTraitsForAsset:(id)arg1 withAnalysis:(id)arg2 result:(id)arg3;	// IMP=0x00100000001498a5
- (int)associateTraitsWithFaceTorspPrints:(id)arg1 forAsset:(id)arg2 withAnalysis:(id)arg3 results:(id)arg4;	// IMP=0x0010000000148c98
- (int)associateTraitsForMovieAsset:(id)arg1 withAnalysis:(id)arg2 result:(id)arg3;	// IMP=0x0010000000147dcd
- (id)matchPerson:(struct CGRect)arg1 withPHFaces:(id)arg2 withMinIOU:(float)arg3 iou:(float *)arg4;	// IMP=0x001000000014784c
- (void)dealloc;	// IMP=0x00100000001477d9
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x001000000014752c

@end
