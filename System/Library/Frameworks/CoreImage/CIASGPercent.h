//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage;

__attribute__((visibility("hidden")))
@interface CIASGPercent : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
}

+ (id)customAttributes;	// IMP=0x0060000000019ee4
- (id)outputImage;	// IMP=0x000000000001a484
- (id)outputImageScale:(double)arg1 outset:(int)arg2 hKernel:(id)arg3 vKernel:(id)arg4;	// IMP=0x0000000000019fe5

@end

