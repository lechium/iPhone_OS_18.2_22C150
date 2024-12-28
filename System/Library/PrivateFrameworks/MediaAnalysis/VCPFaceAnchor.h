//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, VCPFaceGeometry;

@interface VCPFaceAnchor : NSObject
{
    NSDictionary *_blendShapes;	// 8 = 0x8
    VCPFaceGeometry *_geometry;	// 16 = 0x10
    CDStruct_14d5dc5e _transform;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000002b411f
- (void).cxx_destruct;	// IMP=0x00000000002b4472
@property(readonly, nonatomic) VCPFaceGeometry *geometry; // @synthesize geometry=_geometry;
@property(readonly, nonatomic) NSDictionary *blendShapes; // @synthesize blendShapes=_blendShapes;
@property(readonly, nonatomic) CDStruct_14d5dc5e transform; // @synthesize transform=_transform;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002b41fa
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002b4127
- (id)initWithTransform:(CDStruct_14d5dc5e)arg1 blendShapes:(id)arg2 geometry:(id)arg3;	// IMP=0x00000000002b400c

@end
