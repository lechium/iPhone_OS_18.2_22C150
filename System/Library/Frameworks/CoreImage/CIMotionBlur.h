//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIMotionBlur : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputRadius;	// 80 = 0x50
    NSNumber *inputAngle;	// 88 = 0x58
}

+ (id)customAttributes;	// IMP=0x006000000017b018
@property(retain, nonatomic) NSNumber *inputAngle; // @synthesize inputAngle;
@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x000000000017b5f4
- (_Bool)_isIdentity;	// IMP=0x000000000017b5c3
- (id)_blur:(id)arg1 pass:(int)arg2 weightsFactor:(float)arg3 legacyExtent:(struct CGRect *)arg4;	// IMP=0x000000000017b1fe
- (id)_kernel;	// IMP=0x000000000017b1de

@end
