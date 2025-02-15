//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthMedications/HKUnitTestingTaskServerInterface-Protocol.h>

@class HKMedicationIdentifier, NSArray, NSDateInterval, NSUUID;

@protocol HKMedicationExposableDoseEventControlServerInterface <HKUnitTestingTaskServerInterface>
- (void)remote_deleteDoseEventWithPersistentUUID:(NSUUID *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_writeDoseEvents:(NSArray *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_doseEventsForDateInterval:(NSDateInterval *)arg1 medicationIdentifier:(HKMedicationIdentifier *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
@end

