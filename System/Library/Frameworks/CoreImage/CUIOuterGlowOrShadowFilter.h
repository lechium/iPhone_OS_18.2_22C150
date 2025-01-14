//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIColor, CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CUIOuterGlowOrShadowFilter : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIVector *inputOffset;	// 80 = 0x50
    NSNumber *inputRange;	// 88 = 0x58
    NSNumber *inputRadius;	// 96 = 0x60
    NSNumber *inputSize;	// 104 = 0x68
    NSNumber *inputSpread;	// 112 = 0x70
    CIColor *inputColor;	// 120 = 0x78
}

+ (id)customAttributes;	// IMP=0x006000000022d676
@property(retain, nonatomic) CIColor *inputColor; // @synthesize inputColor;
@property(retain, nonatomic) NSNumber *inputSpread; // @synthesize inputSpread;
@property(retain, nonatomic) NSNumber *inputSize; // @synthesize inputSize;
@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;
@property(retain, nonatomic) NSNumber *inputRange; // @synthesize inputRange;
@property(retain, nonatomic) CIVector *inputOffset; // @synthesize inputOffset;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x000000000022daa1
- (id)_kernel;	// IMP=0x000000000022d656

@end

