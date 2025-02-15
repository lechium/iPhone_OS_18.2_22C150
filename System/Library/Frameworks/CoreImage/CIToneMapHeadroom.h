//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIToneMapHeadroom : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputSourceHeadroom;	// 80 = 0x50
    NSNumber *inputTargetHeadroom;	// 88 = 0x58
}

+ (id)customAttributes;	// IMP=0x006000000005dbc0
@property(retain, nonatomic) NSNumber *inputTargetHeadroom; // @synthesize inputTargetHeadroom;
@property(retain, nonatomic) NSNumber *inputSourceHeadroom; // @synthesize inputSourceHeadroom;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x000000000005e27d
- (id)outputValue:(id)arg1;	// IMP=0x000000000005dedf
- (float)srcHeadroom;	// IMP=0x000000000005de8e
- (float)targetHeadroom;	// IMP=0x000000000005de4e

@end

