//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface AKTSDBrushStroke : NSObject
{
    int _join;	// 8 = 0x8
    NSString *_strokeName;	// 16 = 0x10
    UIColor *_color;	// 24 = 0x18
    double _width;	// 32 = 0x20
    double _miterLimit;	// 40 = 0x28
}

+ (void)loadSectionsForBrush:(id)arg1 inSVGDoc:(struct _xmlDoc *)arg2;	// IMP=0x0060000000081bc1
+ (void)loadLineEndsForBrush:(id)arg1 inSVGDoc:(struct _xmlDoc *)arg2;	// IMP=0x0060000000080f8b
+ (void)loadBrush:(id)arg1;	// IMP=0x006000000008058b
+ (id)cacheDirectory;	// IMP=0x006000000008048f
+ (Class)mutableClass;	// IMP=0x0060000000080379
+ (id)strokeWithType:(long long)arg1 color:(id)arg2 width:(double)arg3;	// IMP=0x006000000008019b
+ (id)strokeWithName:(id)arg1 color:(id)arg2 width:(double)arg3;	// IMP=0x00600000000800ea
- (void).cxx_destruct;	// IMP=0x0000000000084ab4
@property(readonly, nonatomic) double miterLimit; // @synthesize miterLimit=_miterLimit;
@property(readonly, nonatomic) int join; // @synthesize join=_join;
@property(readonly, nonatomic) double width; // @synthesize width=_width;
@property(readonly, retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(readonly, copy, nonatomic) NSString *strokeName; // @synthesize strokeName=_strokeName;
- (void)brushPath:(id)arg1 inContext:(struct CGContext *)arg2;	// IMP=0x00000000000840ac
- (void)brushPath:(id)arg1 withScaling:(CDStruct_c3b9c2ee)arg2 inElementRange:(struct _NSRange)arg3 into:(id)arg4 sectionIndex:(unsigned long long *)arg5 viewScale:(double)arg6;	// IMP=0x00000000000834cf
- (void)brushSection:(id)arg1 sectionIndex:(unsigned long long)arg2 ontoPath:(id)arg3 withScaling:(CDStruct_c3b9c2ee)arg4 inElementRange:(struct _NSRange)arg5 into:(id)arg6 viewScale:(double)arg7;	// IMP=0x00000000000832e0
- (id)description;	// IMP=0x0000000000083216
- (void)paintLineEnd:(id)arg1 atPoint:(struct CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(struct CGContext *)arg5 useFastDrawing:(_Bool)arg6;	// IMP=0x000000000008306b
- (void)paintLineEnd:(id)arg1 atPoint:(struct CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(struct CGContext *)arg5;	// IMP=0x0000000000082de4
- (id)strokeLineEnd:(id)arg1;	// IMP=0x0000000000082aca
- (id)brushBoundsForId:(id)arg1;	// IMP=0x000000000008291d
- (id)brushPathsForId:(id)arg1;	// IMP=0x00000000000826f4
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000080395
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008038a
- (id)initWithName:(id)arg1 color:(id)arg2 width:(double)arg3 join:(int)arg4 miterLimit:(double)arg5;	// IMP=0x000000000008027c

@end

