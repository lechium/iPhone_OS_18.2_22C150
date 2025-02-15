//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAsset, CSAttSiriController, CSAttSiriNLDAClassifierNode, CSAttSiriOSDNode, CSAttSiriSSRNode, CSAttSiriTCUGenerator, CSOSTransaction, NSArray, NSHashTable, NSMutableDictionary, NSString, SLUresMitigator;
@protocol CSAttSiriMitigatorDeletgate, CSAttSiriSignalDataAggregatorProtocol, OS_dispatch_queue;

@interface CSAttSiriUresNode : NSObject
{
    _Bool _isReady;	// 8 = 0x8
    _Bool _supportsUnderstandingOnDevice;	// 9 = 0x9
    _Bool _supportsHybridUnderstandingOnDevice;	// 10 = 0xa
    _Bool _isMedocFeatureEnabled;	// 11 = 0xb
    CSAttSiriController *_attSiriController;	// 16 = 0x10
    unsigned long long _type;	// 24 = 0x18
    NSArray *_requiredNodes;	// 32 = 0x20
    NSString *_mhId;	// 40 = 0x28
    CSAsset *_prefetchedAsset;	// 48 = 0x30
    CSAttSiriOSDNode *_osdNode;	// 56 = 0x38
    id <CSAttSiriSignalDataAggregatorProtocol> _gazeNode;	// 64 = 0x40
    CSAttSiriNLDAClassifierNode *_nldaClassifierNode;	// 72 = 0x48
    CSAttSiriSSRNode *_ssrNode;	// 80 = 0x50
    id <CSAttSiriMitigatorDeletgate> _mitigatorDelegate;	// 88 = 0x58
    CSAttSiriTCUGenerator *_tcuGenerator;	// 96 = 0x60
    SLUresMitigator *_mitigator;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_queue;	// 112 = 0x70
    NSHashTable *_receivers;	// 120 = 0x78
    NSString *_configFile;	// 128 = 0x80
    NSArray *_supportedInputOrigins;	// 136 = 0x88
    CSOSTransaction *_osTransaction;	// 144 = 0x90
    NSArray *_allowVocabList;	// 152 = 0x98
    unsigned long long _allowListWordCountThreshold;	// 160 = 0xa0
    NSMutableDictionary *_requestIdToFeatsMapping;	// 168 = 0xa8
}

