//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreRE/NSObject-Protocol.h>
#import <CoreRE/NSSecureCoding-Protocol.h>

@class NSArray;
@protocol MTLDevice;

@protocol REMeshPayload <NSObject, NSSecureCoding>
@property(readonly, nonatomic) _Bool isLimitedRenderAsset;
@property(readonly, nonatomic, getter=isShareable) _Bool shareable;
@property(readonly, nonatomic) unsigned long long totalPayloadSize;
@property(readonly, nonatomic) FixedInlineArray_6014624d payloadBufferSizes;
@property(readonly, nonatomic) NSArray *skeletons;
@property(readonly, nonatomic) NSArray *instances;
@property(readonly, nonatomic) NSArray *models;
@property(readonly, nonatomic) NSArray *parts;
- (unsigned long long)estimatePayloadContainerOverheadSize;
- (FixedInlineArray_09fae5e8)meshPayloadBuffersWithDevice:(id <MTLDevice>)arg1;

@optional
- (void)makeBoundingBoxes:(void *)arg1 perPartPerInstanceBoundingBoxes:(void *)arg2;
- (struct MeshCollection)makeMeshCollection:(const void *)arg1;
@end

