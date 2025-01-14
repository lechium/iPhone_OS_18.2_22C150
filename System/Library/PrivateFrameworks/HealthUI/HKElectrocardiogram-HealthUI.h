//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKElectrocardiogram.h>

@class NSString, UIColor;

@interface HKElectrocardiogram (HealthUI)
+ (id)hk_localizedAverageBPM:(id)arg1;	// IMP=0x0020000000041de4
+ (id)hk_onboardingCardBackgroundColor;	// IMP=0x0020000000041dcb
+ (id)hk_onboardingCardHeaderColor;	// IMP=0x0020000000041db2
+ (id)hk_positiveNumSymptomsTextColor;	// IMP=0x0020000000041d56
+ (id)hk_abnormalBPMTextColor;	// IMP=0x0020000000041d3d
+ (id)hk_abnormalTimeStampCompositingFilter;	// IMP=0x0020000000041d29
+ (id)hk_abnormalCardHeaderColor;	// IMP=0x0020000000041d10
+ (id)hk_defaultNumSymptomsTextColor;	// IMP=0x0020000000041cf7
+ (id)hk_defaultBPMTextColor;	// IMP=0x0020000000041cde
+ (id)hk_defaultTimeStampCompositingFilter;	// IMP=0x0020000000041cca
+ (id)hk_abnormalTimeStampTextColor;	// IMP=0x0020000000041cb1
+ (id)hk_defaultTimeStampTextColor;	// IMP=0x0020000000041c98
+ (id)hk_abnormalClassificationTextColor;	// IMP=0x0020000000041c7f
+ (id)hk_defaultClassificationTextColor;	// IMP=0x0020000000041c66
+ (id)hk_defaultCardBackgroundColor;	// IMP=0x0020000000041c4d
+ (id)hk_defaultCardHeaderColor;	// IMP=0x0020000000041c34
+ (id)createWithCodableECG:(id)arg1;	// IMP=0x002000000036770d
- (_Bool)_hk_classificationHasAbnormalBPMFontColorAndStyle;	// IMP=0x00100000000422b8
- (_Bool)_hk_classificationHasAbnormalHeaderColorAndStyle;	// IMP=0x0010000000042291
@property(readonly, nonatomic) NSString *hk_localizedUppercaseNumSymptoms;
@property(readonly, nonatomic) NSString *hk_localizedNumSymptoms;
@property(readonly, nonatomic) NSString *hk_localizedDuration;
@property(readonly, nonatomic) NSString *hk_localizedAverageBPM;
@property(readonly, nonatomic) UIColor *hk_numSymptomsTextColor;
@property(readonly, nonatomic) _Bool hk_isBPMTextBold;
@property(readonly, nonatomic) UIColor *hk_BPMTextColor;
@property(readonly, nonatomic) NSString *hk_timeStampCompositingFilter;
@property(readonly, nonatomic) UIColor *hk_timeStampTextColor;
@property(readonly, nonatomic) UIColor *hk_classificationTextColor;
@property(readonly, nonatomic) UIColor *hk_cardBackgroundColor;
@property(readonly, nonatomic) UIColor *hk_cardHeaderColor;
@property(readonly, nonatomic) _Bool hk_isSymptomsNoSymptoms;
@property(readonly, nonatomic) _Bool hk_isSymptomsNotSet;
@property(readonly, nonatomic) _Bool hk_hasPositiveSymptoms;
@property(readonly, nonatomic) _Bool hk_isPossibleAtrialFibrillation;
@property(readonly, nonatomic) _Bool hk_isClassificationSupported;
- (id)_hk_waveformPathsWithPointsPerSecond:(double)arg1 pointsPerMillivolt:(double)arg2 maximumNumberOfValuesPerPath:(long long)arg3 shouldResetXValues:(_Bool)arg4 initialValuesToOmit:(long long)arg5 minimumValueInMicrovolts:(float)arg6 maximumValueInMicrovolts:(float)arg7;	// IMP=0x00100000000417cf
- (id)hk_waveformPathsWithPointsPerSecond:(double)arg1 pointsPerMillivolt:(double)arg2 wrappingDuration:(double)arg3 omittingInitialDuration:(double)arg4 minimumValueInMillivolts:(float)arg5 maximumValueInMillivolts:(float)arg6;	// IMP=0x00100000000416cc
- (id)hk_waveformPathsWithPointsPerSecond:(double)arg1 pointsPerMillivolt:(double)arg2 wrappingDuration:(double)arg3 omittingInitialDuration:(double)arg4;	// IMP=0x00100000000416a1
- (id)hk_waveformPathsWithPointsPerSecond:(double)arg1 pointsPerMillivolt:(double)arg2 minimumValueInMillivolts:(float)arg3 maximumValueInMillivolts:(float)arg4;	// IMP=0x0010000000041672
- (id)_hk_waveformPathsWithNumberOfValues:(long long)arg1 transform:(struct CGAffineTransform)arg2 maximumNumberOfValuesPerPath:(long long)arg3 shouldResetXValues:(_Bool)arg4 initialValuesToOmit:(long long)arg5 minimumValueInMicrovolts:(float)arg6 maximumValueInMicrovolts:(float)arg7;	// IMP=0x0010000000041239
- (id)hk_waveformPathsWithNumberOfValues:(long long)arg1 fitToWidth:(double)arg2 pointsPerMillivolt:(double)arg3 minimumValueInMillivolts:(float)arg4 maximumValueInMillivolts:(float)arg5;	// IMP=0x0010000000041191
- (id)codableECG;	// IMP=0x0010000000367aa3
@end

