//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDProfile, NSString;
@protocol HKMCPregnancyModelProvidingInterface;

__attribute__((visibility("hidden")))
@interface HDMedicationPregnancyLactationStatusObserver : NSObject
{
    HDProfile *_profile;	// 8 = 0x8
    id <HKMCPregnancyModelProvidingInterface> _provider;	// 16 = 0x10
    _Atomic _Bool _shouldAttemptToDeletePregnancyDismissedInteractions;	// 24 = 0x18
    _Atomic _Bool _shouldQueryLactationSampleToDeleteDismissedInteractionsIfNeeded;	// 25 = 0x19
    struct os_unfair_lock_s _accessLock;	// 28 = 0x1c
    _Bool __unitTest_shouldAttemptToDeletePregnancyDismissedInteractions;	// 32 = 0x20
    _Bool __unitTest_shouldQueryLactationSampleToDeleteDismissedInteractions;	// 33 = 0x21
    CDUnknownBlockType _unitTesting_protectedDataDidBecomeAvailable;	// 40 = 0x28
    CDUnknownBlockType _unitTesting_samplesAdded;	// 48 = 0x30
    CDUnknownBlockType _unitTesting_samplesOfTypesWereRemoved;	// 56 = 0x38
    CDUnknownBlockType _unitTesting_pregnancyModelDidUpdate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000016676
@property(copy, nonatomic) CDUnknownBlockType unitTesting_pregnancyModelDidUpdate; // @synthesize unitTesting_pregnancyModelDidUpdate=_unitTesting_pregnancyModelDidUpdate;
@property(copy, nonatomic) CDUnknownBlockType unitTesting_samplesOfTypesWereRemoved; // @synthesize unitTesting_samplesOfTypesWereRemoved=_unitTesting_samplesOfTypesWereRemoved;
@property(copy, nonatomic) CDUnknownBlockType unitTesting_samplesAdded; // @synthesize unitTesting_samplesAdded=_unitTesting_samplesAdded;
@property(copy, nonatomic) CDUnknownBlockType unitTesting_protectedDataDidBecomeAvailable; // @synthesize unitTesting_protectedDataDidBecomeAvailable=_unitTesting_protectedDataDidBecomeAvailable;
@property(nonatomic) _Bool _unitTest_shouldQueryLactationSampleToDeleteDismissedInteractions; // @synthesize _unitTest_shouldQueryLactationSampleToDeleteDismissedInteractions=__unitTest_shouldQueryLactationSampleToDeleteDismissedInteractions;
@property(nonatomic) _Bool _unitTest_shouldAttemptToDeletePregnancyDismissedInteractions; // @synthesize _unitTest_shouldAttemptToDeletePregnancyDismissedInteractions=__unitTest_shouldAttemptToDeletePregnancyDismissedInteractions;
- (void)pregnancyModelDidUpdate:(id)arg1;	// IMP=0x0000000000015aec
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;	// IMP=0x000000000001592b
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;	// IMP=0x0000000000015633
- (void)profileDidBecomeReady:(id)arg1;	// IMP=0x00000000000153c2
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;	// IMP=0x0000000000015076
- (id)initWithProfile:(id)arg1;	// IMP=0x0000000000014e5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
