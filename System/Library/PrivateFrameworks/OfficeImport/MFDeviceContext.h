//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MFBrush, MFFont, MFPalette, MFPath, MFPen, MFTransform, NSMutableArray, OITSUColor;
@protocol MFDeviceDriver;

__attribute__((visibility("hidden")))
@interface MFDeviceContext : NSObject
{
    NSObject<MFDeviceDriver> *m_driver;	// 8 = 0x8
    _Bool m_textUpdateCP;	// 16 = 0x10
    double m_miterLimit;	// 24 = 0x18
    int m_textHorizontalAlign;	// 32 = 0x20
    int m_textVerticalAlign;	// 36 = 0x24
    int m_textDirection;	// 40 = 0x28
    MFFont *m_font;	// 48 = 0x30
    OITSUColor *m_textColour;	// 56 = 0x38
    int m_textBreakExtra;	// 64 = 0x40
    int m_textBreakCount;	// 68 = 0x44
    int m_textCharExtra;	// 72 = 0x48
    OITSUColor *m_bkColour;	// 80 = 0x50
    int m_bkMode;	// 88 = 0x58
    struct CGPoint m_brushOrg;	// 96 = 0x60
    struct CGPoint m_penPos;	// 112 = 0x70
    int m_arcDirection;	// 128 = 0x80
    int m_polyFillMode;	// 132 = 0x84
    MFTransform *m_transform;	// 136 = 0x88
    MFPen *m_pen;	// 144 = 0x90
    MFBrush *m_brush;	// 152 = 0x98
    MFPalette *m_selectedPalette;	// 160 = 0xa0
    int m_rop2;	// 168 = 0xa8
    int m_stretchMode;	// 172 = 0xac
    NSMutableArray *m_clippingPaths;	// 176 = 0xb0
    _Bool m_clippingIsRestarted;	// 184 = 0xb8
    MFPath *m_path;	// 192 = 0xc0
}

+ (id)deviceContextWithDriver:(id)arg1;	// IMP=0x001000000035e66e
- (void).cxx_destruct;	// IMP=0x000000000035e6fc
@property(nonatomic) _Bool clippingIsRestarted; // @synthesize clippingIsRestarted=m_clippingIsRestarted;
@property(readonly, nonatomic) NSMutableArray *clippingPaths; // @synthesize clippingPaths=m_clippingPaths;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f7ffe
- (void)setRop2:(int)arg1;	// IMP=0x00000000000f7bfd
- (int)getRop2;	// IMP=0x00000000000f7bf1
- (void)setBrush:(id)arg1;	// IMP=0x00000000000f7bab
- (id)getBrush;	// IMP=0x00000000000f7d67
- (void)setPen:(id)arg1;	// IMP=0x00000000000f7bdd
- (id)getPen;	// IMP=0x00000000000f88be
- (void)setSelectedPalette:(id)arg1;	// IMP=0x00000000000f88aa
- (id)getSelectedPalette;	// IMP=0x00000000000f8899
- (void)setPath:(id)arg1;	// IMP=0x00000000000f89f5
- (id)getPath;	// IMP=0x00000000000f7ae0
- (id)getCurrentTransform;	// IMP=0x00000000000f7084
- (void)setCurrentTransform:(id)arg1;	// IMP=0x00000000000f8885
- (int)getStretchBltMode;	// IMP=0x00000000000f85a7
- (void)setStretchBltMode:(int)arg1;	// IMP=0x00000000000f85b3
- (int)getPolyFillMode;	// IMP=0x00000000000f7d78
- (void)setPolyFillMode:(int)arg1;	// IMP=0x00000000000f859b
- (int)getArcDirection;	// IMP=0x00000000000f8583
- (void)setArcDirection:(int)arg1;	// IMP=0x00000000000f858f
- (id)getFont;	// IMP=0x00000000000f7661
- (void)setFont:(id)arg1;	// IMP=0x00000000000f7509
- (struct CGPoint)getBrushOrg;	// IMP=0x00000000000f8563
- (void)setBrushOrg:(struct CGPoint)arg1;	// IMP=0x00000000000f8573
- (int)getBkMode;	// IMP=0x00000000000f7b4c
- (void)setBkMode:(int)arg1;	// IMP=0x00000000000f7533
- (id)getBkColour;	// IMP=0x00000000000f8544
- (void)setBkColour:(id)arg1;	// IMP=0x00000000000f8552
- (int)getTextCharExtra;	// IMP=0x00000000000f7afa
- (void)setTextCharExtra:(int)arg1;	// IMP=0x00000000000f853b
- (int)getTextBreakCount;	// IMP=0x00000000000f8532
- (int)getTextBreakExtra;	// IMP=0x00000000000f8529
- (void)setTextJustification:(int)arg1 in_breakCount:(int)arg2;	// IMP=0x000000000035e6cb
- (id)getTextColour;	// IMP=0x00000000000f7b6b
- (void)setTextColour:(id)arg1;	// IMP=0x00000000000f7650
- (int)getTextDirection;	// IMP=0x00000000000f8517
- (void)setTextDirection:(int)arg1;	// IMP=0x00000000000f8520
- (int)getTextVerticalAlign;	// IMP=0x00000000000f7b03
- (void)setTextVerticalAlign:(int)arg1;	// IMP=0x00000000000f850e
- (int)getTextHorizontalAlign;	// IMP=0x00000000000f7b0c
- (void)setTextHorizontalAlign:(int)arg1;	// IMP=0x00000000000f8505
- (double)getMiterLimit;	// IMP=0x00000000000f84ef
- (void)setMiterLimit:(double)arg1;	// IMP=0x00000000000f84fa
- (_Bool)getTextUpdateCP;	// IMP=0x00000000000f7af1
- (void)setTextUpdateCP:(_Bool)arg1;	// IMP=0x00000000000f84e6
- (void)setPenPosition:(struct CGPoint)arg1;	// IMP=0x00000000000f84d6
- (struct CGPoint)getPenPosition;	// IMP=0x00000000000f84c6
- (id)initWithDriver:(id)arg1;	// IMP=0x00000000000f6096

@end
