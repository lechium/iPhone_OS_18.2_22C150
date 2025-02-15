//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKHealthStore, NSMutableArray, NSMutableDictionary;
@protocol CLIntersiloUniverse, CLWorkoutRecordingDelegate;

@interface CLWMHealthKit
{
    struct unique_ptr<CLMotionStateMediator_Type::Client, std::default_delete<CLMotionStateMediator_Type::Client>> _motionStateMediatorClient;	// 8 = 0x8
    shared_ptr_da0ccc6f _writer;	// 16 = 0x10
    id <CLWorkoutRecordingDelegate> _delegate;	// 32 = 0x20
    id <CLIntersiloUniverse> _universe;	// 40 = 0x28
    NSMutableDictionary *_metadata;	// 48 = 0x30
    struct WorkoutRecorderHealthKitInfo _healthKitInfo;	// 56 = 0x38
    HKHealthStore *_healthKit;	// 88 = 0x58
    NSMutableArray *_healthKitQueries;	// 96 = 0x60
    int _sampleCount;	// 104 = 0x68
    unsigned char _overviewId[16];	// 108 = 0x6c
    double _startTime;	// 128 = 0x80
}

- (id).cxx_construct;	// IMP=0x002000000136579b
- (void).cxx_destruct;	// IMP=0x0010000001365749
-     // Error parsing type: v32@0:8r^i16r^(NotificationData={MediatedMotionActivity=d{CLMotionActivity=iiiiiidBfdBidi{FsmTransitionData=CCCS} dii{?=b1b1b1b1b1}iidQi}i{CLNatalieFeatures=fffffffiB}qqqBB[16C]}{MotionOverride=i{CLMotionActivity=iiiiiidBfdBidi{FsmTransitionData=CCCS} dii{?=b1b1b1b1b1}iidQi}q{WorkoutSettings=[16C][16C][16C]qq(WorkoutAttrib={SwimAttrib=qd}Q){FitnessPlusInfo=B[64c]q}Q}}{WorkoutEvent=ddqd{CLWorkoutSessionDetails=idqQ}{WorkoutSettings=[16C][16C][16C]qq(WorkoutAttrib={SwimAttrib=qd}Q){FitnessPlusInfo=B[64c]q}Q}}{IndoorOutdoorUpdate=dqq}{ActivityEvent=dqqqqdd}{WorkoutClassifierResult=dqf{Probabilities=ffffffff}})24, name: onMotionStateMediatorNotification:data:
- (void)queryHRSource:(double)arg1 workoutEndTime:(double)arg2;	// IMP=0x0010000001364377
- (int)getSampleCount;	// IMP=0x0010000001364367
- (void)setWriter:(shared_ptr_da0ccc6f)arg1;	// IMP=0x0010000001364353
- (void)writeHealthKitInfo;	// IMP=0x001000000136426d
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
- (void)teardownHealthKitQueries;	// IMP=0x00100000013641fd
- (void)stopHealthKitQueries;	// IMP=0x00100000013640cf
- (void)queryUserEffortResponse:(double)arg1 workoutEndTime:(double)arg2;	// IMP=0x00100000013632af
- (void)setupHealthKitQueries;	// IMP=0x001000000136234b
- (id)metadata;	// IMP=0x0010000001362326
- (void)dealloc;	// IMP=0x00100000013622d8
- (void)teardownListeners;	// IMP=0x00100000013622aa
- (void)setupListener;	// IMP=0x00100000013621e6
- (id)initWithDelegate:(id)arg1 universeCopy:(id)arg2 settings:(struct SettingStructure)arg3;	// IMP=0x0010000001362150

@end

