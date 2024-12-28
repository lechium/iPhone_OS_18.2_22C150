//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHAPAccessory, NSDate, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HMDAccessoryDiagnosticsMetric : HMFObject
{
    NSDate *_metricCollectionStartTime;	// 8 = 0x8
    NSDictionary *_metric;	// 16 = 0x10
    HMDHAPAccessory *_accessory;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x0010000000768ef5
- (void).cxx_destruct;	// IMP=0x0000000000768eb5
@property(readonly) __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly) NSDictionary *metric; // @synthesize metric=_metric;
@property(copy, nonatomic) NSDate *metricCollectionStartTime; // @synthesize metricCollectionStartTime=_metricCollectionStartTime;
- (id)logIdentifier;	// IMP=0x0000000000768dad
- (void)reset;	// IMP=0x0000000000768d34
- (void)submitMetric:(id)arg1;	// IMP=0x0000000000768ac0
- (id)collectMetric;	// IMP=0x0000000000768a70
- (id)initWithAccessory:(id)arg1;	// IMP=0x0000000000768a09

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