+ (float)_extractLrnnScoreForResultCandidate:(id)arg1;	// IMP=0x00200000000ea691
- (void).cxx_destruct;	// IMP=0x00200000000e52ac
@property(readonly, nonatomic) _Bool isMedocFeatureEnabled; // @synthesize isMedocFeatureEnabled=_isMedocFeatureEnabled;
@property(readonly, nonatomic) _Bool supportsHybridUnderstandingOnDevice; // @synthesize supportsHybridUnderstandingOnDevice=_supportsHybridUnderstandingOnDevice;
@property(readonly, nonatomic) _Bool supportsUnderstandingOnDevice; // @synthesize supportsUnderstandingOnDevice=_supportsUnderstandingOnDevice;
@property(retain, nonatomic) NSMutableDictionary *requestIdToFeatsMapping; // @synthesize requestIdToFeatsMapping=_requestIdToFeatsMapping;
@property(nonatomic) unsigned long long allowListWordCountThreshold; // @synthesize allowListWordCountThreshold=_allowListWordCountThreshold;
@property(retain, nonatomic) NSArray *allowVocabList; // @synthesize allowVocabList=_allowVocabList;
@property(retain, nonatomic) CSOSTransaction *osTransaction; // @synthesize osTransaction=_osTransaction;
@property(retain, nonatomic) NSArray *supportedInputOrigins; // @synthesize supportedInputOrigins=_supportedInputOrigins;
@property(retain, nonatomic) NSString *configFile; // @synthesize configFile=_configFile;
@property(retain, nonatomic) NSHashTable *receivers; // @synthesize receivers=_receivers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) SLUresMitigator *mitigator; // @synthesize mitigator=_mitigator;
@property(nonatomic, setter=registerTCUGenerator:) __weak CSAttSiriTCUGenerator *tcuGenerator; // @synthesize tcuGenerator=_tcuGenerator;
@property(nonatomic) __weak id <CSAttSiriMitigatorDeletgate> mitigatorDelegate; // @synthesize mitigatorDelegate=_mitigatorDelegate;
@property(nonatomic, setter=registerSSRNode:) __weak CSAttSiriSSRNode *ssrNode; // @synthesize ssrNode=_ssrNode;
@property(nonatomic, setter=registerNLDAClassifierNode:) __weak CSAttSiriNLDAClassifierNode *nldaClassifierNode; // @synthesize nldaClassifierNode=_nldaClassifierNode;
@property(nonatomic, setter=registerGazeNode:) __weak id <CSAttSiriSignalDataAggregatorProtocol> gazeNode; // @synthesize gazeNode=_gazeNode;
@property(nonatomic, setter=registerOSDNode:) __weak CSAttSiriOSDNode *osdNode; // @synthesize osdNode=_osdNode;
@property(retain, nonatomic) CSAsset *prefetchedAsset; // @synthesize prefetchedAsset=_prefetchedAsset;
@property(retain, nonatomic) NSString *mhId; // @synthesize mhId=_mhId;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(retain, nonatomic) NSArray *requiredNodes; // @synthesize requiredNodes=_requiredNodes;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) __weak CSAttSiriController *attSiriController; // @synthesize attSiriController=_attSiriController;
- (id)getUresInputFeaturesForRequestId:(id)arg1;	// IMP=0x00100000000e4f6e
- (_Bool)_isSpeechRecognizerTaskSupported:(id)arg1;	// IMP=0x00100000000e4f04
- (void)_readAllowListVocabFromFile:(id)arg1;	// IMP=0x00100000000e4d0c
- (_Bool)_shouldApplyAllowListOverride:(id)arg1 withInputOrigin:(id)arg2;	// IMP=0x00100000000e4a86
- (id)_decodeJsonFromFile:(id)arg1;	// IMP=0x00100000000e48c8
- (void)_updateSupportedInputOrigins;	// IMP=0x00100000000e47cd
- (void)_updateInputFeats:(id)arg1 forSignalsFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;	// IMP=0x00100000000e4630
- (_Bool)_shouldRunMitigationForContext:(id)arg1;	// IMP=0x00100000000e45a2
- (void)_releaseUresProcessingTransaction;	// IMP=0x00100000000e44ae
- (void)_holdTransactionForUresProcessing;	// IMP=0x00100000000e43ac
- (void)didReceiveTCUUpdateForTCUId:(id)arg1 withTCUAccepted:(_Bool)arg2 forRequestId:(id)arg3 isFinal:(_Bool)arg4;	// IMP=0x00100000000e430a
- (void)didReceiveResultCandidateWithRequestId:(id)arg1 rcId:(unsigned long long)arg2 speechPackage:(id)arg3 duration:(double)arg4 metadata:(id)arg5 taskName:(id)arg6;	// IMP=0x00100000000e42da
- (void)didReceiveResultCandidateWithRequestId:(id)arg1 rcId:(unsigned long long)arg2 inputOrigin:(id)arg3 speechPackage:(id)arg4 duration:(double)arg5 taskName:(id)arg6;	// IMP=0x00100000000e42aa
- (void)didReceiveStopRecognitionRequest:(id)arg1 stopReason:(unsigned long long)arg2;	// IMP=0x00100000000e4298
- (void)didStartRecognitionRequest:(id)arg1 successfully:(_Bool)arg2 isRecognitionModeClassic:(_Bool)arg3 error:(id)arg4;	// IMP=0x00100000000e427c
- (void)didSelectRecognitionModelWithModelRoot:(id)arg1;	// IMP=0x00100000000e426a
- (void)didPrepareRecognitionWithAudioContext:(id)arg1 requestId:(id)arg2 mhId:(id)arg3 voiceTriggerInfo:(id)arg4;	// IMP=0x00100000000e4258
- (id)constructTCUIntendedInfoForRequestId:(id)arg1 withResultCandidate:(id)arg2;	// IMP=0x00100000000e3fe4
- (void)attSiriNode:(id)arg1 didUpdateWithSpeakerInfo:(id)arg2 forReqId:(id)arg3;	// IMP=0x00100000000e3f25
- (void)attSiriNode:(id)arg1 didUpdateOSDFeatures:(id)arg2 withFrameDurationMs:(double)arg3 withMHID:(id)arg4;	// IMP=0x00100000000e3e88
- (void)attSiriNode:(id)arg1 didMitigate:(_Bool)arg2 withScore:(float)arg3 forRequestId:(id)arg4 taskType:(id)arg5;	// IMP=0x00100000000e3dc2
- (void)attSiriNode:(id)arg1 didUpdateAttentionState:(unsigned long long)arg2;	// IMP=0x00100000000e3d73
- (void)didReceiveAsrFeaturesWithWordCount:(unsigned long long)arg1 trailingSilenceDuration:(long long)arg2 eosLikelihood:(double)arg3 pauseCounts:(id)arg4 silencePosterior:(double)arg5 taskName:(id)arg6 processedAudioDurationInMilliseconds:(long long)arg7 fromServer:(_Bool)arg8 acousticEndpointerScore:(double)arg9;	// IMP=0x00100000000e3d5d
- (void)_createMitigatorModelWithConfig:(id)arg1;	// IMP=0x00100000000e3b59
- (void)setEndpointerFeatureEoS:(float)arg1;	// IMP=0x00100000000e3b09
- (void)getLatestUresFeaturesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e3b03
- (void)_runLRNNOnlyMitigationForRCId:(unsigned long long)arg1 speechPackage:(id)arg2 requestId:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000e36e3
- (void)processResultCandidate:(id)arg1 forRCId:(unsigned long long)arg2 forTask:(id)arg3 forRequestId:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000e35bc
- (_Bool)_supportsHybridSDSD;	// IMP=0x00100000000e35a5
- (_Bool)_shouldRunMitigationForRequestContext:(id)arg1 forTask:(id)arg2;	// IMP=0x00100000000e3125
- (void)_createModelAndRunInferenceForRcId:(unsigned long long)arg1 withRequestContext:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e2e88
- (void)_storeMitigationDecision:(_Bool)arg1 forRCId:(unsigned long long)arg2 requestContext:(id)arg3;	// IMP=0x00100000000e2ca4
- (void)_logURESFailureMsgInput:(unsigned long long)arg1 forMhId:(id)arg2;	// IMP=0x00100000000e2c9e
- (void)_logURESResultsForInput:(id)arg1 withOutput:(id)arg2 forMhId:(id)arg3;	// IMP=0x00100000000e2c98
- (void)_logURESEndMessageWithScore:(float)arg1 threshold:(float)arg2 spkrIDThreshold:(float)arg3 assetVersion:(id)arg4 withMhId:(id)arg5;	// IMP=0x00100000000e2c92
- (void)_logLRNNFailMsgForMhId:(id)arg1;	// IMP=0x00100000000e2c8c
- (void)_logLatticeRNNResults:(id)arg1 forMhId:(id)arg2;	// IMP=0x00100000000e2c86
- (void)_logFinalMitigationDecisionToSelf:(_Bool)arg1 forMhId:(id)arg2;	// IMP=0x00100000000e2c80
- (_Bool)getMitigationDecisionForRCId:(unsigned long long)arg1 forRequestId:(id)arg2;	// IMP=0x00100000000e2a79
- (_Bool)getLastMitigationResultForRequestId:(id)arg1;	// IMP=0x00100000000e29a3
- (void)setASRModelRootDirectory:(id)arg1;	// IMP=0x00100000000e2916
- (void)stopUresProcessingForRequest:(id)arg1;	// IMP=0x00100000000e2889
- (void)_fetchMitigationConfigForRecordCtx:(id)arg1;	// IMP=0x00100000000e25b4
- (void)asrStartedForRequestId:(id)arg1 isRecognitionModeClassic:(_Bool)arg2;	// IMP=0x00100000000e2515
- (void)startUresRequestWithAudioRecordContext:(id)arg1 forRequestId:(id)arg2 mhId:(id)arg3 voiceTriggerInfo:(id)arg4;	// IMP=0x00100000000e23fc
- (void)getUresInvocationTypeForRequestId:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e2345
- (id)getUresInvocationTypeForRequestId:(id)arg1;	// IMP=0x00100000000e2247
- (id);	// IMP=0x00100000000e21d3
- (void)removeReceiver:(id)arg1;	// IMP=0x00100000000e2130
- (void)addReceiver:(id)arg1;	// IMP=0x00100000000e2039
- (void)stop;	// IMP=0x00100000000e1d2d
- (void)pause;	// IMP=0x00100000000e1d27
- (void)start;	// IMP=0x00100000000e1d21
- (id)initWithSupportsUOD:(_Bool)arg1 supportsHybridUOD:(_Bool)arg2 isMedocFeatureEnabled:(_Bool)arg3;	// IMP=0x00100000000e1b86
- (id)initWithAttSiriController:(id)arg1;	// IMP=0x00100000000e1b38
- (id)init;	// IMP=0x00100000000e1ac7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

