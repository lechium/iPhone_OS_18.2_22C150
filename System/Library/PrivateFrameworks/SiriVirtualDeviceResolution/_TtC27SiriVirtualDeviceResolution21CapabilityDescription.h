//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSNumber, NSSet, NSString;

@interface _TtC27SiriVirtualDeviceResolution21CapabilityDescription : NSObject
{
    MISSING_TYPE *key;	// 8 = 0x8
    MISSING_TYPE *valueSet;	// 24 = 0x18
    MISSING_TYPE *valueRange;	// 32 = 0x20
}

+ (void)setSupportsSecureCoding:(_Bool)arg1;	// IMP=0x0010000000015348
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000001530b
- (void).cxx_destruct;	// IMP=0x0000000000015f83
- (id)init;	// IMP=0x0000000000015f4d
@property(nonatomic, readonly) NSString *description;
- (id)copyWithZone:(void *)arg1;	// IMP=0x0000000000015d62
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000015abf
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000155c4
- (id)initWithKey:(id)arg1 lowerbound:(double)arg2 upperbound:(double)arg3;	// IMP=0x00000000000152a7
- (id)initWithKey:(id)arg1 valueSet:(id)arg2;	// IMP=0x00000000000150f1
@property(nonatomic, readonly) NSNumber *valueRangeUpperBound;
@property(nonatomic, readonly) NSNumber *valueRangeLowerBound;
@property(nonatomic, readonly) NSString *capabilityKey;
@property(nonatomic, readonly) NSSet *valueSet;
@property(nonatomic, readonly) NSString *key;

@end

