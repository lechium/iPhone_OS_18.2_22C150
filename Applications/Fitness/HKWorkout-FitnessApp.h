//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKWorkout.h>

@class NSArray, NSData, NSNumber;

@interface HKWorkout (FitnessApp)
+ (id)kIntervalWorkoutStepDistanceGoalAchievedDurationKey;	// IMP=0x001000000035e800
+ (id)kIntervalWorkoutStepDistanceGoalAchievedDateKey;	// IMP=0x001000000035e780
+ (id)kTrackTrackIdentifierMetadataKey;	// IMP=0x001000000035e730
+ (id)kRaceWorkoutReferenceWorkoutUUIDMetadataKey;	// IMP=0x001000000035e700
+ (id)kRaceWorkoutAveragePaceOnRouteMetadataKey;	// IMP=0x001000000035e6b0
+ (id)kIntervalWorkoutStepSuccessful;	// IMP=0x001000000035e660
+ (id)kIntervalWorkoutStepMetadataKey;	// IMP=0x001000000035e610
@property(nonatomic, readonly) NSArray *downhillRunEventsBridge;
- (void)makeDownhillRunBridgesWithHealthStore:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d86b0
- (id)requiredDistanceForIntervalTimeGoalForStepKeyPath:(id)arg1;	// IMP=0x00100000003624a0
- (id)expectedIntervalDurationForStepKeyPath:(id)arg1;	// IMP=0x00100000003621e0
- (id)expectedIntervalDistanceForStepKeyPath:(id)arg1;	// IMP=0x0010000000362140
- (id)displayDetail:(id)arg1;	// IMP=0x0010000000361e40
- (id)serializedConfigurationWithEmbedding:(id)arg1 snapshot:(id)arg2;	// IMP=0x0010000000360da0
@property(nonatomic, readonly) NSData *serializedConfigurationRouteSnapshotData;
@property(nonatomic, readonly) _Bool serializedConfigurationContainsRoute;
- (id)serializedConfigurationDataIncludingRoute:(_Bool)arg1;	// IMP=0x0010000000360560
@property(nonatomic, readonly) NSNumber *trackId;
@property(nonatomic, readonly) _Bool isTrackWorkout;
@property(nonatomic, readonly) _Bool supportsTrackWorkout;
@property(nonatomic, readonly) double raceWorkoutDisplayDistance;
@property(nonatomic, readonly) double raceWorkoutReferencePace;
@property(nonatomic, readonly) _Bool isMultiSportWorkout;
@property(nonatomic, readonly) _Bool isPacerWorkout;
@property(nonatomic, readonly) _Bool didWinRace;
@property(nonatomic, readonly) double raceTime;
@property(nonatomic, readonly) _Bool shouldShowRaceResults;
@property(nonatomic, readonly) _Bool isRaceWorkout;
@property(nonatomic, readonly) _Bool isIntervalWorkout;
@property(nonatomic, readonly) _Bool shouldUseCircularGradientImage;
@property(nonatomic, readonly) double elapsedTime;
@property(nonatomic, readonly) _Bool hasChartableMetrics;
@end

