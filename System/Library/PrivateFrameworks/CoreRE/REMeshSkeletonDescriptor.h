//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface REMeshSkeletonDescriptor : NSObject
{
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> _localRestPoseScales;	// 8 = 0x8
    struct vector<simd_quatf, std::allocator<simd_quatf>> _localRestPoseRotations;	// 32 = 0x20
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> _localRestPoseTranslations;	// 56 = 0x38
    struct vector<simd_float4x4, std::allocator<simd_float4x4>> _inverseBindPose;	// 80 = 0x50
    NSString *_name;	// 104 = 0x68
    NSArray *_jointNames;	// 112 = 0x70
    NSArray *_parentIndices;	// 120 = 0x78
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000433421
- (id).cxx_construct;	// IMP=0x000000000043451e
- (void).cxx_destruct;	// IMP=0x000000000043449f
@property(readonly, nonatomic) NSArray *parentIndices; // @synthesize parentIndices=_parentIndices;
@property(readonly, nonatomic) NSArray *jointNames; // @synthesize jointNames=_jointNames;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (unsigned long long)estimateContainerSize;	// IMP=0x00000000004340c5
@property(readonly, nonatomic) const CDStruct_14d5dc5e *inverseBindPose;
@property(readonly, nonatomic) const MISSING_TYPE **localRestPoseTranslations;
@property(readonly, nonatomic) const CDStruct_183601bc *localRestPoseRotations;
@property(readonly, nonatomic) const MISSING_TYPE **localRestPoseScales;
- (_Bool)validateWithError:(id *)arg1;	// IMP=0x0000000000433ff9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000433eee
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000433905
- (id)initWithName:(id)arg1 jointNames:(id)arg2 parentIndices:(id)arg3 localRestPoseScales:(const MISSING_TYPE **)arg4 localRestPoseRotations:(const CDStruct_183601bc *)arg5 localRestPoseTranslations:(const MISSING_TYPE **)arg6 inverseBindPose:(const CDStruct_14d5dc5e *)arg7;	// IMP=0x0000000000433429
- (struct MeshAssetSkeleton)meshAssetSkeleton;	// IMP=0x000000000040382d
- (id)initWithMeshSkeletonDefinition:(const void *)arg1;	// IMP=0x0000000000403478
- (id)initWithMeshAssetSkeleton:(const void *)arg1;	// IMP=0x000000000040259b

@end

