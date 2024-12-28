//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAsset, CSAttSiriController, CSPlainAudioFileWriter, MISSING_TYPE, NSArray, NSDate, NSHashTable, NSMutableArray, NSString, OSDAnalyzer;
@protocol OS_dispatch_queue;

@interface CSAttSiriOSDNode : NSObject
{
    _Bool _isReady;	// 8 = 0x8
    _Bool _didAddAudio;	// 9 = 0x9
    _Bool _didTimestampFirstAudioPacket;	// 10 = 0xa
    CSAttSiriController *_attSiriController;	// 16 = 0x10
    MISSING_TYPE *_type;	// 24 = 0x18
    NSArray *_requiredNodes;	// 32 = 0x20
    NSString *_mhId;	// 40 = 0x28
    CSAsset *_prefetchedAsset;	// 48 = 0x30
    CSAsset *_currentAsset;	// 56 = 0x38
    NSHashTable *_receivers;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_apQueue;	// 72 = 0x48
    unsigned long long _numSamplesProcessed;	// 80 = 0x50
    unsigned long long _numOfChunksReceived;	// 88 = 0x58
    OSDAnalyzer *_osdAnalyzer;	// 96 = 0x60
    CSPlainAudioFileWriter *_audioFileWriter;	// 104 = 0x68
    unsigned long long _currentRequestSampleRate;	// 112 = 0x70
    unsigned long long _vtEndInSampleCount;	// 120 = 0x78
    NSString *_configFile;	// 128 = 0x80
    NSDate *_firstAudioPacketTimestamp;	// 136 = 0x88
    double _firstAudioSampleSensorTimestamp;	// 144 = 0x90
    unsigned long long _firstAudioStartSampleCount;	// 152 = 0x98
    double _frameDurationMs;	// 160 = 0xa0
    NSObject<OS_dispatch_queue> *_queue;	// 168 = 0xa8
    NSObject<OS_dispatch_queue> *_osdQueue;	// 176 = 0xb0
    unsigned long long _countOfConsecutiveBoron;	// 184 = 0xb8
    unsigned long long _lastKnownConsecutiveBoronStartSampleCount;	// 192 = 0xc0
    unsigned long long _numOfConsecutiveBoronActivationThreshold;	// 200 = 0xc8
    unsigned long long _osdMode;	// 208 = 0xd0
    CSAsset *_lipMovementVADAsset;	// 216 = 0xd8
    NSMutableArray *_lipMovementSignalDataArray;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x002000000007f629
@property(retain, nonatomic) NSMutableArray *lipMovementSignalDataArray; // @synthesize lipMovementSignalDataArray=_lipMovementSignalDataArray;
@property(retain, nonatomic) CSAsset *lipMovementVADAsset; // @synthesize lipMovementVADAsset=_lipMovementVADAsset;
@property(nonatomic) unsigned long long osdMode; // @synthesize osdMode=_osdMode;
@property(nonatomic) unsigned long long numOfConsecutiveBoronActivationThreshold; // @synthesize numOfConsecutiveBoronActivationThreshold=_numOfConsecutiveBoronActivationThreshold;
@property(nonatomic) unsigned long long lastKnownConsecutiveBoronStartSampleCount; // @synthesize lastKnownConsecutiveBoronStartSampleCount=_lastKnownConsecutiveBoronStartSampleCount;
@property(nonatomic) unsigned long long countOfConsecutiveBoron; // @synthesize countOfConsecutiveBoron=_countOfConsecutiveBoron;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *osdQueue; // @synthesize osdQueue=_osdQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) double frameDurationMs; // @synthesize frameDurationMs=_frameDurationMs;
@property(nonatomic) _Bool didTimestampFirstAudioPacket; // @synthesize didTimestampFirstAudioPacket=_didTimestampFirstAudioPacket;
@property(nonatomic) unsigned long long firstAudioStartSampleCount; // @synthesize firstAudioStartSampleCount=_firstAudioStartSampleCount;
@property(nonatomic) double firstAudioSampleSensorTimestamp; // @synthesize firstAudioSampleSensorTimestamp=_firstAudioSampleSensorTimestamp;
@property(retain, nonatomic) NSDate *firstAudioPacketTimestamp; // @synthesize firstAudioPacketTimestamp=_firstAudioPacketTimestamp;
@property(nonatomic) NSString *configFile; // @synthesize configFile=_configFile;
@property(nonatomic) unsigned long long vtEndInSampleCount; // @synthesize vtEndInSampleCount=_vtEndInSampleCount;
@property(nonatomic) unsigned long long currentRequestSampleRate; // @synthesize currentRequestSampleRate=_currentRequestSampleRate;
@property(retain, nonatomic) CSPlainAudioFileWriter *audioFileWriter; // @synthesize audioFileWriter=_audioFileWriter;
@property(retain, nonatomic) OSDAnalyzer *osdAnalyzer; // @synthesize osdAnalyzer=_osdAnalyzer;
@property(nonatomic) _Bool didAddAudio; // @synthesize didAddAudio=_didAddAudio;
@property(nonatomic) unsigned long long numOfChunksReceived; // @synthesize numOfChunksReceived=_numOfChunksReceived;
@property(nonatomic) unsigned long long numSamplesProcessed; // @synthesize numSamplesProcessed=_numSamplesProcessed;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *apQueue; // @synthesize apQueue=_apQueue;
@property(retain, nonatomic) NSHashTable *receivers; // @synthesize receivers=_receivers;
@property(retain, nonatomic) CSAsset *currentAsset; // @synthesize currentAsset=_currentAsset;
@property(retain, nonatomic) CSAsset *prefetchedAsset; // @synthesize prefetchedAsset=_prefetchedAsset;
@property(retain, nonatomic) NSString *mhId; // @synthesize mhId=_mhId;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(retain, nonatomic) NSArray *requiredNodes; // @synthesize requiredNodes=_requiredNodes;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) __weak CSAttSiriController *attSiriController; // @synthesize attSiriController=_attSiriController;
- (_Bool)hadSignalsFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;	// IMP=0x001000000007f2ab
- (void)attSiriNode:(id)arg1 faceTrackingDataUpdate:(id)arg2 atMachAbsTime:(unsigned long long)arg3;	// IMP=0x001000000007f208
- (void)attSiriNode:(id)arg1 didUpdateGazeState:(unsigned long long)arg2;	// IMP=0x001000000007f202
- (void)osdAnalyzer:(id)arg1 didUpdateVisualSpeechProbability:(double)arg2 from:(unsigned long long)arg3 to:(unsigned long long)arg4;	// IMP=0x001000000007f1fc
- (void)osdAnalyzer:(id)arg1 didDetectEndOfSpeechAt:(double)arg2;	// IMP=0x001000000007f1a9
- (void)osdAnalyzer:(id)arg1 didDetectStartOfSpeechAt:(double)arg2;	// IMP=0x001000000007f156
- (void)osdAnalyzer:(id)arg1 didUpdateOSDFeatures:(id)arg2;	// IMP=0x001000000007efe3
- (void)endpointerAssetManagerDidUpdateAsset:(id)arg1;	// IMP=0x001000000007efdd
- (void)endpointerAssetManagerDidUpdateOSDAsset:(id)arg1;	// IMP=0x001000000007ef50
- (unsigned long long)fetchLastKnownConsecutiveBoronStartSampleCount;	// IMP=0x001000000007eec4
- (unsigned long long)audioStartSampleCount;	// IMP=0x001000000007ee35
- (void)resetForNewRequestWithRecordContext:(id)arg1 endpointerSettings:(id)arg2 voiceTriggerInfo:(id)arg3 osdMode:(unsigned long long)arg4;	// IMP=0x001000000007ece6
- (void)resetForNewRequestWithRecordContext:(id)arg1 endpointerSettings:(id)arg2 voiceTriggerInfo:(id)arg3;	// IMP=0x001000000007ecd1
- (void)attSiriAudioSrcNodeDidStop:(id)arg1;	// IMP=0x001000000007ec86
- (void)checkConsecutiveBoronSignalWithAudioChunk:(id)arg1;	// IMP=0x001000000007ea38
- (void)attSiriAudioSrcNodeLPCMRecordBufferAvailable:(id)arg1 audioChunk:(id)arg2;	// IMP=0x001000000007e8d6
- (void)attSiriAudioSrcNodeDidStartRecording:(id)arg1 successfully:(_Bool)arg2 error:(id)arg3;	// IMP=0x001000000007e8d0
- (void)stop;	// IMP=0x001000000007e7f5
- (void)pause;	// IMP=0x001000000007e7ef
- (void)start;	// IMP=0x001000000007e7e9
- (void)removeReceiver:(id)arg1;	// IMP=0x001000000007e759
- (void)addReceiver:(id)arg1;	// IMP=0x001000000007e6c9
- (id)_getSerialQueue:(id)arg1 targetQueue:(id)arg2;	// IMP=0x001000000007e640
- (id)initWithAttSiriController:(id)arg1;	// IMP=0x001000000007e5f2
- (id)init;	// IMP=0x001000000007e1bb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
