//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKContainer, CKKSAccountStateTracker, CKKSCloudKitClassDependencies, CKKSLockStateTracker, CKKSNearFutureScheduler, CKKSReachabilityTracker, CKKSViewManager, NSMutableDictionary, NSString, NSXPCListener, OTRamp;
@protocol NSXPCProxyCreating, OS_dispatch_queue, OTAccountsAdapter, OTAuthKitAdapter, OTDeviceInformationAdapter, OTPersonaAdapter, OTSOSAdapter, OTTapToRadarAdapter, OTTooManyPeersAdapter, OctagonFollowUpControllerProtocol;

@interface OTManager : NSObject
{
    _Bool _sosEnabledForPlatform;	// 8 = 0x8
    id <NSXPCProxyCreating> _cuttlefishXPCConnection;	// 16 = 0x10
    id <OTSOSAdapter> _sosAdapter;	// 24 = 0x18
    id <OTAuthKitAdapter> _authKitAdapter;	// 32 = 0x20
    id <OTDeviceInformationAdapter> _deviceInformationAdapter;	// 40 = 0x28
    CKKSLockStateTracker *_lockStateTracker;	// 48 = 0x30
    CKKSAccountStateTracker *_accountStateTracker;	// 56 = 0x38
    CKKSReachabilityTracker *_reachabilityTracker;	// 64 = 0x40
    CKContainer *_cloudKitContainer;	// 72 = 0x48
    CKKSViewManager *_viewManager;	// 80 = 0x50
    NSXPCListener *_listener;	// 88 = 0x58
    OTRamp *_gbmidRamp;	// 96 = 0x60
    OTRamp *_gbserialRamp;	// 104 = 0x68
    OTRamp *_gbAgeRamp;	// 112 = 0x70
    id <OctagonFollowUpControllerProtocol> _cdpd;	// 120 = 0x78
    NSMutableDictionary *_contexts;	// 128 = 0x80
    NSObject<OS_dispatch_queue> *_queue;	// 136 = 0x88
    id <OTAccountsAdapter> _accountsAdapter;	// 144 = 0x90
    id <OTTooManyPeersAdapter> _tooManyPeersAdapter;	// 152 = 0x98
    id <OTTapToRadarAdapter> _tapToRadarAdapter;	// 160 = 0xa0
    id <OTPersonaAdapter> _personaAdapter;	// 168 = 0xa8
    Class _apsConnectionClass;	// 176 = 0xb0
    Class _escrowRequestClass;	// 184 = 0xb8
    Class _notifierClass;	// 192 = 0xc0
    Class _loggerClass;	// 200 = 0xc8
    CKKSNearFutureScheduler *_savedTLKNotifier;	// 208 = 0xd0
    CKKSCloudKitClassDependencies *_cloudKitClassDependencies;	// 216 = 0xd8
}

