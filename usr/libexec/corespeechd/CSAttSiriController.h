//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAsset, CSAttSiriAFTMNode, CSAttSiriAsrNode, CSAttSiriAttendingAudioSrcNode, CSAttSiriAudioSrcNode, CSAttSiriContConvController, CSAttSiriEndpointerNode, CSAttSiriNLDAClassifierNode, CSAttSiriOSDNode, CSAttSiriRCHandler, CSAttSiriSSRNode, CSAttSiriSpeechDetectionNode, CSAttSiriUresNode, CSAudioRecordContext, CSAudioRouteChangeMonitor, CSAudioStartStreamOption, CSAudioStream, CSConnectionListener, CSOSTransaction, CSSiriClientBehaviorMonitor, CSSiriEnabledMonitor, CSSpeechManager, NSMapTable, NSString;
@protocol OS_dispatch_queue;

@interface CSAttSiriController : NSObject
{
    _Bool _boronScore;	// 8 = 0x8
    _Bool _pendingActivationProcessing;	// 9 = 0x9
    _Bool _deferredActivation;	// 10 = 0xa
    _Bool _deferredAsrResults;	// 11 = 0xb
    _Bool _shouldSkipAttending;	// 12 = 0xc
    CSConnectionListener *_attSiriSvcListener;	// 16 = 0x10
    CSAttSiriRCHandler *_rcHandler;	// 24 = 0x18
    NSMapTable *_nodesCache;	// 32 = 0x20
    CSAttSiriEndpointerNode *_endpointerNode;	// 40 = 0x28
    CSAttSiriOSDNode *_osdNode;	// 48 = 0x30
    CSAttSiriAsrNode *_asrNode;	// 56 = 0x38
    CSAttSiriUresNode *_uresNode;	// 64 = 0x40
    CSAttSiriAudioSrcNode *_audioSrcNode;	// 72 = 0x48
    CSAttSiriSSRNode *_ssrNode;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_queue;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_mitigationAssetFetchQueue;	// 96 = 0x60
    CSAudioRecordContext *_audioRecordContext;	// 104 = 0x68
    CSAudioStartStreamOption *_siriClientAudioStartStreamOption;	// 112 = 0x70
    CSOSTransaction *_attSiriTransaction;	// 120 = 0x78
    NSString *_requestMHUUID;	// 128 = 0x80
    CSSiriClientBehaviorMonitor *_siriClientBehaviorMonitor;	// 136 = 0x88
    CSAudioStream *_siriClientStream;	// 144 = 0x90
    CSAsset *_mitigationAsset;	// 152 = 0x98
    CSAsset *_vtAsset;	// 160 = 0xa0
    CSSpeechManager *_speechManager;	// 168 = 0xa8
    CSSiriEnabledMonitor *_siriEnabledMonitor;	// 176 = 0xb0
    CSAttSiriAFTMNode *_aFTMNode;	// 184 = 0xb8
    CSAttSiriNLDAClassifierNode *_nldaClassifierNode;	// 192 = 0xc0
    CSAttSiriSpeechDetectionNode *_speechDetectionNode;	// 200 = 0xc8
    CSAudioRouteChangeMonitor *_audioRouteChangeMonitor;	// 208 = 0xd0
    long long _hearstRouteStatus;	// 216 = 0xd8
    CSAttSiriContConvController *_ccController;	// 224 = 0xe0
    CSAttSiriAttendingAudioSrcNode *_attendingAudioNode;	// 232 = 0xe8
    unsigned long long _activationStartSampleId;	// 240 = 0xf0
}

