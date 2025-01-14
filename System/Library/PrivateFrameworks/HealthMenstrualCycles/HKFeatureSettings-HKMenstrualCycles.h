//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKFeatureSettings.h>

@interface HKFeatureSettings (HKMenstrualCycles)
@property(readonly, nonatomic) _Bool deviationDetectionEnabledSetExplicitlyForAnyType;
@property(readonly, nonatomic) _Bool deviationDetectionEnabledForAllTypes;
@property(readonly, nonatomic) _Bool deviationDetectionEnabledForAnyType;
- (_Bool)deviationDetectionEnabledForType:(long long)arg1;	// IMP=0x003000000002a932
- (id)initWithMenstruationProjectionsEnabled:(_Bool)arg1 fertileWindowProjectionsEnabled:(_Bool)arg2 areFertilityTrackingDisplayTypesVisible:(_Bool)arg3 isSexualActivityDisplayTypeVisible:(_Bool)arg4;	// IMP=0x003000000002a619
- (_Bool)projectionsEnabledSettingsHaveChangedFromFeatureSettings:(id)arg1;	// IMP=0x003000000002a594
- (_Bool)isLoggingVisibleForDisplayTypeIdentifier:(id)arg1;	// IMP=0x003000000002a50a
@property(readonly, nonatomic) _Bool fertileWindowProjectionsEnabled;
@property(readonly, nonatomic) _Bool menstruationProjectionsEnabled;
@end

