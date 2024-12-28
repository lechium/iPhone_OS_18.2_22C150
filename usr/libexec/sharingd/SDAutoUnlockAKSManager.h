//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_source;

@interface SDAutoUnlockAKSManager : NSObject
{
    _Bool _wristDetectDisabled;	// 8 = 0x8
    _Bool _autoUnlockDisabledDueToManagement;	// 9 = 0x9
    _Bool _t208Machine;	// 10 = 0xa
    struct os_unfair_lock_s _cachedSessionKeysLock;	// 12 = 0xc
    NSString *_localDeviceID;	// 16 = 0x10
    NSString *_state;	// 24 = 0x18
    NSMutableDictionary *_activeAKSSessions;	// 32 = 0x20
    NSData *_localAttestedLTK;	// 40 = 0x28
    NSData *_localLTK;	// 48 = 0x30
    NSString *_altDSID;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_keybagAssertionTimer;	// 64 = 0x40
    NSMutableDictionary *_remoteLTKs;	// 72 = 0x48
    NSMutableDictionary *_cachedSessions;	// 80 = 0x50
    NSMutableDictionary *_cachedSessionKeys;	// 88 = 0x58
    NSMutableDictionary *_watchIDsToPairingRecords;	// 96 = 0x60
    NSMutableDictionary *_preferredRemoteLTKForDeviceID;	// 104 = 0x68
    NSMutableDictionary *_escrowSecretForDeviceID;	// 112 = 0x70
    NSMutableArray *_watchIDsMissingSessionKey;	// 120 = 0x78
    NSString *_remoteLTKStorageFilePath;	// 128 = 0x80
    NSString *_watchIDsToPairingRecordsStorageFilePath;	// 136 = 0x88
    NSString *_companionIDStorageFilePath;	// 144 = 0x90
    NSString *_watchIDToCompanionIDStorageFilePath;	// 152 = 0x98
}

