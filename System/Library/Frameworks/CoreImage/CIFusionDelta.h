//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIFusionDelta : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIVector *inputAddBlur;	// 80 = 0x50
    CIVector *inputRemoveBlur;	// 88 = 0x58
    NSNumber *inputApertureScaling;	// 96 = 0x60
    NSNumber *inputMaxBlur;	// 104 = 0x68
}

+ (id)customAttributes;	// IMP=0x0060000000104bee
- (id)outputImage;	// IMP=0x0000000000104d1c
- (_Bool)_isIdentity;	// IMP=0x0000000000104cc2
- (id)kernel;	// IMP=0x0000000000104bce

@end

