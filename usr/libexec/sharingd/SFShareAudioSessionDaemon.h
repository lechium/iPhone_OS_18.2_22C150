//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContact, NSString, SDProximityController, SDStatusMonitor, SFBluetoothPairingSession, SFClient, SFDevice, SFDeviceDiscovery, SFService, SFSession;
@protocol OS_dispatch_queue;

@interface SFShareAudioSessionDaemon : NSObject
{
    SFService *_bleNearbyActionAdvertiser;	// 8 = 0x8
    SFDeviceDiscovery *_bleNearbyInfoScanner;	// 16 = 0x10
    SFDeviceDiscovery *_bleProxPairingScanner;	// 24 = 0x18
    int _confirmState;	// 32 = 0x20
    NSString *_guestHeadphonesAddress;	// 40 = 0x28
    unsigned int _guestHeadphonesColorCode;	// 48 = 0x30
    int _guestHeadphonesConnectState;	// 52 = 0x34
    SFBluetoothPairingSession *_guestHeadphonesPairingSession;	// 56 = 0x38
    unsigned int _guestHeadphonesProductID;	// 64 = 0x40
    NSString *_guestHeadphonesRouteUID;	// 72 = 0x48
    int _guestHeadphonesInstructionsState;	// 80 = 0x50
    int _guestiOSConnectState;	// 84 = 0x54
    CNContact *_guestiOSContact;	// 88 = 0x58
    NSString *_guestiOSDeviceAddress;	// 96 = 0x60
    int _guestiOSPairSetupPublicState;	// 104 = 0x68
    SFSession *_guestiOSSession;	// 112 = 0x70
    int _guestiOSShareAudioState;	// 120 = 0x78
    int _guestiOSWaitForRouteState;	// 124 = 0x7c
    _Bool _initialized;	// 128 = 0x80
    _Bool _invalidateCalled;	// 129 = 0x81
    _Bool _invalidateDone;	// 130 = 0x82
    _Bool _observingPickableRoutes;	// 131 = 0x83
    SFClient *_preventProxCardsClient;	// 136 = 0x88
    SFDevice *_triggeredDevice;	// 144 = 0x90
    SFDevice *_triggeredNeedsSetupDevice;	// 152 = 0x98
    _Bool _triggerediOS;	// 160 = 0xa0
    SDProximityController *_proximityController;	// 168 = 0xa8
    _Bool _prefHeadphoneTrigger;	// 176 = 0xb0
    _Bool _prefiOSTrigger;	// 177 = 0xb1
    int _prefOverrideColorCode;	// 180 = 0xb4
    int _prefOverrideProductID;	// 184 = 0xb8
    _Bool _prefRespectDeviceSupport;	// 188 = 0xbc
    int _prefRSSIThreshold;	// 192 = 0xc0
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 200 = 0xc8
    CDUnknownBlockType _progressHandler;	// 208 = 0xd0
    SDStatusMonitor *_statusMonitor;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x00200000000b75a6
@property(retain, nonatomic) SDStatusMonitor *statusMonitor; // @synthesize statusMonitor=_statusMonitor;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)userConfirmed;	// IMP=0x00100000000b747a
- (void)proximityDeviceDidTrigger:(id)arg1;	// IMP=0x00100000000b740e
- (void)_reportProgressTriggeredDevice:(int)arg1;	// IMP=0x00100000000b720f
- (void)_reportProgress:(int)arg1 info:(id)arg2;	// IMP=0x00100000000b701d
- (void)_reportProgress:(int)arg1;	// IMP=0x00100000000b6e79
- (void)_reportError:(id)arg1;	// IMP=0x00100000000b6d6a
- (void)_pickableRoutesChanged;	// IMP=0x00100000000b6a59
- (void)_pickableRoutesChanged:(id)arg1;	// IMP=0x00100000000b69a3
- (void)_bleScannerProxPairingDeviceFound:(id)arg1;	// IMP=0x00100000000b5f0a
- (void)_bleScannerNearbyInfoDeviceFound:(id)arg1;	// IMP=0x00100000000b5bb4
- (void)_cleanup;	// IMP=0x00100000000b5a22
- (int)_runFinish;	// IMP=0x00100000000b5830
- (int)_runWaitForGuestHeadphones;	// IMP=0x00100000000b55da
- (int)_runConnectGuestHeadphones;	// IMP=0x00100000000b52b3
- (int)_runWaitForGuestHeadphonesPairingMode;	// IMP=0x00100000000b529b
- (int)_runShowHeadphonesPairingInstructions;	// IMP=0x00100000000b520a
- (void)_runGuestiOSShareAudioProcessResponse:(id)arg1 error:(id)arg2;	// IMP=0x00100000000b4db8
- (void)_runGuestiOSShareAudioSendRequest;	// IMP=0x00100000000b4a3e
- (int)_runGuestiOSShareAudio;	// IMP=0x00100000000b49af
- (int)_runGuestiOSPairSetupPublic;	// IMP=0x00100000000b4712
- (int)_runGuestiOSConnect;	// IMP=0x00100000000b4090
- (int)_runConfirm;	// IMP=0x00100000000b3fa7
- (int)_runWaitForProxTrigger;	// IMP=0x00100000000b3f8f
- (int)_runAdvertiser;	// IMP=0x00100000000b3c91
- (int)_runScannerNearbyInfo;	// IMP=0x00100000000b38e7
- (int)_runScannerProxPairing;	// IMP=0x00100000000b352f
- (int)_runInit;	// IMP=0x00100000000b332c
- (void)_run;	// IMP=0x00100000000b3164
- (void)_invalidate;	// IMP=0x00100000000b30d8
- (void)invalidate;	// IMP=0x00100000000b3003
- (void)activate;	// IMP=0x00100000000b2ef3
- (id)init;	// IMP=0x00100000000b2e84

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

