//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface VNHumanBodyPose3DSpecifier
{
    NSArray *_orderedHumanBodyPose3DKeypoints;	// 8 = 0x8
    CDStruct_14d5dc5e _cameraTransformMatrix;	// 16 = 0x10
    float _humanHeight;	// 80 = 0x50
    float _heightEstimatedScale;	// 84 = 0x54
    struct CGSize _inputSize;	// 88 = 0x58
    CDStruct_8e0628e6 _cameraIntrinsics;	// 112 = 0x70
    CDStruct_14d5dc5e _cameraRenderTransformMatrix;	// 160 = 0xa0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000417f05
+ (id)_stringRepresentationForRequestRevision:(unsigned long long)arg1 abpkJoint:(id)arg2 error:(id *)arg3;	// IMP=0x0060000000417e12
+ (id)supportedHumanBodyPose3DKeypointsRev1;	// IMP=0x0060000000417e05
- (void).cxx_destruct;	// IMP=0x0000000000417a23
@property(readonly, nonatomic) struct CGSize inputSize; // @synthesize inputSize=_inputSize;
@property(readonly, nonatomic) CDStruct_8e0628e6 cameraIntrinsics; // @synthesize cameraIntrinsics=_cameraIntrinsics;
@property(readonly, nonatomic) CDStruct_14d5dc5e cameraRenderTransformMatrix; // @synthesize cameraRenderTransformMatrix=_cameraRenderTransformMatrix;
@property(readonly, nonatomic) CDStruct_14d5dc5e cameraTransformMatrix; // @synthesize cameraTransformMatrix=_cameraTransformMatrix;
@property(readonly, nonatomic) float heightEstimatedScale; // @synthesize heightEstimatedScale=_heightEstimatedScale;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000041763d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004174bf
@property(readonly, nonatomic) float bodyHeight;
- (id)pointKeyGroupLabelsMapping;	// IMP=0x000000000041747d
- (id)availableGroupKeys;	// IMP=0x000000000041744d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000417263

@end

