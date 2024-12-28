//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@protocol HMDHouseholdMetricsDataSource;

__attribute__((visibility("hidden")))
@interface HMDMetricsAccessoryDetailsManager : HMFObject
{
    id <HMDHouseholdMetricsDataSource> _dataSource;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000c3dd89
@property(readonly, nonatomic) __weak id <HMDHouseholdMetricsDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)accessoryCategoryLogEventsForHomeWithUUID:(id)arg1;	// IMP=0x0000000000c3d334
- (void)deleteCountersBeforeDate:(id)arg1;	// IMP=0x0000000000c3d32e
- (void)deleteCountersAfterDate:(id)arg1;	// IMP=0x0000000000c3d328
- (id)logEventsPopulatedForHomeWithUUID:(id)arg1 associatedWithDate:(id)arg2;	// IMP=0x0000000000c3d177
- (id)householdMetricsLogEventFactory;	// IMP=0x0000000000c3d16e
- (id)initWithDataSource:(id)arg1;	// IMP=0x0000000000c3d107

@end
