//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC27SiriVirtualDeviceResolution17SpeakerCapability : NSObject
{
    MISSING_TYPE *primitivesMap;	// 8 = 0x8
    MISSING_TYPE *key;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000005782
+ (id)capabilityDescriptionMatchingQualityScoreRangeWithLowerBound:(long long)arg1 upperBound:(long long)arg2;	// IMP=0x00100000000056dd
+ (id)capabilityDescriptionMatchingSupportStatus:(long long)arg1;	// IMP=0x001000000000567e
- (void).cxx_destruct;	// IMP=0x0000000000005991
- (id)init;	// IMP=0x000000000000595e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000058fd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000579c
- (_Bool)matchesWithDescriptions:(id)arg1;	// IMP=0x0000000000005723
@property(nonatomic, readonly) long long qualityScore;
@property(nonatomic, readonly) long long supportStatus;
- (id)initWithStatus:(long long)arg1 qualityScore:(long long)arg2;	// IMP=0x000000000000545c
@property(nonatomic, copy) NSString *key;

@end

