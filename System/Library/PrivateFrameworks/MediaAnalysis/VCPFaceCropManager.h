//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PHPhotoLibrary, VCPPhotosFaceProcessingContext;

@interface VCPFaceCropManager : NSObject
{
    PHPhotoLibrary *_photoLibrary;	// 8 = 0x8
    VCPPhotosFaceProcessingContext *_context;	// 16 = 0x10
}

+ (_Bool)_allowANE;	// IMP=0x0060000000217f91
- (void).cxx_destruct;	// IMP=0x000000000021dbf0
- (int)processDirtyFaceCrops:(unsigned long long *)arg1 withCancelBlock:(CDUnknownBlockType)arg2 andExtendTimeoutBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000021d712
- (_Bool)generateAndPersistFaceCropsForFaces:(id)arg1 withAsset:(id)arg2 resource:(id)arg3 resourceURL:(id)arg4 error:(id *)arg5;	// IMP=0x000000000021ccc0
- (id)_vcpFaceCropFromPHFaceCrop:(id)arg1;	// IMP=0x000000000021cbb1
- (_Bool)_processDirtyFaceCrop:(id)arg1 faceCropFaceLocalIdentifier:(id *)arg2 error:(id *)arg3;	// IMP=0x000000000021c350
- (_Bool)_recordNeedToPersonBuildOnFaceGroupContainingFace:(id)arg1 error:(id *)arg2;	// IMP=0x000000000021c030
- (_Bool)_updateFace:(id)arg1 withFaceCrop:(id)arg2 error:(id *)arg3;	// IMP=0x000000000021bed3
- (_Bool)_updateFaceprint:(id)arg1 forFace:(id)arg2 error:(id *)arg3;	// IMP=0x000000000021b9ac
- (_Bool)_generateAndAssociateFaceprintedFaceForFaceCrop:(id)arg1 faceCropFaceLocalIdentifier:(id *)arg2 error:(id *)arg3;	// IMP=0x000000000021b56e
- (_Bool)_clearDirtyStateOnFaceCrop:(id)arg1 error:(id *)arg2;	// IMP=0x000000000021b3ba
- (id)_associateFace:(id)arg1 withFaceCrop:(id)arg2 error:(id *)arg3;	// IMP=0x000000000021ad5a
- (id)_faceFromFaceCrop:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000218fab
- (id)_vcpAnimalFaceWithFaceCrop:(id)arg1 animalFaceObservations:(id)arg2 animalBodyObservations:(id)arg3 animalprintRequest:(id)arg4 normalizedFaceCropBoundingBox:(struct CGRect)arg5 faceCropImageDimension:(struct CGSize)arg6 error:(id *)arg7;	// IMP=0x00000000002189a0
- (id)_bestObservationInAnimalObservations:(id)arg1 withRect:(struct CGRect)arg2;	// IMP=0x000000000021862e
- (id)_vcpHumanFaceWithFaceCrop:(id)arg1 imageRequestHandler:(id)arg2 faceDetectionRequest:(id)arg3 normalizedFaceCropBoundingBox:(struct CGRect)arg4 faceCropImageDimension:(struct CGSize)arg5 faceprintRequest:(id)arg6 error:(id *)arg7;	// IMP=0x0000000000217f99
- (id)_bestFaceForFacePrintRequest:(id)arg1 withRect:(struct CGRect)arg2;	// IMP=0x0000000000217ba7
- (id)_faceAssociatedWithFaceCrop:(id)arg1;	// IMP=0x0000000000217aa1
- (_Bool)_persistGeneratedFaceCrops:(id)arg1 forAsset:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000216d11
- (id)initWithPhotoLibrary:(id)arg1 andContext:(id)arg2;	// IMP=0x0000000000216c5a

@end

