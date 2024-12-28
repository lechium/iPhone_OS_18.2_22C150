//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUIVectorGlyphPath, NSData;

@interface CUIVectorGlyphMutator : NSObject
{
    CUIVectorGlyphPath *_originPath;	// 8 = 0x8
    CUIVectorGlyphPath *_ultralightPath;	// 16 = 0x10
    CUIVectorGlyphPath *_blackPath;	// 24 = 0x18
    double _pointSize;	// 32 = 0x20
    NSData *_originClipStrokeKeyframes;	// 40 = 0x28
    NSData *_ultralightClipStrokeKeyframes;	// 48 = 0x30
    NSData *_blackClipStrokeKeyframes;	// 56 = 0x38
    struct {
        double *pointComponents;
        unsigned long long numPoints;
    } _originPoints;	// 64 = 0x40
    CDStruct_351aa1f6 _ultralightDeltas;	// 80 = 0x50
    CDStruct_351aa1f6 _blackDeltas;	// 96 = 0x60
}

+ (CDStruct_c3b9c2ee)scalarsForGlyphWeight:(long long)arg1 glyphSize:(long long)arg2;	// IMP=0x00600000000711b4
+ (CDStruct_c3b9c2ee)scalarsForGlyphContinuousWeight:(double)arg1 glyphContinuousSize:(double)arg2;	// IMP=0x0060000000070fec
+ (CDStruct_c3b9c2ee)_scalarsForGlyphContinuousWeight:(double)arg1 inDictionary:(id)arg2 shouldClamp:(_Bool)arg3;	// IMP=0x0060000000070dd1
+ (CDStruct_c3b9c2ee)transformForGlyphContinuousSize:(double)arg1;	// IMP=0x0060000000070d77
+ (CDStruct_c3b9c2ee)transformForGlyphSize:(long long)arg1;	// IMP=0x0060000000070d26
+ (CDStruct_f92c8eab)deltaArrayFrom:(CDStruct_f92c8eab)arg1 to:(CDStruct_f92c8eab)arg2;	// IMP=0x0060000000070cab
+ (CDStruct_f92c8eab)pointArrayFromPath:(struct CGPath *)arg1;	// IMP=0x0060000000070707
+ (double *)realloc_cgfloat_array:(double *)arg1 withNewCount:(unsigned long long)arg2;	// IMP=0x00600000000706a9
+ (id)_interpolationData;	// IMP=0x006000000006e984
@property(retain, nonatomic) NSData *blackClipStrokeKeyframes; // @synthesize blackClipStrokeKeyframes=_blackClipStrokeKeyframes;
@property(retain, nonatomic) NSData *ultralightClipStrokeKeyframes; // @synthesize ultralightClipStrokeKeyframes=_ultralightClipStrokeKeyframes;
@property(retain, nonatomic) NSData *originClipStrokeKeyframes; // @synthesize originClipStrokeKeyframes=_originClipStrokeKeyframes;
@property(nonatomic) CDStruct_f92c8eab blackDeltas; // @synthesize blackDeltas=_blackDeltas;
@property(nonatomic) CDStruct_f92c8eab ultralightDeltas; // @synthesize ultralightDeltas=_ultralightDeltas;
@property(nonatomic) CDStruct_f92c8eab originPoints; // @synthesize originPoints=_originPoints;
@property(nonatomic) double pointSize; // @synthesize pointSize=_pointSize;
@property(retain, nonatomic) CUIVectorGlyphPath *blackPath; // @synthesize blackPath=_blackPath;
@property(retain, nonatomic) CUIVectorGlyphPath *ultralightPath; // @synthesize ultralightPath=_ultralightPath;
@property(retain, nonatomic) CUIVectorGlyphPath *originPath; // @synthesize originPath=_originPath;
- (struct CGPath *)cgPathFrom:(CDStruct_f92c8eab)arg1;	// IMP=0x00000000000712f4
- (id)pathForScalars:(CDStruct_c3b9c2ee)arg1 andTransform:(CDStruct_c3b9c2ee)arg2;	// IMP=0x00000000000705c8
- (id)pathForScalars:(CDStruct_c3b9c2ee)arg1;	// IMP=0x00000000000705ab
- (id)clipStrokeKeyframesForPath:(id)arg1 scalars:(CDStruct_c3b9c2ee)arg2;	// IMP=0x000000000006fb36
- (void)convertDistance0:(float)arg1 distance1:(float)arg2 elementIndex0Out:(unsigned long long *)arg3 distance0Out:(float *)arg4 elementIndex1Out:(unsigned long long *)arg5 distance1Out:(float *)arg6 forSubpath:(unsigned long long)arg7 data:(struct CUIVectorGlyphPathLengthData)arg8;	// IMP=0x000000000006f9ce
- (CDStruct_f92c8eab)applyDeltasWithScalars:(CDStruct_c3b9c2ee)arg1 andTransform:(CDStruct_c3b9c2ee)arg2;	// IMP=0x000000000006f887
- (CDStruct_f92c8eab)applyDeltasWithScalars:(CDStruct_c3b9c2ee)arg1;	// IMP=0x000000000006f86a
- (void)dealloc;	// IMP=0x000000000006e8d4
- (id)initWithPointSize:(double)arg1 regular:(id)arg2 ultralight:(id)arg3 black:(id)arg4;	// IMP=0x000000000006e2c2

@end
