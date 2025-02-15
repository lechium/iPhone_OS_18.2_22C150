//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BiasEstimatorFeatures, BiasEstimatorOutputs;

__attribute__((visibility("hidden")))
@interface UWBSignalFeatures : NSObject
{
    BiasEstimatorFeatures *_inputFeatures;	// 8 = 0x8
    BiasEstimatorOutputs *_outputs;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000014e94
- (void).cxx_destruct;	// IMP=0x0000000000015538
@property(copy, nonatomic) BiasEstimatorOutputs *outputs; // @synthesize outputs=_outputs;
@property(copy, nonatomic) BiasEstimatorFeatures *inputFeatures; // @synthesize inputFeatures=_inputFeatures;
- (id)orderedBiasEstimatorFeatutes;	// IMP=0x0000000000015449
- (unsigned long long)hash;	// IMP=0x000000000001540a
- (id)description;	// IMP=0x0000000000015345
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000151e1
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000150a6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000015031
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000014fe9
- (id)initWithUWBSignalFeatures:(id)arg1;	// IMP=0x0000000000014e9c

@end

