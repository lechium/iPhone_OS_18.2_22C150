//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;
@protocol DRMesh;

__attribute__((visibility("hidden")))
@interface REDirectMeshPayload
{
    unsigned char _identifier[16];	// 8 = 0x8
    id <DRMesh> _directMesh;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000425d0c
- (void).cxx_destruct;	// IMP=0x00000000004266b8
@property(retain, nonatomic) id <DRMesh> directMesh; // @synthesize directMesh=_directMesh;
@property(readonly, nonatomic) NSArray *skeletons;
@property(readonly, nonatomic) NSArray *instances;
@property(readonly, nonatomic) NSArray *models;
@property(readonly, nonatomic) NSArray *parts;
@property(readonly, nonatomic) _Bool isLimitedRenderAsset;
@property(readonly, nonatomic, getter=isShareable) _Bool shareable;
- (unsigned long long)estimatePayloadContainerOverheadSize;	// IMP=0x00000000004264fa
- (FixedInlineArray_09fae5e8)meshPayloadBuffersWithDevice:(id)arg1;	// IMP=0x000000000042637b
@property(readonly, nonatomic) unsigned long long totalPayloadSize;
@property(readonly, nonatomic) FixedInlineArray_6014624d payloadBufferSizes;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004260ea
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000425dfe
- (id)initWithDirectMesh:(id)arg1;	// IMP=0x0000000000425d24
@property(readonly, nonatomic) const unsigned char (*identifier)[16];
- (void)makeBoundingBoxes:(void *)arg1 perPartPerInstanceBoundingBoxes:(void *)arg2;	// IMP=0x0000000000405917
- (struct MeshCollection)makeMeshCollection:(const void *)arg1;	// IMP=0x000000000040476a
- (struct AABB)aabb;	// IMP=0x00000000004045f6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
