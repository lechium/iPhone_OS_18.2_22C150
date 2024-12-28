//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MFDeviceContext, MFObjectTable, NSDictionary, NSMutableArray;
@protocol MFDeviceDriver;

__attribute__((visibility("hidden")))
@interface MFGraphicsDevice : NSObject
{
    MFDeviceContext *m_currentDC;	// 8 = 0x8
    NSMutableArray *m_DCStack;	// 16 = 0x10
    int m_gStateStackHeight;	// 24 = 0x18
    MFDeviceContext *m_firstClipDC;	// 32 = 0x20
    NSObject<MFDeviceDriver> *m_deviceDriver;	// 40 = 0x28
    MFObjectTable *m_objectTable;	// 48 = 0x30
    MFObjectTable *m_stockObjects;	// 56 = 0x38
    NSDictionary *m_colorMap;	// 64 = 0x40
    NSDictionary *m_fillMap;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000362893
- (void)setMaximumObjectTableSize:(unsigned int)arg1;	// IMP=0x000000000036287d
- (int)plgBlt:(struct CGPoint *)arg1 in_sourceImage:(id)arg2 in_xSrc:(int)arg3 in_ySrc:(int)arg4 in_widthSrc:(int)arg5 in_heightSrc:(int)arg6 in_maskImage:(id)arg7 in_xMask:(int)arg8 in_yMask:(int)arg9 in_xform:(struct CGAffineTransform *)arg10 in_colour:(unsigned int)arg11;	// IMP=0x000000000036278a
- (int)maskBlt:(int)arg1 in_yDest:(int)arg2 in_widthDest:(int)arg3 in_heightDest:(int)arg4 in_sourceImage:(id)arg5 in_xSrc:(int)arg6 in_ySrc:(int)arg7 in_maskImage:(id)arg8 in_xMask:(int)arg9 in_yMask:(int)arg10 in_rop:(unsigned int)arg11 in_xform:(struct CGAffineTransform *)arg12 in_colour:(unsigned int)arg13;	// IMP=0x0000000000362686
- (int)alphaBlend:(int)arg1 in_yDest:(int)arg2 in_widthDest:(int)arg3 in_heightDest:(int)arg4 in_sourceImage:(id)arg5 in_xSrc:(int)arg6 in_ySrc:(int)arg7 in_widthSrc:(int)arg8 in_heightSrc:(int)arg9 in_sourceConstantOpacity:(unsigned char)arg10 in_useSourceAlphaChannel:(_Bool)arg11 in_xform:(struct CGAffineTransform *)arg12 in_colour:(unsigned int)arg13;	// IMP=0x000000000036259f
- (int)stretchBlt:(int)arg1 in_yDest:(int)arg2 in_widthDest:(int)arg3 in_heightDest:(int)arg4 in_sourceImage:(id)arg5 in_xSrc:(int)arg6 in_ySrc:(int)arg7 in_widthSrc:(int)arg8 in_heightSrc:(int)arg9 in_rop:(unsigned int)arg10 in_xform:(struct CGAffineTransform *)arg11 in_colour:(unsigned int)arg12 usePaletteForBilevel:(_Bool)arg13;	// IMP=0x000000000036253a
- (int)stretchBlt:(int)arg1 in_yDest:(int)arg2 in_widthDest:(int)arg3 in_heightDest:(int)arg4 in_sourceImage:(id)arg5 in_xSrc:(int)arg6 in_ySrc:(int)arg7 in_widthSrc:(int)arg8 in_heightSrc:(int)arg9 in_rop:(unsigned int)arg10 in_xform:(struct CGAffineTransform *)arg11 in_colour:(unsigned int)arg12;	// IMP=0x0000000000362460
- (int)bitBlt:(int)arg1 in_yDest:(int)arg2 in_widthDest:(int)arg3 in_heightDest:(int)arg4 in_sourceImage:(id)arg5 in_xSrc:(int)arg6 in_ySrc:(int)arg7 in_rop:(unsigned int)arg8 in_xform:(struct CGAffineTransform *)arg9 in_colour:(unsigned int)arg10;	// IMP=0x0000000000362399
- (int)patBlt:(int)arg1 in_y:(int)arg2 in_width:(int)arg3 in_height:(int)arg4 in_rop:(unsigned int)arg5;	// IMP=0x0000000000362368
- (id)createBitmap:(unsigned int)arg1 in_height:(unsigned int)arg2 in_planes:(unsigned int)arg3 in_bitsPerPixel:(unsigned int)arg4 in_bitmap:(const char *)arg5 in_bitmapSize:(unsigned int)arg6;	// IMP=0x0000000000362330
- (id)createDIBitmap:(const char *)arg1 in_headerSize:(unsigned int)arg2 in_bitmap:(const char *)arg3 in_bitmapSize:(unsigned int)arg4 in_usage:(int)arg5;	// IMP=0x00000000003622fe
- (id)createDIBitmap:(const char *)arg1 in_dibSize:(unsigned int)arg2 in_usage:(int)arg3;	// IMP=0x00000000003622db
- (int)frameRegion:(unsigned int)arg1 in_brushID:(unsigned int)arg2 in_width:(int)arg3 in_height:(int)arg4;	// IMP=0x000000000036221e
- (int)frameRegionWithRects:(id)arg1 in_brushID:(unsigned int)arg2 in_width:(int)arg3 in_height:(int)arg4;	// IMP=0x0000000000362165
- (int)fillRgn:(unsigned int)arg1 in_brushID:(unsigned int)arg2;	// IMP=0x0000000000362077
- (int)fillRgnWithRects:(id)arg1 in_brushID:(unsigned int)arg2;	// IMP=0x0000000000361fbe
- (int)invertRgn:(unsigned int)arg1;	// IMP=0x0000000000361f52
- (int)invertRgnWithRects:(id)arg1;	// IMP=0x0000000000361edf
- (int)paintRgn:(unsigned int)arg1;	// IMP=0x0000000000361e33
- (int)paintRgnWithRects:(id)arg1;	// IMP=0x0000000000361d80
- (int)setMetaRgn;	// IMP=0x00000000001d967d
- (int)intersectClipRect:(struct CGRect)arg1;	// IMP=0x00000000000f8a09
- (int)excludeClipRect:(struct CGRect)arg1;	// IMP=0x000000000016392f
- (int)setClipRegion:(unsigned int)arg1;	// IMP=0x0000000000361cf8
- (int)selectClipRegionWithRects:(id)arg1 in_mode:(int)arg2;	// IMP=0x0000000000361c20
- (int)selectClipPath:(int)arg1;	// IMP=0x00000000001d9763
- (int)strokeAndFillPath:(_Bool)arg1 in_fill:(_Bool)arg2;	// IMP=0x0000000000361b7e
- (int)endPath;	// IMP=0x00000000001686f8
- (int)widenPath;	// IMP=0x0000000000361b12
- (int)beginPath;	// IMP=0x00000000001683c5
- (int)abortPath;	// IMP=0x0000000000361ab6
- (int)setRop2:(int)arg1;	// IMP=0x000000000015e2c4
- (int)setMapMode:(int)arg1;	// IMP=0x00000000000f7019
- (int)modifyWorldTransform:(const struct CGAffineTransform *)arg1 in_command:(int)arg2;	// IMP=0x0000000000361a46
- (int)setWorldTransform:(const struct CGAffineTransform *)arg1;	// IMP=0x00000000001d969b
- (int)scaleWindowExt:(int)arg1 in_xDenom:(int)arg2 in_yNum:(int)arg3 in_yDenom:(int)arg4;	// IMP=0x00000000003619bf
- (int)scaleViewportExt:(int)arg1 in_xDenom:(int)arg2 in_yNum:(int)arg3 in_yDenom:(int)arg4;	// IMP=0x0000000000361938
- (int)setViewportOrg:(int)arg1 in_y:(int)arg2;	// IMP=0x00000000003618c8
- (int)offsetViewportOrg:(int)arg1 in_y:(int)arg2;	// IMP=0x0000000000361858
- (int)offsetWindowOrg:(int)arg1 in_y:(int)arg2;	// IMP=0x00000000003617e8
- (int)setViewportExt:(int)arg1 in_y:(int)arg2;	// IMP=0x0000000000361778
- (int)setWindowOrg:(int)arg1 in_y:(int)arg2;	// IMP=0x0000000000361708
- (int)setWindowExt:(int)arg1 in_y:(int)arg2;	// IMP=0x0000000000361698
- (void)createStockObjects;	// IMP=0x0000000000154599
- (int)createPatternBrush:(id)arg1 index:(unsigned int)arg2 usePaletteForBilevel:(_Bool)arg3;	// IMP=0x0000000000361617
- (int)createPalette:(id)arg1 in_index:(unsigned int)arg2;	// IMP=0x0000000000361596
- (int)resizePalette:(unsigned int)arg1 in_index:(unsigned int)arg2;	// IMP=0x000000000036150b
- (int)setPaletteEntries:(unsigned int)arg1 in_colours:(id)arg2 in_index:(unsigned int)arg3;	// IMP=0x0000000000361444
- (id)createColorWithRGBBytes:(unsigned char)arg1 green:(unsigned char)arg2 blue:(unsigned char)arg3 flags:(unsigned char)arg4;	// IMP=0x000000000036139d
- (int)createPen:(int)arg1 width:(int)arg2 in_colour:(id)arg3 in_userStyleArray:(double *)arg4 index:(unsigned int)arg5;	// IMP=0x00000000003612d9
- (int)createFontIndirectW:(int)arg1 lfWidth:(int)arg2 lfEscapement:(int)arg3 lfOrientation:(int)arg4 lfWeight:(int)arg5 lfItalic:(_Bool)arg6 lfUnderline:(_Bool)arg7 lfStrikeOut:(_Bool)arg8 lfCharSet:(int)arg9 lfOutPrecision:(int)arg10 lfClipPrecision:(unsigned char)arg11 lfQuality:(int)arg12 pitch:(int)arg13 family:(int)arg14 lfFaceName:(id)arg15 elfFullName:(id)arg16 elfStyle:(id)arg17 elfVersion:(unsigned int)arg18 elfStyleSize:(unsigned int)arg19 elfMatch:(unsigned int)arg20 elfVendorId:(unsigned int)arg21 elfCulture:(unsigned int)arg22 index:(unsigned int)arg23;	// IMP=0x00000000003611ab
- (int)createFontIndirect:(int)arg1 lfWidth:(int)arg2 lfEscapement:(int)arg3 lfOrientation:(int)arg4 lfWeight:(int)arg5 lfItalic:(_Bool)arg6 lfUnderline:(_Bool)arg7 lfStrikeOut:(_Bool)arg8 lfCharSet:(int)arg9 lfOutPrecision:(int)arg10 lfClipPrecision:(unsigned char)arg11 lfQuality:(int)arg12 pitch:(int)arg13 family:(int)arg14 lfFaceName:(id)arg15;	// IMP=0x00000000003610c6
- (int)createBrush:(int)arg1 in_colour:(id)arg2 hatchstyle:(int)arg3 index:(unsigned int)arg4;	// IMP=0x0000000000360f3c
- (int)createRegion:(id)arg1;	// IMP=0x00000000001dd666
- (int)deleteObject:(int)arg1;	// IMP=0x00000000000f7e35
- (int)getStockObject:(unsigned int)arg1;	// IMP=0x0000000000154537
- (int)selectObject:(int)arg1;	// IMP=0x00000000000f741a
- (int)setPolyFillMode:(int)arg1;	// IMP=0x00000000000f8cb0
- (int)realizePalette;	// IMP=0x0000000000163927
- (int)roundRect:(int)arg1 top:(int)arg2 right:(int)arg3 bottom:(int)arg4 rx:(double)arg5 ry:(double)arg6;	// IMP=0x0000000000360f0a
- (int)closeCurrentPath:(_Bool)arg1;	// IMP=0x00000000001685dc
- (int)bezier:(int)arg1 y:(int)arg2 x2:(int)arg3 y2:(int)arg4 x3:(int)arg5 y3:(int)arg6 x4:(int)arg7 y4:(int)arg8;	// IMP=0x0000000000360ebf
- (int)bezierTo:(int)arg1 y:(int)arg2 x2:(int)arg3 y2:(int)arg4 x3:(int)arg5 y3:(int)arg6;	// IMP=0x0000000000360e84
- (int)chord:(int)arg1 nTopRect:(int)arg2 nRightRect:(int)arg3 nBottomRect:(int)arg4 nXStartArc:(int)arg5 nYStartArc:(int)arg6 nXEndArc:(int)arg7 nYEndArc:(int)arg8;	// IMP=0x0000000000360e39
- (int)arcTo:(int)arg1 nTopRect:(int)arg2 nRightRect:(int)arg3 nBottomRect:(int)arg4 nXStartArc:(int)arg5 nYStartArc:(int)arg6 nXEndArc:(int)arg7 nYEndArc:(int)arg8;	// IMP=0x0000000000360dee
- (int)angleArc:(int)arg1 y:(int)arg2 radius:(unsigned int)arg3 startAngle:(double)arg4 sweepAngle:(double)arg5;	// IMP=0x0000000000360dc9
- (int)pie:(int)arg1 nTopRect:(int)arg2 nRightRect:(int)arg3 nBottomRect:(int)arg4 nXStartArc:(int)arg5 nYStartArc:(int)arg6 nXEndArc:(int)arg7 nYEndArc:(int)arg8;	// IMP=0x0000000000360d7e
- (int)arc:(int)arg1 nTopRect:(int)arg2 nRightRect:(int)arg3 nBottomRect:(int)arg4 nXStartArc:(int)arg5 nYStartArc:(int)arg6 nXEndArc:(int)arg7 nYEndArc:(int)arg8;	// IMP=0x0000000000360d33
- (int)polyPolyline:(struct CGPoint *)arg1 in_polyCounts:(int *)arg2 in_count:(int)arg3;	// IMP=0x0000000000360d10
- (int)polyline:(struct CGPoint *)arg1 in_count:(int)arg2;	// IMP=0x0000000000360cf0
- (int)setArcDirection:(int)arg1;	// IMP=0x0000000000360cd7
- (int)polyPolygon:(struct CGPoint *)arg1 in_polyCounts:(int *)arg2 in_count:(int)arg3;	// IMP=0x0000000000360cb4
- (int)polygon:(struct CGPoint *)arg1 in_count:(int)arg2;	// IMP=0x0000000000360c94
- (int)lineTo:(double)arg1 y:(double)arg2;	// IMP=0x0000000000360c7a
- (int)moveTo:(double)arg1 y:(double)arg2;	// IMP=0x0000000000360c61
- (int)offsetClipRegionByX:(int)arg1 y:(int)arg2;	// IMP=0x0000000000360a20
- (int)selectClipRegion:(id)arg1 combineMode:(int)arg2;	// IMP=0x00000000003609aa
- (int)removeClip;	// IMP=0x0000000000360991
- (int)selectClippingPath:(id)arg1 combineMode:(int)arg2;	// IMP=0x00000000003607b0
- (id)clippingPathByCombiningClippingPath:(id)arg1 withClippingPath:(id)arg2 combineMode:(int)arg3;	// IMP=0x00000000003605f1
- (id)clippingPathByCombiningEmptyClippingPathWithClippingPath:(id)arg1 combineMode:(int)arg2;	// IMP=0x0000000000360575
- (id)clippingPathByCombiningImplicitClippingPathWithClippingPath:(id)arg1 combineMode:(int)arg2;	// IMP=0x0000000000360483
- (id)currentCummulatedClippingPath;	// IMP=0x000000000036014e
- (id)normalizedClippingPathWithClippingPath:(id)arg1;	// IMP=0x0000000000360094
- (int)restoreDC:(int)arg1;	// IMP=0x00000000000f8a75
- (int)restoreDC;	// IMP=0x000000000035feda
- (int)saveDC;	// IMP=0x00000000000f7f34
- (void)setClippingPath:(id)arg1;	// IMP=0x000000000035fd61
- (void)addClippingPathToCurrentDCAndCurrentContext:(id)arg1;	// IMP=0x000000000035fcc4
- (void)applyDCAtIndexToCurrentContext:(unsigned long long)arg1;	// IMP=0x000000000035fc87
- (void)applyClippingOfDCAtIndexToCurrentContext:(unsigned long long)arg1;	// IMP=0x000000000035fad3
- (void)addClippingPathToCurrentContext:(id)arg1 dc:(id)arg2;	// IMP=0x000000000035f93b
- (id)clipEverythingClippingPath;	// IMP=0x000000000035f885
- (id)implicitClippingPath;	// IMP=0x000000000035f823
- (void)applyNonClippingOfDCAtIndexToCurrentContext:(unsigned long long)arg1;	// IMP=0x000000000035f790
- (unsigned long long)clippingStartDCIndex;	// IMP=0x000000000035f594
- (unsigned long long)firstClipDCIndex;	// IMP=0x000000000035f577
- (unsigned long long)currentDCIndex;	// IMP=0x000000000035f55d
- (void)restoreGState:(id)arg1;	// IMP=0x000000000035f53d
- (void)saveGState:(id)arg1;	// IMP=0x000000000035f51d
- (int)setViewBox:(double)arg1 top:(double)arg2 width:(double)arg3 height:(double)arg4;	// IMP=0x000000000035f507
- (int)ellipse:(int)arg1 y1:(int)arg2 x2:(int)arg3 y2:(int)arg4;	// IMP=0x000000000035f4d5
- (int)fillRectangle:(int)arg1 y1:(int)arg2 x2:(int)arg3 y2:(int)arg4;	// IMP=0x000000000035f4a3
- (int)rectangle:(int)arg1 y1:(int)arg2 x2:(int)arg3 y2:(int)arg4;	// IMP=0x000000000035f471
- (int)extTextOutEncoded:(int)arg1 y:(int)arg2 in_data:(id)arg3 options:(int)arg4 left:(int)arg5 top:(int)arg6 right:(int)arg7 bottom:(int)arg8 spacingValues:(int *)arg9 numValues:(int)arg10;	// IMP=0x000000000035f168
- (int)extTextOut:(int)arg1 y:(int)arg2 in_text:(id)arg3 options:(int)arg4 left:(int)arg5 top:(int)arg6 right:(int)arg7 bottom:(int)arg8 spacingValues:(int *)arg9 numValues:(int)arg10;	// IMP=0x000000000035f081
- (int)textOutEncoded:(int)arg1 y:(int)arg2 in_data:(id)arg3;	// IMP=0x000000000035ef74
- (int)textOut:(int)arg1 y:(int)arg2 in_text:(id)arg3;	// IMP=0x000000000035eec5
- (int)setTextAlign:(_Bool)arg1 textHorizontalAlign:(int)arg2 textVerticalAlign:(int)arg3 textDirection:(int)arg4;	// IMP=0x000000000035ee50
- (int)setTextCharExtra:(int)arg1;	// IMP=0x00000000001de5c2
- (int)setTextJustification:(int)arg1 in_breakCount:(int)arg2;	// IMP=0x000000000035ee48
- (int)setTextColour:(id)arg1;	// IMP=0x00000000000f753c
- (int)setStretchBltMode:(int)arg1;	// IMP=0x000000000015538b
- (int)setBrushOrg:(double)arg1 y:(double)arg2;	// IMP=0x000000000035ee2f
- (int)setBkMode:(int)arg1;	// IMP=0x00000000000f751a
- (int)setBkColour:(id)arg1;	// IMP=0x000000000015e25b
- (int)setMiterLimit:(double)arg1;	// IMP=0x00000000001d54fa
- (int)description:(id)arg1;	// IMP=0x00000000001683bd
- (int)comment:(id)arg1;	// IMP=0x000000000035ee27
- (void)done;	// IMP=0x00000000000f8d0b
- (id)recolor:(unsigned char)arg1 in_green:(unsigned char)arg2 in_blue:(unsigned char)arg3 fill:(_Bool)arg4;	// IMP=0x000000000035eda8
- (id)recolor:(id)arg1 fill:(_Bool)arg2;	// IMP=0x00000000000f75a2
- (void)setColorMap:(id)arg1 fillMap:(id)arg2;	// IMP=0x00000000000f6c5b
- (id)getCurrentFont;	// IMP=0x00000000001cd9cc
- (struct CGRect)getCanvas;	// IMP=0x0000000000153f7a
- (void)dealloc;	// IMP=0x00000000000f8d5c
- (id)initWithCanvas:(struct CGRect)arg1;	// IMP=0x00000000000f5def

@end