- (void).cxx_destruct;	// IMP=0x00200000000c62f6
@property(nonatomic) _Bool shouldSkipAttending; // @synthesize shouldSkipAttending=_shouldSkipAttending;
@property(nonatomic) _Bool deferredAsrResults; // @synthesize deferredAsrResults=_deferredAsrResults;
@property(nonatomic) _Bool deferredActivation; // @synthesize deferredActivation=_deferredActivation;
@property(nonatomic) unsigned long long activationStartSampleId; // @synthesize activationStartSampleId=_activationStartSampleId;
@property(nonatomic) _Bool pendingActivationProcessing; // @synthesize pendingActivationProcessing=_pendingActivationProcessing;
@property(nonatomic) _Bool boronScore; // @synthesize boronScore=_boronScore;
@property(retain, nonatomic) CSAttSiriAttendingAudioSrcNode *attendingAudioNode; // @synthesize attendingAudioNode=_attendingAudioNode;
@property(retain, nonatomic) CSAttSiriContConvController *ccController; // @synthesize ccController=_ccController;
@property(nonatomic) long long hearstRouteStatus; // @synthesize hearstRouteStatus=_hearstRouteStatus;
@property(retain, nonatomic) CSAudioRouteChangeMonitor *audioRouteChangeMonitor; // @synthesize audioRouteChangeMonitor=_audioRouteChangeMonitor;
@property(retain, nonatomic) CSAttSiriSpeechDetectionNode *speechDetectionNode; // @synthesize speechDetectionNode=_speechDetectionNode;
@property(retain, nonatomic) CSAttSiriNLDAClassifierNode *nldaClassifierNode; // @synthesize nldaClassifierNode=_nldaClassifierNode;
@property(retain, nonatomic) CSAttSiriAFTMNode *aFTMNode; // @synthesize aFTMNode=_aFTMNode;
@property(retain, nonatomic) CSSiriEnabledMonitor *siriEnabledMonitor; // @synthesize siriEnabledMonitor=_siriEnabledMonitor;
@property(retain, nonatomic) CSSpeechManager *speechManager; // @synthesize speechManager=_speechManager;
@property(retain, nonatomic) CSAsset *vtAsset; // @synthesize vtAsset=_vtAsset;
@property(retain, nonatomic) CSAsset *mitigationAsset; // @synthesize mitigationAsset=_mitigationAsset;
@property(retain, nonatomic) CSAudioStream *siriClientStream; // @synthesize siriClientStream=_siriClientStream;
@property(retain, nonatomic) CSSiriClientBehaviorMonitor *siriClientBehaviorMonitor; // @synthesize siriClientBehaviorMonitor=_siriClientBehaviorMonitor;
@property(retain, nonatomic) NSString *requestMHUUID; // @synthesize requestMHUUID=_requestMHUUID;
@property(retain, nonatomic) CSOSTransaction *attSiriTransaction; // @synthesize attSiriTransaction=_attSiriTransaction;
@property(retain, nonatomic) CSAudioStartStreamOption *siriClientAudioStartStreamOption; // @synthesize siriClientAudioStartStreamOption=_siriClientAudioStartStreamOption;
@property(retain, nonatomic) CSAudioRecordContext *audioRecordContext; // @synthesize audioRecordContext=_audioRecordContext;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *mitigationAssetFetchQueue; // @synthesize mitigationAssetFetchQueue=_mitigationAssetFetchQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) CSAttSiriSSRNode *ssrNode; // @synthesize ssrNode=_ssrNode;
@property(retain, nonatomic) CSAttSiriAudioSrcNode *audioSrcNode; // @synthesize audioSrcNode=_audioSrcNode;
@property(retain, nonatomic) CSAttSiriUresNode *uresNode; // @synthesize uresNode=_uresNode;
@property(retain, nonatomic) CSAttSiriAsrNode *asrNode; // @synthesize asrNode=_asrNode;
@property(retain, nonatomic) CSAttSiriOSDNode *osdNode; // @synthesize osdNode=_osdNode;
@property(retain, nonatomic) CSAttSiriEndpointerNode *endpointerNode; // @synthesize endpointerNode=_endpointerNode;
@property(retain, nonatomic) NSMapTable *nodesCache; // @synthesize nodesCache=_nodesCache;
@property(retain, nonatomic) CSAttSiriRCHandler *rcHandler; // @synthesize rcHandler=_rcHandler;
@property(retain, nonatomic) CSConnectionListener *attSiriSvcListener; // @synthesize attSiriSvcListener=_attSiriSvcListener;
- (void)handleAttendingAudioStopUnexpectedly;	// IMP=0x00100000000c5ebd
- (void)triggerSiriActivation;	// IMP=0x00100000000c5e36
- (void)resetAttendingState;	// IMP=0x00100000000c5daf
- (void)handleAudioStopUnexpectedly;	// IMP=0x00100000000c5d28
- (void)CSPhoneCallStateMonitor:(id)arg1 didRecievePhoneCallStateChange:(unsigned long long)arg2;	// IMP=0x00100000000c5d22
- (void)_receivedHearstRoutedEvent:(long long)arg1;	// IMP=0x00100000000c5c16
- (void)CSAudioRouteChangeMonitor:(id)arg1 didReceiveAudioRouteChangeEvent:(long long)arg2;	// IMP=0x00100000000c5bc7
- (id)getRequestMHUUID;	// IMP=0x00100000000c5b0e
- (_Bool)getPendingActivationStatus;	// IMP=0x00100000000c59fa
- (void)_resetAttendingState;	// IMP=0x00100000000c5820
- (void)_startProcessingContinuousConversationRequest:(unsigned long long)arg1;	// IMP=0x00100000000c55b8
- (void)_startAudioStreamForContinuousConversation:(id)arg1 withStartStreamOption:(id)arg2;	// IMP=0x00100000000c5496
- (void)_setPendingActivationStatus:(_Bool)arg1;	// IMP=0x00100000000c53f8
- (void)_triggerSiriActivation;	// IMP=0x00100000000c5295
- (void)startSpeechProcessing:(unsigned long long)arg1;	// IMP=0x00100000000c5246
- (id)_startStreamOptionWithMachAbsTime:(unsigned long long)arg1;	// IMP=0x00100000000c51c1
- (id)_startStreamOption;	// IMP=0x00100000000c519a
- (void)_handleCCTriggeredRequestStop;	// IMP=0x00100000000c50a4
- (void)_handleCCTriggeredRequestStart;	// IMP=0x00100000000c4f83
- (void)handleEndOfAttendingForRequestId:(id)arg1;	// IMP=0x00100000000c4ef6
- (void)handleOrbTransition;	// IMP=0x00100000000c4eb2
- (void)gazeEstimates:(struct CGPoint)arg1 landmarks:(id)arg2;	// IMP=0x00100000000c4de8
- (void)gazeTrackerFaceTrackingMetaDataUpdate:(id)arg1 atMachAbsTime:(unsigned long long)arg2;	// IMP=0x00100000000c4dcf
- (void)updateSiriOrbLocation:(struct CGRect)arg1;	// IMP=0x00100000000c4db6
- (void)siriRequestProcessingCompleted;	// IMP=0x00100000000c4db0
- (void)stopAttendingWithContext:(id)arg1;	// IMP=0x00100000000c4ca0
- (void)startAttendingWithContext:(id)arg1;	// IMP=0x00100000000c4b90
- (void)attSiriAudioSrcNodeDidStopUnexpectedly:(id)arg1;	// IMP=0x00100000000c4b45
- (void)attSiriAttendingAudioSrcNodeDidStopUnexpectedly:(id)arg1;	// IMP=0x00100000000c4afa
- (void)_releaseAttSiriTransactionIfNeeded;	// IMP=0x00100000000c4a45
- (void)_holdAttSiriTransactionIfNeeded;	// IMP=0x00100000000c49f7
- (void)_handleStopProcessing;	// IMP=0x00100000000c46f2
- (void)_handleStartProcessingWithRecordContext:(id)arg1 withAudioStartStreamOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c4194
- (void)_detachAttendingStreamAndAttachSiriClientStream;	// IMP=0x00100000000c40e0
- (void)_detachSiriClientStreamAndAttachAttendingStream;	// IMP=0x00100000000c402c
- (void)_prepareAttendingAudioSrcNodeWithStreamRequest:(id)arg1 audioProviderUUID:(id)arg2;	// IMP=0x00100000000c3e2e
- (void)_setupAttendingAudioSrcNodeWithStreamRequest:(id)arg1 audioProviderUUID:(id)arg2;	// IMP=0x00100000000c3c1e
- (void)_setupAudioSrcNodeWithSiriClientStream:(id)arg1;	// IMP=0x00100000000c3a72
- (void)_fetchRequiredAssets;	// IMP=0x00100000000c3a2d
- (_Bool)_shouldFetchMitigationAssets;	// IMP=0x00100000000c3a16
- (void)_fetchVoiceTriggerAssets;	// IMP=0x00100000000c398f
- (void)_fetchMitigationAssets;	// IMP=0x00100000000c3944
- (void)_forceBuildGraph:(_Bool)arg1;	// IMP=0x00100000000c357a
- (void)_reconfigureRequiredNodes:(id)arg1 enforceAttendingAudioNode:(_Bool)arg2;	// IMP=0x00100000000c2fb1
- (void)_tearDownBuildGraph:(id)arg1;	// IMP=0x00100000000c2df6
- (void)attSiriNodeDidNotDetectSpeechWithTimeout;	// IMP=0x00100000000c2dab
- (void)attSiriNode:(id)arg1 didDetectSpeechWithTriggerInfo:(id)arg2;	// IMP=0x00100000000c2d1e
- (void)attSiriNode:(id)arg1 didDetectStartpointAtTime:(double)arg2;	// IMP=0x00100000000c2d18
- (void)attSiriNode:(id)arg1 didDetectHardEndpointAtTime:(double)arg2 withMetrics:(id)arg3 usesAutomaticEndPointing:(_Bool)arg4;	// IMP=0x00100000000c2ccd
- (void)siriMitigator:(id)arg1 mitigationDecision:(unsigned long long)arg2;	// IMP=0x00100000000c2c20
- (void)CSSiriEnabledMonitor:(id)arg1 didReceiveEnabled:(_Bool)arg2;	// IMP=0x00100000000c2b46
- (void)siriClientBehaviorMonitor:(id)arg1 preparedSiriClientAudioStream:(id)arg2 successfully:(_Bool)arg3;	// IMP=0x00100000000c2aa6
- (void)siriClientBehaviorMonitor:(id)arg1 fetchedSiriClientAudioStream:(id)arg2 successfully:(_Bool)arg3;	// IMP=0x00100000000c2a06
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3;	// IMP=0x00100000000c29bb
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2 reason:(unsigned long long)arg3;	// IMP=0x00100000000c296c
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(_Bool)arg3 option:(id)arg4 withEventUUID:(id)arg5;	// IMP=0x00100000000c287f
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;	// IMP=0x00100000000c2738
- (_Bool)isCurrentRequestCCTriggered;	// IMP=0x00100000000c263c
- (_Bool)isDeferredActivationEnabled;	// IMP=0x00100000000c25ae
- (void)stop;	// IMP=0x00100000000c25a8
- (void)pause;	// IMP=0x00100000000c25a2
- (void)start;	// IMP=0x00100000000c2557
- (id)getNodeOfType:(unsigned long long)arg1;	// IMP=0x00100000000c249a
- (id)initWithEndpointerNode:(id)arg1 osdNode:(id)arg2 ssrNode:(id)arg3 asrNode:(id)arg4 uresNode:(id)arg5 needsSSRNode:(_Bool)arg6 aFtmNode:(id)arg7 speechDetectionNode:(id)arg8 ccController:(id)arg9 isContinuousConverationEnabled:(_Bool)arg10 speechManager:(id)arg11 siriEnabledMonitor:(id)arg12 siriClientBehaviorMonitor:(id)arg13 rcHandler:(id)arg14 supportsAcousticProgressiveChecker:(_Bool)arg15 supportsUnderstandingOnDevice:(_Bool)arg16 requireASROnDevice:(_Bool)arg17 supportsHybridUnderstandingOnDevice:(_Bool)arg18;	// IMP=0x00100000000c1c44
- (id)init;	// IMP=0x00100000000c1aeb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

