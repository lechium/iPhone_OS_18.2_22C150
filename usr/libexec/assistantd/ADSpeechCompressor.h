//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableData, NSString;
@protocol CSSiriSpeechCapturingDelegate, OS_dispatch_queue;

@interface ADSpeechCompressor : NSObject
{
    id <CSSiriSpeechCapturingDelegate> _delegate;	// 8 = 0x8
    struct OpaqueAudioConverter *_audioConverter;	// 16 = 0x10
    NSMutableData *_bufferedAudio;	// 24 = 0x18
    unsigned long long _packetIndex;	// 32 = 0x20
    unsigned long long _bytesConsumed;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000107f8e
- (void)addAudioSampleData:(id)arg1;	// IMP=0x0010000000107b18
- (void)startCompressionNarrowband:(_Bool)arg1;	// IMP=0x001000000010782d
- (void)reset;	// IMP=0x00100000001077ee
- (void)playRecordingStartAlert;	// IMP=0x00100000001077e8
- (void)enforcePreviousEndpointHint;	// IMP=0x00100000001077e2
- (void)updateEndpointHintForRC:(id)arg1 forceAccept:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001077c8
- (void)updateASRFeatures:(id)arg1;	// IMP=0x00100000001077c2
- (void)getLastStartpointTimestampAndCurrentTime:(CDUnknownBlockType)arg1;	// IMP=0x00100000001077a8
- (void)setIsDriving:(_Bool)arg1;	// IMP=0x00100000001077a2
- (void)setSpeechWasRecognizedForElapsedTime:(double)arg1;	// IMP=0x001000000010779c
- (void)forceSuccessAudioAlertOnStop;	// IMP=0x0010000000107796
- (void)setFingerprintingEnabled:(_Bool)arg1;	// IMP=0x0010000000107790
- (void)stopFingerprinting;	// IMP=0x001000000010778a
- (void)cancelSpeechCaptureSuppressingAlert:(_Bool)arg1;	// IMP=0x001000000010773f
- (void)stopSpeechCaptureForEvent:(long long)arg1 suppressAlert:(_Bool)arg2 hostTime:(unsigned long long)arg3;	// IMP=0x00100000001076f4
- (void)setFingerprintWasRecognized;	// IMP=0x00100000001076ee
- (void)setSpeechWasRecognizedForElapsedTime:(double)arg1 isFinal:(_Bool)arg2;	// IMP=0x00100000001076e8
- (void)suspendAutomaticEndpointingInRange:(struct AFTimeRange)arg1;	// IMP=0x00100000001076e2
- (void)setSpeechRequestOptions:(id)arg1;	// IMP=0x00100000001076dc
- (void)releaseAudioSession;	// IMP=0x00100000001076d6
- (void)setDelegate:(id)arg1;	// IMP=0x0010000000107649
- (void)dealloc;	// IMP=0x001000000010760b
- (id)initWithQueue:(id)arg1 speechController:(id)arg2 audioSessionController:(id)arg3 audioPlaybackService:(id)arg4 experimentContext:(id)arg5;	// IMP=0x00100000001075a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

