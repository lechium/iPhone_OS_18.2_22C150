//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLOSTransaction, CLWorkoutRecorderPublisher, CLWorkoutRecording;
@protocol CLIntersiloUniverse, CLRecordingTriggerDelegate><CLWorkoutRecordingDelegate><CLWorkoutRecorderPublisherDelegate><CLWeatherServiceClientProtocol, OS_dispatch_source;

@interface CLRecordingTriggerBase : NSObject
{
    id <CLRecordingTriggerDelegate><CLWorkoutRecordingDelegate><CLWorkoutRecorderPublisherDelegate><CLWeatherServiceClientProtocol> _delegate;	// 8 = 0x8
    id <CLIntersiloUniverse> _universe;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_deferredStopTimer;	// 24 = 0x18
    struct unique_ptr<CLPowerAssertion, std::default_delete<CLPowerAssertion>> _powerAssertion;	// 32 = 0x20
    CLWorkoutRecording *_recording;	// 40 = 0x28
    unique_ptr_4889cf95 _settings;	// 48 = 0x30
    CLWorkoutRecorderPublisher *_publisher;	// 56 = 0x38
    _Bool _workoutStartedOnWatch;	// 64 = 0x40
    CLOSTransaction *_transaction;	// 72 = 0x48
}

- (id).cxx_construct;	// IMP=0x0000000001357e98
- (void).cxx_destruct;	// IMP=0x0010000001357e54
- (void)takePowerAndScheduleRelease:(double)arg1;	// IMP=0x0010000001357daa
- (void)takePower;	// IMP=0x0010000001357bc1
- (void)releasePowerAssertion:(id)arg1;	// IMP=0x0010000001357a03
- (struct CLRecordingSettings *)getSettings;	// IMP=0x00100000013579f9
- (id *)getRecording;	// IMP=0x00100000013579ef
- (_Bool)isRecording;	// IMP=0x00100000013579e1
- (id)getDeferredStopTimer;	// IMP=0x00100000013579d7
- (id)getUniverse;	// IMP=0x00100000013579cd
- (id)getDelegate;	// IMP=0x00100000013579c3
- (void)handlePublisherResponse:(id)arg1;	// IMP=0x001000000135752c
- (void)publishRecording;	// IMP=0x00100000013571c9
- (void)stopRecordingShouldPublish:(_Bool)arg1;	// IMP=0x0010000001356d1a
- (void)cancelDeferredStopTimer;	// IMP=0x0010000001356b7b
- (void)feedWorkoutEffortEstimate:(const Result_29b869fb *)arg1;	// IMP=0x0010000001356b5e
- (void)feedWeatherData:(id)arg1;	// IMP=0x0010000001356b41
- (void)setPowerSaveMode:(_Bool)arg1;	// IMP=0x00100000013568c5
- (void)scheduleStop:(double)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000013563c3
- (void)startRecordingSpecifyTriggerDelay:(double)arg1 powerSaveMode:(_Bool)arg2 maxFileCount:(unsigned int)arg3 extraStartInfo:(struct WatchStartInfo)arg4;	// IMP=0x0010000001355b5f
- (void)initializePowerAssertion;	// IMP=0x0010000001355aa1
- (void)dealloc;	// IMP=0x001000000135589f
- (id)initWithDelegate:(id)arg1 universe:(id)arg2 andSettings:(unique_ptr_4889cf95)arg3;	// IMP=0x0010000001355692

@end

