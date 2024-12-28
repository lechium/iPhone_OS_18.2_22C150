//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector;

__attribute__((visibility("hidden")))
@interface CITemperatureAndTint : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIVector *inputNeutral;	// 80 = 0x50
    CIVector *inputTargetNeutral;	// 88 = 0x58
}

+ (id)customAttributes;	// IMP=0x0060000000207bc8
@property(retain, nonatomic) CIVector *inputTargetNeutral; // @synthesize inputTargetNeutral;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000002086f6
@property(retain, nonatomic) CIVector *inputNeutral; // @dynamic inputNeutral;

@end
