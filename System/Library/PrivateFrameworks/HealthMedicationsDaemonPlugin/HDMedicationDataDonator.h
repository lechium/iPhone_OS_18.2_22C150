//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDHealthMedicationsProfileExtension, NSString;

__attribute__((visibility("hidden")))
@interface HDMedicationDataDonator : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _donationRequiredOnNextUnlock;	// 12 = 0xc
    HDHealthMedicationsProfileExtension *_profileExtension;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000053916
@property(readonly, nonatomic) _Bool donationRequiredOnNextUnlock; // @synthesize donationRequiredOnNextUnlock=_donationRequiredOnNextUnlock;
- (void)unitTesting_performDataDonationForProfile:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000538fb
- (void)_donateWithReason:(id)arg1;	// IMP=0x0000000000053714
- (_Bool)_medicationUDCHasChangedForUDCArray:(id)arg1;	// IMP=0x00000000000536b6
- (void)_donateIfUDCListChangedForUDCArray:(id)arg1 manager:(id)arg2;	// IMP=0x0000000000053678
- (void)didRecieveThirdPartyMigrationNotification;	// IMP=0x000000000005365f
- (void)userDomainConceptManager:(id)arg1 didJournalUserDomainConcepts:(id)arg2;	// IMP=0x0000000000053659
- (void)userDomainConceptManager:(id)arg1 didDeleteUserDomainConcepts:(id)arg2;	// IMP=0x0000000000053653
- (void)userDomainConceptManager:(id)arg1 didUpdateUserDomainConcepts:(id)arg2;	// IMP=0x0000000000053638
- (void)userDomainConceptManager:(id)arg1 didAddUserDomainConcepts:(id)arg2;	// IMP=0x000000000005361d
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;	// IMP=0x00000000000535da
- (void)profileDidBecomeReady:(id)arg1;	// IMP=0x00000000000534ba
- (id)_findPreferredNameForConcept:(id)arg1;	// IMP=0x0000000000053467
- (_Bool)_checkBuilderAndCancelIfErrorForBuilder:(id)arg1 fullStream:(id)arg2;	// IMP=0x000000000005343c
- (id)_medicationUserDomainConceptsForProfile:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000053267
- (void)_finishStreamingForStream:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000530df
- (_Bool)_registerItemForStream:(id)arg1 item:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000053066
- (_Bool)_registerItemForDonationForConcept:(id)arg1 builder:(id)arg2 fullStream:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000052d95
- (void)_donateActiveConceptsForStream:(id)arg1 activeMedications:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000052aed
- (void)_performDataDonationForProfile:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000527a0
- (void)setDonationRequiredOnNextUnlock:(_Bool)arg1;	// IMP=0x000000000005276f
- (_Bool)getDonationRequiredOnNextUnlock;	// IMP=0x0000000000052747
- (id)initWithProfile:(id)arg1;	// IMP=0x0000000000052681

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
