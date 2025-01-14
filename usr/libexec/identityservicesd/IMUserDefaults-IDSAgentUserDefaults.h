//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMFoundation/IMUserDefaults.h>

@interface IMUserDefaults (IDSAgentUserDefaults)
+ (long long)offGridModeDisableWhenOnlineForTimeInterval;	// IMP=0x00200000004c69ac
+ (void)setSecondaryRegistrationDisabledDiceRoll:(id)arg1;	// IMP=0x00100000004c6933
+ (id)secondaryRegistrationDisabledDiceRoll;	// IMP=0x00100000004c68ce
+ (_Bool)abcOnQueryCacheDifference;	// IMP=0x00100000004c6875
+ (long long)excessiveQueryCacheEntriesThreshold;	// IMP=0x00100000004c681c
+ (long long)serviceConstraintOverride:(id)arg1;	// IMP=0x00100000004c6768
+ (_Bool)handleInFirewallAllowList:(id)arg1;	// IMP=0x00100000004c66b4
+ (_Bool)shouldFirewallDropForAllCategories;	// IMP=0x00100000004c665b
+ (_Bool)isFirewallEnabled;	// IMP=0x00100000004c6585
+ (id)fileTypeForOptions:(id)arg1;	// IMP=0x00100000004c6480
+ (id)fileForOptions:(id)arg1;	// IMP=0x00100000004c637b
+ (id)configurationForOptions:(id)arg1;	// IMP=0x00100000004c6276
+ (_Bool)bypassRegistrationControlStatusCheck;	// IMP=0x00100000004c621d
+ (long long)keyTransparencyCKContainerExpiryOverride;	// IMP=0x00100000004c61c4
+ (long long)coalesceDelayOverride;	// IMP=0x00100000004c616b
+ (long long)homeNumberSecondsUntilExpiration;	// IMP=0x00100000004c6112
+ (_Bool)bypassHomeNumberCarrierCheck;	// IMP=0x00100000004c60b9
+ (_Bool)isDroppingMadridMessages;	// IMP=0x00100000004c6060
+ (_Bool)isForcingOnePerFanout;	// IMP=0x00100000004c6007
+ (_Bool)isForcingAttachmentMessage;	// IMP=0x00100000004c5fae
+ (_Bool)isFakingEveryUnlockAsFirstUnlock;	// IMP=0x00100000004c5f55
+ (_Bool)forceFlushOnDeliveryReceipt;	// IMP=0x00100000004c5efc
+ (long long)keyTransparencyAccountStatusDefault;	// IMP=0x00100000004c5ea3
+ (_Bool)useKeyTransparencyAccountStatusDefault;	// IMP=0x00100000004c5e4a
+ (_Bool)keyTransparencyDropOptInMessageAfterSending;	// IMP=0x00100000004c5df1
+ (_Bool)keyTransparencyDropOptInMessageBeforeSending;	// IMP=0x00100000004c5d98
+ (long long)keyTransparencySubsequentGossipChance;	// IMP=0x00100000004c5d3f
+ (long long)keyTransparencyFirstGossipChance;	// IMP=0x00100000004c5ce6
+ (_Bool)shouldForceFailKTKVSSync;	// IMP=0x00100000004c5c8d
+ (_Bool)shouldDropKTAccountKeySignatureOnlyDuringReg;	// IMP=0x00100000004c5c34
+ (_Bool)shouldDropKTAccountKeyOnlyDuringReg;	// IMP=0x00100000004c5bdb
+ (_Bool)shouldDropKTAccountKeySignatureResponseOnLaunch;	// IMP=0x00100000004c5b82
+ (_Bool)shouldDropKTAccountKeySignatureRequestOnLaunch;	// IMP=0x00100000004c5b29
+ (_Bool)shouldDropKTAccountKeySignatureResponseDuringReg;	// IMP=0x00100000004c5ad0
+ (_Bool)shouldDropKTAccountKeySignatureRequestDuringReg;	// IMP=0x00100000004c5a77
+ (_Bool)isKeyTransparencyUIEnabled;	// IMP=0x00100000004c5a1e
+ (_Bool)isKeyTransparencyAggressiveVerificationScheduleEnabled;	// IMP=0x00100000004c59c5
+ (_Bool)isKeyTransparencyAccountKeyCircleDisabled;	// IMP=0x00100000004c596c
+ (_Bool)isKeyTransparencyCloudKitCircleDisabled;	// IMP=0x00100000004c5913
+ (_Bool)isKeyTransparencyDisabled;	// IMP=0x00100000004c58ba
+ (_Bool)isKTAsyncEnrollmentDisabled;	// IMP=0x00100000004c5861
+ (_Bool)isForcefulLegacyEnabled;	// IMP=0x00100000004c5808
+ (_Bool)isForcefulECCEnabled;	// IMP=0x00100000004c57af
+ (_Bool)isAlwaysPairAsTinker;	// IMP=0x00100000004c5756
+ (_Bool)isDebugPiscoLoggingEnabled;	// IMP=0x00100000004c56fd
+ (_Bool)isBAACertDisabled;	// IMP=0x00100000004c56a4
+ (_Bool)isAbsintheV4Enabled;	// IMP=0x00100000004c564b
+ (_Bool)isPiscoDisabled;	// IMP=0x00100000004c55f2
+ (id)fixedInterfaceDestination;	// IMP=0x00100000004c558d
+ (id)fixedInterface;	// IMP=0x00100000004c5528
+ (long long)sessionNetworkAvailabilityCheckOverrideBehavior;	// IMP=0x00100000004c54c5
@end

