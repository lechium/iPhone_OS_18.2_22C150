//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AVCaptureDevice.h"

@class AVAudioSession, AVWeakReference, NSDictionary, NSObject, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVCaptureFigAudioDevice : AVCaptureDevice
{
    NSObject<OS_dispatch_queue> *_fcsQueue;	// 16 = 0x10
    struct OpaqueFigCaptureSource *_fcs;	// 24 = 0x18
    NSDictionary *_attributes;	// 32 = 0x20
    _Bool _levelMeteringEnabled;	// 40 = 0x28
    _Bool _isConnected;	// 41 = 0x29
    _Bool _isSoonToBeDisconnected;	// 42 = 0x2a
    NSObject<OS_dispatch_queue> *_localizedNameFirstQueryQueue;	// 48 = 0x30
    struct os_unfair_lock_s _localizedNameLock;	// 56 = 0x38
    NSObject<OS_dispatch_group> *_localizedNameFirstQueryGroup;	// 64 = 0x40
    NSString *_localizedName;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_audioRoutesInfoUpdateQueue;	// 80 = 0x50
    struct os_unfair_lock_s _audioRoutesInfoLock;	// 88 = 0x58
    NSObject<OS_dispatch_group> *_audioRoutesInfoFirstQueryGroup;	// 96 = 0x60
    _Bool _audioInputRouteIsBuiltInMic;	// 104 = 0x68
    AVWeakReference *_weakReference;	// 112 = 0x70
    NSString *_clientAudioClockDeviceUID;	// 120 = 0x78
    struct OpaqueCMClock *_sharedAVAudioSessionClock;	// 128 = 0x80
    AVAudioSession *_auxiliarySession;	// 136 = 0x88
}

+ (void)_reconnectDevices:(id)arg1;	// IMP=0x006000000010d895
+ (id)_devicesWithPriorRegisteredDevices:(id)arg1;	// IMP=0x006000000010d49c
+ (id)_devices;	// IMP=0x006000000010d488
+ (id)_newFigCaptureSources;	// IMP=0x006000000010d479
+ (void)initialize;	// IMP=0x006000000010d3c0
- (void)_handleNotification:(struct __CFString *)arg1 payload:(id)arg2;	// IMP=0x000000000010ee3a
- (void)_reconnectToFigCaptureSource:(struct OpaqueFigCaptureSource *)arg1;	// IMP=0x000000000010ee28
- (void)audioInputDeviceLocalizedNameDidChangeHandler:(id)arg1;	// IMP=0x000000000010ebfc
- (void)audioInputDevicesDidChangeHandler:(id)arg1;	// IMP=0x000000000010eb2c
- (_Bool)currentAudioInputRouteIsBuiltInMic:(id)arg1;	// IMP=0x000000000010e964
- (id)_copyFigCaptureSourceProperty:(struct __CFString *)arg1;	// IMP=0x000000000010e822
- (void)setClientAudioClockDeviceUID:(id)arg1;	// IMP=0x000000000010e7e9
- (id)clientAudioClockDeviceUID;	// IMP=0x000000000010e7c4
- (struct OpaqueCMClock *)deviceClock;	// IMP=0x000000000010e765
- (_Bool)supportsAVCaptureSessionPreset:(id)arg1;	// IMP=0x000000000010e75d
- (void)stopUsingDevice;	// IMP=0x000000000010e757
- (_Bool)startUsingDevice:(id *)arg1;	// IMP=0x000000000010e74f
- (_Bool)isSoonToBeDisconnected;	// IMP=0x000000000010e73f
- (_Bool)isConnected;	// IMP=0x000000000010e72f
- (_Bool)isAudioInputRouteBuiltInMic;	// IMP=0x000000000010e6e3
- (long long)fallbackAudioCaptureModeIfApplicableForCurrentRoute:(long long)arg1;	// IMP=0x000000000010e568
- (_Bool)shouldAudioCaptureModeTriggerGraphRebuildOnAudioRouteChange:(long long)arg1;	// IMP=0x000000000010e554
- (_Bool)isWindNoiseRemovalSupported;	// IMP=0x000000000010e514
- (_Bool)isAudioCaptureModeSupported:(long long)arg1;	// IMP=0x000000000010e480
- (_Bool)isBuiltInStereoAudioCaptureSupported;	// IMP=0x000000000010e440
- (_Bool)hasMediaType:(id)arg1;	// IMP=0x000000000010e421
- (id)figCaptureSourceAudioSettingsForSessionPreset:(id)arg1;	// IMP=0x000000000010e3d3
- (id)deviceType;	// IMP=0x000000000010e3c3
- (id)localizedName;	// IMP=0x000000000010e364
- (id)modelID;	// IMP=0x000000000010e33d
- (id)uniqueID;	// IMP=0x000000000010e316
- (void)_setFigCaptureSource:(struct OpaqueFigCaptureSource *)arg1;	// IMP=0x000000000010e13e
- (struct OpaqueFigCaptureSource *)figCaptureSource;	// IMP=0x000000000010e12d
- (void)dealloc;	// IMP=0x000000000010e018
- (id)_initWithFigCaptureSource:(struct OpaqueFigCaptureSource *)arg1;	// IMP=0x000000000010dc35
- (id)init;	// IMP=0x000000000010dbe3

@end
