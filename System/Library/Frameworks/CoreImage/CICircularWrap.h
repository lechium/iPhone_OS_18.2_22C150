//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CICircularWrap : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIVector *inputCenter;	// 80 = 0x50
    NSNumber *inputRadius;	// 88 = 0x58
    NSNumber *inputAngle;	// 96 = 0x60
}

+ (id)customAttributes;	// IMP=0x0060000000058313
@property(retain, nonatomic) NSNumber *inputAngle; // @synthesize inputAngle;
@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;
@property(retain, nonatomic) CIVector *inputCenter; // @synthesize inputCenter;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x0000000000057ad0
- (id)_kernel;	// IMP=0x0000000000057ab0

@end
