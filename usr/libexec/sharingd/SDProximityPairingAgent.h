//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUSystemMonitor, NSMutableDictionary, NSMutableSet, NSString, SBSRemoteAlertHandle, SDProximityController, SDProximityPairingBufferedScanner, SDStatusMonitor, SFDeviceDiscovery;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SDProximityPairingAgent : NSObject
{
    _Bool _autoPairEnabled;	// 8 = 0x8
    int _autoPairRSSI;	// 12 = 0xc
    _Bool _autoStatusEnabled;	// 16 = 0x10
    _Bool _autoStatusUnpaired;	// 17 = 0x11
    int _autoStatusRSSI;	// 20 = 0x14
    NSMutableSet *_bluetoothUserInteractionClients;	// 24 = 0x18
    SFDeviceDiscovery *_deviceDiscovery;	// 32 = 0x20
    NSMutableDictionary *_devices;	// 40 = 0x28
    NSMutableDictionary *_bufferedDevices;	// 48 = 0x30
    _Bool _started;	// 56 = 0x38
    _Bool _enabled;	// 57 = 0x39
    int _exitRSSI;	// 60 = 0x3c
    _Bool _fastScanAlways;	// 64 = 0x40
    unsigned long long _fastScanLastEndTicks;	// 72 = 0x48
    _Bool _fastScanPair;	// 80 = 0x50
    _Bool _fastScanStatusMine;	// 81 = 0x51
    _Bool _fastScanStatusOthers;	// 82 = 0x52
    NSObject<OS_dispatch_source> *_fastScanTimer;	// 88 = 0x58
    _Bool _forceFastScan;	// 96 = 0x60
    SBSRemoteAlertHandle *_pairingAlertHandle;	// 104 = 0x68
    _Bool _phoneOnly;	// 112 = 0x70
    NSMutableSet *_powerSourceContainers;	// 120 = 0x78
    _Bool _scanAlways;	// 128 = 0x80
    SBSRemoteAlertHandle *_statusAlertHandle;	// 136 = 0x88
    SBSRemoteAlertHandle *_softwareUpdateAlertHandle;	// 144 = 0x90
    SDStatusMonitor *_statusMonitor;	// 152 = 0x98
    CUSystemMonitor *_systemMonitor;	// 160 = 0xa0
    _Bool _triggeredB389Setup;	// 168 = 0xa8
    _Bool _triggeredObjectSetup;	// 169 = 0xa9
    NSMutableDictionary *_triggeredDevices;	// 176 = 0xb0
    SDProximityController *_proximityController;	// 184 = 0xb8
    SDProximityPairingBufferedScanner *_proximityPairingBufferedScanner;	// 192 = 0xc0
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 200 = 0xc8
    CDUnknownBlockType _bufferedDevicesPurgeBlock;	// 208 = 0xd0
}

