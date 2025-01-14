//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CISmartBlackAndWhite : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputStrength;	// 80 = 0x50
    NSNumber *inputNeutralGamma;	// 88 = 0x58
    NSNumber *inputTone;	// 96 = 0x60
    NSNumber *inputHue;	// 104 = 0x68
    NSNumber *inputGrain;	// 112 = 0x70
    NSNumber *inputSeed;	// 120 = 0x78
    NSNumber *inputScaleFactor;	// 128 = 0x80
}

+ (id)customAttributes;	// IMP=0x00600000001f4251
@property(copy, nonatomic) NSNumber *inputScaleFactor; // @synthesize inputScaleFactor;
@property(copy, nonatomic) NSNumber *inputSeed; // @synthesize inputSeed;
@property(copy, nonatomic) NSNumber *inputGrain; // @synthesize inputGrain;
@property(copy, nonatomic) NSNumber *inputHue; // @synthesize inputHue;
@property(copy, nonatomic) NSNumber *inputTone; // @synthesize inputTone;
@property(copy, nonatomic) NSNumber *inputNeutralGamma; // @synthesize inputNeutralGamma;
@property(copy, nonatomic) NSNumber *inputStrength; // @synthesize inputStrength;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000001f47cd
- (id)_kernel;	// IMP=0x00000000001f47ad
- (id)hueArrayImage:(float *)arg1;	// IMP=0x00000000001f409b
- (float *)createHueArray;	// IMP=0x00000000001f3f44
- (void)getNonNormalizedSettings:(CDStruct_31328b19 *)arg1;	// IMP=0x00000000001f3c18

@end

