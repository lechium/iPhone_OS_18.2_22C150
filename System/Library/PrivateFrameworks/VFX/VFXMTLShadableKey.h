//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VFXMTLRenderPipeline;

@interface VFXMTLShadableKey : NSObject
{
    struct __CFXMaterial *_material;	// 8 = 0x8
    struct __CFXGeometry *_geometry;	// 16 = 0x10
    VFXMTLRenderPipeline *_pipeline;	// 24 = 0x18
}

- (unsigned long long)hash;	// IMP=0x00000000001a6699
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a6670

@end

