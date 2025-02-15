//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMAccessoryDiagnosticInfoProtoDiagnosticInfo, HMDHome, HMDHomeManager, HMFTimer, NSError, NSObject, NSString, NSUUID;
@protocol HMDAccessorySetupMetricDispatcherDelegate, HMDDeviceSetupTrackingInfo, HMMLogEventSubmitting, HMMRadarInitiating, OS_dispatch_queue, OS_os_log;

__attribute__((visibility("hidden")))
@interface HMDAccessorySetupMetricDispatcher : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSObject<OS_os_log> *_logger;	// 16 = 0x10
    _Bool _submitted;	// 24 = 0x18
    _Bool _isRepairSession;	// 25 = 0x19
    _Bool _isUserAtOtherOwnedHome;	// 26 = 0x1a
    _Bool _didSendAddAccessoryRequestToPrimary;	// 27 = 0x1b
    _Bool _didAddAccessoryLocally;	// 28 = 0x1c
    _Bool _primaryResidentIdenticalToAccessoryBeingAdded;	// 29 = 0x1d
    _Bool _primaryResidentAssignedInHomeWhenAddAccessory;	// 30 = 0x1e
    unsigned int _numberOfTimesPrimaryResidentChanged;	// 32 = 0x20
    unsigned int _numberOfTimesPrimaryClientConnected;	// 36 = 0x24
    unsigned int _numberOfTimesPrimaryClientDisconnected;	// 40 = 0x28
    unsigned int _numberOfTimesPrimaryClientConnectMessageFailed;	// 44 = 0x2c
    unsigned int _numberOfMediaAccessoriesnHome;	// 48 = 0x30
    unsigned int _numberOfAvailableResidentsInHome;	// 52 = 0x34
    unsigned int _numberOfResidentsInHome;	// 56 = 0x38
    id <HMDDeviceSetupTrackingInfo> _trackingInfo;	// 64 = 0x40
    id <HMDAccessorySetupMetricDispatcherDelegate> _delegate;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_queue;	// 80 = 0x50
    HMFTimer *_timer;	// 88 = 0x58
    id <HMMLogEventSubmitting> _submitter;	// 96 = 0x60
    id <HMMRadarInitiating> _radarInitiator;	// 104 = 0x68
    HMDHomeManager *_homeManager;	// 112 = 0x70
    id _discoveryController;	// 120 = 0x78
    id _networkInfoController;	// 128 = 0x80
    HMDHome *_home;	// 136 = 0x88
    HMAccessoryDiagnosticInfoProtoDiagnosticInfo *_accessoryDiagnosticInfo;	// 144 = 0x90
    NSError *_accessoryDiagnosticInfoFetchError;	// 152 = 0x98
    HMAccessoryDiagnosticInfoProtoDiagnosticInfo *_primaryResidentDiagnosticInfo;	// 160 = 0xa0
    NSError *_primaryResidentDiagnosticInfoFetchError;	// 168 = 0xa8
    id _discoveryAssertion;	// 176 = 0xb0
    NSUUID *_setupSessionIdentifier;	// 184 = 0xb8
    unsigned long long _firstSettingTime;	// 192 = 0xc0
    unsigned long long _languageSettingTime;	// 200 = 0xc8
    unsigned long long _addAccessoryFinishTime;	// 208 = 0xd0
    unsigned long long _accessoryRemovedTime;	// 216 = 0xd8
    long long _selectedHomeLocationStatus;	// 224 = 0xe0
    unsigned long long _lastPrimaryResidentAvailableTime;	// 232 = 0xe8
    unsigned long long _lastPrimaryClientConnectedTime;	// 240 = 0xf0
    NSError *_lastPrimaryClientConnectMessageFailError;	// 248 = 0xf8
    NSError *_addAccessoryOnPrimaryFailError;	// 256 = 0x100
}

