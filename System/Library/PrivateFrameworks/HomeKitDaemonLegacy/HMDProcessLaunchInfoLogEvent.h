//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDProcessLaunchInfoLogEvent : HMMLogEvent
{
    _Bool _isConfigurationLoaded;	// 8 = 0x8
    _Bool _isTTSUInProgress;	// 9 = 0x9
    _Bool _eventSubmittedOnTimeOut;	// 10 = 0xa
    long long _submissionState;	// 16 = 0x10
    NSString *_dataSyncState;	// 24 = 0x18
    long long _systemUptimeMillisecondsAtLaunch;	// 32 = 0x20
    double _timeIntervalSincePreviousProcessLaunch;	// 40 = 0x28
    long long _homeDataLoadedMilliseconds;	// 48 = 0x30
    long long _xpcMessageTransportReadyMilliseconds;	// 56 = 0x38
    long long _millisecondsSinceLaunchToDataSyncStateGood;	// 64 = 0x40
    long long _millisecondsToAccountResolved;	// 72 = 0x48
    long long _numUncommittedRecords;	// 80 = 0x50
    long long _numUncommittedAndPushedRecords;	// 88 = 0x58
    NSString *_processExitType;	// 96 = 0x60
    NSString *_processExitReason;	// 104 = 0x68
    long long _processLaunchCount;	// 112 = 0x70
    long long _processAbnormalExitCount;	// 120 = 0x78
    long long _processVoluntaryExitCount;	// 128 = 0x80
    long long _processJetsamCount;	// 136 = 0x88
    long long _processIdleExitCount;	// 144 = 0x90
    long long _processCrashCount;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x00000000006d943c
@property(readonly) _Bool eventSubmittedOnTimeOut; // @synthesize eventSubmittedOnTimeOut=_eventSubmittedOnTimeOut;
@property(readonly) _Bool isTTSUInProgress; // @synthesize isTTSUInProgress=_isTTSUInProgress;
@property(readonly) _Bool isConfigurationLoaded; // @synthesize isConfigurationLoaded=_isConfigurationLoaded;
@property(readonly) long long processCrashCount; // @synthesize processCrashCount=_processCrashCount;
@property(readonly) long long processIdleExitCount; // @synthesize processIdleExitCount=_processIdleExitCount;
@property(readonly) long long processJetsamCount; // @synthesize processJetsamCount=_processJetsamCount;
@property(readonly) long long processVoluntaryExitCount; // @synthesize processVoluntaryExitCount=_processVoluntaryExitCount;
@property(readonly) long long processAbnormalExitCount; // @synthesize processAbnormalExitCount=_processAbnormalExitCount;
@property(readonly) long long processLaunchCount; // @synthesize processLaunchCount=_processLaunchCount;
@property(readonly, nonatomic) NSString *processExitReason; // @synthesize processExitReason=_processExitReason;
@property(readonly, nonatomic) NSString *processExitType; // @synthesize processExitType=_processExitType;
@property(readonly) long long numUncommittedAndPushedRecords; // @synthesize numUncommittedAndPushedRecords=_numUncommittedAndPushedRecords;
@property(readonly) long long numUncommittedRecords; // @synthesize numUncommittedRecords=_numUncommittedRecords;
@property(readonly) long long millisecondsToAccountResolved; // @synthesize millisecondsToAccountResolved=_millisecondsToAccountResolved;
@property(readonly) long long millisecondsSinceLaunchToDataSyncStateGood; // @synthesize millisecondsSinceLaunchToDataSyncStateGood=_millisecondsSinceLaunchToDataSyncStateGood;
@property(readonly) long long xpcMessageTransportReadyMilliseconds; // @synthesize xpcMessageTransportReadyMilliseconds=_xpcMessageTransportReadyMilliseconds;
@property(readonly) long long homeDataLoadedMilliseconds; // @synthesize homeDataLoadedMilliseconds=_homeDataLoadedMilliseconds;
@property(readonly) double timeIntervalSincePreviousProcessLaunch; // @synthesize timeIntervalSincePreviousProcessLaunch=_timeIntervalSincePreviousProcessLaunch;
@property(readonly) long long systemUptimeMillisecondsAtLaunch; // @synthesize systemUptimeMillisecondsAtLaunch=_systemUptimeMillisecondsAtLaunch;
@property(readonly, copy, nonatomic) NSString *dataSyncState; // @synthesize dataSyncState=_dataSyncState;
@property(readonly) long long submissionState; // @synthesize submissionState=_submissionState;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
- (id)initWithSubmissionState:(long long)arg1 dataSyncState:(id)arg2 timeIntervalSincePreviousProcessLaunch:(double)arg3 millisecondsToHomeDataLoad:(long long)arg4 millisecondsToXPCMessageTransportReady:(long long)arg5 millisecondsSinceLaunchToDataSyncStateGood:(long long)arg6 millisecondsToAccountResolved:(long long)arg7 numUncommittedRecords:(long long)arg8 numUncommittedAndPushedRecords:(long long)arg9 processExitType:(id)arg10 processExitReason:(id)arg11 processLaunchCount:(long long)arg12 processAbnormalExitCount:(long long)arg13 processVoluntaryExitCount:(long long)arg14 processJetsamCount:(long long)arg15 processIdleExitCount:(long long)arg16 processCrashCount:(long long)arg17 isConfigurationLoaded:(_Bool)arg18 isTTSUInProgress:(_Bool)arg19;	// IMP=0x00000000006d89cd

// Remaining properties
@property(readonly, copy, nonatomic) NSString *accessoryIdentifier;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSUUID",?,R,N

@property(readonly) Class superclass;

@end

