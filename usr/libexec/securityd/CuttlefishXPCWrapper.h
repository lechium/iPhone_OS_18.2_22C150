//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol NSXPCProxyCreating;

@interface CuttlefishXPCWrapper : NSObject
{
    id <NSXPCProxyCreating> _cuttlefishXPCConnection;	// 8 = 0x8
}

+ (_Bool)retryable:(id)arg1;	// IMP=0x002000000002a9b1
- (void).cxx_destruct;	// IMP=0x00200000000248cc
@property(readonly) id <NSXPCProxyCreating> cuttlefishXPCConnection; // @synthesize cuttlefishXPCConnection=_cuttlefishXPCConnection;
- (void)performCKServerUnreadableDataRemovalWithSpecificUser:(id)arg1 isGuitarfish:(_Bool)arg2 internalAccount:(_Bool)arg3 demoAccount:(_Bool)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x00100000000246c5
- (void)fetchPCSIdentityByPublicKeyWithSpecificUser:(id)arg1 pcsservices:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000244dc
- (void)fetchCurrentItemWithSpecificUser:(id)arg1 items:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000242f3
- (void)octagonContainsDistrustedRecoveryKeysWithSpecificUser:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000024124
- (void)fetchTrustedPeerCountWithSpecificUser:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000023f55
- (void)preflightRecoverOctagonUsingRecoveryKey:(id)arg1 recoveryKey:(id)arg2 salt:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000023d4e
- (void)testSemaphoreWithSpecificUser:(id)arg1 arg:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000023c8b
- (void)performATOPRVActionsWithSpecificUser:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000023abc
- (void)removeRecoveryKey:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000238ed
- (void)isRecoveryKeySet:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000002371e
- (void)recoverTLKSharesForInheritorWithSpecificUser:(id)arg1 crk:(id)arg2 tlkShares:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000023517
- (void)prepareInheritancePeerWithSpecificUser:(id)arg1 epoch:(unsigned long long)arg2 machineID:(id)arg3 bottleSalt:(id)arg4 bottleID:(id)arg5 modelID:(id)arg6 deviceName:(id)arg7 serialNumber:(id)arg8 osVersion:(id)arg9 policyVersion:(id)arg10 policySecrets:(id)arg11 syncUserControllableViews:(int)arg12 secureElementIdentity:(id)arg13 signingPrivKeyPersistentRef:(id)arg14 encPrivKeyPersistentRef:(id)arg15 crk:(id)arg16 reply:(CDUnknownBlockType)arg17;	// IMP=0x0010000000023187
- (void)fetchAccountSettingsWithSpecificUser:(id)arg1 forceFetch:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000022faa
- (void)fetchRecoverableTLKSharesWithSpecificUser:(id)arg1 peerID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000022dc1
- (void)resetAccountCDPContentsWithSpecificUser:(id)arg1 idmsTargetContext:(id)arg2 idmsCuttlefishPassword:(id)arg3 notifyIdMS:(_Bool)arg4 internalAccount:(_Bool)arg5 demoAccount:(_Bool)arg6 reply:(CDUnknownBlockType)arg7;	// IMP=0x0010000000022b9e
- (void)removeEscrowCacheWithSpecificUser:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000229cf
- (void)fetchViableEscrowRecordsWithSpecificUser:(id)arg1 source:(long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000227f5
- (void)getSupportAppInfoWithSpecificUser:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000022626
- (void)requestHealthCheckWithSpecificUser:(id)arg1 requiresEscrowCheck:(_Bool)arg2 repair:(_Bool)arg3 knownFederations:(id)arg4 flowID:(id)arg5 deviceSessionID:(id)arg6 reply:(CDUnknownBlockType)arg7;	// IMP=0x00100000000223ec
- (void)findCustodianRecoveryKeyWithSpecificUser:(id)arg1 uuid:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000022203
- (void)removeCustodianRecoveryKeyWithSpecificUser:(id)arg1 uuid:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000002201a
- (void)createCustodianRecoveryKeyWithSpecificUser:(id)arg1 recoveryKey:(id)arg2 salt:(id)arg3 ckksKeys:(id)arg4 uuid:(id)arg5 kind:(int)arg6 reply:(CDUnknownBlockType)arg7;	// IMP=0x0010000000021dce
- (void)setRecoveryKeyWithSpecificUser:(id)arg1 recoveryKey:(id)arg2 salt:(id)arg3 ckksKeys:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000021bab
- (void)fetchTrustStateWithSpecificUser:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000219dc
- (void)fetchCurrentPolicyWithSpecificUser:(id)arg1 modelIDOverride:(id)arg2 isInheritedAccount:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000000217e2
- (void)fetchPolicyDocumentsWithSpecificUser:(id)arg1 versions:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000215f9
- (void)fetchEscrowContentsWithSpecificUser:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000002142a
- (void)fetchViableBottlesWithSpecificUser:(id)arg1 source:(long long)arg2 flowID:(id)arg3 deviceSessionID:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000021219
- (void)updateTLKsWithSpecificUser:(id)arg1 ckksKeys:(id)arg2 tlkShares:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000021012
- (void)setPreapprovedKeysWithSpecificUser:(id)arg1 preapprovedKeys:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000020e29
- (void)updateWithSpecificUser:(id)arg1 forceRefetch:(_Bool)arg2 deviceName:(id)arg3 serialNumber:(id)arg4 osVersion:(id)arg5 policyVersion:(id)arg6 policySecrets:(id)arg7 syncUserControllableViews:(id)arg8 secureElementIdentity:(id)arg9 walrusSetting:(id)arg10 webAccess:(id)arg11 reply:(CDUnknownBlockType)arg12;	// IMP=0x0010000000020b36
- (void)attemptPreapprovedJoinWithSpecificUser:(id)arg1 ckksKeys:(id)arg2 tlkShares:(id)arg3 preapprovedKeys:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000020913
- (void)preflightPreapprovedJoinWithSpecificUser:(id)arg1 preapprovedKeys:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000002072a
- (void)joinWithSpecificUser:(id)arg1 voucherData:(id)arg2 voucherSig:(id)arg3 ckksKeys:(id)arg4 tlkShares:(id)arg5 preapprovedKeys:(id)arg6 flowID:(id)arg7 deviceSessionID:(id)arg8 canSendMetrics:(_Bool)arg9 reply:(CDUnknownBlockType)arg10;	// IMP=0x0010000000020481
- (void)vouchWithRerollWithSpecificUser:(id)arg1 oldPeerID:(id)arg2 tlkShares:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000002027a
- (void)vouchWithCustodianRecoveryKeyWithSpecificUser:(id)arg1 crk:(id)arg2 tlkShares:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000020073
- (void)vouchWithRecoveryKeyWithSpecificUser:(id)arg1 recoveryKey:(id)arg2 salt:(id)arg3 tlkShares:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000001fe50
- (void)preflightVouchWithCustodianRecoveryKeyWithSpecificUser:(id)arg1 crk:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001fc67
- (void)preflightVouchWithRecoveryKeyWithSpecificUser:(id)arg1 recoveryKey:(id)arg2 salt:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000001fa60
- (void)vouchWithBottleWithSpecificUser:(id)arg1 bottleID:(id)arg2 entropy:(id)arg3 bottleSalt:(id)arg4 tlkShares:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x001000000001f81b
- (void)preflightVouchWithBottleWithSpecificUser:(id)arg1 bottleID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001f632
- (void)vouchWithSpecificUser:(id)arg1 peerID:(id)arg2 permanentInfo:(id)arg3 permanentInfoSig:(id)arg4 stableInfo:(id)arg5 stableInfoSig:(id)arg6 ckksKeys:(id)arg7 flowID:(id)arg8 deviceSessionID:(id)arg9 canSendMetrics:(_Bool)arg10 reply:(CDUnknownBlockType)arg11;	// IMP=0x001000000001f371
- (void)establishWithSpecificUser:(id)arg1 ckksKeys:(id)arg2 tlkShares:(id)arg3 preapprovedKeys:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000001f14e
- (void)prepareWithSpecificUser:(id)arg1 epoch:(unsigned long long)arg2 machineID:(id)arg3 bottleSalt:(id)arg4 bottleID:(id)arg5 modelID:(id)arg6 deviceName:(id)arg7 serialNumber:(id)arg8 osVersion:(id)arg9 policyVersion:(id)arg10 policySecrets:(id)arg11 syncUserControllableViews:(int)arg12 secureElementIdentity:(id)arg13 setting:(id)arg14 signingPrivKeyPersistentRef:(id)arg15 encPrivKeyPersistentRef:(id)arg16 reply:(CDUnknownBlockType)arg17;	// IMP=0x001000000001edbe
- (void)fetchEgoEpochWithSpecificUser:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000001ebef
- (void)fetchAllowedMachineIDsWithSpecificUser:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000001ea20
- (void)handleRemovedMachineIDsDueToUnknownReasonsWithSpecificUser:(id)arg1 machineIDs:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001e837
- (void)handleEvictedMachineIDsWithSpecificUser:(id)arg1 machineIDs:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001e64e
- (void)markTrustedDeviceListFetchFailed:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000001e47f
- (void)setAllowedMachineIDsWithSpecificUser:(id)arg1 allowedMachineIDs:(id)arg2 userInitiatedRemovals:(id)arg3 evictedRemovals:(id)arg4 unknownReasonRemovals:(id)arg5 honorIDMSListChanges:(_Bool)arg6 version:(id)arg7 flowID:(id)arg8 deviceSessionID:(id)arg9 canSendMetrics:(_Bool)arg10 altDSID:(id)arg11 trustedDeviceHash:(id)arg12 deletedDeviceHash:(id)arg13 trustedDevicesUpdateTimestamp:(id)arg14 reply:(CDUnknownBlockType)arg15;	// IMP=0x001000000001e146
- (void)localResetWithSpecificUser:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000001df77
- (void)resetWithSpecificUser:(id)arg1 resetReason:(long long)arg2 idmsTargetContext:(id)arg3 idmsCuttlefishPassword:(id)arg4 notifyIdMS:(_Bool)arg5 internalAccount:(_Bool)arg6 demoAccount:(_Bool)arg7 isGuitarfish:(_Bool)arg8 accountType:(long long)arg9 reply:(CDUnknownBlockType)arg10;	// IMP=0x001000000001dd3c
- (void)trustStatusWithSpecificUser:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000001db6d
- (void)dropPeerIDsWithSpecificUser:(id)arg1 peerIDs:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001daaa
- (void)distrustPeerIDsWithSpecificUser:(id)arg1 peerIDs:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001d8c1
- (void)departByDistrustingSelfWithSpecificUser:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000001d6f2
- (void)trustedDeviceNamesByPeerIDWithSpecificUser:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000001d523
- (void)octagonPeerIDGivenBottleIDWithSpecificUser:(id)arg1 bottleID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001d33a
- (void)honorIDMSListChangesForSpecificUser:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000001d16b
- (void)dumpWithSpecificUser:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000001cf9c
- (void)pingWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000001ce0b
- (id)initWithCuttlefishXPCConnection:(id)arg1;	// IMP=0x001000000001cda0

@end

