//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMFStagedValue, NSArray, NSNotificationCenter, NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDSiriEndpointProfile
{
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    _Bool _manuallyDisabled;	// 20 = 0x14
    unsigned long long _notifications;	// 24 = 0x18
    long long _sessionState;	// 32 = 0x20
    NSUUID *_sessionHubIdentifier;	// 40 = 0x28
    NSString *_siriEndpointVersion;	// 48 = 0x30
    NSArray *_profileServices;	// 56 = 0x38
    HMFStagedValue *_stagedNeedsOnboarding;	// 64 = 0x40
    long long _siriEnable;	// 72 = 0x48
    long long _siriListening;	// 80 = 0x50
    long long _siriTouchToUse;	// 88 = 0x58
    long long _siriLightOnUse;	// 96 = 0x60
    NSString *_siriEngineVersion;	// 104 = 0x68
    NSString *_clientEndpointIdentifier;	// 112 = 0x70
    NSString *_clientSettingsIdentifier;	// 120 = 0x78
    NSNumber *_activeIdentifier;	// 128 = 0x80
    long long _multifunctionButton;	// 136 = 0x88
    NSArray *_assistants;	// 144 = 0x90
    NSNotificationCenter *_notificationCenter;	// 152 = 0x98
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000006bc53a
+ (id)logCategory;	// IMP=0x00100000006bc530
+ (id)uniqueIdentifierFromAccessory:(id)arg1;	// IMP=0x00100000006bc428
+ (id)namespace;	// IMP=0x00100000006bc3f8
+ (void)initialize;	// IMP=0x00100000006bc3d1
- (void).cxx_destruct;	// IMP=0x00000000006b83e5
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) NSString *clientSettingsIdentifier; // @synthesize clientSettingsIdentifier=_clientSettingsIdentifier;
@property(readonly) NSString *clientEndpointIdentifier; // @synthesize clientEndpointIdentifier=_clientEndpointIdentifier;
@property(readonly) HMFStagedValue *stagedNeedsOnboarding; // @synthesize stagedNeedsOnboarding=_stagedNeedsOnboarding;
@property long long sessionState; // @synthesize sessionState=_sessionState;
@property unsigned long long notifications; // @synthesize notifications=_notifications;
- (void)_setNotifications:(_Bool)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000006b7eb9
- (void)setNotifications:(_Bool)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000006b7e32
@property(readonly, copy) NSArray *_allSettingsCharacteristicsToMonitor;
@property(readonly, copy) NSArray *_allEndpointCharacteristicsToMonitor;
- (void)_notificationEnable:(_Bool)arg1 forType:(unsigned long long)arg2;	// IMP=0x00000000006b798c
- (_Bool)_notificationEnabledForType:(unsigned long long)arg1;	// IMP=0x00000000006b7925
- (void)refreshStateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000006b786d
- (void)setSoundOnUse:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000006b7806
- (void)setLightOnUse:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000006b7335
- (void)setTouchToUse:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000006b6e64
- (void)setListening:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000006b6993
- (void)setEnable:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000006b64c2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000006b6211
- (id)attributeDescriptions;	// IMP=0x00000000006b60e7
@property(readonly) unsigned long long _capability;
- (void)_updateSessionState:(id)arg1 settings:(id)arg2 message:(id)arg3;	// IMP=0x00000000006b4ec4
- (void)_notifyProfileSettingsUpdated:(id)arg1;	// IMP=0x00000000006b4e42
- (void)_handleRefreshProfileState:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000006b3c71
- (void)_handleRefreshProfileState:(id)arg1;	// IMP=0x00000000006b3c5d
- (void)notifyClientsDidUpdateStagedNeedsOnboarding;	// IMP=0x00000000006b3bec
- (void)stagedValue:(id)arg1 didExpireValue:(id)arg2;	// IMP=0x00000000006b3a49
- (void)handleEnableNotifications:(id)arg1;	// IMP=0x00000000006b3856
- (void)handleUpdateNeedsOnboarding:(id)arg1;	// IMP=0x00000000006b352d
- (void)updateNeedsOnboarding:(long long)arg1 withTimeout:(double)arg2;	// IMP=0x00000000006b34ff
- (void)handleDeviceCapabilitiesUpdated:(id)arg1;	// IMP=0x00000000006b3447
- (void)handlePrimaryResidentChanged:(id)arg1;	// IMP=0x00000000006b33d6
- (void)handleAccessoryConfigured:(id)arg1;	// IMP=0x00000000006b331e
- (void)handleHomeCharacteristicValuesChanged:(id)arg1;	// IMP=0x00000000006b3099
- (void)_handleCharacteristicChanges:(id)arg1;	// IMP=0x00000000006b203e
@property(copy) NSString *siriEngineVersion; // @synthesize siriEngineVersion=_siriEngineVersion;
@property(readonly) long long siriSoundOnUse;
@property long long siriLightOnUse; // @synthesize siriLightOnUse=_siriLightOnUse;
@property long long siriTouchToUse; // @synthesize siriTouchToUse=_siriTouchToUse;
@property long long siriListening; // @synthesize siriListening=_siriListening;
@property long long siriEnable; // @synthesize siriEnable=_siriEnable;
@property long long multifunctionButton; // @synthesize multifunctionButton=_multifunctionButton;
@property _Bool manuallyDisabled; // @synthesize manuallyDisabled=_manuallyDisabled;
@property(copy) NSNumber *activeIdentifier; // @synthesize activeIdentifier=_activeIdentifier;
@property(readonly) NSNumber *needsOnboarding;
- (void)stageNeedsOnboarding:(long long)arg1 withTimeout:(double)arg2;	// IMP=0x00000000006b1999
- (void)stageNeedsOnboarding:(long long)arg1;	// IMP=0x00000000006b18e5
@property(retain) NSArray *assistants; // @synthesize assistants=_assistants;
- (void)addService:(id)arg1;	// IMP=0x00000000006b1454
- (id)services;	// IMP=0x00000000006b1442
@property(retain) NSArray *profileServices; // @synthesize profileServices=_profileServices;
@property(copy) NSString *siriEndpointVersion; // @synthesize siriEndpointVersion=_siriEndpointVersion;
@property(copy) NSUUID *sessionHubIdentifier; // @synthesize sessionHubIdentifier=_sessionHubIdentifier;
- (id)_siriSettingMultifunctionButtonReadRequest;	// IMP=0x00000000006b1187
- (id)_siriSettingMultifunctionButtonCharacteristic;	// IMP=0x00000000006b1130
- (id)_siriEndpointManuallyDisabledReadRequest;	// IMP=0x00000000006b10d0
- (id)_siriEndpointManuallyDisabledCharacteristic;	// IMP=0x00000000006b1079
- (id)_siriEndpointActiveIdentifierReadRequest;	// IMP=0x00000000006b1019
- (id)_siriEndpointActiveIdentifierCharacteristic;	// IMP=0x00000000006b0fbf
- (id)_siriEndpointVersionReadRequest;	// IMP=0x00000000006b0f5f
- (id)_siriEndpointVersionCharacteristic;	// IMP=0x00000000006b0f05
- (id)_siriEndpointSessionStatusReadRequest;	// IMP=0x00000000006b0ea5
- (id)_siriEndpointSessionStatusCharacteristic;	// IMP=0x00000000006b0e4e
- (id)_siriSettingSiriEngineVersionReadRequest;	// IMP=0x00000000006b0dee
- (id)_siriSettingSiriEngineVersionCharacteristic;	// IMP=0x00000000006b0d97
- (id)_siriSettingSiriLightOnUseReadRequest;	// IMP=0x00000000006b0d37
- (id)_siriSettingSiriLightOnUseCharacteristic;	// IMP=0x00000000006b0ce0
- (id)_siriSettingSiriTouchReadRequest;	// IMP=0x00000000006b0c80
- (id)_siriSettingSiriTouchCharacteristic;	// IMP=0x00000000006b0c29
- (id)_siriSettingSiriListeningReadRequest;	// IMP=0x00000000006b0bc9
- (id)_siriSettingSiriListeningCharacteristic;	// IMP=0x00000000006b0b72
- (id)_siriSettingSiriEnableReadRequest;	// IMP=0x00000000006b0b12
- (id)_siriSettingSiriEnableCharacteristic;	// IMP=0x00000000006b0abb
- (id)_siriEndpointService;	// IMP=0x00000000006b0aa2
- (id)_siriService;	// IMP=0x00000000006b0a89
- (void)unregisterForNotifications;	// IMP=0x00000000006b0a3d
- (void)registerForNotifications;	// IMP=0x00000000006b0851
- (void)registerForMessages;	// IMP=0x00000000006b0629
- (id)initWithSiriEndpointServices:(id)arg1 notificationCenter:(id)arg2;	// IMP=0x00000000006aff74
- (id)initWithSiriEndpointServices:(id)arg1;	// IMP=0x00000000006afef3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

