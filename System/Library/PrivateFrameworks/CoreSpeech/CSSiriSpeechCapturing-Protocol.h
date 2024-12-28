//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class AFExperimentContext, AFSpeechRequestOptions, CSASRFeatures, CSAudioSessionController, CSSiriAudioPlaybackService, CSSpeechController, NSObject, SASResultCandidate;
@protocol CSSiriSpeechCapturingDelegate, OS_dispatch_queue;

@protocol CSSiriSpeechCapturing <NSObject>
- (void)setHybridUODEnabled:(_Bool)arg1;
- (void)disableSpeechPacketGeneration:(_Bool)arg1;
- (void)enforcePreviousEndpointHint;
- (void)updateEndpointHintForRC:(SASResultCandidate *)arg1 forceAccept:(_Bool)arg2 completion:(void (^)(_Bool, _Bool, NSArray *))arg3;
- (void)updateASRFeatures:(CSASRFeatures *)arg1;
- (void)playRecordingStartAlert;
- (void)getLastStartpointTimestampAndCurrentTime:(void (^)(double, double))arg1;
- (void)setIsDriving:(_Bool)arg1;
- (void)forceSuccessAudioAlertOnStop;
- (void)setFingerprintingEnabled:(_Bool)arg1;
- (void)cancelSpeechCaptureSuppressingAlert:(_Bool)arg1;
- (void)stopSpeechCaptureForEvent:(long long)arg1 suppressAlert:(_Bool)arg2 hostTime:(unsigned long long)arg3;
- (void)setFingerprintWasRecognized;
- (void)setSpeechWasRecognizedForElapsedTime:(double)arg1 isFinal:(_Bool)arg2;
- (void)setSpeechRequestOptions:(AFSpeechRequestOptions *)arg1;
- (void)suspendAutomaticEndpointingInRange:(struct AFTimeRange)arg1;
- (void)releaseAudioSession;
- (void)setDelegate:(id <CSSiriSpeechCapturingDelegate>)arg1;
- (id)initWithQueue:(NSObject<OS_dispatch_queue> *)arg1 speechController:(CSSpeechController *)arg2 audioSessionController:(CSAudioSessionController *)arg3 audioPlaybackService:(CSSiriAudioPlaybackService *)arg4 experimentContext:(AFExperimentContext *)arg5;
- (id)init;
@end
