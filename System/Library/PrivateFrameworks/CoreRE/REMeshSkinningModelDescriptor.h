//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface REMeshSkinningModelDescriptor : NSObject
{
    NSArray *_inverseBindPoseAttributes;	// 8 = 0x8
    NSArray *_skinningParts;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000042f73d
- (void).cxx_destruct;	// IMP=0x000000000043022e
@property(readonly, nonatomic) NSArray *skinningParts; // @synthesize skinningParts=_skinningParts;
@property(readonly, nonatomic) NSArray *inverseBindPoseAttributes; // @synthesize inverseBindPoseAttributes=_inverseBindPoseAttributes;
- (unsigned long long)estimateContainerSize;	// IMP=0x000000000042ff1b
- (_Bool)validateWithPayloadSize:(const void *)arg1 parts:(id)arg2 partIndices:(id)arg3 skeletonCount:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x000000000042fa03
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000042f98e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000042f828
- (id)initWithInverseBindPoseAttributes:(id)arg1 skinningParts:(id)arg2;	// IMP=0x000000000042f745
- (id)initWithSkinningAttributeDescriptor:(const void *)arg1 inverseBindPoseAttributes:(id)arg2 payloadBuilder:(void *)arg3;	// IMP=0x00000000003feb2a
- (id)initWithSkinningData:(const void *)arg1 inverseBindPoseAttributes:(id)arg2 deformerBuilders:(void *)arg3 payloadBuilder:(void *)arg4;	// IMP=0x00000000003fe9c0
- (id)initWithMeshSkinningData:(const void *)arg1 meshParts:(Slice_7f1aa05d)arg2 inverseBindPoseAttributes:(id)arg3 deformerBuilders:(void *)arg4 payloadBuilder:(void *)arg5;	// IMP=0x00000000003fe53e

@end
