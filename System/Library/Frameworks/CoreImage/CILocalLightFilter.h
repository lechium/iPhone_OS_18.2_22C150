//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSData, NSNumber;

__attribute__((visibility("hidden")))
@interface CILocalLightFilter : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputGuideImage;	// 80 = 0x50
    NSData *inputLightMap;	// 88 = 0x58
    CIImage *inputLightMapImage;	// 96 = 0x60
    NSNumber *inputLightMapWidth;	// 104 = 0x68
    NSNumber *inputLightMapHeight;	// 112 = 0x70
    NSNumber *inputLocalLight;	// 120 = 0x78
    NSNumber *inputSmartShadows;	// 128 = 0x80
}

+ (id)customAttributes;	// IMP=0x006000000015efc8
- (id)outputImage;	// IMP=0x000000000015f379
- (id)_polyKernel;	// IMP=0x000000000015f359
- (id)_shadowKernel;	// IMP=0x000000000015f339

@end
