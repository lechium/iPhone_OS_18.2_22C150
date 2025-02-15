//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EMFPlusPlayer, MFGraphicsDevice;

__attribute__((visibility("hidden")))
@interface EMFPlayer : NSObject
{
    MFGraphicsDevice *m_gdi;	// 8 = 0x8
    _Bool m_headerDone;	// 16 = 0x10
    EMFPlusPlayer *m_emfPlusPlayer;	// 24 = 0x18
    _Bool m_ignoreEMFRecords;	// 32 = 0x20
    _Bool m_ignoreEMFPlusRecords;	// 33 = 0x21
}

+ (struct CGRect)boundsInPoints:(id)arg1;	// IMP=0x0060000000238834
+ (struct CGRect)boundsInLogicalUnits:(id)arg1;	// IMP=0x0060000000354700
- (void).cxx_destruct;	// IMP=0x0000000000354855
- (int)playSetMetaRgn:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x00000000003546ea
- (int)playIntersectClipRect:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000035467b
- (int)playExcludeClipRect:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000035462e
- (int)playInvertRgn:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x00000000003545ac
- (int)playPaintRgn:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000035452a
- (int)playFillRgn:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000035449c
- (int)playSelectClipRegion:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000035440e
- (int)playSelectClipPath:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x00000000003543e9
- (int)playStrokeAndFillPath:(unsigned int)arg1 in_pRecord:(const char *)arg2 in_stroke:(_Bool)arg3 in_fill:(_Bool)arg4;	// IMP=0x00000000003543cd
- (int)playCloseFigure:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x00000000003543b5
- (int)playWidenPath:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000035439f
- (int)playEndPath:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000354389
- (int)playAbortPath:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000354373
- (int)playBeginPath:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000035435d
- (int)playSetRop2:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000354338
- (int)playSetMiterLimit:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x00000000003542eb
- (int)playSetPolyFillMode:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x00000000003542be
- (int)playStretchDIBits:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000354164
- (int)playSetDIBitsToDevice:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000353ffb
- (int)playPlgBlt:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000353bef
- (int)playMaskBlt:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000353888
- (int)playAlphaBlend:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000353603
- (int)playStretchBlt:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000035338d
- (int)playBitBlt:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000353138
- (int)playAngleArc:(unsigned int)arg1 in_pRecord:(const char *)arg2 in_is16bit:(_Bool)arg3;	// IMP=0x0000000000353095
- (int)playPolyPolyLine:(unsigned int)arg1 in_pRecord:(const char *)arg2 in_is16bit:(_Bool)arg3;	// IMP=0x0000000000352e56
- (int)playPolyPolygon:(unsigned int)arg1 in_pRecord:(const char *)arg2 in_is16bit:(_Bool)arg3;	// IMP=0x0000000000352c27
- (int)playRectangle:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000352bf5
- (int)playEllipse:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000352bc5
- (int)playPie:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000352b73
- (int)playChord:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000352b21
- (int)playArcTo:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000352acf
- (int)playArc:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000352a7d
- (int)playSetArcDirection:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000352a58
- (int)playMoveToEx:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000352a2c
- (int)playLineTo:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000352a00
- (int)playRestoreDC:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x00000000003529db
- (int)playSaveDC:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x00000000003529b9
- (int)playSetStretchBltMode:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000035298c
- (int)playRoundRect:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000035293d
- (int)playPolyLineTo:(unsigned int)arg1 in_pRecord:(const char *)arg2 in_is16bit:(_Bool)arg3;	// IMP=0x0000000000352876
- (int)playPolyLine:(unsigned int)arg1 in_pRecord:(const char *)arg2 in_is16bit:(_Bool)arg3;	// IMP=0x0000000000352739
- (int)playPolygon:(unsigned int)arg1 in_pRecord:(const char *)arg2 in_is16bit:(_Bool)arg3;	// IMP=0x00000000003525fa
- (int)playPolyBezierTo:(unsigned int)arg1 in_pRecord:(const char *)arg2 in_is16bit:(_Bool)arg3;	// IMP=0x00000000003524b2
- (int)playPolyBezier:(unsigned int)arg1 in_pRecord:(const char *)arg2 in_is16bit:(_Bool)arg3;	// IMP=0x0000000000352329
- (int)playPolyDraw:(unsigned int)arg1 in_pRecord:(const char *)arg2 in_is16bit:(_Bool)arg3;	// IMP=0x0000000000352076
- (int)playSetMapMode:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000352049
- (int)playSetBrushOrg:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000035201d
- (int)playSetBkMode:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000351ff0
- (int)playOffsetClipRegion:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000351fc8
- (int)playSetBkColour:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000351f3f
- (int)playSetTextJustification:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000351f15
- (int)playSetTextColour:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000351e8c
- (int)playSetTextAlign:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000351e4a
- (int)playExtTextOutW:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000351e32
- (int)playExtTextOutA:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000351e1d
- (int)playExtTextOut:(unsigned int)arg1 in_pRecord:(const char *)arg2 wideChars:(_Bool)arg3;	// IMP=0x0000000000351ab5
- (int)playCreateDibPatternBrushPT:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x00000000003519e1
- (int)playCreateMonoBrush:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000351914
- (int)playCreateBrushIndirect:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000035182a
- (int)playExtCreateFontIndirectW:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000351488
- (int)playRealizePalette:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000351466
- (int)playResizePalette:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000035143c
- (int)playSetPaletteEntries:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x00000000003512e8
- (int)playCreatePalette:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x00000000003511bd
- (int)playExtCreatePen:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000351035
- (int)playCreatePen:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000350f8d
- (int)playDeleteObject:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000350f68
- (int)playSelectObject:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000350f2b
- (int)playSelectPalette:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000350eee
- (int)playScaleViewportExt:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000350ebc
- (int)playSetViewportOrg:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000350e94
- (int)playSetViewportExt:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000350e6c
- (int)playModifyWorldTransform:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000350d59
- (int)playSetWorldTransform:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000350c49
- (int)playScaleWindowExt:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000350c17
- (int)playSetWindowOrg:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000350bef
- (int)playSetWindowExt:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000350bc7
- (int)playUnsupported:(unsigned int)arg1 in_recordName:(const char *)arg2 in_pRecord:(const char *)arg3;	// IMP=0x0000000000350bbf
- (int)playUnknown:(unsigned int)arg1 in_recordType:(unsigned int)arg2 in_pRecord:(const char *)arg3;	// IMP=0x0000000000350bb7
- (int)playHeader:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000350a1a
- (void)done;	// IMP=0x00000000001550f4
- (int)play:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x0000000000350122
- (id)getGdi;	// IMP=0x0000000000350114
- (void)setIgnoreEMFPlusRecords:(_Bool)arg1;	// IMP=0x0000000000154517
- (void)setIgnoreEMFRecords:(_Bool)arg1;	// IMP=0x0000000000154522
- (id)initWithGraphicsDevice:(id)arg1;	// IMP=0x0000000000153e7f

@end

