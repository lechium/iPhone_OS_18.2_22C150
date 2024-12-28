//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKHealthStore.h>

@class HKDisplayTypeController;

@interface HKHealthStore (HKDisplayTypeControllerAccessorAdditions)
+ (_Bool)_assignMostRecentQuantity:(id *)arg1 dateInterval:(id *)arg2 forQuantitySample:(id)arg3;	// IMP=0x0020000000291c59
+ (id)_mostRecentEndDateSortDescriptorForQuantityType:(id)arg1;	// IMP=0x0020000000291bf3
+ (_Bool)_isAudioExposureQuantityType:(id)arg1;	// IMP=0x0020000000291b0d
+ (void)_processStatisticsCollection:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0020000000291a53
+ (void)_processQuantitySample:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0020000000291981
+ (void)_queryForMostRecentAudioExposureQuantityOfType:(id)arg1 sample:(id)arg2 healthStore:(id)arg3 attenuated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00200000002916bd
+ (id)queryForMostRecentAttenuatedEAEQuantityWithHealthStore:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0020000000291529
+ (id)queryForMostRecentQuantityOfType:(id)arg1 healthStore:(id)arg2 predicate:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0020000000291305
+ (id)queryForMostRecentQuantityOfType:(id)arg1 predicate:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00200000002911d0
+ (id)queryForMostRecentSampleOfType:(id)arg1 predicate:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0020000000291114
+ (id)_queryForMostRecentSampleOfType:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0020000000290f9f
+ (id)localizationStringSuffixForWheelchairUser:(_Bool)arg1;	// IMP=0x0020000000290f78
+ (id)localizationStringAdditionForWheelchairUser;	// IMP=0x0020000000290e51
@property(readonly) HKDisplayTypeController *displayTypeController; // @dynamic displayTypeController;
- (id)createMedicalIDData;	// IMP=0x001000000012ba57
- (void)_populateDemographicsWrapper:(id)arg1 withFirstName:(id)arg2 lastName:(id)arg3 meContact:(id)arg4;	// IMP=0x0010000000292be1
- (void)hk_fetchExistingDemographicInformationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000292bca
- (void)_nonPrimaryProfileFetchFirstAndLastNamesForInfoWrapper:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000292943
- (void)_primaryProfileFetchFirstAndLastNamesForInfoWrapper:(id)arg1 meContact:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000292548
- (void)_fetchFirstAndLastNamesForInfoWrapper:(id)arg1 meContact:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000292470
- (void)hk_fetchExistingDemographicInformationWithOptions:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000291db3
@end
