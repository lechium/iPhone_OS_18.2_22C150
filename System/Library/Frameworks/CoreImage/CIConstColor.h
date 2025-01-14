//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIColor.h"

__attribute__((visibility("hidden")))
@interface CIConstColor : CIColor
{
}

+ (id)alloc;	// IMP=0x0080000000058794
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 colorSpace:(struct CGColorSpace *)arg5;	// IMP=0x0000000000058a22
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000589f3
- (unsigned long long)hash;	// IMP=0x000000000005897f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000588c1
- (struct CGColor *)cgColor;	// IMP=0x0000000000058887
- (struct CGColor *)rgbColor;	// IMP=0x0000000000058875
- (struct CGColorSpace *)colorSpace;	// IMP=0x0000000000058849
- (double)alpha;	// IMP=0x000000000005883e
- (double)blue;	// IMP=0x0000000000058833
- (double)green;	// IMP=0x0000000000058828
- (double)red;	// IMP=0x000000000005881d
- (const double *)components;	// IMP=0x0000000000058813
- (unsigned long long)numberOfComponents;	// IMP=0x0000000000058808
- (id)autorelease;	// IMP=0x00000000000587ff
- (oneway void)release;	// IMP=0x00000000000587f9
- (id)retain;	// IMP=0x00000000000587f0
- (unsigned long long)retainCount;	// IMP=0x00000000000587e5
- (void)dealloc;	// IMP=0x00000000000587df

@end

