//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CAShapeLayer.h>

@class UIColor;

@interface HNDBubbleCursorLayer : CAShapeLayer
{
    _Bool _ensureHidden;	// 8 = 0x8
    _Bool _isSimpleRect;	// 9 = 0x9
    _Bool _simpleRect;	// 10 = 0xa
    int _theme;	// 12 = 0xc
    int _level;	// 16 = 0x10
    UIColor *_restingStrokeColor;	// 24 = 0x18
    UIColor *_restingFillColor;	// 32 = 0x20
    double _boundsInset;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000453c1
@property(nonatomic, getter=isSimpleRect) _Bool simpleRect; // @synthesize simpleRect=_simpleRect;
@property(readonly, nonatomic) _Bool isSimpleRect; // @synthesize isSimpleRect=_isSimpleRect;
@property(nonatomic) double boundsInset; // @synthesize boundsInset=_boundsInset;
@property(retain, nonatomic) UIColor *restingFillColor; // @synthesize restingFillColor=_restingFillColor;
@property(retain, nonatomic) UIColor *restingStrokeColor; // @synthesize restingStrokeColor=_restingStrokeColor;
@property(nonatomic) int level; // @synthesize level=_level;
@property(nonatomic) int theme; // @synthesize theme=_theme;
- (double)_opacityForTheme:(int)arg1 level:(int)arg2 pointerSizeMultiplier:(double)arg3;	// IMP=0x00100000000452c9
- (id)_borderPatternForTheme:(int)arg1 level:(int)arg2 pointerSizeMultiplier:(double)arg3;	// IMP=0x00100000000452c1
- (double)_borderWidthForTheme:(int)arg1 level:(int)arg2 pointerSizeMultiplier:(double)arg3;	// IMP=0x00100000000452b8
- (double)_boundsInsetForTheme:(int)arg1 level:(int)arg2 pointerSizeMultiplier:(double)arg3;	// IMP=0x00100000000452af
- (id)_fillColorForTheme:(int)arg1 level:(int)arg2 pointerSizeMultiplier:(double)arg3;	// IMP=0x00100000000452a7
- (id)_strokeColorForTheme:(int)arg1 level:(int)arg2 pointerSizeMultiplier:(double)arg3;	// IMP=0x001000000004529f
- (double)valueForPointerSizeMultipler:(double)arg1 withBaseValue:(double)arg2;	// IMP=0x001000000004524a
- (void)_updatePresentationProperties;	// IMP=0x0010000000044fd1
- (void)updatePath:(id)arg1 frame:(struct CGRect)arg2 isSimpleRect:(_Bool)arg3 animated:(_Bool)arg4;	// IMP=0x0010000000044ec8
- (void)updateLevel:(int)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000044e40
- (void)updateTheme:(int)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000044db8
- (void)ensureHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000044d30
- (id)description;	// IMP=0x0010000000044b58
- (id)init;	// IMP=0x0010000000044ad7

@end

