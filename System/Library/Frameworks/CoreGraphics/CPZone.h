//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPCharSequence, CPZoneProfile, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CPZone
{
    NSMutableArray *zoneBorders;	// 128 = 0x80
    struct CGPoint *outerVertices;	// 136 = 0x88
    struct CGPoint *swollenOuterVertices;	// 144 = 0x90
    double area;	// 152 = 0x98
    _Bool isStraddleZone;	// 160 = 0xa0
    CPZoneProfile *zoneProfile;	// 168 = 0xa8
    NSArray *leftGuides;	// 176 = 0xb0
    NSArray *rightGuides;	// 184 = 0xb8
    NSArray *gutters;	// 192 = 0xc0
    NSArray *spacers;	// 200 = 0xc8
    CPCharSequence *charactersInZone;	// 208 = 0xd0
    _Bool hasRotatedCharacters;	// 216 = 0xd8
    NSMutableArray *textLinesInZone;	// 224 = 0xe0
    NSArray *graphicsInZone;	// 232 = 0xe8
    NSMutableArray *backgroundGraphics;	// 240 = 0xf0
    unsigned int usedGraphicCount;	// 248 = 0xf8
    double rotationAngle;	// 256 = 0x100
}

- (double)rotationAngle;	// IMP=0x000000000058415e
- (void)setRotationAngle:(double)arg1;	// IMP=0x000000000058414c
- (unsigned int)usedGraphicCount;	// IMP=0x000000000058413c
- (void)incrementUsedGraphicCount;	// IMP=0x000000000058412c
- (id)spacers;	// IMP=0x000000000058411b
- (void)setSpacers:(id)arg1;	// IMP=0x00000000005840dd
- (id)gutters;	// IMP=0x00000000005840cc
- (void)setGutters:(id)arg1;	// IMP=0x000000000058408e
- (id)rightGuides;	// IMP=0x000000000058407d
- (void)setRightGuides:(id)arg1;	// IMP=0x000000000058403f
- (id)leftGuides;	// IMP=0x000000000058402e
- (void)setLeftGuides:(id)arg1;	// IMP=0x0000000000583ff0
- (void)setZoneProfile:(id)arg1;	// IMP=0x0000000000583fb2
- (id)zoneProfile;	// IMP=0x0000000000583fa1
- (void)setIsStraddleZone:(_Bool)arg1;	// IMP=0x0000000000583f91
- (_Bool)isStraddleZone;	// IMP=0x0000000000583f81
- (long long)compareArea:(id)arg1;	// IMP=0x0000000000583e2f
- (void)addContentFrom:(id)arg1;	// IMP=0x0000000000583d39
- (void)updatedCharSequenceFrom:(unsigned int)arg1 length:(unsigned int)arg2;	// IMP=0x0000000000583cb4
- (_Bool)hasRotatedCharacters;	// IMP=0x0000000000583ca4
- (id)charactersInZone;	// IMP=0x0000000000583c93
- (void)setCharactersInZone:(id)arg1;	// IMP=0x0000000000583c24
- (void)addPDFChar:(void *)arg1;	// IMP=0x0000000000583ba1
- (_Bool)canContain:(struct CGRect)arg1;	// IMP=0x0000000000583b5f
- (_Bool)contains:(id)arg1;	// IMP=0x00000000005839db
- (_Bool)rectangleBordersAtLeft:(id *)arg1 top:(id *)arg2 right:(id *)arg3 bottom:(id *)arg4;	// IMP=0x00000000005837af
- (_Bool)isRectangular;	// IMP=0x0000000000583796
- (struct CGRect)swollenZoneBounds;	// IMP=0x00000000005835f4
- (struct CGRect)zoneBounds;	// IMP=0x000000000058352d
- (struct CGRect)zoneBoundsFromVertices:(struct CGPoint *)arg1 ofCount:(unsigned int)arg2;	// IMP=0x00000000005834d1
- (double)area;	// IMP=0x00000000005833f3
- (struct CGPoint *)swollenOuterVertices;	// IMP=0x0000000000583371
- (void)accept:(id)arg1;	// IMP=0x0000000000583356
- (struct CGPoint *)outerVertices;	// IMP=0x00000000005832d9
- (long long)neighborZOrder;	// IMP=0x0000000000583128
- (long long)borderZOrder;	// IMP=0x000000000058300e
- (unsigned int)vertexCount;	// IMP=0x0000000000582fe7
- (void)removeUnfilledNeighborShapes;	// IMP=0x0000000000582ef6
- (id)backgroundGraphics;	// IMP=0x0000000000582bcd
- (struct CGColor *)newBackgroundColor;	// IMP=0x0000000000582a01
- (_Bool)hasNeighborShape:(id)arg1;	// IMP=0x0000000000582930
- (_Bool)bordersWindClockwise;	// IMP=0x0000000000582928
- (void)setZoneBorders:(id)arg1;	// IMP=0x0000000000582823
- (id)zoneBorders;	// IMP=0x0000000000582812
- (_Bool)hasBorders;	// IMP=0x00000000005827fa
- (_Bool)isZone;	// IMP=0x00000000005827f2
- (_Bool)mapToWordPairsWithIndex:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;	// IMP=0x0000000000582666
- (_Bool)mapToWordPairs:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;	// IMP=0x00000000005824f8
- (_Bool)mapToWordsWithIndex:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;	// IMP=0x00000000005823cd
- (_Bool)mapToWords:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;	// IMP=0x00000000005822d5
- (unsigned int)wordCount;	// IMP=0x0000000000582245
- (id)graphicsInZone;	// IMP=0x00000000005821fa
- (id)textLinesInZone;	// IMP=0x00000000005821e9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000581fe4
- (void)dealloc;	// IMP=0x0000000000581eda
- (id)init;	// IMP=0x0000000000581df9

@end

