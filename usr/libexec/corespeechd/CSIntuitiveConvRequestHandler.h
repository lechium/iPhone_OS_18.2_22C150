//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAggressiveECModeHandler, CSAsset, CSAttSiriAFTMNode, CSAttSiriAssetDownloadPromptIOS, CSAttSiriAudioCoordinator, CSAttSiriAudioMetricsNode, CSAttSiriAudioSessionStateClient, CSAttSiriAudioSrcNode, CSAttSiriBridgeMessageHandler, CSAttSiriContinuityEndDetector, CSAttSiriEagerMitigator, CSAttSiriEndpointerNode, CSAttSiriMagusSupportedPolicy, CSAttSiriNLDAClassifierNode, CSAttSiriOSDNode, CSAttSiriRCHandler, CSAttSiriSSRNode, CSAttSiriSpeechRecognitionNode, CSAttSiriTCUGenerator, CSAttSiriUresNode, CSAudioRecordContext, CSAudioSessionInfoProvider, CSAudioStream, CSEndpointDetectedSelfLogger, CSIntuitiveConvAudioCaptureMonitor, CSOSTransaction, CSSiriAudioMessageRequestHandler, CSSiriClientBehaviorMonitor, CSSiriEnabledMonitor, CSSpeechManager, MISSING_TYPE, NSMapTable, NSString;
@protocol CSAttendingHintProviding, CSAttendingStatesMessageHandling, CSIntuitiveConvRequestHandlerDelegate, OS_dispatch_queue;

@interface CSIntuitiveConvRequestHandler : NSObject
{
    _Bool _supportTCU;	// 8 = 0x8
    _Bool _audioSessionMonitoringInProgress;	// 9 = 0x9
    _Bool _pendingStartAttendingDecision;	// 10 = 0xa
    _Bool _isPromptRequestImpending;	// 11 = 0xb
    id <CSIntuitiveConvRequestHandlerDelegate> _requestHandlerDelegate;	// 16 = 0x10
    id <CSAttendingHintProviding> _hintProvider;	// 24 = 0x18
    id <CSAttendingStatesMessageHandling> _attendingStatesMessageHandler;	// 32 = 0x20
    NSMapTable *_nodesCache;	// 40 = 0x28
    CSAttSiriEndpointerNode *_endpointerNode;	// 48 = 0x30
    CSAttSiriOSDNode *_osdNode;	// 56 = 0x38
    CSAttSiriSpeechRecognitionNode *_speechRecognitionNode;	// 64 = 0x40
    CSAttSiriUresNode *_uresNode;	// 72 = 0x48
    CSAttSiriAudioSrcNode *_audioSrcNode;	// 80 = 0x50
    CSAttSiriSSRNode *_ssrNode;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_queue;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_targetQueueForASR;	// 104 = 0x68
    CSAudioRecordContext *_audioRecordContext;	// 112 = 0x70
    CSOSTransaction *_attSiriTransaction;	// 120 = 0x78
    NSString *_requestMHUUID;	// 128 = 0x80
    CSSiriClientBehaviorMonitor *_siriClientBehaviorMonitor;	// 136 = 0x88
    CSIntuitiveConvAudioCaptureMonitor *_intuitiveConvAudioCaptureMonitor;	// 144 = 0x90
    CSAudioStream *_siriClientStream;	// 152 = 0x98
    CSAsset *_mitigationAsset;	// 160 = 0xa0
    CSAsset *_vtAsset;	// 168 = 0xa8
    CSSpeechManager *_speechManager;	// 176 = 0xb0
    CSSiriEnabledMonitor *_siriEnabledMonitor;	// 184 = 0xb8
    CSAttSiriAFTMNode *_aFTMNode;	// 192 = 0xc0
    CSAttSiriNLDAClassifierNode *_nldaClassifierNode;	// 200 = 0xc8
    CSAttSiriRCHandler *_rcHandler;	// 208 = 0xd0
    CSAttSiriTCUGenerator *_tcuGenerator;	// 216 = 0xd8
    CSAttSiriContinuityEndDetector *_continuityEndDetector;	// 224 = 0xe0
    CSAttSiriBridgeMessageHandler *_bridgeMessageHandler;	// 232 = 0xe8
    CSSiriAudioMessageRequestHandler *_audioMessageRequestHandler;	// 240 = 0xf0
    CSEndpointDetectedSelfLogger *_endpointDetectedSelfLogger;	// 248 = 0xf8
    CSAttSiriAudioCoordinator *_audioCoordinator;	// 256 = 0x100
    CSAttSiriAssetDownloadPromptIOS *_downloadPrompter;	// 264 = 0x108
    CSAttSiriEagerMitigator *_eagerMitigator;	// 272 = 0x110
    CSAttSiriAudioMetricsNode *_audioMetricsNode;	// 280 = 0x118
    CSAggressiveECModeHandler *_aggressiveECHandler;	// 288 = 0x120
    MISSING_TYPE *_dismissedRequestId;	// 296 = 0x128
    NSString *_currentRequestId;	// 304 = 0x130
    NSString *_recordingEventUUIDToIgnore;	// 312 = 0x138
    CSAttSiriMagusSupportedPolicy *_magusSupportedPolicy;	// 320 = 0x140
    CSAudioSessionInfoProvider *_audioSessionInfoProvider;	// 328 = 0x148
    CSAttSiriAudioSessionStateClient *_siriStateClient;	// 336 = 0x150
    NSString *_pendingAttendingStartRootRequestID;	// 344 = 0x158
}

