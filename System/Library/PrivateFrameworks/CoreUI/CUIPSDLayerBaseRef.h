//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUIPSDImageRef;

@interface CUIPSDLayerBaseRef : NSObject
{
    CUIPSDImageRef *_imageRef;	// 8 = 0x8
    unsigned int _layerIndex;	// 16 = 0x10
}

@property(nonatomic) unsigned int layerIndex; // @synthesize layerIndex=_layerIndex;
@property(retain, nonatomic) CUIPSDImageRef *imageRef; // @synthesize imageRef=_imageRef;
- (struct CGImage *)_createMaskFromAlphaChannel:(long long)arg1;	// IMP=0x0000000000034e5d
- (id)vectorMaskRef;	// IMP=0x0000000000034e0d
- (id)layerMaskRef;	// IMP=0x0000000000034dbd
@property(readonly) _Bool hasVectorMask;
@property(readonly) _Bool hasLayerMask;
@property(readonly) int blendMode;
@property(readonly) double fillOpacity;
@property(readonly) double opacity;
@property(readonly) _Bool visibility;
@property(readonly) struct CGRect bounds;
- (_Bool)isLayerGroup;	// IMP=0x0000000000034c7a
- (id)name;	// IMP=0x0000000000034c5e
- (id)_psdImageRef;	// IMP=0x0000000000034c54
- (void *)_psdLayerRecord;	// IMP=0x0000000000034c38
- (void)dealloc;	// IMP=0x0000000000034bfd

@end
