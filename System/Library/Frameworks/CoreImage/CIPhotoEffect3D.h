//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPhotoEffect3D : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputDepthMap;	// 80 = 0x50
    NSNumber *inputThreshold;	// 88 = 0x58
    NSNumber *inputGrainAmount;	// 96 = 0x60
    NSNumber *inputScale;	// 104 = 0x68
}

+ (id)customAttributes;	// IMP=0x006000000019c02c
@property(retain, nonatomic) NSNumber *inputScale; // @synthesize inputScale;
@property(retain, nonatomic) NSNumber *inputGrainAmount; // @synthesize inputGrainAmount;
@property(retain, nonatomic) NSNumber *inputThreshold; // @synthesize inputThreshold;
@property(retain, nonatomic) CIImage *inputDepthMap; // @synthesize inputDepthMap;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (int)_maxVersionBG;	// IMP=0x000000000019cee4
- (int)_maxVersion;	// IMP=0x000000000019cedc
- (id)outputImage;	// IMP=0x000000000019caa7
- (id)applyCubeWithName:(id)arg1 toImage:(id)arg2;	// IMP=0x000000000019c721
- (id)cubeColorSpaceName;	// IMP=0x000000000019c711
- (id)backgroundCubePath;	// IMP=0x000000000019c6ae
- (id)cubePath;	// IMP=0x000000000019c64b
- (id)backgroundCubeName;	// IMP=0x000000000019c58a
- (id)cubeName;	// IMP=0x000000000019c4e4
- (id)_CIPhotoEffectDepthBlend;	// IMP=0x000000000019c4c4
- (int)_defaultVersion;	// IMP=0x000000000019c4bc
- (void)setDefaults;	// IMP=0x000000000019c43f
- (id)init;	// IMP=0x000000000019c3b7

@end