+ (id)dataFromHexString:(id)arg1;	// IMP=0x00200000000e5926
+ (id)sharedProximityPairingAgent;	// IMP=0x00100000000d8c8c
- (void).cxx_destruct;	// IMP=0x00200000000e6733
@property(copy) CDUnknownBlockType bufferedDevicesPurgeBlock; // @synthesize bufferedDevicesPurgeBlock=_bufferedDevicesPurgeBlock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)removeOldBufferedSamplesFromCache;	// IMP=0x00100000000e61ee
- (void)ensureTimerStartedForBufferedDevicesPurge;	// IMP=0x00100000000e6066
- (void)proximityDeviceDidTrigger:(id)arg1;	// IMP=0x00100000000e5cbd
- (_Bool)shouldNotTriggerBecauseDeviceInformationIsTooOld:(id)arg1;	// IMP=0x00100000000e5a5c
- (id)_testDeviceWithParams:(id)arg1;	// IMP=0x00100000000e39d4
- (void)testStatusUI:(id)arg1;	// IMP=0x00100000000e37b5
- (void)testPairingUI:(id)arg1;	// IMP=0x00100000000e3588
- (void)_uiLockStatusChanged;	// IMP=0x00100000000e3487
- (_Bool)_uiShowing;	// IMP=0x00100000000e346d
- (_Bool)_systemCanShowUIWithCounterpart:(id)arg1;	// IMP=0x00100000000e33c6
- (_Bool)_supportedDevice:(id)arg1;	// IMP=0x00100000000e321c
- (int)_startStatusUI:(id)arg1;	// IMP=0x00100000000e20d1
- (void)startSoftwareUpdateRequiredUI;	// IMP=0x00100000000e1ffc
- (int)_startPairingUI:(id)arg1 autoStart:(_Bool)arg2 repair:(_Bool)arg3;	// IMP=0x00100000000e0ef4
- (void)_screenStateChanged;	// IMP=0x00100000000e0b84
- (void)retriggerProximityPairing:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e0831
- (void)_resetTriggers;	// IMP=0x00100000000e07ec
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;	// IMP=0x00100000000e05d9
- (void)remoteAlertHandleDidDeactivate:(id)arg1;	// IMP=0x00100000000e045f
- (void)remoteAlertHandleDidActivate:(id)arg1;	// IMP=0x00100000000e02e5
- (void)notifyForNonGenuineDevice:(id)arg1;	// IMP=0x00100000000e014d
- (void)promptForWhatsNewProxForDevice:(id)arg1;	// IMP=0x00100000000dff01
- (void)promptForAdaptiveControlsProxForDevice:(id)arg1;	// IMP=0x00100000000dfc6b
- (void)promptForMuteCallProxForDevice:(id)arg1;	// IMP=0x00100000000df9d5
- (void)promptForEndCallProxForDevice:(id)arg1;	// IMP=0x00100000000df73f
- (void)promptForSpatialAudioProfileForDevice:(id)arg1;	// IMP=0x00100000000df5a7
- (void)promptForSiriNotificationsForDevice:(id)arg1;	// IMP=0x00100000000df2ff
- (_Bool)launchRemoteAlertWithUserInfo:(id)arg1;	// IMP=0x00100000000df1bb
- (_Bool)shouldNotifyForNonGenuineDevice:(id)arg1;	// IMP=0x00100000000df064
- (_Bool)shouldPromptProx:(id)arg1 forFeature:(int)arg2;	// IMP=0x00100000000dedb4
- (_Bool)shouldPromptForWhatsNewProx:(id)arg1;	// IMP=0x00100000000ded9d
- (_Bool)shouldPromptForAdaptiveControlsProx:(id)arg1;	// IMP=0x00100000000ded86
- (_Bool)shouldPromptForMuteCallProx:(id)arg1;	// IMP=0x00100000000ded72
- (_Bool)shouldPromptForEndCallProx:(id)arg1;	// IMP=0x00100000000dea2c
- (_Bool)shouldPromptForSpatialAudioProfileForDevice:(id)arg1;	// IMP=0x00100000000de8d5
- (_Bool)shouldPromptForSiriNotificationForDevice:(id)arg1;	// IMP=0x00000000000de48d
- (void)_removeB389sFromTriggeredDevices;	// IMP=0x00100000000de204
- (void)_powerSourceContainerUpdate:(id)arg1 device:(id)arg2 batteryInfo:(id)arg3;	// IMP=0x00100000000dd774
- (void)_powerSourcesUpdateForDevice:(id)arg1 changes:(unsigned int)arg2;	// IMP=0x00100000000dcd10
- (id)_createNewPowerSourceContainer;	// IMP=0x00100000000dcc1b
- (void)_powerSourceEnsureStopped;	// IMP=0x00100000000dca6c
- (void)_fastScanStop:(const char *)arg1 reset:(_Bool)arg2;	// IMP=0x00100000000dc94a
- (void)_fastScanStart:(id)arg1;	// IMP=0x00100000000dc778
- (_Bool)_shouldShowBatteryCard:(id)arg1 inDevice:(id)arg2;	// IMP=0x00100000000dc770
- (void)_deviceChanged:(id)arg1;	// IMP=0x00100000000db523
- (void)_deviceLost:(id)arg1;	// IMP=0x00100000000db3a1
- (void)_deviceFound:(id)arg1 andIsABufferedDevice:(_Bool)arg2;	// IMP=0x00100000000db271
- (void)_deviceFound:(id)arg1;	// IMP=0x00100000000db25d
- (void)_bufferedBleDeviceFound:(id)arg1;	// IMP=0x00100000000db103
- (void)_ensureStopped;	// IMP=0x00100000000daee2
- (void)_ensureStarted;	// IMP=0x00100000000da72b
- (void)_update;	// IMP=0x00100000000da6e2
- (_Bool)reenableProxCardType:(unsigned char)arg1;	// IMP=0x00100000000da63d
- (void)prefsChanged;	// IMP=0x00100000000d9e42
- (void)bluetoothUserInteractionStop:(id)arg1;	// IMP=0x00100000000d9d25
- (void)bluetoothUserInteractionStart:(id)arg1;	// IMP=0x00100000000d9bdb
- (void)_accountSettingsChanged;	// IMP=0x00100000000d9b74
- (void)_invalidate;	// IMP=0x00100000000d9a8b
- (void)invalidate;	// IMP=0x00100000000d9a27
- (void)_activate;	// IMP=0x00100000000d9850
- (void)activate;	// IMP=0x00100000000d97ea
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00100000000d8d50
- (id)init;	// IMP=0x00100000000d8ce1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
