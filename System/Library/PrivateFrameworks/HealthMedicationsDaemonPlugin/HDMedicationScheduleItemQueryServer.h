//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDQueryServer.h>

@class HKMedicationScheduleItemQueryConfiguration;

__attribute__((visibility("hidden")))
@interface HDMedicationScheduleItemQueryServer : HDQueryServer
{
    HKMedicationScheduleItemQueryConfiguration *_configuration;	// 8 = 0x8
}

+ (Class)queryClass;	// IMP=0x0060000000056be1
- (void).cxx_destruct;	// IMP=0x0000000000057464
- (void)_queue_start;	// IMP=0x0000000000056bf2
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;	// IMP=0x0000000000056b54

@end

