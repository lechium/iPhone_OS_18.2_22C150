//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDStandardTaskServer.h>

__attribute__((visibility("hidden")))
@interface HDMedicationControlTaskServer : HDStandardTaskServer
{
}

+ (id)taskIdentifier;	// IMP=0x001000000000514c
- (void)remote_deleteDismissedPregnancyLactationInteractionsForMedication:(id)arg1 interactionTypes:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000060b8
- (void)remote_allDismissedPregnancyLactationInteractionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005ec2
- (void)remote_markPregnancyLactationInteractionForMedicationAsDismissed:(id)arg1 interactionType:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000005d82
- (void)remote_deleteDismissedDrugInteractionsForMedication:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005bb5
- (void)remote_allDismissedDrugInteractionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000059bf
- (void)remote_markDrugInteractionAsDismissed:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000058c7
- (void)remote_deleteDismissedRemoteScheduleUnavailableForMedication:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000566a
- (void)remote_allDismissedRemoteScheduleUnavailableRecordsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005465
- (void)remote_markRemoteScheduleUnavailableRecordsAsDismissed:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005370
- (void)remote_accountDevicesInfoTriggeringUpdate:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005275
- (void)remote_updateLocalDeviceValuesNowWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005198
- (void)connectionInvalidated;	// IMP=0x0000000000005192
- (id)remoteInterface;	// IMP=0x0000000000005179
- (id)exportedInterface;	// IMP=0x0000000000005160

@end

