//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioDevice, VCAudioIO, VCAudioManager;

__attribute__((visibility("hidden")))
@interface VCAudioClient : NSObject
{
    int _processId;	// 8 = 0x8
    VCAudioIO *_audioIO;	// 16 = 0x10
    _Bool _muted;	// 24 = 0x18
    unsigned int _state;	// 28 = 0x1c
    struct _opaque_pthread_mutex_t _stateMutex;	// 32 = 0x20
    double _lastAudioSessionStart;	// 96 = 0x60
    _Bool _isOnHold;	// 104 = 0x68
    struct VCAudioClientSettings _selectedSettings;	// 108 = 0x6c
    struct VCAudioClientSettings _requestedSettings;	// 124 = 0x7c
    unsigned int _audioSessionId;	// 140 = 0x8c
    unsigned int _spatialAudioRegistered;	// 144 = 0x90
    void **_audioSession;	// 152 = 0x98
    VCAudioManager *_audioManager;	// 160 = 0xa0
    _Bool _isMutedTalkerNotificationRegistered;	// 168 = 0xa8
    _Bool _isMutedStateChangeHandlerRegistered;	// 169 = 0xa9
    _Bool _isMixingVoiceWithMediaEnabled;	// 170 = 0xaa
    _Bool _followSystemInput;	// 171 = 0xab
    _Bool _followSystemOutput;	// 172 = 0xac
    _Bool _mixingVoiceWithMediaEnabled;	// 173 = 0xad
}

@property(nonatomic) _Bool isMutedStateChangeHandlerRegistered; // @synthesize isMutedStateChangeHandlerRegistered=_isMutedStateChangeHandlerRegistered;
@property(nonatomic, getter=isFollowSystemOutputEnabled) _Bool followSystemOutput; // @synthesize followSystemOutput=_followSystemOutput;
@property(nonatomic, getter=isFollowSystemInputEnabled) _Bool followSystemInput; // @synthesize followSystemInput=_followSystemInput;
@property(nonatomic, getter=isMixingVoiceWithMediaEnabled) _Bool mixingVoiceWithMediaEnabled; // @synthesize mixingVoiceWithMediaEnabled=_mixingVoiceWithMediaEnabled;
@property(nonatomic) _Bool isMutedTalkerNotificationRegistered; // @synthesize isMutedTalkerNotificationRegistered=_isMutedTalkerNotificationRegistered;
@property(retain, nonatomic) VCAudioIO *audioIO; // @synthesize audioIO=_audioIO;
@property(readonly, nonatomic) int processId; // @synthesize processId=_processId;
- (void)serverDidDie;	// IMP=0x00000000001d4ae6
- (void)didResumeAudioIO:(id)arg1;	// IMP=0x00000000001d4ae0
- (void)didSuspendAudioIO:(id)arg1;	// IMP=0x00000000001d4ada
@property(retain, nonatomic) AVAudioDevice *outputDevice;
@property(retain, nonatomic) AVAudioDevice *inputDevice;
- (_Bool)setCurrentAudioDevice:(id)arg1 type:(_Bool)arg2;	// IMP=0x00000000001d4ab6
- (id)getCurrentAudioDeviceWithType:(_Bool)arg1;	// IMP=0x00000000001d4aae
- (void)stopAudioIOWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001d4aa8
- (void)startAudioIOWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001d4aa2
- (_Bool)stopAudioSessionWithError:(id *)arg1;	// IMP=0x00000000001d4a9a
- (_Bool)startAudioSessionWithError:(id *)arg1;	// IMP=0x00000000001d4a92
- (_Bool)stopWithError:(id *)arg1;	// IMP=0x00000000001d461a
- (_Bool)startWithError:(id *)arg1;	// IMP=0x00000000001d4192
- (void)setAudioSessionProperties:(id)arg1;	// IMP=0x00000000001d411a
- (_Bool)resetAudioSessionOutputPortOverride:(id *)arg1;	// IMP=0x00000000001d4112
@property(nonatomic) _Bool isMuted; // @synthesize isMuted=_muted;
- (void)unlock;	// IMP=0x00000000001d40a8
- (void)lock;	// IMP=0x00000000001d409a
- (void)dealloc;	// IMP=0x00000000001d4033
- (id)initWithProcessId:(int)arg1;	// IMP=0x00000000001d3f99

@end

