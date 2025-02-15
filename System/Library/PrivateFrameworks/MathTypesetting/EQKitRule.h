//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface EQKitRule
{
    double _height;	// 8 = 0x8
    double _depth;	// 16 = 0x10
    double _width;	// 24 = 0x18
    struct CGColor *_cgColor;	// 32 = 0x20
}

- (struct CGColor *)color;	// IMP=0x0000000000059241
- (double)width;	// IMP=0x000000000005922f
- (double)depth;	// IMP=0x000000000005921d
- (double)height;	// IMP=0x000000000005920b
- (id)description;	// IMP=0x000000000005917a
- (_Bool)appendOpticalAlignToSpec:(void *)arg1 offset:(struct CGPoint)arg2;	// IMP=0x0000000000059146
- (void)renderIntoContext:(id)arg1 offset:(struct CGPoint)arg2;	// IMP=0x0000000000058e11
- (unsigned long long)hash;	// IMP=0x0000000000058de2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000058c6e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000058bda
- (void)dealloc;	// IMP=0x0000000000058b56
- (id)initWithHeight:(double)arg1 depth:(double)arg2 width:(double)arg3 cgColor:(struct CGColor *)arg4;	// IMP=0x0000000000058a94

@end

