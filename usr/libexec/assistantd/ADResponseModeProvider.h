//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFModesConfiguration, AFNotifyObserver, AVOutputContext, GEONavigationListener, NSString;
@protocol OS_dispatch_queue;

@interface ADResponseModeProvider : NSObject
{
    AFNotifyObserver *_connectedOutputDevicesObserver;	// 8 = 0x8
    AFNotifyObserver *_ringerStateObserver;	// 16 = 0x10
    AVOutputContext *_sharedSystemAudioContext;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_accessQueue;	// 40 = 0x28
    AFModesConfiguration *_currentModesConfiguration;	// 48 = 0x30
    NSString *_currentMode;	// 56 = 0x38
    _Bool _isConnectedToAudioAccessory;	// 64 = 0x40
    _Bool _isConnectedToThirdPartyBT;	// 65 = 0x41
    _Bool _isConnectedToAppleBTHeadphones;	// 66 = 0x42
    long long _previousDeviceMotion;	// 72 = 0x48
    _Bool _previousScreenOnState;	// 80 = 0x50
    _Bool _previousScreenEngagement;	// 81 = 0x51
    _Bool _previousIsAudioAccessoryButtonActivation;	// 82 = 0x52
    _Bool _previousIsVoiceTriggerRequest;	// 83 = 0x53
    long long _voiceFeedbackSetting;	// 88 = 0x58
    GEONavigationListener *_navigationListener;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00200000000c3061
- (void)_connectedOutputDevicesDidChange:(id)arg1;	// IMP=0x00100000000c2fc5
- (void)_fetchConnectedAudioAccessoryState;	// IMP=0x00100000000c2f42
- (id)internalModeOverride:(id)arg1;	// IMP=0x00100000000c2d93
- (id)_computeModeFortvOS;	// IMP=0x00100000000c2b41
- (id)_computeModeForMacOS;	// IMP=0x00100000000c27eb
- (id)_computeModeForWatchOS;	// IMP=0x00100000000c2435
- (id)_computeModeForiOS;	// IMP=0x00100000000c1c46
- (id)_computeModeForVisionOS;	// IMP=0x00100000000c1a0d
- (void)_computeMode;	// IMP=0x00100000000c19c2
- (long long)_isVoiceOverEnabled;	// IMP=0x00100000000c194d
- (_Bool)_isNavigationActive;	// IMP=0x00100000000c192f
- (_Bool)_updateStickiness;	// IMP=0x00100000000c1759
- (_Bool)_isScreenEngaged;	// IMP=0x00100000000c13d1
- (_Bool)_isDeviceUnlocked;	// IMP=0x00100000000c1314
- (long long)_voiceFeedbackSetting;	// IMP=0x00100000000c12b5
- (_Bool)_deviceUnlockSignalEnabled;	// IMP=0x00100000000c11d8
- (_Bool)_overrideModeWhenInAmbient;	// IMP=0x00100000000c10f5
- (_Bool)_isThirdPartyBTConnected;	// IMP=0x00100000000c10ec
- (_Bool)_isAudioAccessoryConnected;	// IMP=0x00100000000c1048
- (_Bool)_isSteveNoteConnected;	// IMP=0x00100000000c0f4e
- (_Bool)_isDeviceSilent;	// IMP=0x00100000000c0e70
- (id)fetchCurrentMode;	// IMP=0x00100000000c0da0
- (void)updateModesConfiguration:(id)arg1;	// IMP=0x00100000000c0d05
- (id)init;	// IMP=0x00100000000c0b08

@end

