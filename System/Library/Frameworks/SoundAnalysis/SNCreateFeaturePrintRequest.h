//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, SNTimeDurationConstraint;

@interface SNCreateFeaturePrintRequest : NSObject
{
    MISSING_TYPE *impl;	// 8 = 0x8
}

+ (id)eagerlyAllocateModelsForRequest:(id)arg1 error:(id *)arg2;	// IMP=0x001000000014d1c0
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000014cbb3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000014cb68
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000014caab
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000014c8d2
@property(nonatomic, readonly) long long hash;
- (id)copyWithZone:(void *)arg1;	// IMP=0x000000000014c6bd
- (id)initWithFeaturePrintType:(long long)arg1 version:(long long)arg2 error:(id *)arg3;	// IMP=0x000000000014c42c
- (id)initWithFeaturePrintType:(long long)arg1;	// IMP=0x000000000014c3aa
- (id)init;	// IMP=0x000000000014c28a
@property(nonatomic) CDStruct_198678f7 windowDuration;
@property(nonatomic) float overlapFactor;
@property(nonatomic) long long featurePrintType;
@property(nonatomic, readonly) SNTimeDurationConstraint *windowDurationConstraint;

@end
