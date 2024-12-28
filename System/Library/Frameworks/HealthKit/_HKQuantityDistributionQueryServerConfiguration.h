//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKQueryServerConfiguration.h"

@class HKQuantity, NSDate, NSDateComponents;

__attribute__((visibility("hidden")))
@interface _HKQuantityDistributionQueryServerConfiguration : HKQueryServerConfiguration
{
    NSDate *_startDate;	// 8 = 0x8
    NSDate *_endDate;	// 16 = 0x10
    long long _contextStyle;	// 24 = 0x18
    NSDate *_anchorDate;	// 32 = 0x20
    NSDateComponents *_intervalComponents;	// 40 = 0x28
    HKQuantity *_histogramAnchor;	// 48 = 0x30
    HKQuantity *_histogramBucketSize;	// 56 = 0x38
    unsigned long long _options;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000001b2cd9
- (void).cxx_destruct;	// IMP=0x00000000001b314e
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(copy, nonatomic) HKQuantity *histogramBucketSize; // @synthesize histogramBucketSize=_histogramBucketSize;
@property(copy, nonatomic) HKQuantity *histogramAnchor; // @synthesize histogramAnchor=_histogramAnchor;
@property(copy, nonatomic) NSDateComponents *intervalComponents; // @synthesize intervalComponents=_intervalComponents;
@property(copy, nonatomic) NSDate *anchorDate; // @synthesize anchorDate=_anchorDate;
@property(nonatomic) long long contextStyle; // @synthesize contextStyle=_contextStyle;
@property(copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001b2ef2
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001b2ce1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001b2bd3

@end
