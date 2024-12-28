//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIFillHolesInRedMask : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputMaximumHoleSize;	// 80 = 0x50
    NSNumber *inputRefinementPassCount;	// 88 = 0x58
}

+ (id)customAttributes;	// IMP=0x006000000000206e
@property(retain, nonatomic) NSNumber *inputRefinementPassCount; // @synthesize inputRefinementPassCount;
@property(retain, nonatomic) NSNumber *inputMaximumHoleSize; // @synthesize inputMaximumHoleSize;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x0000000000002300

@end
