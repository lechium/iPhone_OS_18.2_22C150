//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIBlurmapRefinementLinearMapping : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputSecondaryImage;	// 80 = 0x50
    NSNumber *inputScalingFactor;	// 88 = 0x58
}

@property(retain) NSNumber *inputScalingFactor; // @synthesize inputScalingFactor;
@property(retain) CIImage *inputSecondaryImage; // @synthesize inputSecondaryImage;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000000a013d
- (id)kernel;	// IMP=0x00000000000a011d
- (id)kernelNoSecondaryImage;	// IMP=0x00000000000a00fd

@end
