//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIColor.h"

__attribute__((visibility("hidden")))
@interface UIDeviceRGBColor : UIColor
{
    double redComponent;	// 8 = 0x8
    double greenComponent;	// 16 = 0x10
    double blueComponent;	// 24 = 0x18
    double alphaComponent;	// 32 = 0x20
    _Atomic struct CGColor *_cachedColor;	// 40 = 0x28
}

- (_Bool)getWhite:(double *)arg1 alpha:(double *)arg2;	// IMP=0x0000000000cb2e73
- (_Bool)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;	// IMP=0x0000000000cb2e15
- (_Bool)getHue:(double *)arg1 saturation:(double *)arg2 brightness:(double *)arg3 alpha:(double *)arg4;	// IMP=0x0000000000cb2d5c
- (double)alphaComponent;	// IMP=0x0000000000cb2d4a
- (struct CGColor *)CGColor;	// IMP=0x0000000000cb2c72
- (unsigned long long)hash;	// IMP=0x0000000000cb2bec
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cb2983
- (_Bool)_isDeepColor;	// IMP=0x0000000000cb28e6
- (id)description;	// IMP=0x0000000000cb2848
- (id)colorSpaceName;	// IMP=0x0000000000cb281b
- (void)setStroke;	// IMP=0x0000000000cb27d0
- (void)setFill;	// IMP=0x0000000000cb2785
- (void)set;	// IMP=0x0000000000cb272c
- (id)colorWithAlphaComponent:(double)arg1;	// IMP=0x0000000000cb2695
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cb268a
- (void)dealloc;	// IMP=0x0000000000cb2649
- (id)initWithCGColor:(struct CGColor *)arg1;	// IMP=0x0000000000cb25a9
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;	// IMP=0x0000000000cb2410
- (id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;	// IMP=0x0000000000cb2240

@end

