//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDQueryServer.h>

@class HKMHValenceDistributionSummaryQueryConfiguration, NSCalendar;

__attribute__((visibility("hidden")))
@interface HDMHValenceDistributionSummaryQueryServer : HDQueryServer
{
    HKMHValenceDistributionSummaryQueryConfiguration *_configuration;	// 8 = 0x8
    NSCalendar *_gregorianCalendar;	// 16 = 0x10
}

+ (_Bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id *)arg3;	// IMP=0x0060000000003a4a
+ (id)requiredEntitlements;	// IMP=0x0060000000003a3d
+ (Class)queryClass;	// IMP=0x0060000000003a2c
- (void).cxx_destruct;	// IMP=0x0000000000004b10
- (CDStruct_912cb5d2)_dayIndexRangeWithAnchorIndex:(long long)arg1;	// IMP=0x0000000000004987
- (_Bool)_queue_surfaceValenceDistributionSummariesWithError:(id *)arg1;	// IMP=0x0000000000004096
- (void)_queue_start;	// IMP=0x0000000000003bb5
- (id)objectTypes;	// IMP=0x0000000000003b4b
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;	// IMP=0x0000000000003970

@end
