//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLWorkoutRecording, NSMutableDictionary;
@protocol CLIntersiloUniverse, CLWorkoutRecordingDelegate;

@interface CLWMCalorimetry
{
    struct unique_ptr<CLNatalimetryNotifier_Type::Client, std::default_delete<CLNatalimetryNotifier_Type::Client>> _calorimetryClient;	// 8 = 0x8
    shared_ptr_da0ccc6f _writer;	// 16 = 0x10
    id <CLWorkoutRecordingDelegate> _delegate;	// 32 = 0x20
    id <CLIntersiloUniverse> _universe;	// 40 = 0x28
    NSMutableDictionary *_metadata;	// 48 = 0x30
    struct CLBodyMetrics _bodyMetrics;	// 56 = 0x38
    _Bool _disableBodyMetrics;	// 116 = 0x74
    _Bool _disableMeanMaxMets;	// 117 = 0x75
    CLWorkoutRecording *_workoutRecording;	// 120 = 0x78
    int _sampleCount;	// 128 = 0x80
}

- (id).cxx_construct;	// IMP=0x002000000135f418
- (void).cxx_destruct;	// IMP=0x001000000135f3d5
- (int)getSampleCount;	// IMP=0x001000000135f3c5
- (void)setWriter:(shared_ptr_da0ccc6f)arg1;	// IMP=0x001000000135f3b1
- (void)writeBodyMetrics;	// IMP=0x001000000135f236
- (void)resetBodyMetrics;	// IMP=0x000000000135f1f2
-     // Error parsing type: v32@0:8r^i16r^(NotificationData={CLNatalieData=i^{__CFString}diBBddqqd[16C]}B{CLBodyMetrics=iiffffffffifBfBBB}f{CLExerciseMinuteData=id^{__CFString}}{CLStandMinuteInputData=dIId}{VO2MaxResult=dqdBBBB[16C]Bddii}{VO2MaxSessionStats=dfBB}d{CLCalorieUpdate={CLNatalieData=i^{__CFString}diBBddqqd[16C]}ididdBddBfIIdB}B{CLCalorieThroughputData={CLCalorieUpdate={CLNatalieData=i^{__CFString}diBBddqqd[16C]}ididdBddBfIIdB}{Data=dddd{MediatedMotionActivity=d{CLMotionActivity=iiiiiidBfdBidi{FsmTransitionData=CCCS} dii{?=b1b1b1b1b1}iidQi}i{CLNatalieFeatures=fffffffiB}qqqBB[16C]}{CLStepCountEntry=dddIddddIIdddi^{__CFString}BB{CLAccelerometerPace=ddd}IICII(FalseStepDetectorStateUnion={FalseStepDetectorState=b1b1b1b1b1b1b1b1}C)CCi}{CLCatherineData=iiddBdddi}{CLOdometerEntry=ddddddddddiiiddddddddiiB{CLOdometerTrackProximityInfo=id}}{CLElevationChangeEntry=ddIIidiifCSfBB}{CLSwimEntry=Q[16C][16C]dddddddiiiiffiiddi}{CLCoarseElevationChangeEntry=dIi}{_CLFitnessMachineData=dddddqqqddiddiddidddiB}{CLCalorimetryFunctionalStrengthDMFeatures=diB}{CLCalorimetryDanceDMFeatures=dfff}{CLCalorimetryRowingDMFeatures=dfffff}{CLCalorimetryKickboxingDMFeatures=dfff}{CLRawHR=dddB}dd}})24, name: onCalorimetryNotification:data:
- (id)metadata;	// IMP=0x001000000135f061
- (void)dealloc;	// IMP=0x001000000135f013
- (void)teardownListeners;	// IMP=0x001000000135efd2
- (void)setupListener;	// IMP=0x001000000135eca4
- (id)initWithDelegate:(id)arg1 universeCopy:(id)arg2 settings:(struct SettingStructure)arg3;	// IMP=0x001000000135ebfb
- (void)setWorkoutRecording:(id)arg1;	// IMP=0x001000000135ebea

@end

