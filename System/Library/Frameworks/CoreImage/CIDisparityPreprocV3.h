//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage;

__attribute__((visibility("hidden")))
@interface CIDisparityPreprocV3 : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputAlphaImage;	// 80 = 0x50
}

@property(retain) CIImage *inputAlphaImage; // @synthesize inputAlphaImage;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x000000000021b3a0
- (id)preprocKernelNoAlpha;	// IMP=0x000000000021b343
- (id)preprocKernel;	// IMP=0x000000000021b2e6

@end