+ (id)makeCKContainer:(id)arg1;	// IMP=0x002000000005d4ef
+ (id)resetManager:(_Bool)arg1 to:(id)arg2;	// IMP=0x001000000005d413
+ (id)manager;	// IMP=0x001000000005d375
- (void).cxx_destruct;	// IMP=0x0020000000057b8f
@property(readonly) CKKSCloudKitClassDependencies *cloudKitClassDependencies; // @synthesize cloudKitClassDependencies=_cloudKitClassDependencies;
@property(retain) CKKSNearFutureScheduler *savedTLKNotifier; // @synthesize savedTLKNotifier=_savedTLKNotifier;
@property(nonatomic) _Bool sosEnabledForPlatform; // @synthesize sosEnabledForPlatform=_sosEnabledForPlatform;
@property(readonly) Class loggerClass; // @synthesize loggerClass=_loggerClass;
@property(readonly) Class notifierClass; // @synthesize notifierClass=_notifierClass;
@property(readonly) Class escrowRequestClass; // @synthesize escrowRequestClass=_escrowRequestClass;
@property(readonly) Class apsConnectionClass; // @synthesize apsConnectionClass=_apsConnectionClass;
@property(readonly) id <OTPersonaAdapter> personaAdapter; // @synthesize personaAdapter=_personaAdapter;
@property(readonly) id <OTTapToRadarAdapter> tapToRadarAdapter; // @synthesize tapToRadarAdapter=_tapToRadarAdapter;
@property(readonly) id <OTTooManyPeersAdapter> tooManyPeersAdapter; // @synthesize tooManyPeersAdapter=_tooManyPeersAdapter;
@property(readonly) id <OTAccountsAdapter> accountsAdapter; // @synthesize accountsAdapter=_accountsAdapter;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSMutableDictionary *contexts; // @synthesize contexts=_contexts;
@property(retain, nonatomic) id <OctagonFollowUpControllerProtocol> cdpd; // @synthesize cdpd=_cdpd;
@property(retain, nonatomic) OTRamp *gbAgeRamp; // @synthesize gbAgeRamp=_gbAgeRamp;
@property(retain, nonatomic) OTRamp *gbserialRamp; // @synthesize gbserialRamp=_gbserialRamp;
- (void);	// IMP=0x00100000000579fe
@property(retain, nonatomic) OTRamp *gbmidRamp; // @synthesize gbmidRamp=_gbmidRamp;
@property(retain) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain) CKKSViewManager *viewManager; // @synthesize viewManager=_viewManager;
@property(readonly) CKContainer *cloudKitContainer; // @synthesize cloudKitContainer=_cloudKitContainer;
@property(retain) CKKSReachabilityTracker *reachabilityTracker; // @synthesize reachabilityTracker=_reachabilityTracker;
@property(retain) CKKSAccountStateTracker *accountStateTracker; // @synthesize accountStateTracker=_accountStateTracker;
@property(retain, nonatomic) CKKSLockStateTracker *lockStateTracker; // @synthesize lockStateTracker=_lockStateTracker;
@property(readonly) id <OTDeviceInformationAdapter> deviceInformationAdapter; // @synthesize deviceInformationAdapter=_deviceInformationAdapter;
@property(readonly) id <OTAuthKitAdapter> authKitAdapter; // @synthesize authKitAdapter=_authKitAdapter;
@property(readonly) id <OTSOSAdapter> sosAdapter; // @synthesize sosAdapter=_sosAdapter;
- (void)reroll:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000057684
- (void)areRecoveryKeysDistrusted:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000005753b
- (void)getAccountMetadata:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000573f2
- (void)preflightRecoverOctagonUsingRecoveryKey:(id)arg1 recoveryKey:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000057288
- (void)setMachineIDOverride:(id)arg1 machineID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000057122
- (void)removeRecoveryKey:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000056f96
- (void)recoverWithRecoveryKey:(id)arg1 recoveryKey:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000056de7
- (void)isRecoveryKeySet:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000056c9e
- (void)tlkRecoverabilityForEscrowRecordData:(id)arg1 recordData:(id)arg2 source:(long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000056b2c
- (void)fetchAccountWideSettingsWithForceFetch:(_Bool)arg1 arguments:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000569dc
- (void)fetchAccountSettings:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000056893
- (void)setAccountSetting:(id)arg1 setting:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000005672b
- (void)fetchTrustedSecureElementIdentities:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000565e2
- (void)removeLocalSecureElementIdentityPeerID:(id)arg1 secureElementIdentityPeerID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000005647a
- (void)setLocalSecureElementIdentity:(id)arg1 secureElementIdentity:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000056312
- (void)resetAccountCDPContents:(id)arg1 idmsTargetContext:(id)arg2 idmsCuttlefishPassword:(id)arg3 notifyIdMS:(_Bool)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000056137
- (void)fetchUserControllableViewsSyncStatus:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000055fa9
- (void)setUserControllableViewsSyncStatus:(id)arg1 enabled:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000055e11
- (void)invalidateEscrowCache:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000055c1d
- (void)fetchEscrowRecords:(id)arg1 source:(long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000055a1f
- (void)setCDPEnabled:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000005584a
- (void)getCDPStatus:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000005566c
- (void)refetchCKKSPolicy:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000055468
- (void)tapToRadar:(id)arg1 description:(id)arg2 radar:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000000553a7
- (void)postCDPFollowupResult:(id)arg1 success:(_Bool)arg2 type:(id)arg3 error:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000055184
- (void)waitForPriorityViewKeychainDataRecovery:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000054f80
- (void)waitForOctagonUpgrade:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000054d7c
- (_Bool)allContextsPause:(unsigned long long)arg1;	// IMP=0x0010000000054aac
- (void)allContextsDisablePendingFlags;	// IMP=0x001000000005490e
- (void)allContextsHalt;	// IMP=0x0010000000054714
- (void)setSOSEnabledForPlatformFlag:(_Bool)arg1;	// IMP=0x0010000000054702
- (void)simulateReceivePush:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000005455e
- (void)healthCheck:(id)arg1 skipRateLimitingCheck:(_Bool)arg2 repair:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000054250
- (void)xpc24HrNotification;	// IMP=0x00100000000541aa
- (void)createInheritanceKey:(id)arg1 uuid:(id)arg2 claimTokenData:(id)arg3 wrappingKeyData:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000053d78
- (void)recreateInheritanceKey:(id)arg1 uuid:(id)arg2 oldIK:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000053960
- (void)checkInheritanceKey:(id)arg1 uuid:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000005362c
- (void)removeInheritanceKey:(id)arg1 uuid:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000005316c
- (void)preflightJoinWithInheritanceKey:(id)arg1 inheritanceKey:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000052e02
- (void)joinWithInheritanceKey:(id)arg1 inheritanceKey:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000052a98
- (void)storeInheritanceKey:(id)arg1 ik:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000526b1
- (void)generateInheritanceKey:(id)arg1 uuid:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000522c6
- (void)createInheritanceKey:(id)arg1 uuid:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000051edb
- (void)checkCustodianRecoveryKey:(id)arg1 uuid:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000051ba7
- (void)removeCustodianRecoveryKey:(id)arg1 uuid:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000516e7
- (void)preflightJoinWithCustodianRecoveryKey:(id)arg1 custodianRecoveryKey:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000513b2
- (void)joinWithCustodianRecoveryKey:(id)arg1 custodianRecoveryKey:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000005107d
- (void)createCustodianRecoveryKey:(id)arg1 uuid:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000050c92
- (void)joinWithRecoveryKey:(id)arg1 recoveryKey:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000005083c
- (void)createRecoveryKey:(id)arg1 recoveryKey:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000502ed
- (_Bool)isFullPeer;	// IMP=0x0010000000050277
- (id)cdpContextTypes;	// IMP=0x0010000000050247
- (void)setupAnalytics;	// IMP=0x00100000000500ad
- (_Bool)persistSendingMetricsPermitted:(id)arg1 sendingMetricsPermitted:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000004ff59
- (_Bool)fetchSendingMetricsPermitted:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004fe12
- (_Bool)ghostbustByAgeEnabled;	// IMP=0x001000000004fdbc
- (_Bool)ghostbustBySerialEnabled;	// IMP=0x001000000004fd66
- (_Bool)ghostbustByMidEnabled;	// IMP=0x001000000004fd10
- (void)restoreFromBottle:(id)arg1 entropy:(id)arg2 bottleID:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000004f9fc
- (void)rpcVoucherWithArguments:(id)arg1 configuration:(id)arg2 peerID:(id)arg3 permanentInfo:(id)arg4 permanentInfoSig:(id)arg5 stableInfo:(id)arg6 stableInfoSig:(id)arg7 maxCapability:(id)arg8 reply:(CDUnknownBlockType)arg9;	// IMP=0x001000000004f0d1
- (void)rpcEpochWithArguments:(id)arg1 configuration:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000004ecf2
- (void)rpcJoinWithArguments:(id)arg1 configuration:(id)arg2 vouchData:(id)arg3 vouchSig:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000004e8ad
- (void)rpcPrepareIdentityAsApplicantWithArguments:(id)arg1 configuration:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000004e477
- (void)totalTrustedPeers:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000004e32e
- (void)fetchEscrowContents:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000004e116
- (void)fetchAllViableBottles:(id)arg1 source:(long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000004dee9
- (void)peerDeviceNamesByPeerID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000004dda0
- (void)removeFriendsInClique:(id)arg1 peerIDs:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000004db4e
- (void)leaveClique:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000004d921
- (void)establish:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000004d6c0
- (void)performCKServerUnreadableDataRemoval:(id)arg1 isGuitarfish:(_Bool)arg2 altDSID:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000004d4fa
- (void)clearCliqueFromAccount:(id)arg1 resetReason:(long long)arg2 isGuitarfish:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000004d392
- (void)resetAndEstablish:(id)arg1 resetReason:(long long)arg2 idmsTargetContext:(id)arg3 idmsCuttlefishPassword:(id)arg4 notifyIdMS:(_Bool)arg5 accountSettings:(id)arg6 isGuitarfish:(_Bool)arg7 reply:(CDUnknownBlockType)arg8;	// IMP=0x001000000004d0c6
- (void)resetAndEstablish:(id)arg1 resetReason:(long long)arg2 isGuitarfish:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000004d09c
- (void)startOctagonStateMachine:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000004cf16
- (void)status:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000004cd67
- (void)fetchCliqueStatus:(id)arg1 configuration:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000004cb9c
- (void)fetchTrustStatus:(id)arg1 configuration:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000004c984
- (void)fetchEgoPeerID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000004c7aa
- (void)clearAllContexts;	// IMP=0x001000000004c710
- (id)ckksForClientRPC:(id)arg1 createIfMissing:(_Bool)arg2 allowNonPrimaryAccounts:(_Bool)arg3 error:(id *)arg4;	// IMP=0x001000000004c44b
- (id)contextForClientRPC:(id)arg1 createIfMissing:(_Bool)arg2 allowNonPrimaryAccounts:(_Bool)arg3 error:(id *)arg4;	// IMP=0x001000000004bf05
- (id)contextForClientRPCWithActiveAccount:(id)arg1 createIfMissing:(_Bool)arg2 allowNonPrimaryAccounts:(_Bool)arg3 error:(id *)arg4;	// IMP=0x001000000004bb16
- (id)contextForClientRPC:(id)arg1 createIfMissing:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000004b93e
- (id)contextForClientRPC:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004b924
- (id)contextForContainerName:(id)arg1 contextID:(id)arg2;	// IMP=0x001000000004b90f
- (id)contextForContainerName:(id)arg1 contextID:(id)arg2 possibleAccount:(id)arg3;	// IMP=0x001000000004b771
- (id)contextForContainerName:(id)arg1 contextID:(id)arg2 possibleAccount:(id)arg3 createIfMissing:(_Bool)arg4 sosAdapter:(id)arg5 accountsAdapter:(id)arg6 authKitAdapter:(id)arg7 tooManyPeersAdapter:(id)arg8 tapToRadarAdapter:(id)arg9 lockStateTracker:(id)arg10 deviceInformationAdapter:(id)arg11;	// IMP=0x001000000004b42a
- (id)contextForContainerName:(id)arg1 contextID:(id)arg2 sosAdapter:(id)arg3 accountsAdapter:(id)arg4 authKitAdapter:(id)arg5 tooManyPeersAdapter:(id)arg6 tapToRadarAdapter:(id)arg7 lockStateTracker:(id)arg8 deviceInformationAdapter:(id)arg9;	// IMP=0x001000000004b3e2
- (void)cancelPendingOperations;	// IMP=0x001000000004b3a5
- (void)dropAllActors;	// IMP=0x001000000004b393
- (void)haltAll;	// IMP=0x001000000004b381
- (id)restartCKKSAccountSyncWithoutSettingPolicy:(id)arg1;	// IMP=0x001000000004b178
- (id)restartOctagonContext:(id)arg1;	// IMP=0x001000000004aec6
- (id)ckksAccountSyncForContainer:(id)arg1 contextID:(id)arg2 possibleAccount:(id)arg3;	// IMP=0x001000000004ae14
- (void)removeContextForContainerName:(id)arg1 contextID:(id)arg2;	// IMP=0x001000000004ad35
@property(retain) id <NSXPCProxyCreating> cuttlefishXPCConnection; // @synthesize cuttlefishXPCConnection=_cuttlefishXPCConnection;
- (void)notifyIDMSTrustLevelChangeForAltDSID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000496b8
- (void)appleAccountSignedOut:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000049045
- (void)appleAccountSignedIn:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000048d7b
- (void)ensureRampsInitialized;	// IMP=0x0010000000048a37
- (void)registerForCircleChangedNotifications;	// IMP=0x001000000004893e
- (void)moveToCheckTrustedStateForArguments:(id)arg1;	// IMP=0x001000000004883b
- (_Bool)waitForReady:(id)arg1 wait:(long long)arg2;	// IMP=0x0010000000048734
- (void)initializeOctagon;	// IMP=0x0010000000048310
- (id)initWithSOSAdapter:(id)arg1 lockStateTracker:(id)arg2 personaAdapter:(id)arg3 cloudKitClassDependencies:(id)arg4;	// IMP=0x0010000000047f8e
- (id)initWithSOSAdapter:(id)arg1 accountsAdapter:(id)arg2 authKitAdapter:(id)arg3 tooManyPeersAdapter:(id)arg4 tapToRadarAdapter:(id)arg5 deviceInformationAdapter:(id)arg6 personaAdapter:(id)arg7 apsConnectionClass:(Class)arg8 escrowRequestClass:(Class)arg9 notifierClass:(Class)arg10 loggerClass:(Class)arg11 lockStateTracker:(id)arg12 reachabilityTracker:(id)arg13 cloudKitClassDependencies:(id)arg14 cuttlefishXPCConnection:(id)arg15 cdpd:(id)arg16;	// IMP=0x0010000000047aa4
- (id)init;	// IMP=0x0010000000047871

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

