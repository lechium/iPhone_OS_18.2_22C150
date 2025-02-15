//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKWorkout.h>

@interface HKWorkout (HKDataMetadataSampleExtensions)
+ (id)hkui_localizedWorkoutStringForValue:(id)arg1;	// IMP=0x00500000001f3158
- (id)hk_defaultDistanceQuantityType;	// IMP=0x00100000000aca44
- (id)hk_additionalMetadataSectionsWithHealthStore:(id)arg1 displayTypeController:(id)arg2 unitController:(id)arg3 subsampleDelegate:(id)arg4;	// IMP=0x00100000001ebde8
- (id)hkui_localizedActivityTypeName;	// IMP=0x00100000001f313e
- (void)fetchSubSampleTypesWithHealthStore:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002cd9dd
- (void)addDetailValuesToSection:(id)arg1;	// IMP=0x001000000032fd6e
- (id)subSampleSectionTitle;	// IMP=0x001000000033e4d9
- (id)subExertionSamplePredicate;	// IMP=0x001000000033e476
- (id)subSamplePredicate;	// IMP=0x001000000033e45a
- (id)fixedAggregateValuesWithDisplayTypeController:(id)arg1 unitController:(id)arg2;	// IMP=0x001000000033dbc4
@end

