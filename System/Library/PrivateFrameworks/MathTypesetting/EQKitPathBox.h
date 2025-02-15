//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface EQKitPathBox
{
    _Bool _dimensionsValid;	// 8 = 0x8
    _Bool _erasableBoundsValid;	// 9 = 0x9
    int _drawingMode;	// 12 = 0xc
    double _height;	// 16 = 0x10
    double _depth;	// 24 = 0x18
    double _width;	// 32 = 0x20
    struct CGPath *_cgPath;	// 40 = 0x28
    double _paddingLeft;	// 48 = 0x30
    double _paddingRight;	// 56 = 0x38
    struct CGColor *_cgColor;	// 64 = 0x40
    double _lineWidth;	// 72 = 0x48
    struct CGRect _erasableBounds;	// 80 = 0x50
}

@property(readonly, nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(readonly, nonatomic) int drawingMode; // @synthesize drawingMode=_drawingMode;
- (struct CGColor *)color;	// IMP=0x000000000005a8ae
@property(readonly, nonatomic) double paddingRight; // @synthesize paddingRight=_paddingRight;
@property(readonly, nonatomic) double paddingLeft; // @synthesize paddingLeft=_paddingLeft;
@property(readonly, nonatomic) struct CGPath *cgPath; // @synthesize cgPath=_cgPath;
- (double)height;	// IMP=0x000000000005a867
- (struct CGRect)p_cacheErasableBounds;	// IMP=0x000000000005a7ac
- (void)p_cacheDimensions;	// IMP=0x000000000005a6cc
- (id)description;	// IMP=0x000000000005a63b
- (_Bool)appendOpticalAlignToSpec:(void *)arg1 offset:(struct CGPoint)arg2;	// IMP=0x000000000005a5f5
- (void)renderIntoContext:(id)arg1 offset:(struct CGPoint)arg2;	// IMP=0x000000000005a3d0
- (struct CGRect)erasableBounds;	// IMP=0x000000000005a34c
- (double)width;	// IMP=0x000000000005a323
- (double)depth;	// IMP=0x000000000005a2fa
- (void)p_ensureDimensionsAreValid;	// IMP=0x000000000005a2cb
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005a0ab
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000059fc8
- (void)dealloc;	// IMP=0x0000000000059f42
- (id)initWithCGPath:(struct CGPath *)arg1 height:(double)arg2 cgColor:(struct CGColor *)arg3 drawingMode:(int)arg4 lineWidth:(double)arg5;	// IMP=0x0000000000059f24
- (id)initWithCGPath:(struct CGPath *)arg1 height:(double)arg2 cgColor:(struct CGColor *)arg3;	// IMP=0x0000000000059efe
- (id)initWithCGPath:(struct CGPath *)arg1 height:(double)arg2 paddingLeft:(double)arg3 paddingRight:(double)arg4 cgColor:(struct CGColor *)arg5;	// IMP=0x0000000000059ede
- (id)initWithCGPath:(struct CGPath *)arg1 height:(double)arg2 paddingLeft:(double)arg3 paddingRight:(double)arg4 cgColor:(struct CGColor *)arg5 drawingMode:(int)arg6 lineWidth:(double)arg7;	// IMP=0x0000000000059dc9

@end

