//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthMedicationsDaemonPlugin/HKUnitTestingTaskServerInterface-Protocol.h>

@class HKDrugInteractionResult, HKMedicationUserDomainConcept, NSArray;

@protocol HKMedicationControlServerInterface <HKUnitTestingTaskServerInterface>
- (void)remote_deleteDismissedPregnancyLactationInteractionsForMedication:(HKMedicationUserDomainConcept *)arg1 interactionTypes:(NSArray *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_allDismissedPregnancyLactationInteractionsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)remote_markPregnancyLactationInteractionForMedicationAsDismissed:(HKMedicationUserDomainConcept *)arg1 interactionType:(long long)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_deleteDismissedDrugInteractionsForMedication:(HKMedicationUserDomainConcept *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_allDismissedDrugInteractionsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)remote_markDrugInteractionAsDismissed:(HKDrugInteractionResult *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_deleteDismissedRemoteScheduleUnavailableForMedication:(HKMedicationUserDomainConcept *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_allDismissedRemoteScheduleUnavailableRecordsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)remote_markRemoteScheduleUnavailableRecordsAsDismissed:(NSArray *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_accountDevicesInfoTriggeringUpdate:(_Bool)arg1 completion:(void (^)(HKMedicationsAccountDevicesInfo *, NSError *))arg2;
- (void)remote_updateLocalDeviceValuesNowWithCompletion:(void (^)(_Bool, NSError *))arg1;
@end
