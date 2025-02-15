//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHAPAccessory, NSArray, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDTargetControllerManager : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    unsigned char _maximumTargets;	// 12 = 0xc
    _Bool _configurationRefreshed;	// 13 = 0xd
    HMDHAPAccessory *_controller;	// 16 = 0x10
    NSMutableSet *_configuredTargets;	// 24 = 0x18
    unsigned long long _ticksPerSecond;	// 32 = 0x20
    NSArray *_buttonConfiguration;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
    NSString *_logID;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x00100000004a3b36
- (void).cxx_destruct;	// IMP=0x000000000049d11d
@property(nonatomic) _Bool configurationRefreshed; // @synthesize configurationRefreshed=_configurationRefreshed;
@property(nonatomic) unsigned char maximumTargets; // @synthesize maximumTargets=_maximumTargets;
@property(readonly, nonatomic) NSString *logID; // @synthesize logID=_logID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSMutableSet *configuredTargets; // @synthesize configuredTargets=_configuredTargets;
@property(readonly, nonatomic) __weak HMDHAPAccessory *controller; // @synthesize controller=_controller;
- (void)_configureTargetAccessories:(id)arg1 reason:(id)arg2 targetAccessories:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000049ce87
- (void)_handleConfigureTargets:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000049c069
- (void)handleConfigureTargets:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000049bf8b
- (id)targetConfigurationMatchingAccessory:(id)arg1;	// IMP=0x000000000049bc2c
- (id)targetConfigurationMatchingIdentifier:(id)arg1;	// IMP=0x000000000049ba47
- (void)updateTargets:(id)arg1;	// IMP=0x000000000049b98f
- (void)autoConfigureTargets;	// IMP=0x000000000049b91e
- (void)_saveTargetUUIDs;	// IMP=0x000000000049b67d
- (void)__characteristicEventsReceived:(id)arg1;	// IMP=0x000000000049b1c6
- (void)registerForActiveIdentifierNotifications;	// IMP=0x000000000049b155
- (void)_registerForActiveIdentifierNotifications;	// IMP=0x000000000049a9f7
- (void)_handleActiveIdentifierReadResponses:(id)arg1;	// IMP=0x000000000049a53c
- (void)__handleActiveIdentifierChange:(id)arg1 forCharacteristic:(id)arg2;	// IMP=0x000000000049a197
- (void)acknowledgeTargetControlService:(id)arg1 active:(_Bool)arg2;	// IMP=0x000000000049a0e0
- (void)_resetTargets;	// IMP=0x0000000000499e05
- (id)_dataForResetTargetsWithOutError:(id *)arg1;	// IMP=0x0000000000499c42
- (void)removeTargetAccessory:(id)arg1;	// IMP=0x00000000004999ea
- (void)_removeTargets:(id)arg1;	// IMP=0x0000000000499334
- (id)_dataForRemoveTargets:(id)arg1 outError:(id *)arg2;	// IMP=0x0000000000498e44
- (void)addTargetAccessory:(id)arg1 buttonConfiguration:(id)arg2;	// IMP=0x0000000000498d52
- (void)_addTargets:(id)arg1;	// IMP=0x0000000000498566
- (void)_postSelectionChangeNotification:(_Bool)arg1 object:(id)arg2 userInfo:(id)arg3;	// IMP=0x00000000004984c3
- (id)_dataForAddTargets:(id)arg1 outError:(id *)arg2;	// IMP=0x0000000000497d7e
- (void)updateTargetAccessory:(id)arg1 name:(id)arg2 buttonConfiguration:(id)arg3;	// IMP=0x0000000000497c73
- (void)_updateName:(id)arg1 buttonConfiguration:(id)arg2 target:(id)arg3;	// IMP=0x00000000004974da
- (id)_dataForUpdateTarget:(id)arg1 name:(id)arg2 buttonConfiguration:(id)arg3 outError:(id *)arg4;	// IMP=0x0000000000496eec
- (void)updateButtonConfigurationForTarget:(id)arg1;	// IMP=0x0000000000496e34
- (void)_auditTargets:(id)arg1;	// IMP=0x0000000000496615
- (void)_listTargetsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000496258
- (id)_dataForListTargetsWithOutError:(id *)arg1;	// IMP=0x0000000000496095
- (void)_refreshConfigurationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000495dca
- (void)_readSupportedConfigurationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000495acb
- (void)refreshConfigurationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000495a13
- (void)_notifyConfigurationRefresh:(id)arg1;	// IMP=0x0000000000495941
- (id)__refreshedConfiguration:(id)arg1;	// IMP=0x000000000049575c
- (int)_parseSupportedTargetConfiguration:(id)arg1;	// IMP=0x00000000004953ee
- (void)__accessoryRemoved:(id)arg1;	// IMP=0x0000000000495336
- (void)__accessoryNameUpdated:(id)arg1;	// IMP=0x000000000049527e
- (void)__accessoryConnected:(id)arg1;	// IMP=0x00000000004951c6
- (void)__accessoryConfigured:(id)arg1;	// IMP=0x00000000004951b4
- (void)__accessoryDisconnected:(id)arg1;	// IMP=0x00000000004950fc
- (void)__accessoryUnconfigured:(id)arg1;	// IMP=0x00000000004950ea
@property(retain, nonatomic) NSArray *buttonConfiguration; // @synthesize buttonConfiguration=_buttonConfiguration;
@property(nonatomic) unsigned long long ticksPerSecond; // @synthesize ticksPerSecond=_ticksPerSecond;
@property(readonly, nonatomic) NSArray *targetUUIDs;
- (void)resetConfiguredTargets;	// IMP=0x0000000000494baf
- (void)removeConfiguredTarget:(id)arg1;	// IMP=0x0000000000494b39
- (void)addConfiguredTarget:(id)arg1;	// IMP=0x0000000000494ac3
- (id)logIdentifier;	// IMP=0x0000000000494a51
- (void)invalidate;	// IMP=0x0000000000494937
- (id)initWithTargetControllerAccessory:(id)arg1 targets:(id)arg2;	// IMP=0x0000000000493e2c
- (id)init;	// IMP=0x0000000000493d84

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