+ (id)logCategory;	// IMP=0x0010000000bf9dfe
- (void).cxx_destruct;	// IMP=0x0000000000bf7646
@property(readonly) unsigned int numberOfResidentsInHome;
@property(readonly) unsigned int numberOfAvailableResidentsInHome;
@property(readonly) unsigned int numberOfMediaAccessoriesnHome;
@property(readonly) _Bool primaryResidentAssignedInHomeWhenAddAccessory;
@property(readonly) _Bool primaryResidentIdenticalToAccessoryBeingAdded;
@property(readonly) _Bool didAddAccessoryLocally;
@property(readonly, copy) NSError *addAccessoryOnPrimaryFailError;
@property(readonly) _Bool didSendAddAccessoryRequestToPrimary;
@property(readonly, copy) NSError *lastPrimaryClientConnectMessageFailError;
@property(readonly) unsigned int numberOfTimesPrimaryClientConnectMessageFailed;
@property(readonly) unsigned int numberOfTimesPrimaryClientDisconnected;
@property(readonly) unsigned int numberOfTimesPrimaryClientConnected;
@property(readonly) unsigned long long lastPrimaryClientConnectedTime;
@property(readonly) unsigned int numberOfTimesPrimaryResidentChanged;
@property(readonly) unsigned long long lastPrimaryResidentAvailableTime;
@property(readonly) _Bool isUserAtOtherOwnedHome;
@property(readonly) long long selectedHomeLocationStatus;
@property(readonly) unsigned long long accessoryRemovedTime;
@property(readonly) unsigned long long addAccessoryFinishTime;
@property(readonly) unsigned long long languageSettingTime;
@property(readonly) unsigned long long firstSettingTime;
@property(readonly) _Bool isRepairSession;
@property(readonly, copy, nonatomic) NSUUID *setupSessionIdentifier;
@property __weak id <HMDAccessorySetupMetricDispatcherDelegate> delegate; // @synthesize delegate=_delegate;
- (id)logIdentifier;	// IMP=0x0000000000bf740f
- (_Bool)hasHome:(id)arg1;	// IMP=0x0000000000bf73bc
- (void)addHome:(id)arg1;	// IMP=0x0000000000bf70c9
@property(readonly) _Bool submitted;
- (void)markLanguageSettingObserved;	// IMP=0x0000000000bf6ec6
- (void)markFirstSettingObserved;	// IMP=0x0000000000bf6c3c
- (void)markAccessoryRemoved;	// IMP=0x0000000000bf6a69
- (void)markAccessoryAddCompleted;	// IMP=0x0000000000bf68ce
- (void)markRepairSessionComplete;	// IMP=0x0000000000bf6899
- (void)submit;	// IMP=0x0000000000bf688d
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000bf65b9
- (void)didReceiveEvent:(id)arg1 topic:(id)arg2;	// IMP=0x0000000000bf6142
- (void)didReceiveCachedEvent:(id)arg1 topic:(id)arg2 source:(id)arg3;	// IMP=0x0000000000bf6130
@property(readonly) id <HMDDeviceSetupTrackingInfo> trackingInfo;
- (void)updateTrackingInfo:(id)arg1;	// IMP=0x0000000000bf6089
- (id)initWithQueue:(id)arg1 trackingInfo:(id)arg2 setupSessionIdentifier:(id)arg3 homeManager:(id)arg4;	// IMP=0x0000000000bf5ecd
- (id)initWithQueue:(id)arg1 discoveryController:(id)arg2 networkInfoController:(id)arg3 trackingInfo:(id)arg4 setupSessionIdentifier:(id)arg5 homeManager:(id)arg6 logEventSubmitter:(id)arg7 radarInitiator:(id)arg8 timerFactory:(CDUnknownBlockType)arg9;	// IMP=0x0000000000bf5c69
- (void)releaseDiscoveryAssertionWithAssertionHandle:(id)arg1;	// IMP=0x000000000001c980
- (id)obtainDiscoveryAssertion;	// IMP=0x000000000001c950
- (id)networkMetricWithDiscoveryController:(id)arg1 networkInfoController:(id)arg2 sessionID:(id)arg3 idsIdentifierString:(id)arg4 currentWiFiInfo:(id)arg5 currentWiFiNetworkRSSI:(int)arg6 numResidents:(long long)arg7 numAppleMediaAccessories:(long long)arg8 accessoryDiagnosticInfo:(id)arg9 primaryResidentIdsIdentifierString:(id)arg10 primaryResidentDiagnosticInfo:(id)arg11 homeUUID:(id)arg12 primaryResidentDiagnosticInfoFetched:(_Bool)arg13;	// IMP=0x000000000001c730

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