- (void).cxx_destruct;	// IMP=0x002000000002a988
@property(nonatomic) _Bool isPromptRequestImpending; // @synthesize isPromptRequestImpending=_isPromptRequestImpending;
@property(retain, nonatomic) NSString *pendingAttendingStartRootRequestID; // @synthesize pendingAttendingStartRootRequestID=_pendingAttendingStartRootRequestID;
@property(nonatomic) _Bool pendingStartAttendingDecision; // @synthesize pendingStartAttendingDecision=_pendingStartAttendingDecision;
@property(retain, nonatomic) CSAttSiriAudioSessionStateClient *siriStateClient; // @synthesize siriStateClient=_siriStateClient;
@property(retain, nonatomic) CSAudioSessionInfoProvider *audioSessionInfoProvider; // @synthesize audioSessionInfoProvider=_audioSessionInfoProvider;
@property(nonatomic) _Bool audioSessionMonitoringInProgress; // @synthesize audioSessionMonitoringInProgress=_audioSessionMonitoringInProgress;
@property(retain, nonatomic) CSAttSiriMagusSupportedPolicy *magusSupportedPolicy; // @synthesize magusSupportedPolicy=_magusSupportedPolicy;
@property(retain, nonatomic) NSString *recordingEventUUIDToIgnore; // @synthesize recordingEventUUIDToIgnore=_recordingEventUUIDToIgnore;
@property(retain, nonatomic) NSString *currentRequestId; // @synthesize currentRequestId=_currentRequestId;
@property(retain, nonatomic) NSString *dismissedRequestId; // @synthesize dismissedRequestId=_dismissedRequestId;
@property(nonatomic) _Bool supportTCU; // @synthesize supportTCU=_supportTCU;
@property(retain, nonatomic) CSAggressiveECModeHandler *aggressiveECHandler; // @synthesize aggressiveECHandler=_aggressiveECHandler;
@property(retain, nonatomic) CSAttSiriAudioMetricsNode *audioMetricsNode; // @synthesize audioMetricsNode=_audioMetricsNode;
@property(retain, nonatomic) CSAttSiriEagerMitigator *eagerMitigator; // @synthesize eagerMitigator=_eagerMitigator;
@property(retain, nonatomic) CSAttSiriAssetDownloadPromptIOS *downloadPrompter; // @synthesize downloadPrompter=_downloadPrompter;
@property(retain, nonatomic) CSAttSiriAudioCoordinator *audioCoordinator; // @synthesize audioCoordinator=_audioCoordinator;
@property(retain, nonatomic) CSEndpointDetectedSelfLogger *endpointDetectedSelfLogger; // @synthesize endpointDetectedSelfLogger=_endpointDetectedSelfLogger;
@property(retain, nonatomic) CSSiriAudioMessageRequestHandler *audioMessageRequestHandler; // @synthesize audioMessageRequestHandler=_audioMessageRequestHandler;
@property(retain, nonatomic) CSAttSiriBridgeMessageHandler *bridgeMessageHandler; // @synthesize bridgeMessageHandler=_bridgeMessageHandler;
@property(retain, nonatomic) CSAttSiriContinuityEndDetector *continuityEndDetector; // @synthesize continuityEndDetector=_continuityEndDetector;
@property(retain, nonatomic) CSAttSiriTCUGenerator *tcuGenerator; // @synthesize tcuGenerator=_tcuGenerator;
@property(retain, nonatomic) CSAttSiriRCHandler *rcHandler; // @synthesize rcHandler=_rcHandler;
@property(retain, nonatomic) CSAttSiriNLDAClassifierNode *nldaClassifierNode; // @synthesize nldaClassifierNode=_nldaClassifierNode;
@property(retain, nonatomic) CSAttSiriAFTMNode *aFTMNode; // @synthesize aFTMNode=_aFTMNode;
@property(retain, nonatomic) CSSiriEnabledMonitor *siriEnabledMonitor; // @synthesize siriEnabledMonitor=_siriEnabledMonitor;
@property(retain, nonatomic) CSSpeechManager *speechManager; // @synthesize speechManager=_speechManager;
@property(retain, nonatomic) CSAsset *vtAsset; // @synthesize vtAsset=_vtAsset;
@property(retain, nonatomic) CSAsset *mitigationAsset; // @synthesize mitigationAsset=_mitigationAsset;
@property(retain, nonatomic) CSAudioStream *siriClientStream; // @synthesize siriClientStream=_siriClientStream;
@property(retain, nonatomic) CSIntuitiveConvAudioCaptureMonitor *intuitiveConvAudioCaptureMonitor; // @synthesize intuitiveConvAudioCaptureMonitor=_intuitiveConvAudioCaptureMonitor;
@property(retain, nonatomic) CSSiriClientBehaviorMonitor *siriClientBehaviorMonitor; // @synthesize siriClientBehaviorMonitor=_siriClientBehaviorMonitor;
@property(retain, nonatomic) NSString *requestMHUUID; // @synthesize requestMHUUID=_requestMHUUID;
@property(retain, nonatomic) CSOSTransaction *attSiriTransaction; // @synthesize attSiriTransaction=_attSiriTransaction;
@property(retain, nonatomic) CSAudioRecordContext *audioRecordContext; // @synthesize audioRecordContext=_audioRecordContext;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueueForASR; // @synthesize targetQueueForASR=_targetQueueForASR;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) CSAttSiriSSRNode *ssrNode; // @synthesize ssrNode=_ssrNode;
@property(retain, nonatomic) CSAttSiriAudioSrcNode *audioSrcNode; // @synthesize audioSrcNode=_audioSrcNode;
@property(retain, nonatomic) CSAttSiriUresNode *uresNode; // @synthesize uresNode=_uresNode;
@property(retain, nonatomic) CSAttSiriSpeechRecognitionNode *speechRecognitionNode; // @synthesize speechRecognitionNode=_speechRecognitionNode;
@property(retain, nonatomic) CSAttSiriOSDNode *osdNode; // @synthesize osdNode=_osdNode;
@property(retain, nonatomic) CSAttSiriEndpointerNode *endpointerNode; // @synthesize endpointerNode=_endpointerNode;
@property(retain, nonatomic) NSMapTable *nodesCache; // @synthesize nodesCache=_nodesCache;
@property(retain, nonatomic) id <CSAttendingStatesMessageHandling> attendingStatesMessageHandler; // @synthesize attendingStatesMessageHandler=_attendingStatesMessageHandler;
@property(retain, nonatomic) id <CSAttendingHintProviding> hintProvider; // @synthesize hintProvider=_hintProvider;
@property(retain, nonatomic) id <CSIntuitiveConvRequestHandlerDelegate> requestHandlerDelegate; // @synthesize requestHandlerDelegate=_requestHandlerDelegate;
- (id)fetchRecordingEventUUIDToIgnore;	// IMP=0x001000000002a385
- (void)emitRequestLinkEventForMHUUID:(id)arg1 withRequestId:(id)arg2;	// IMP=0x001000000002a37f
- (id)_startStreamOptionWithMachAbsTime:(unsigned long long)arg1;	// IMP=0x001000000002a2fa
- (id)_startStreamOption;	// IMP=0x001000000002a2d3
- (void)attSiriAudioSrcNodeDidStopUnexpectedly:(id)arg1;	// IMP=0x001000000002a262
- (_Bool)_isRequestIdCurrent:(id)arg1;	// IMP=0x001000000002a240
- (void)_handleStopProcessingForRequestId:(id)arg1;	// IMP=0x001000000002a0bc
- (void)_handleStartProcessingWithRecordContext:(id)arg1 withAudioStartStreamOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000029a79
- (void)_setupAudioSrcNodeWithSiriClientStream:(id)arg1;	// IMP=0x001000000002999d
- (void)_fetchRequiredAssetsForRecordContext:(id)arg1;	// IMP=0x0010000000029953
- (void)_fetchVoiceTriggerAssets;	// IMP=0x00100000000298cc
- (void)_fetchMitigationAssets;	// IMP=0x0010000000029845
- (void)mxSessionMonitorSomeClientWentActive:(id)arg1;	// IMP=0x001000000002983f
- (void)_stopMonitoringAudioSession;	// IMP=0x0010000000029839
- (void)_startMonitoringAudioSession;	// IMP=0x0010000000029833
- (void)audioSessionInfoProvider:(id)arg1 didReceiveAudioSessionRouteChangeNotificationWithUserInfo:(id)arg2;	// IMP=0x00100000000297db
- (void)siriPromptDone;	// IMP=0x00100000000297d5
- (void)siriPromptWillStart;	// IMP=0x001000000002978a
- (void)siriUIDismissed;	// IMP=0x001000000002973f
- (void)_attendingDismissalAndBlockHelper;	// IMP=0x00100000000295c7
- (void)attendingXpcDisconnection;	// IMP=0x001000000002948e
- (void)dismissAttendingRequested;	// IMP=0x0010000000029355
- (void)attSiriNode:(id)arg1 didDetectStartpointAtTime:(double)arg2;	// IMP=0x001000000002934f
- (void)attSiriNode:(id)arg1 didDetectHardEndpointAtTime:(double)arg2 withMetrics:(id)arg3 usesAutomaticEndPointing:(_Bool)arg4;	// IMP=0x0010000000029304
- (void)CSSiriEnabledMonitor:(id)arg1 didReceiveEnabled:(_Bool)arg2;	// IMP=0x001000000002922a
- (void)_handleClientPreparedAudioStream:(id)arg1 successfully:(_Bool)arg2;	// IMP=0x00000000000290b3
- (id)_recordContextForContinuousConversation;	// IMP=0x0010000000028ff9
- (void)_generateStartAttendingHint:(id)arg1 attendingDecision:(_Bool)arg2;	// IMP=0x0010000000028dd2
- (void)_cacheStartAttendingInfo:(id)arg1 attendingDecision:(_Bool)arg2;	// IMP=0x0010000000028cf1
- (void)_handleClientDidStopWithOption:(id)arg1;	// IMP=0x00100000000288d0
- (void)_handleClientWillStopStreamWithReason:(unsigned long long)arg1 stopStreamOption:(id)arg2;	// IMP=0x00100000000288ba
- (void)_handleClientDidStartStreamWithOption:(id)arg1 successfully:(_Bool)arg2;	// IMP=0x0010000000028666
- (void)_handleClientWillStartStreamWithContext:(id)arg1 option:(id)arg2;	// IMP=0x00100000000284b1
- (void)notifyRequestCompletion;	// IMP=0x0010000000028466
- (void)notifySiriSessionStateChange:(_Bool)arg1;	// IMP=0x0010000000028460
- (void)siriClientBehaviorMonitor:(id)arg1 preparedSiriClientAudioStream:(id)arg2 successfully:(_Bool)arg3;	// IMP=0x00100000000283c0
- (void)siriClientBehaviorMonitor:(id)arg1 fetchedSiriClientAudioStream:(id)arg2 successfully:(_Bool)arg3;	// IMP=0x0010000000028320
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3;	// IMP=0x0010000000028261
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2 reason:(unsigned long long)arg3 withEventUUID:(id)arg4;	// IMP=0x0010000000028196
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2 reason:(unsigned long long)arg3;	// IMP=0x0010000000028190
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(_Bool)arg3 option:(id)arg4 withEventUUID:(id)arg5;	// IMP=0x00100000000280c6
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3 withEventUUID:(id)arg4;	// IMP=0x0010000000027fd7
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;	// IMP=0x0010000000027fd1
- (void)intuitiveConvAudioCaptureMonitor:(id)arg1 fetchedAudioStream:(id)arg2 successfully:(_Bool)arg3;	// IMP=0x0010000000027f31
- (void)intuitiveConvAudioCaptureMonitorDidStopAudioCapture:(id)arg1 stopStreamOption:(id)arg2 eventUUID:(id)arg3;	// IMP=0x0010000000027ea4
- (void)intuitiveConvAudioCaptureMonitor:(id)arg1 willStopAudioCaptureReason:(unsigned long long)arg2;	// IMP=0x0010000000027e55
- (void)intuitiveConvAudioCaptureMonitor:(id)arg1 didStartAudioCaptureSuccessfully:(_Bool)arg2 option:(id)arg3 eventUUID:(id)arg4;	// IMP=0x0010000000027db6
- (void)intuitiveConvAudioCaptureMonitor:(id)arg1 willStartAudioCaptureWithContext:(id)arg2 option:(id)arg3;	// IMP=0x0010000000027cff
- (void)_configureAllNodes;	// IMP=0x001000000002766f
- (void)start;	// IMP=0x00100000000275a9
- (void)setup;	// IMP=0x00100000000274bb
@property(readonly, nonatomic, getter=getAudioMessageServiceProxyObj) id audioMessageServiceProxyObj;
@property(readonly, nonatomic, getter=getRcHandlerProxyObj) id rcHandlerProxyObj;
@property(readonly, nonatomic, getter=getSsrProxyObj) id ssrProxyObj;
@property(readonly, nonatomic, getter=getAsrProxyObj) id asrProxyObj;
@property(readonly, nonatomic, getter=getEndpointerProxyObj) id endpointerProxyObj;
- (id)initWithAudioSrcNode:(id)arg1 endpointerNode:(id)arg2 osdNode:(id)arg3 ssrNode:(id)arg4 speechRecognitionNode:(id)arg5 uresNode:(id)arg6 needsSSRNode:(_Bool)arg7 aFtmNode:(id)arg8 speechManager:(id)arg9 siriEnabledMonitor:(id)arg10 siriClientBehaviorMonitor:(id)arg11 intuitiveConvAudioCaptureMonitor:(id)arg12 rcHandler:(id)arg13 tcuGenerator:(id)arg14 continuityEndDetector:(id)arg15 bridgeMessageHandler:(id)arg16 audioCoordinator:(id)arg17 magusSupportedPolicy:(id)arg18 supportsAcousticProgressiveChecker:(_Bool)arg19 supportsUnderstandingOnDevice:(_Bool)arg20 requireASROnDevice:(_Bool)arg21 supportsHybridUnderstandingOnDevice:(_Bool)arg22 supportsLogger:(_Bool)arg23 supportTCU:(_Bool)arg24 audioSessionInfoProvider:(id)arg25 aggressiveECHandler:(id)arg26;	// IMP=0x0010000000026c50
- (id)init;	// IMP=0x0010000000026b03

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

