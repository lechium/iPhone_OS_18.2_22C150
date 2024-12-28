//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface HistoClip_RGBA8_CPU : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputCenterLeft;	// 80 = 0x50
    CIImage *inputCenterRight;	// 88 = 0x58
    CIVector *inputCenterExtentLeft;	// 96 = 0x60
    CIVector *inputCenterExtentRight;	// 104 = 0x68
    NSNumber *inputPercentileRepair;	// 112 = 0x70
    NSNumber *inputPercentileSpecular;	// 120 = 0x78
    NSNumber *inputPercentRepair;	// 128 = 0x80
    NSNumber *inputPercentSpecular;	// 136 = 0x88
    NSNumber *inputInterPeakMinRepair;	// 144 = 0x90
    NSNumber *inputAbortMaxCenterDist;	// 152 = 0x98
    NSNumber *inputMinDensity;	// 160 = 0xa0
    NSNumber *inputMaxRelDensity;	// 168 = 0xa8
    NSNumber *inputDensityRadius;	// 176 = 0xb0
    NSNumber *inputMinInterDispersion;	// 184 = 0xb8
    NSNumber *inputMaxInterDispersion;	// 192 = 0xc0
    NSNumber *inputMinGobalLocalMeanDiff;	// 200 = 0xc8
    CIVector *inputMinimum;	// 208 = 0xd0
    CIVector *inputMaxArea;	// 216 = 0xd8
    CIVector *inputMaxAreaRatio;	// 224 = 0xe0
    CIVector *inputCenterOffsetLeft;	// 232 = 0xe8
    CIVector *inputCenterOffsetRight;	// 240 = 0xf0
    CIImage *inputDetectionLeft;	// 248 = 0xf8
    CIImage *inputDetectionRight;	// 256 = 0x100
    NSNumber *inputTuning;	// 264 = 0x108
}

@property(retain, nonatomic) NSNumber *inputTuning; // @synthesize inputTuning;
@property(retain, nonatomic) CIImage *inputDetectionRight; // @synthesize inputDetectionRight;
@property(retain, nonatomic) CIImage *inputDetectionLeft; // @synthesize inputDetectionLeft;
@property(retain, nonatomic) CIVector *inputCenterOffsetRight; // @synthesize inputCenterOffsetRight;
@property(retain, nonatomic) CIVector *inputCenterOffsetLeft; // @synthesize inputCenterOffsetLeft;
@property(retain, nonatomic) CIVector *inputMaxAreaRatio; // @synthesize inputMaxAreaRatio;
@property(retain, nonatomic) CIVector *inputMaxArea; // @synthesize inputMaxArea;
@property(retain, nonatomic) CIVector *inputMinimum; // @synthesize inputMinimum;
@property(retain, nonatomic) NSNumber *inputMinGobalLocalMeanDiff; // @synthesize inputMinGobalLocalMeanDiff;
@property(retain, nonatomic) NSNumber *inputMaxInterDispersion; // @synthesize inputMaxInterDispersion;
@property(retain, nonatomic) NSNumber *inputMinInterDispersion; // @synthesize inputMinInterDispersion;
@property(retain, nonatomic) NSNumber *inputDensityRadius; // @synthesize inputDensityRadius;
@property(retain, nonatomic) NSNumber *inputMaxRelDensity; // @synthesize inputMaxRelDensity;
@property(retain, nonatomic) NSNumber *inputMinDensity; // @synthesize inputMinDensity;
@property(retain, nonatomic) NSNumber *inputAbortMaxCenterDist; // @synthesize inputAbortMaxCenterDist;
@property(retain, nonatomic) NSNumber *inputInterPeakMinRepair; // @synthesize inputInterPeakMinRepair;
@property(retain, nonatomic) NSNumber *inputPercentSpecular; // @synthesize inputPercentSpecular;
@property(retain, nonatomic) NSNumber *inputPercentRepair; // @synthesize inputPercentRepair;
@property(retain, nonatomic) NSNumber *inputPercentileSpecular; // @synthesize inputPercentileSpecular;
@property(retain, nonatomic) NSNumber *inputPercentileRepair; // @synthesize inputPercentileRepair;
@property(retain, nonatomic) CIVector *inputCenterExtentRight; // @synthesize inputCenterExtentRight;
@property(retain, nonatomic) CIVector *inputCenterExtentLeft; // @synthesize inputCenterExtentLeft;
@property(retain, nonatomic) CIImage *inputCenterRight; // @synthesize inputCenterRight;
@property(retain, nonatomic) CIImage *inputCenterLeft; // @synthesize inputCenterLeft;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000000a7700

@end
