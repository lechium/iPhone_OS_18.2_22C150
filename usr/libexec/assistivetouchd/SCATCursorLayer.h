//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CAShapeLayer.h>

@class UIColor;

@interface SCATCursorLayer : CAShapeLayer
{
    _Bool _ensureHidden;	// 8 = 0x8
    _Bool _simpleRect;	// 9 = 0x9
    _Bool _isSimpleRect;	// 10 = 0xa
    _Bool _isDark;	// 11 = 0xb
    UIColor *_restingStrokeColor;	// 16 = 0x10
    UIColor *_restingFillColor;	// 24 = 0x18
    double _boundsInset;	// 32 = 0x20
    long long _theme;	// 40 = 0x28
    long long _level;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000000648aa
@property(nonatomic) _Bool isDark; // @synthesize isDark=_isDark;
@property(readonly, nonatomic) _Bool isSimpleRect; // @synthesize isSimpleRect=_isSimpleRect;
@property(nonatomic) long long level; // @synthesize level=_level;
@property(nonatomic) long long theme; // @synthesize theme=_theme;
@property(nonatomic) double boundsInset; // @synthesize boundsInset=_boundsInset;
@property(nonatomic, getter=isSimpleRect) _Bool simpleRect; // @synthesize simpleRect=_simpleRect;
@property(retain, nonatomic) UIColor *restingFillColor; // @synthesize restingFillColor=_restingFillColor;
@property(retain, nonatomic) UIColor *restingStrokeColor; // @synthesize restingStrokeColor=_restingStrokeColor;
- (double)_opacityForTheme:(long long)arg1 level:(long long)arg2 highVisibility:(_Bool)arg3 options:(int)arg4;	// IMP=0x0010000000064738
- (id)_borderPatternForTheme:(long long)arg1 level:(long long)arg2 highVisibility:(_Bool)arg3 options:(int)arg4;	// IMP=0x0010000000064730
- (double)_borderWidthForTheme:(long long)arg1 level:(long long)arg2 highVisibility:(_Bool)arg3 options:(int)arg4;	// IMP=0x0010000000064727
- (double)_boundsInsetForTheme:(long long)arg1 level:(long long)arg2 highVisibility:(_Bool)arg3 options:(int)arg4;	// IMP=0x001000000006471e
- (id)_fillColorForTheme:(long long)arg1 level:(long long)arg2 highVisibility:(_Bool)arg3 options:(int)arg4;	// IMP=0x0010000000064716
- (id)_strokeColorForTheme:(long long)arg1 level:(long long)arg2 highVisibility:(_Bool)arg3 options:(int)arg4;	// IMP=0x00100000000646a5
- (void)_updatePresentationProperties:(int)arg1;	// IMP=0x00100000000643fd
- (void)updatePath:(id)arg1 frame:(struct CGRect)arg2 isSimpleRect:(_Bool)arg3 animated:(_Bool)arg4 options:(int)arg5;	// IMP=0x00100000000642e1
- (void)updateLevel:(long long)arg1 animated:(_Bool)arg2 options:(int)arg3;	// IMP=0x001000000006423b
- (void)updateTheme:(long long)arg1 animated:(_Bool)arg2 options:(int)arg3;	// IMP=0x0010000000064195
- (void)ensureHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000064109
- (id)styleProvider;	// IMP=0x00100000000640f0
- (_Bool)usesHighVisibility;	// IMP=0x00100000000640a5
- (id)description;	// IMP=0x0010000000063ec4
- (id)init;	// IMP=0x0010000000063e41

@end

