//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIImageCGPDFPageContent
{
    struct CGPDFPage *_pdfPageRef;	// 40 = 0x28
}

- (void)_drawWithSize:(struct CGSize)arg1 scale:(double)arg2 inContext:(struct CGContext *)arg3 effect:(id)arg4;	// IMP=0x0000000000a426c2
- (void)_prepareForDrawingWithSize:(struct CGSize)arg1 scale:(double)arg2 inContext:(struct CGContext *)arg3;	// IMP=0x0000000000a4264a
- (id)description;	// IMP=0x0000000000a4261a
- (unsigned long long)hash;	// IMP=0x0000000000a42609
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a4259d
- (double)vectorScale;	// IMP=0x0000000000a4258f
- (struct CGSize)sizeInPixels;	// IMP=0x0000000000a42511
- (struct CGPDFPage *)CGPDFPage;	// IMP=0x0000000000a42500
- (_Bool)isCGPDFPage;	// IMP=0x0000000000a424f8
- (_Bool)canEmitVectorDrawingCommands;	// IMP=0x0000000000a424f0
- (_Bool)canScaleImageToTargetResolution;	// IMP=0x0000000000a424e8
- (id)typeName;	// IMP=0x0000000000a424db
- (void)dealloc;	// IMP=0x0000000000a4249a
- (id)initWithScale:(double)arg1;	// IMP=0x0000000000a42413
- (id)initWithCGPDFPage:(struct CGPDFPage *)arg1 scale:(double)arg2;	// IMP=0x0000000000a422ca

@end
