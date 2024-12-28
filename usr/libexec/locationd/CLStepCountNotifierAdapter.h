//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLStepCountNotifierAdapter
{
}

+ (id)getSilo;	// IMP=0x0020000001178411
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000011783f8
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000117839b
+ (_Bool)isSupported;	// IMP=0x001000000117934b
- (void)resumeAfterPendingStepCountNotifications;	// IMP=0x00200000011791df
- (void)getPedometerBinsAndHistoryWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000011790af
- (void)getPedometerCalibrationBins:(long long)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000001178eba
- (_Bool)syncgetIsStrideCalibrationConvergedMedianForSpeed:(double)arg1;	// IMP=0x0010000001178e81
- (id)syncgetStepCadenceToStrideLengthDefaultBins;	// IMP=0x0010000001178e35
- (id)syncgetRawSpeedToKValueDefaultBins;	// IMP=0x0010000001178de9
- (void)setStepCadenceToStrideLengthBins:(id)arg1;	// IMP=0x0010000001178da7
- (void)setRawSpeedToKValueBins:(id)arg1;	// IMP=0x0010000001178d65
- (id)syncgetCopyStepCadenceToStrideLengthBins;	// IMP=0x0010000001178d2a
- (id)syncgetCopyRawSpeedToKValueBins;	// IMP=0x0010000001178cef
- (int)syncgetQueryPedometerDataSince:(struct CLStepCountEntry)arg1 withResponseArray:(void *)arg2;	// IMP=0x0010000001178cbd
- (id)syncgetDbUUID;	// IMP=0x0010000001178c8d
- (void)reset;	// IMP=0x0010000001178c52
- (struct CLStepDistance)syncgetQueryStartTime:(double *)arg1 andStopTime:(double *)arg2;	// IMP=0x0010000001178939
- (_Bool)syncgetEnabled;	// IMP=0x0010000001178911
- (void)setEnabled:(_Bool)arg1;	// IMP=0x0010000001178838
- (void)receiveWorkoutDistanceAnalyticsMessage:(id)arg1;	// IMP=0x001000000117866d
- (void)receiveMobilityDataFromCompanion:(id)arg1;	// IMP=0x001000000117865b
- (void)strideCalibratorSetSession:(long long)arg1;	// IMP=0x0010000001178626
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000011785fe
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000011785d1
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000011785a9
- (void *)adaptee;	// IMP=0x0010000001178576
- (void)endService;	// IMP=0x001000000117855b
- (void)beginService;	// IMP=0x00100000011784aa
- (id)init;	// IMP=0x001000000117846d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
