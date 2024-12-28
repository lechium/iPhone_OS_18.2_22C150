//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface VCPMAMLFeatureProvider : NSObject
{
    NSString *_featureName;	// 8 = 0x8
    struct __CVBuffer *_buffer;	// 16 = 0x10
}

+ (id)featureProviderWithCVPixelBuffer:(struct __CVBuffer *)arg1 andFeatureName:(id)arg2;	// IMP=0x001000000001516c
- (void).cxx_destruct;	// IMP=0x00000000000152e3
- (id)featureValueForName:(id)arg1;	// IMP=0x000000000001525f
@property(readonly, nonatomic) NSSet *featureNames;
- (void)dealloc;	// IMP=0x00000000000151d0
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1 andFeatureName:(id)arg2;	// IMP=0x00000000000150c5
- (id)init;	// IMP=0x00000000000150b7

@end
