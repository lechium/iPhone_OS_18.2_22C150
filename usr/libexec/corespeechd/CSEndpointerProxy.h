//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAudioRecordContext, NSString;
@protocol CSEndpointAnalyzerDelegate, CSEndpointAnalyzerImpl, CSEndpointAnalyzerImplDelegate;

@interface CSEndpointerProxy : NSObject
{
    _Bool _accessibleEndpointerEnabled;	// 8 = 0x8
    _Bool _recordingDidStop;	// 9 = 0x9
    id <CSEndpointAnalyzerDelegate> _endpointerDelegate;	// 16 = 0x10
    id <CSEndpointAnalyzerImplDelegate> _endpointerImplDelegate;	// 24 = 0x18
    id <CSEndpointAnalyzerImpl> _activeEndpointer;	// 32 = 0x20
    id <CSEndpointAnalyzerImpl> _hybridEndpointer;	// 40 = 0x28
    id <CSEndpointAnalyzerImpl> _nnvadEndpointer;	// 48 = 0x30
    CSAudioRecordContext *_recordContext;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000007e0bc
@property(nonatomic) _Bool recordingDidStop; // @synthesize recordingDidStop=_recordingDidStop;
@property(nonatomic) _Bool accessibleEndpointerEnabled; // @synthesize accessibleEndpointerEnabled=_accessibleEndpointerEnabled;
@property(retain, nonatomic) CSAudioRecordContext *recordContext; // @synthesize recordContext=_recordContext;
@property(retain, nonatomic) id <CSEndpointAnalyzerImpl> nnvadEndpointer; // @synthesize nnvadEndpointer=_nnvadEndpointer;
@property(retain, nonatomic) id <CSEndpointAnalyzerImpl> hybridEndpointer; // @synthesize hybridEndpointer=_hybridEndpointer;
@property(nonatomic) __weak id <CSEndpointAnalyzerImpl> activeEndpointer; // @synthesize activeEndpointer=_activeEndpointer;
@property(nonatomic) __weak id <CSEndpointAnalyzerImplDelegate> endpointerImplDelegate; // @synthesize endpointerImplDelegate=_endpointerImplDelegate;
@property(nonatomic) __weak id <CSEndpointAnalyzerDelegate> endpointerDelegate; // @synthesize endpointerDelegate=_endpointerDelegate;
- (void)reset;	// IMP=0x001000000007dfcc
@property(nonatomic) double automaticEndpointingSuspensionEndTime;
@property(nonatomic) double endWaitTime;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,N

@property(nonatomic) double startWaitTime;
@property(readonly, nonatomic) double lastEndOfVoiceActivityTime;
@property(nonatomic) _Bool saveSamplesSeenInReset;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) double minimumDurationForEndpointer;
@property(nonatomic) double delay;
@property(nonatomic) double interspeechWaitTime;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,N

@property(nonatomic) long long endpointStyle;
- (long long)fetchCurrentEndpointerOperationMode;	// IMP=0x001000000007df49
- (void)setEndpointerOperationMode:(long long)arg1;	// IMP=0x001000000007df33
- (void)processFirstAudioPacketTimestamp:(id)arg1 firstAudioSampleSensorTimestamp:(unsigned long long)arg2;	// IMP=0x001000000007df1d
- (void)processOSDFeatures:(id)arg1 withFrameDurationMs:(double)arg2 withMHID:(id)arg3;	// IMP=0x001000000007df07
- (void)logHybridEndpointFeaturesWithEvent:(id)arg1 locale:(id)arg2;	// IMP=0x001000000007ddea
- (void)logAnchorMachAbsTime:(unsigned long long)arg1 numSamplesProcessedBeforeAnchorTime:(unsigned long long)arg2 isAnchorTimeBuffered:(_Bool)arg3 audioDeliveryHostTimeDelta:(unsigned long long)arg4;	// IMP=0x001000000007ddd4
- (_Bool)shouldAcceptEagerResultForDurationSync:(double)arg1 withEndpointerMetrics:(id)arg2;	// IMP=0x001000000007ddbe
- (void)shouldAcceptEagerResultForDuration:(double)arg1 withEndpointerMetrics:(id)arg2 resultsCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007dda8
- (void)shouldAcceptEagerResultForDuration:(double)arg1 resultsCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000007dd92
- (void)updateEndpointerDelayedTrigger:(_Bool)arg1;	// IMP=0x001000000007dd7c
- (void)updateEndpointerThreshold:(float)arg1;	// IMP=0x001000000007dcda
- (id)endpointerModelVersion;	// IMP=0x001000000007db90
- (void)processTaskString:(id)arg1;	// IMP=0x001000000007db7a
- (void)processRCFeatures:(id)arg1;	// IMP=0x001000000007db64
- (void)processASRFeatures:(id)arg1 fromServer:(_Bool)arg2;	// IMP=0x001000000007db4e
- (unsigned long long)endPointAnalyzerType;	// IMP=0x001000000007db1f
- (double)postVoiceTriggerSilence;	// IMP=0x001000000007daff
- (void)endpointer:(id)arg1 reportEndpointBufferHostTime:(unsigned long long)arg2 firstBufferHostTime:(unsigned long long)arg3;	// IMP=0x001000000007da59
- (void)endpointer:(id)arg1 detectedTwoShotAtTime:(double)arg2;	// IMP=0x001000000007d93c
- (void)endpointer:(id)arg1 didDetectHardEndpointAtTime:(double)arg2 withMetrics:(id)arg3;	// IMP=0x001000000007d703
- (void)endpointer:(id)arg1 didDetectHardEndpointAtTime:(double)arg2 withMetrics:(id)arg3 endpointerModelType:(long long)arg4;	// IMP=0x001000000007d4a8
- (void)endpointer:(id)arg1 didDetectStartpointAtTime:(double)arg2;	// IMP=0x001000000007d353
- (void)setRequestMHUUID:(id)arg1;	// IMP=0x001000000007d2f9
@property(readonly, nonatomic) double lastStartOfVoiceActivityTime;
- (void)recordingStoppedForReason:(long long)arg1;	// IMP=0x001000000007d283
- (void)processAudioSamplesAsynchronously:(id)arg1;	// IMP=0x001000000007d1a8
- (void)preheat;	// IMP=0x001000000007d0fc
- (void)setActiveChannel:(unsigned long long)arg1;	// IMP=0x001000000007d0bc
- (void)resetForVoiceTriggerTwoShotWithSampleRate:(unsigned long long)arg1;	// IMP=0x001000000007cf85
- (_Bool)isWatchRTSTriggered;	// IMP=0x001000000007cf53
- (void)stopEndpointer;	// IMP=0x001000000007cf08
- (_Bool)_updateAccessibleEndpointerThresholdIfNeed;	// IMP=0x001000000007ce81
- (id)cachedEndpointerMetrics;	// IMP=0x001000000007cdf8
- (void)resetForNewRequestWithSampleRate:(unsigned long long)arg1 recordContext:(id)arg2 recordOption:(id)arg3 voiceTriggerInfo:(id)arg4;	// IMP=0x001000000007c9ad
- (void)_setupNNVADEndpointer;	// IMP=0x001000000007c8ce
- (id)initForSidekick;	// IMP=0x001000000007c808
- (id)init;	// IMP=0x001000000007c721

// Remaining properties
@property(nonatomic) double bypassSamples;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *mhId;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,&,N

@property(readonly) Class superclass;

@end
