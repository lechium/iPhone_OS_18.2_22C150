//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage;

__attribute__((visibility("hidden")))
@interface CILensModelApply : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputLensModelParams;	// 80 = 0x50
}

@property(retain, nonatomic) CIImage *inputLensModelParams; // @synthesize inputLensModelParams;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x000000000015a452
- (id)kernel;	// IMP=0x000000000015a432

@end