+ (_Bool)useKeychainForLTKSyncing;	// IMP=0x002000000011a7ba
+ (id)sharedManager;	// IMP=0x001000000010c1bd
- (void).cxx_destruct;	// IMP=0x002000000011d981
@property(readonly, nonatomic) struct os_unfair_lock_s cachedSessionKeysLock; // @synthesize cachedSessionKeysLock=_cachedSessionKeysLock;
@property(copy, nonatomic) NSString *watchIDToCompanionIDStorageFilePath; // @synthesize watchIDToCompanionIDStorageFilePath=_watchIDToCompanionIDStorageFilePath;
@property(copy, nonatomic) NSString *companionIDStorageFilePath; // @synthesize companionIDStorageFilePath=_companionIDStorageFilePath;
@property(copy, nonatomic) NSString *watchIDsToPairingRecordsStorageFilePath; // @synthesize watchIDsToPairingRecordsStorageFilePath=_watchIDsToPairingRecordsStorageFilePath;
@property(copy, nonatomic) NSString *remoteLTKStorageFilePath; // @synthesize remoteLTKStorageFilePath=_remoteLTKStorageFilePath;
@property(retain, nonatomic) NSMutableArray *watchIDsMissingSessionKey; // @synthesize watchIDsMissingSessionKey=_watchIDsMissingSessionKey;
@property(retain, nonatomic) NSMutableDictionary *escrowSecretForDeviceID; // @synthesize escrowSecretForDeviceID=_escrowSecretForDeviceID;
@property(retain, nonatomic) NSMutableDictionary *preferredRemoteLTKForDeviceID; // @synthesize preferredRemoteLTKForDeviceID=_preferredRemoteLTKForDeviceID;
@property(retain, nonatomic) NSMutableDictionary *watchIDsToPairingRecords; // @synthesize watchIDsToPairingRecords=_watchIDsToPairingRecords;
@property(retain, nonatomic) NSMutableDictionary *cachedSessionKeys; // @synthesize cachedSessionKeys=_cachedSessionKeys;
@property(retain, nonatomic) NSMutableDictionary *cachedSessions; // @synthesize cachedSessions=_cachedSessions;
@property(retain, nonatomic) NSMutableDictionary *remoteLTKs; // @synthesize remoteLTKs=_remoteLTKs;
@property(retain) NSObject<OS_dispatch_source> *keybagAssertionTimer; // @synthesize keybagAssertionTimer=_keybagAssertionTimer;
@property(copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(copy, nonatomic) NSData *localLTK; // @synthesize localLTK=_localLTK;
@property(nonatomic) _Bool t208Machine; // @synthesize t208Machine=_t208Machine;
@property(nonatomic) _Bool autoUnlockDisabledDueToManagement; // @synthesize autoUnlockDisabledDueToManagement=_autoUnlockDisabledDueToManagement;
@property(copy, nonatomic) NSData *localAttestedLTK; // @synthesize localAttestedLTK=_localAttestedLTK;
- (void)setActiveAKSSessions:(id)arg1;	// IMP=0x001000000011d7dc
- (id)activeAKSSessions;	// IMP=0x001000000011d7d2
@property(nonatomic) _Bool wristDetectDisabled; // @synthesize wristDetectDisabled=_wristDetectDisabled;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *localDeviceID; // @synthesize localDeviceID=_localDeviceID;
- (void)updateDynamicStoreEnabled;	// IMP=0x001000000011d6ee
- (id)baseDictionary;	// IMP=0x001000000011d67e
- (id)baseLocalKeysDictionary;	// IMP=0x001000000011d631
- (id)baseLocalKeysDictionaryForDevice:(id)arg1 type:(id)arg2;	// IMP=0x001000000011d582
- (id)baseModernSyncedDictionary;	// IMP=0x001000000011d50f
- (id)attestedDictionaryForDevice:(id)arg1;	// IMP=0x001000000011d469
- (id)modernSyncedDictionaryForDevice:(id)arg1;	// IMP=0x001000000011d3c4
- (id)baseSyncedDictionary;	// IMP=0x001000000011d377
- (id)syncedDictionaryForDevice:(id)arg1;	// IMP=0x001000000011d2d2
- (id)baseRangingDictionary;	// IMP=0x001000000011d25f
- (id)baseRangingDictionaryForDevice:(id)arg1;	// IMP=0x001000000011d1f0
- (id)keychainDataForQuery:(id)arg1;	// IMP=0x001000000011d0c4
- (void)deleteAllRangingKeys;	// IMP=0x001000000011cefa
- (void)deleteRangingKeyForDeviceID:(id)arg1;	// IMP=0x001000000011cd5a
- (_Bool)storeRangingKey:(id)arg1 forDeviceID:(id)arg2;	// IMP=0x001000000011cadf
- (id)rangingKeyForDeviceID:(id)arg1;	// IMP=0x001000000011ca80
- (id)sessionKeyForDeviceID:(id)arg1;	// IMP=0x001000000011c912
- (_Bool)sessionKeyExistsForDeviceID:(id)arg1;	// IMP=0x001000000011c8df
- (id)deriveKeyFromSharedSecret:(id)arg1;	// IMP=0x001000000011c7d3
- (void)updateSessionKeys;	// IMP=0x001000000011c27b
- (void)updateRangingKeysIfNeccesary;	// IMP=0x001000000011beea
- (void)deleteLocalAttestedLTK;	// IMP=0x001000000011bdf4
- (id)ltkInfoForDeviceID:(id)arg1 modern:(_Bool)arg2 attested:(_Bool)arg3;	// IMP=0x001000000011bd1a
- (id)ltkInfoForDeviceID:(id)arg1 modern:(_Bool)arg2;	// IMP=0x001000000011bd05
- (id)ltkInfoForDeviceID:(id)arg1;	// IMP=0x001000000011bcf1
- (id)longTermKeyIDForDeviceID:(id)arg1;	// IMP=0x001000000011bc43
- (id)longTermKeyForDevice:(id)arg1 modern:(_Bool)arg2;	// IMP=0x001000000011bbf3
- (id)anyLongTermKeyForDeviceID:(id)arg1;	// IMP=0x001000000011bb64
- (void)deleteRemoteLongTermKeyForDeviceID:(id)arg1 modern:(_Bool)arg2 tombstone:(_Bool)arg3;	// IMP=0x001000000011ba83
- (_Bool)storeAttestedLongTermKey:(id)arg1 forDeviceID:(id)arg2 name:(id)arg3;	// IMP=0x001000000011b7ea
- (_Bool)storeLongTermKey:(id)arg1 forDeviceID:(id)arg2 name:(id)arg3 modern:(_Bool)arg4;	// IMP=0x001000000011b54c
- (_Bool)storeLongTermKey:(id)arg1 forDeviceID:(id)arg2 name:(id)arg3;	// IMP=0x001000000011b4a3
- (void)deleteAllEscrowSecrets;	// IMP=0x001000000011b3d8
- (void)deleteEscrowSecretForDeviceID:(id)arg1;	// IMP=0x001000000011b2bd
- (id)escrowSecretCreationDateForDeviceID:(id)arg1;	// IMP=0x001000000011b182
- (_Bool)escrowSecretExistsForDevice:(id)arg1;	// IMP=0x001000000011b0b8
- (_Bool)storeEscrowSecret:(id)arg1 pairingID:(id)arg2 deviceID:(id)arg3 requiresUnlock:(_Bool)arg4;	// IMP=0x001000000011af1d
- (id)keyPairingIDForDeviceID:(id)arg1;	// IMP=0x001000000011ae65
- (_Bool)cachedEscrowSecretIsValidForDeviceID:(id)arg1;	// IMP=0x001000000011adc9
- (_Bool)cachedEscrowSecretExistsForDeviceID:(id)arg1;	// IMP=0x001000000011ad46
- (id)escrowSecretForDevice:(id)arg1;	// IMP=0x001000000011a93d
- (_Bool)storeKeychainItemWithAttributeDictionary:(id)arg1 updateDictionary:(id)arg2 addDictionary:(id)arg3;	// IMP=0x001000000011a7c2
- (id)autoUnlockFolderPath;	// IMP=0x001000000011a6b4
- (id)loadCompanionIDs;	// IMP=0x001000000011a2cc
- (void)deleteLegacyCompanionIDs;	// IMP=0x001000000011a1af
- (id)migrateLegacyCompanionIDs:(id)arg1;	// IMP=0x001000000011a0b2
- (id)loadLegacyWatchIDToCompanionIDMapping;	// IMP=0x0010000000119dd9
- (void)deleteLegacyWatchToCompanionIDs;	// IMP=0x0010000000119cbc
- (void)migrateLegacyWatchIDToCompanionIDs;	// IMP=0x0010000000119b65
- (void)loadWatchIDsToPairingRecords;	// IMP=0x0010000000119616
- (void)saveWatchIDsToPairingRecords;	// IMP=0x0010000000119466
- (void)removePairingRecordForWatchID:(id)arg1;	// IMP=0x00100000001193e7
- (void)removePairingIDForWatchID:(id)arg1;	// IMP=0x0010000000119287
- (id)pairingIDForWatchID:(id)arg1;	// IMP=0x00100000001191df
- (void)setPairingID:(id)arg1 forWatchID:(id)arg2;	// IMP=0x001000000011904f
- (void)removeCompanionIDForWatchID:(id)arg1;	// IMP=0x0010000000118eef
- (id)companionIDForWatchID:(id)arg1;	// IMP=0x0010000000118e47
- (void)setCompanionID:(id)arg1 forWatchID:(id)arg2;	// IMP=0x0010000000118cb7
- (id)allPairedWatchDeviceIDs;	// IMP=0x0010000000118c67
- (void)reloadPairingRecordsIfNeeded;	// IMP=0x0010000000118bcb
- (void)loadRemoteLTKs;	// IMP=0x00100000001186a4
- (void)loadRemoteLTKsIfNeeded;	// IMP=0x001000000011865b
- (void)saveRemoteLTKs;	// IMP=0x001000000011849c
- (void)clearRemoteLTKs;	// IMP=0x00100000001183c6
- (void)removeRemoteLTKForDeviceID:(id)arg1;	// IMP=0x00100000001182ca
- (void)addRemoteLTK:(id)arg1 ltkHash:(id)arg2 ltkModDate:(id)arg3 modernLTK:(id)arg4 modernLTKHash:(id)arg5 modernLTKModeDate:(id)arg6 deviceID:(id)arg7;	// IMP=0x0010000000118018
- (_Bool)disablePairingWithKeyDevice:(id)arg1;	// IMP=0x0010000000117eba
- (_Bool)ltkExistsForKeyDevice:(id)arg1 updateLTKs:(_Bool)arg2;	// IMP=0x0010000000117d50
- (_Bool)ltkExistsForKeyDevice:(id)arg1;	// IMP=0x0010000000117d3c
- (void)removeAllRemoteLTKsOnSignOut;	// IMP=0x0010000000117a5a
- (void)disablePairingForAllLockPhones;	// IMP=0x001000000011770d
- (void)disablePairingForAllKeyDevices;	// IMP=0x0010000000117419
- (void)deleteEscrowSecretForPhones;	// IMP=0x001000000011708f
- (void)deleteEscrowSecretForAllDevices;	// IMP=0x0010000000116cad
- (void)handleRequiredStateDisabled;	// IMP=0x0010000000116c9b
- (_Bool)deviceEnabledAsKey:(id)arg1;	// IMP=0x0010000000116aa7
- (_Bool)deviceEnabledAsKeyForAnyMac;	// IMP=0x00100000001167fb
- (_Bool)deviceEnabledAsKeyForAnyDevice;	// IMP=0x00100000001164eb
- (_Bool)deviceEnabledAsKeyForAnyIDSMac;	// IMP=0x001000000011623f
- (_Bool)deviceEnabledAsKeyForAnyIDSDevice;	// IMP=0x001000000011600a
- (_Bool)deviceEnabledAsKeyForIDSDeviceID:(id)arg1;	// IMP=0x0010000000115ee3
- (_Bool)localDeviceEnabledAsKeyForMac;	// IMP=0x0010000000115e71
- (_Bool);	// IMP=0x0010000000115dff
- (void)transport:(id)arg1 didReceivePayload:(id)arg2 type:(unsigned short)arg3 deviceID:(id)arg4;	// IMP=0x0010000000115d32
- (void)handleLTKResponse:(id)arg1;	// IMP=0x0010000000115d2c
- (void)restartKeybagAssertionTimer;	// IMP=0x0010000000115b38
- (void)releaseKeybagAssertion;	// IMP=0x0010000000115adc
- (void)takeMobileKeybagAssertion;	// IMP=0x0010000000115a80
- (id)ltksForRequest:(id)arg1;	// IMP=0x0010000000115480
- (void)handleLTKRequest:(id)arg1;	// IMP=0x0010000000114be4
- (void)sendLTKResponseWithPayload:(id)arg1 viewState:(id)arg2 needsUnlock:(id)arg3 currentlySyncing:(id)arg4;	// IMP=0x001000000011492b
- (void)fetchLTKsFromCompanionForDeviceID:(id)arg1 needsLTK:(_Bool)arg2 remoteNeedsLTK:(_Bool)arg3 checkViewState:(_Bool)arg4;	// IMP=0x0010000000114925
- (void)fetchLTKsFromCompanion:(_Bool)arg1;	// IMP=0x0010000000114909
- (void)updatePreferredRemoteLTKForDeviceID:(id)arg1;	// IMP=0x001000000011455b
- (id)remoteLTKList;	// IMP=0x0010000000114355
- (id)remoteLTKEntryForDeviceID:(id)arg1;	// IMP=0x00100000001142db
- (id)remoteLTKHashForDeviceID:(id)arg1 modern:(_Bool)arg2;	// IMP=0x001000000011426c
- (_Bool)hashMatchesAnyRemoteLTKForDeviceID:(id)arg1 ltkHash:(id)arg2 isPreferred:(_Bool *)arg3;	// IMP=0x0010000000113eff
- (id)remoteLTKForDeviceID:(id)arg1;	// IMP=0x0010000000113e21
- (id)allRemoteLTKData;	// IMP=0x0010000000113cf5
- (void)signAndStoreRemoteLTK:(id)arg1 forDeviceID:(id)arg2;	// IMP=0x0010000000113885
- (id)signedDevices;	// IMP=0x0010000000113731
- (id)modernSignedDevices;	// IMP=0x00100000001135dd
- (id)modificationDataForDeviceID:(id)arg1 modern:(_Bool)arg2;	// IMP=0x001000000011344a
- (id)keychainDevices:(_Bool)arg1;	// IMP=0x0010000000113196
- (id)allKeychainDevices;	// IMP=0x0010000000113182
- (_Bool)signLTK:(id)arg1 ltkModDate:(id)arg2 modernLTK:(id)arg3 modernLTKModDate:(id)arg4 deviceID:(id)arg5;	// IMP=0x0010000000112deb
- (_Bool)signLTK:(id)arg1 modernLTK:(id)arg2 forDeviceID:(id)arg3;	// IMP=0x0010000000112dc1
- (_Bool)signLTKsForDeviceID:(id)arg1;	// IMP=0x0010000000112d1d
- (void)resignRemoteLTKForDeviceID:(id)arg1;	// IMP=0x0010000000112d0b
- (void)removeCorruptedRemoteLTKIfNecessaryForDeviceID:(id)arg1;	// IMP=0x0010000000112d05
- (void)checkPhoneRemoteLTKs;	// IMP=0x0010000000112adc
- (void)checkRemoteLTKForDeviceID:(id)arg1;	// IMP=0x00100000001128c9
- (void)checkRemoteLTKs;	// IMP=0x00100000001128c3
- (void)updateRemoteLTKs;	// IMP=0x00100000001128ad
- (void)updateLTKsForDeviceID:(id)arg1 staleRemoteLTK:(_Bool)arg2;	// IMP=0x00100000001127a2
- (void)generateLocalAttestedLTKIfNeccessaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001125d1
- (int)ltkSyncStatusForDeviceID:(id)arg1 hash:(id)arg2 modern:(_Bool)arg3;	// IMP=0x0010000000112452
- (_Bool)deviceIsLocalDevice:(id)arg1;	// IMP=0x00100000001123e4
- (long long)keyClassForDeviceID:(id)arg1;	// IMP=0x00100000001122c3
- (long long)ltkKeyClassWithAttestation:(_Bool)arg1;	// IMP=0x001000000011215e
- (void)updateLocalLTKForSignout;	// IMP=0x0010000000112013
- (id)ltkHashForLocalLTK;	// IMP=0x0010000000111f94
- (void)checkLocalAttestedLTK;	// IMP=0x0010000000111ccc
- (void)checkLocalLTK;	// IMP=0x00100000001114c2
- (_Bool)isMobileActivationErrorNetworkError:(id)arg1;	// IMP=0x00100000001114ba
- (void)generateLocalLTKWithAttestation:(_Bool)arg1 forceDCRTRetrievalWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000110b88
- (void)generateLocalLTKWithAttestation:(_Bool)arg1;	// IMP=0x0010000000110b74
- (_Bool)loadLocalAttestedLTKIfNecessary;	// IMP=0x00100000001104de
- (_Bool)loadLocalLTK;	// IMP=0x001000000010fe9f
- (id)deviceIDsMissingSessionKey;	// IMP=0x001000000010fd79
- (void)clearAllDeviceIDsMissingSessionKeys;	// IMP=0x001000000010fc53
- (void)removeDeviceIDMissingSessionKey:(id)arg1;	// IMP=0x001000000010fb11
- (void)addDeviceIDMissingSessionKey:(id)arg1;	// IMP=0x001000000010f998
- (id)decryptMessage:(id)arg1 authTag:(id)arg2 nonce:(id)arg3 bluetoothID:(id)arg4 cachedDevices:(_Bool)arg5 errorCode:(long long *)arg6;	// IMP=0x001000000010ef1d
- (_Bool)encryptMessageData:(id)arg1 deviceID:(id)arg2 encryptedMessage:(id *)arg3 authTag:(id *)arg4 nonce:(id *)arg5;	// IMP=0x001000000010ebe7
- (_Bool)canCreateTokenSessionForDeviceID:(id)arg1;	// IMP=0x001000000010eb9d
- (id)aksAuthorizationSessionForDeviceID:(id)arg1 attestation:(_Bool)arg2 originator:(_Bool)arg3 externalACMContext:(id)arg4 sessionType:(long long)arg5;	// IMP=0x001000000010e8c7
- (id)aksAuthorizationSessionForDeviceID:(id)arg1 originator:(_Bool)arg2 sessionType:(long long)arg3;	// IMP=0x001000000010e89e
- (id)aksAuthSessionForDeviceID:(id)arg1 attestation:(_Bool)arg2 sessionType:(long long)arg3 escrowSecret:(id)arg4;	// IMP=0x001000000010e54c
- (id)aksAuthSessionForDeviceID:(id)arg1 originator:(_Bool)arg2 usingEscrow:(_Bool)arg3 attestation:(_Bool)arg4 sessionType:(long long)arg5;	// IMP=0x001000000010e124
- (id)aksAuthSessionForDeviceID:(id)arg1 originator:(_Bool)arg2;	// IMP=0x001000000010e0fb
- (id)aksRegistrationSessionForDeviceID:(id)arg1 originator:(_Bool)arg2;	// IMP=0x001000000010df1b
- (id)aksPairingSessionForDeviceID:(id)arg1 originator:(_Bool)arg2 errorCode:(long long *)arg3 requiresAttestation:(_Bool)arg4 requiresEscrow:(_Bool)arg5;	// IMP=0x001000000010dbb8
- (void)consoleUserChanged:(id)arg1;	// IMP=0x001000000010da99
- (void)handleKeyBagLockStateChanged;	// IMP=0x001000000010d904
- (void)screenLockUnlocked:(id)arg1;	// IMP=0x001000000010d848
- (void)appleAccountSignedOut:(id)arg1;	// IMP=0x001000000010d79a
- (void)appleAccountSignedIn:(id)arg1;	// IMP=0x001000000010d73e
- (void)deviceFirstUnlocked:(id)arg1;	// IMP=0x001000000010d5d0
- (void)handleManagementChanged:(id)arg1;	// IMP=0x001000000010d4d0
- (void)addObservers;	// IMP=0x001000000010d33c
- (void)loadLocalUniqueIDIfNeeded;	// IMP=0x001000000010d239
@property(readonly, nonatomic) _Bool viewSyncing;
- (void)updateLocalLTK;	// IMP=0x001000000010c6ad
- (void)updateLTKs;	// IMP=0x001000000010c60e
- (void)start;	// IMP=0x001000000010c3fb
- (id)init;	// IMP=0x001000000010c212

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
