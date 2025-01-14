//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage;

__attribute__((visibility("hidden")))
@interface _UIImageCIImageContent
{
    CIImage *_ciImage;	// 40 = 0x28
    _Bool _allowHDR;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000a415e3
- (void)_drawWithSize:(struct CGSize)arg1 scale:(double)arg2 inContext:(struct CGContext *)arg3 effect:(id)arg4;	// IMP=0x0000000000a41331
- (void)_prepareForDrawingWithSize:(struct CGSize)arg1 scale:(double)arg2 inContext:(struct CGContext *)arg3;	// IMP=0x0000000000a412ff
- (id)description;	// IMP=0x0000000000a412cf
- (unsigned long long)hash;	// IMP=0x0000000000a412b2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a41246
- (struct CGSize)sizeInPixels;	// IMP=0x0000000000a41201
- (_Bool)canRenderCIImage;	// IMP=0x0000000000a411a4
- (_Bool)canScaleImageToTargetResolution;	// IMP=0x0000000000a4119c
- (_Bool)isCIImage;	// IMP=0x0000000000a41194
- (id)CIImage;	// IMP=0x0000000000a4117f
- (id)typeName;	// IMP=0x0000000000a41172
- (id)imageRendererFormat;	// IMP=0x0000000000a410f0
- (id)makeSDRVersion;	// IMP=0x0000000000a41063
- (_Bool)isHDR;	// IMP=0x0000000000a41053
- (id)initWithScale:(double)arg1;	// IMP=0x0000000000a40fcc
- (id)initWithCIImage:(id)arg1 scale:(double)arg2;	// IMP=0x0000000000a40ed7

@end

