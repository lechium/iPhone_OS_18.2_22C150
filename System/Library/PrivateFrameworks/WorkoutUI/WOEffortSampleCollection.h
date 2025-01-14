//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKQuantity, HKQuantitySample, MISSING_TYPE;

@interface WOEffortSampleCollection : NSObject
{
    MISSING_TYPE *effortSample;	// 8 = 0x8
    MISSING_TYPE *estimatedEffortSample;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002df60
- (id)init;	// IMP=0x000000000002df00
@property(nonatomic, readonly) HKQuantity *preferredQuantity;
@property(nonatomic, readonly) HKQuantitySample *preferredSample;
- (id)initWithEffortSample:(id)arg1 estimatedEffortSample:(id)arg2;	// IMP=0x000000000002dc90
@property(nonatomic, readonly) HKQuantitySample *estimatedEffortSample; // @synthesize estimatedEffortSample;
@property(nonatomic, readonly) HKQuantitySample *effortSample; // @synthesize effortSample;

@end

