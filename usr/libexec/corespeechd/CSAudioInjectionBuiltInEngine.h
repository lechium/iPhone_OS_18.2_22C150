//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CSAudioCircularBuffer, CSAudioInjectionDevice, CSKeywordAnalyzerNDEAPI, NSDictionary, NSMutableArray, NSObject, NSString, NSUUID;
@protocol CSAudioInjectionEngineDelegate, OS_dispatch_queue;

@interface CSAudioInjectionBuiltInEngine
{
    _Bool _voiceTriggerEnabled;	// 8 = 0x8
    _Bool _isForwarding;	// 9 = 0x9
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    id <CSAudioInjectionEngineDelegate> _delegate;	// 24 = 0x18
    CSKeywordAnalyzerNDEAPI *_keywordAnalyzer;	// 32 = 0x20
    CSAudioCircularBuffer *_circularBuffer;	// 40 = 0x28
    unsigned long long _lastForwardedSampleCount;	// 48 = 0x30
    NSMutableArray *_hostTimeBuffer;	// 56 = 0x38
    NSUUID *_uuid;	// 64 = 0x40
    CSAudioInjectionDevice *_connectedDevice;	// 72 = 0x48
    unsigned long long _voiceTriggerSampleCount;	// 80 = 0x50
    NSDictionary *_userIntentOptions;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0020000000084ac3
@property(retain, nonatomic) NSDictionary *userIntentOptions; // @synthesize userIntentOptions=_userIntentOptions;
@property(nonatomic) unsigned long long voiceTriggerSampleCount; // @synthesize voiceTriggerSampleCount=_voiceTriggerSampleCount;
@property(nonatomic) _Bool isForwarding; // @synthesize isForwarding=_isForwarding;
@property(nonatomic) __weak CSAudioInjectionDevice *connectedDevice; // @synthesize connectedDevice=_connectedDevice;
- (void);	// IMP=0x0010000000084a33
@property(nonatomic) _Bool voiceTriggerEnabled; // @synthesize voiceTriggerEnabled=_voiceTriggerEnabled;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSMutableArray *hostTimeBuffer; // @synthesize hostTimeBuffer=_hostTimeBuffer;
@property(nonatomic) unsigned long long lastForwardedSampleCount; // @synthesize lastForwardedSampleCount=_lastForwardedSampleCount;
@property(retain, nonatomic) CSAudioCircularBuffer *circularBuffer; // @synthesize circularBuffer=_circularBuffer;
@property(retain, nonatomic) CSKeywordAnalyzerNDEAPI *keywordAnalyzer; // @synthesize keywordAnalyzer=_keywordAnalyzer;
@property(nonatomic) __weak id <CSAudioInjectionEngineDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)audioEngineAudioChunkForTvAvailable:(id)arg1 audioChunk:(id)arg2;	// IMP=0x0010000000084929
- (void)audioEngineBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 atTime:(unsigned long long)arg5 isFileLoadedBuffer:(_Bool)arg6;	// IMP=0x0010000000084871
- (void)audioEngineDidStopRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 reason:(unsigned long long)arg3;	// IMP=0x001000000008486b
- (void)audioEngineDidStartRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 successfully:(_Bool)arg3 error:(id)arg4;	// IMP=0x0010000000084865
- (void)stopAudioStream;	// IMP=0x0010000000084813
- (void)startAudioStreamWithOption:(id)arg1;	// IMP=0x001000000008477f
- (long long)getBestSampleCountWithOption:(id)arg1;	// IMP=0x00100000000844ac
- (_Bool)isRecording;	// IMP=0x0010000000084417
- (_Bool)injectAudio:(id)arg1 withScaleFactor:(float)arg2 playbackStarted:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000843e8
- (_Bool)injectAudio:(id)arg1;	// IMP=0x00100000000843b9
- (void)stop;	// IMP=0x0010000000084367
- (void)start;	// IMP=0x0010000000084301
- (void)dealloc;	// IMP=0x0010000000084247
- (void)attachDevice:(id)arg1;	// IMP=0x0010000000084155
- (_Bool)alwaysOnVoiceTriggerEnabled;	// IMP=0x00100000000840c0
- (void)setAlwaysOnVoiceTriggerEnabled:(_Bool)arg1;	// IMP=0x001000000008405a
- (_Bool)isAlwaysOnVoiceTriggerAvailable;	// IMP=0x0010000000084050
- (id)initWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x0010000000083ea3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

