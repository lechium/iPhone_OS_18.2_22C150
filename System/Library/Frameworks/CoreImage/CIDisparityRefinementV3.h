//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface CIDisparityRefinementV3 : CIFilter
{
    NSNumber *inputScale;	// 72 = 0x48
    CIImage *inputImage;	// 80 = 0x50
    CIImage *inputMainImage;	// 88 = 0x58
    CIImage *inputMatteImage;	// 96 = 0x60
    NSDictionary *inputTuningParameters;	// 104 = 0x68
    NSNumber *inputDraftMode;	// 112 = 0x70
}

+ (id)customAttributes;	// IMP=0x006000000021c4a9
@property(retain, nonatomic) NSNumber *inputDraftMode; // @synthesize inputDraftMode;
@property(retain) NSDictionary *inputTuningParameters; // @synthesize inputTuningParameters;
@property(retain) CIImage *inputMatteImage; // @synthesize inputMatteImage;
@property(retain) CIImage *inputMainImage; // @synthesize inputMainImage;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
@property(copy) NSNumber *inputScale; // @synthesize inputScale;
- (id)outputImage;	// IMP=0x000000000021c8f3
- (id)alphaImageForMainImage:(id)arg1 disparity:(id)arg2;	// IMP=0x000000000021c61a

@end
