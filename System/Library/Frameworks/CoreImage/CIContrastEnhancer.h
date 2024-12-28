//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIContrastEnhancer : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputIntensity;	// 80 = 0x50
    NSNumber *inputScale;	// 88 = 0x58
    NSNumber *inputLocal;	// 96 = 0x60
    NSNumber *inputPerceptual;	// 104 = 0x68
}

+ (id)customAttributes;	// IMP=0x00600000000a2afb
@property(retain, nonatomic) NSNumber *inputPerceptual; // @synthesize inputPerceptual;
@property(retain, nonatomic) NSNumber *inputScale; // @synthesize inputScale;
@property(retain, nonatomic) NSNumber *inputLocal; // @synthesize inputLocal;
@property(retain, nonatomic) NSNumber *inputIntensity; // @synthesize inputIntensity;
- (id)outputImage;	// IMP=0x00000000000a2e44

@end
