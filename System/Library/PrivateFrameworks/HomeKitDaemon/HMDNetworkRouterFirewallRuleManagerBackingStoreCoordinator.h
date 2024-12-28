//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMBLocalZone, NSNotificationCenter, NSObject, NSString;
@protocol HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler, HMDNetworkRouterFirewallRuleManagerBackingStoreMirror, HMDNetworkRouterFirewallRuleManagerInternal, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator : HMFObject
{
    id <HMDNetworkRouterFirewallRuleManagerInternal> _firewallRuleManager;	// 8 = 0x8
    id <HMDNetworkRouterFirewallRuleManagerBackingStoreMirror> _mirror;	// 16 = 0x10
    NSNotificationCenter *_notificationCenter;	// 24 = 0x18
    id <HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler> _cloudFetchScheduler;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_ownerQueue;	// 40 = 0x28
    HMBLocalZone *_mirroredLocalZone;	// 48 = 0x30
}

+ (id)__pairedMetadataDataDictionaryFromRecordDictionary:(id)arg1;	// IMP=0x0010000000a858fa
+ (id)__networkDeclarationDataDictionaryFromRecordDictionary:(id)arg1;	// IMP=0x0010000000a85826
+ (id)__pairedMetadataDictionaryFromOverrideObjectDictionary:(id)arg1;	// IMP=0x0010000000a85738
+ (id)__networkDeclarationDataDictionaryFromOverrideObjectDictionary:(id)arg1;	// IMP=0x0010000000a8564a
+ (id)__createProcessingOptionsWithLabel:(id)arg1;	// IMP=0x0010000000a85633
+ (id)__createProcessingOptionsWithLabel:(id)arg1 qualityOfService:(long long)arg2;	// IMP=0x0010000000a855d2
+ (id)__jsonFromRecords:(id)arg1 validateWithPublicKeys:(id)arg2 rawOutput:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0010000000a84b23
+ (id)__pairedMetadataFromRecord:(id)arg1 recordKey:(id)arg2 identifier:(id)arg3;	// IMP=0x0010000000a8493a
+ (id)__networkDeclarationsFromRecord:(id)arg1 recordKey:(id)arg2 identifier:(id)arg3;	// IMP=0x0010000000a84751
+ (id)__jsonFromPairedMetadata:(id)arg1 rawOutput:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0010000000a8463c
+ (id)__jsonFromDeclarations:(id)arg1 rawOutput:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0010000000a84527
+ (id)__jsonStringFromDictionary:(id)arg1 rawOutput:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0010000000a844b5
+ (id)__jsonValueForCKRecordValue:(id)arg1;	// IMP=0x0010000000a8400c
+ (_Bool)ckUseAnonymousAccount;	// IMP=0x0010000000a83fc1
+ (long long)ckContainerEnvironment;	// IMP=0x0010000000a83e23
+ (id)ckContainerIdentifier;	// IMP=0x0010000000a83c7c
+ (id)logCategory;	// IMP=0x0010000000a83c4c
- (void).cxx_destruct;	// IMP=0x0000000000a81688
@property(retain, nonatomic) HMBLocalZone *mirroredLocalZone; // @synthesize mirroredLocalZone=_mirroredLocalZone;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *ownerQueue; // @synthesize ownerQueue=_ownerQueue;
@property(readonly, nonatomic) id <HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler> cloudFetchScheduler; // @synthesize cloudFetchScheduler=_cloudFetchScheduler;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) __weak id <HMDNetworkRouterFirewallRuleManagerInternal> firewallRuleManager; // @synthesize firewallRuleManager=_firewallRuleManager;
- (void)cloudFetchSchedulerFired:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a8155f
- (void)__cloudFetchSchedulerFired:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a81327
- (void)__stopCloudFetchScheduler;	// IMP=0x0000000000a811eb
- (void)__maybeStartOrStopCloudFetchScheduler;	// IMP=0x0000000000a80df6
- (_Bool)removeOverridesForProductGroup:(id)arg1 productNumber:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000a80c62
- (_Bool)removeAllOverridesWithError:(id *)arg1;	// IMP=0x0000000000a80bac
- (_Bool)addOverrides:(id)arg1 replace:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000a80972
- (id)_fetchAllOverridesForProductGroup:(id)arg1 productNumber:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000a806e7
- (id)dumpPairedMetadataForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(_Bool)arg4 rawOutput:(_Bool)arg5 error:(id *)arg6;	// IMP=0x0000000000a8042f
- (_Bool)removeAllLocalRulesWithError:(id *)arg1;	// IMP=0x0000000000a80379
- (id)dumpLocalRulesForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(_Bool)arg4 rawOutput:(_Bool)arg5 error:(id *)arg6;	// IMP=0x0000000000a800c1
- (void)dumpCloudRecordsForProductGroup:(id)arg1 productNumber:(id)arg2 rawOutput:(_Bool)arg3 listOnly:(_Bool)arg4 verifySignatures:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000a7feba
- (void)_dumpCloudRecordsForProductGroup:(id)arg1 productNumber:(id)arg2 rawOutput:(_Bool)arg3 verifySignatures:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000a7f9b3
- (void)_listCloudRecordsForProductGroup:(id)arg1 rawOutput:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000a7f7e4
- (void)_fetchCloudChangesIfNeededForRecordIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a7f516
- (id)ruleConfigurationForAccessory:(id)arg1 declarations:(id)arg2;	// IMP=0x0000000000a7eab7
- (void)fetchRulesForAccessories:(id)arg1 qualityOfService:(long long)arg2 ignoreOverrides:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000a7e5b3
- (id)fetchPairedMetadataVersionConfigurationsForAccessories:(id)arg1 qualityOfService:(long long)arg2 ignoreOverrides:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000000a7d8df
- (id)_fetchPairedMetadataForAccessories:(id)arg1 options:(id)arg2 ignoreOverrides:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000000a7cb88
- (id)pairedMetadataVersionConfigurationForAccessory:(id)arg1 pairedMetadata:(id)arg2;	// IMP=0x0000000000a7c0d9
- (id)_fetchNetworkDeclarationsForRecordIDs:(id)arg1 options:(id)arg2 ignoreOverrides:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000000a7b783
- (id)_fetchAllDataForProductGroup:(id)arg1 productNumber:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000a7b4f8
- (void)_fetchCloudChangesWithQualityOfService:(long long)arg1 ignoreLastFetchedAccessories:(_Bool)arg2 forceChangeNotifications:(_Bool)arg3 requiredRecordIDs:(id)arg4 schedulerXpcActivity:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000a7b0d2
- (void)fetchCloudChangesWithQualityOfService:(long long)arg1 ignoreLastFetchedAccessories:(_Bool)arg2 forceChangeNotifications:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000a7afb2
- (void)firewallRuleManagerClientsDidChange;	// IMP=0x0000000000a7af5f
- (void)shutdownWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a7ac93
- (void)__startupWithMirror:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a7a9dc
- (void)__startupWithMirroredLocalZone:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a7a744
- (void)startupWithLocalDatabase:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a7a300
@property(retain, nonatomic) id <HMDNetworkRouterFirewallRuleManagerBackingStoreMirror> mirror; // @synthesize mirror=_mirror;
@property(readonly, nonatomic, getter=isRunning) _Bool running;
- (id)initWithFirewallRuleManager:(id)arg1 notificationCenter:(id)arg2 cloudFetchInterval:(double)arg3 cloudFetchRetryInterval:(double)arg4 ownerQueue:(id)arg5;	// IMP=0x0000000000a7a152
- (id)initWithFirewallRuleManager:(id)arg1 notificationCenter:(id)arg2 cloudFetchScheduler:(id)arg3 ownerQueue:(id)arg4;	// IMP=0x0000000000a7a0e9
- (id)initWithFirewallRuleManager:(id)arg1 notificationCenter:(id)arg2 ownerQueue:(id)arg3;	// IMP=0x0000000000a7a015

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
