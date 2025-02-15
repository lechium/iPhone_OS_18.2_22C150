//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIOpacity : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputOpacity;	// 80 = 0x50
}

+ (id)customAttributes;	// IMP=0x006000000017df82
@property(retain, nonatomic) NSNumber *inputOpacity; // @synthesize inputOpacity;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x000000000017e145

@end

