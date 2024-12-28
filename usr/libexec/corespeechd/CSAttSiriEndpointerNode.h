//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAsset, CSAttSiriController, CSAudioRecordContext, CSConnectionListener, CSEndpointLatencyInfo, CSEndpointerProxy, NSArray, NSHashTable, NSString;
@protocol CSAttSiriEndpointerNodeDelegate, OS_dispatch_queue;

@interface CSAttSiriEndpointerNode : NSObject
{
    _Bool _isReady;	// 8 = 0x8
    _Bool _isNNVAD;	// 9 = 0x9
    unsigned long long _type;	// 16 = 0x10
    NSArray *_requiredNodes;	// 24 = 0x18
    CSAttSiriController *_attSiriController;	// 32 = 0x20
    NSString *_mhId;	// 40 = 0x28
    CSAsset *_prefetchedAsset;	// 48 = 0x30
    CSConnectionListener *_endpointerListener;	// 56 = 0x38
    id <CSAttSiriEndpointerNodeDelegate> _delegate;	// 64 = 0x40
    NSHashTable *_receivers;	// 72 = 0x48
    CSEndpointerProxy *_proxy;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_queue;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_endpointLatencyQueue;	// 96 = 0x60
    CSEndpointLatencyInfo *_endpointLatencyInfo;	// 104 = 0x68
    CSAudioRecordContext *_audioRecordContext;	// 112 = 0x70
    NSString *_requestId;	// 120 = 0x78
    unsigned long long _lastAudioChunkHostTime;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00200000000178d6
@property(nonatomic) unsigned long long lastAudioChunkHostTime; // @synthesize lastAudioChunkHostTime=_lastAudioChunkHostTime;
@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) CSAudioRecordContext *audioRecordContext; // @synthesize audioRecordContext=_audioRecordContext;
@property(retain, nonatomic) CSEndpointLatencyInfo *endpointLatencyInfo; // @synthesize endpointLatencyInfo=_endpointLatencyInfo;
@property(nonatomic) _Bool isNNVAD; // @synthesize isNNVAD=_isNNVAD;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *endpointLatencyQueue; // @synthesize endpointLatencyQueue=_endpointLatencyQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) CSEndpointerProxy *proxy; // @synthesize proxy=_proxy;
@property(retain, nonatomic) NSHashTable *receivers; // @synthesize receivers=_receivers;
@property(nonatomic) __weak id <CSAttSiriEndpointerNodeDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CSConnectionListener *endpointerListener; // @synthesize endpointerListener=_endpointerListener;
@property(retain, nonatomic) CSAsset *prefetchedAsset; // @synthesize prefetchedAsset=_prefetchedAsset;
@property(retain, nonatomic) NSString *mhId; // @synthesize mhId=_mhId;
- (void);	// IMP=0x0010000000017764
@property(nonatomic) __weak CSAttSiriController *attSiriController; // @synthesize attSiriController=_attSiriController;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(retain, nonatomic) NSArray *requiredNodes; // @synthesize requiredNodes=_requiredNodes;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)endpointer:(id)arg1 detectedTwoShotAtTime:(double)arg2;	// IMP=0x00100000000176c7
- (void)_emitStoppedListeningForSpeechContinuationWithTrpId:(id)arg1;	// IMP=0x00100000000176c1
- (void)_sendEndpointEventDelegateAtTime:(double)arg1 eventType:(long long)arg2 endpointerMetrics:(id)arg3;	// IMP=0x0010000000017457
- (void)_reportHardEndpointToXPCClientWithTime:(double)arg1 endpointerMetrics:(id)arg2;	// IMP=0x001000000001712a
- (void)endpointer:(id)arg1 didDetectStartpointAtTime:(double)arg2;	// IMP=0x00100000000170da
- (void)endpointer:(id)arg1 didDetectHardEndpointAtTime:(double)arg2 withMetrics:(id)arg3 endpointerModelType:(long long)arg4;	// IMP=0x0010000000017029
- (void)endpointer:(id)arg1 didDetectHardEndpointAtTime:(double)arg2 withMetrics:(id)arg3;	// IMP=0x0010000000016f8c
- (void)attSiriAudioSrcNodeDidStop:(id)arg1;	// IMP=0x0010000000016f41
- (void)attSiriAudioSrcNodeLPCMRecordBufferAvailable:(id)arg1 audioChunk:(id)arg2;	// IMP=0x0010000000016e39
- (void)attSiriAudioSrcNodeDidStartRecording:(id)arg1 successfully:(_Bool)arg2 error:(id)arg3;	// IMP=0x0010000000016e33
- (void)attSiriNode:(id)arg1 didUpdateAnchorMachAbsTime:(unsigned long long)arg2 numSamplesProcessedBeforeAnchorTime:(unsigned long long)arg3 isAnchorTimeBuffered:(_Bool)arg4 audioDeliveryHostTimeDelta:(unsigned long long)arg5;	// IMP=0x0010000000016e0d
- (void)attSiriNode:(id)arg1 didUpdateFirstAudioPacketTimestamp:(id)arg2 firstAudioSampleSensorTimestamp:(unsigned long long)arg3 firstAudioStartSampleCount:(unsigned long long)arg4;	// IMP=0x0010000000016de9
- (void)attSiriNode:(id)arg1 didUpdateOSDFeatures:(id)arg2 withFrameDurationMs:(double)arg3 withMHID:(id)arg4;	// IMP=0x0010000000016dc5
- (void)processSpeechPackage:(id)arg1 taskName:(id)arg2;	// IMP=0x0010000000016ca1
- (void)didReceiveResultCandidateWithRequestId:(id)arg1 rcId:(unsigned long long)arg2 speechPackage:(id)arg3 duration:(double)arg4 metadata:(id)arg5 taskName:(id)arg6;	// IMP=0x0010000000016c88
- (void)didReceiveResultCandidateWithRequestId:(id)arg1 rcId:(unsigned long long)arg2 inputOrigin:(id)arg3 speechPackage:(id)arg4 duration:(double)arg5 taskName:(id)arg6;	// IMP=0x0010000000016c6f
- (void)didReceiveAsrFeaturesWithWordCount:(unsigned long long)arg1 trailingSilenceDuration:(long long)arg2 eosLikelihood:(double)arg3 pauseCounts:(id)arg4 silencePosterior:(double)arg5 taskName:(id)arg6 processedAudioDurationInMilliseconds:(long long)arg7 fromServer:(_Bool)arg8 acousticEndpointerScore:(double)arg9;	// IMP=0x0010000000016b94
- (void)processTaskString:(id)arg1;	// IMP=0x0010000000016b7e
- (void)processASRFeaturesWithWordCount:(long long)arg1 trailingSilenceDuration:(long long)arg2 eosLikelihood:(double)arg3 pauseCounts:(id)arg4 silencePosterior:(double)arg5 taskName:(id)arg6 processedAudioDurationInMilliseconds:(long long)arg7 acousticEndpointerScore:(double)arg8 fromServer:(_Bool)arg9;	// IMP=0x0010000000016aa3
- (void)getEndPointAnalyzerTypeWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000016a56
- (void)getPostVoiceTriggerSilenceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000016a0c
- (void)getEndpointerModelVersionWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000000169a9
- (unsigned long long)endPointAnalyzerType;	// IMP=0x0010000000016993
- (double)postVoiceTriggerSilence;	// IMP=0x001000000001697d
- (_Bool)_shouldSendEndpointerSignalByOperationMode;	// IMP=0x0010000000016952
- (_Bool)getUsesAutomaticEndpointing;	// IMP=0x0010000000016930
- (void)setEndpointerOperationMode:(long long)arg1;	// IMP=0x001000000001691a
- (void)setAutomaticEndpointingSuspensionEndTime:(double)arg1;	// IMP=0x0010000000016904
- (void)setEndWaitTime:(double)arg1;	// IMP=0x00100000000168ee
- (void)setStartWaitTime:(double)arg1;	// IMP=0x00100000000168d8
- (void)logHybridEndpointFeaturesWithEvent:(id)arg1 locale:(id)arg2;	// IMP=0x00100000000168c2
- (void)shouldAcceptEagerResultForDuration:(double)arg1 resultsCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000168ac
- (void)updateEndpointerDelayedTrigger:(_Bool)arg1;	// IMP=0x0010000000016896
- (void)updateEndpointerThreshold:(float)arg1;	// IMP=0x0010000000016880
- (void)processASRFeatures:(id)arg1 fromServer:(_Bool)arg2;	// IMP=0x001000000001686a
- (id)endpointerModelVersion;	// IMP=0x0010000000016854
- (void)processAudioSamplesAsynchronously:(id)arg1;	// IMP=0x001000000001683e
- (void)recordingStoppedForReason:(long long)arg1;	// IMP=0x0010000000016828
- (void)stopEndpointer;	// IMP=0x00100000000167ca
- (void)setActiveChannel:(unsigned long long)arg1;	// IMP=0x00100000000167b4
- (void)setupConnection;	// IMP=0x00100000000167ae
- (void)resetForVoiceTriggerTwoShotWithSampleRate:(unsigned long long)arg1;	// IMP=0x0010000000016798
- (void)resetForNewRequestWithSampleRate:(unsigned long long)arg1 recordContext:(id)arg2 recordOption:(id)arg3 voiceTriggerInfo:(id)arg4;	// IMP=0x00100000000165e8
- (void)registerEndpointerProxyAt:(id)arg1;	// IMP=0x00100000000165cc
- (void)stop;	// IMP=0x00100000000165b6
- (void)pause;	// IMP=0x00100000000165b0
- (void)start;	// IMP=0x00100000000165aa
- (void)removeReceiver:(id)arg1;	// IMP=0x001000000001651d
- (void)addReceiver:(id)arg1;	// IMP=0x0010000000016490
- (id)initWithAttSiriController:(id)arg1;	// IMP=0x0010000000016442
- (id)init;	// IMP=0x0010000000016272

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
