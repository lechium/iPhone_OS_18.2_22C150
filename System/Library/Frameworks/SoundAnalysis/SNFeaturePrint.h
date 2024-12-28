//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, MLMultiArray, NSString;

@interface SNFeaturePrint : NSObject
{
    MISSING_TYPE *impl;	// 8 = 0x8
}

+ (id)cosineSimilarityBetweenOneFeatureVector:(id)arg1 andAnotherFeatureVector:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001721a5
+ (id)cosineSimilarityBetweenOneFloat32Array:(float *)arg1 andAnotherFloat32Array:(float *)arg2 length:(long long)arg3 error:(id *)arg4;	// IMP=0x0010000000171e56
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000171c5c
- (void).cxx_destruct;	// IMP=0x00000000001726af
@property(nonatomic, readonly) NSString *description;
- (id)initWithFeaturePrintType:(long long)arg1 featureVector:(id)arg2;	// IMP=0x0000000000171d97
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000171c11
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000171b1e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000171936
@property(nonatomic, readonly) long long hash;
- (id)copyWithZone:(void *)arg1;	// IMP=0x00000000001715fa
- (id)init;	// IMP=0x00000000001714f0
@property(nonatomic, retain) MLMultiArray *featureVector;
@property(nonatomic) long long featurePrintType;
@property(nonatomic) CDStruct_3c1748cc timeRange;

@end
