//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCaptureDevice, AVWeakReference, NSArray;
@protocol AVCallbackCancellation;

__attribute__((visibility("hidden")))
@interface AVCaptureDeviceInputInternal : NSObject
{
    AVCaptureDevice *device;	// 8 = 0x8
    NSArray *ports;	// 16 = 0x10
    NSArray *multiCamPorts;	// 24 = 0x18
    _Bool unifiedAutoExposureDefaultsEnabled;	// 32 = 0x20
    long long audioCaptureMode;	// 40 = 0x28
    long long multichannelAudioMode;	// 48 = 0x30
    _Bool windNoiseRemovalEnabled;	// 56 = 0x38
    _Bool visionDataDeliveryEnabled;	// 57 = 0x39
    _Bool cameraCalibrationDataDeliveryEnabled;	// 58 = 0x3a
    float simulatedAperture;	// 60 = 0x3c
    CDStruct_1b6d18a9 videoMinFrameDurationOverride;	// 64 = 0x40
    float maxGainOverride;	// 88 = 0x58
    _Bool centerStageAllowed;	// 92 = 0x5c
    _Bool backgroundBlurAllowed;	// 93 = 0x5d
    _Bool studioLightingAllowed;	// 94 = 0x5e
    _Bool reactionEffectsAllowed;	// 95 = 0x5f
    _Bool backgroundReplacementAllowed;	// 96 = 0x60
    _Bool ready;	// 97 = 0x61
    float portraitLightingEffectStrength;	// 100 = 0x64
    AVWeakReference *weakReference;	// 104 = 0x68
    id <AVCallbackCancellation> deviceOpenCallbackInvoker;	// 112 = 0x70
}

- (void)dealloc;	// IMP=0x00000000000511d4

@end
