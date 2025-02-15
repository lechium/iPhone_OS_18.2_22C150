//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CARObserverHashTable, NSSet;

@interface CRVehicleStore : NSObject
{
    NSSet *_cachedVehicles;	// 8 = 0x8
    CARObserverHashTable *_observers;	// 16 = 0x10
}

+ (void)postPairingsDidChangeNotification;	// IMP=0x004000000000984b
+ (void)_cleanupPreferencesForIncompleteVehicleIdentifier:(id)arg1 name:(id)arg2;	// IMP=0x00100000000096fa
+ (_Bool)_removePreferencesPairingForVehicleIdentifier:(id)arg1;	// IMP=0x0010000000009649
+ (_Bool)_removePreferencesPairingForVehicle:(id)arg1;	// IMP=0x0010000000009574
+ (_Bool)_addPreferencesPairingForVehicle:(id)arg1;	// IMP=0x00100000000093f8
+ (id)_allPreferencesPairings;	// IMP=0x00100000000093b4
+ (void)_applyPreferencesAttributes:(id)arg1 toVehicle:(id)arg2;	// IMP=0x0010000000007734
+ (id)_preferencesAttributesForVehicle:(id)arg1;	// IMP=0x001000000000649c
+ (_Bool)removePayloadForVehicleWithIdentifier:(id)arg1;	// IMP=0x0010000000006485
+ (_Bool)setPayload:(id)arg1 forVehicleWithIdentifier:(id)arg2;	// IMP=0x0010000000006284
+ (id)payloadForVehicleWithIdentifier:(id)arg1;	// IMP=0x001000000000620a
+ (id)_allUnpairedVehicleStorage;	// IMP=0x00100000000061c6
+ (_Bool)_removeKeychainPairingForVehicle:(id)arg1;	// IMP=0x0010000000006071
+ (_Bool)_addKeychainPairingForVehicle:(id)arg1;	// IMP=0x0010000000005e19
+ (id)_keychainItemAttributesForAllVehicles;	// IMP=0x0010000000005c67
+ (id)_keychainAttributesMatchingQuery:(id)arg1;	// IMP=0x0010000000005ad7
+ (id)_updateKeychainAttributesForVehicle:(id)arg1;	// IMP=0x0010000000005a5f
+ (id)_creationKeychainAttributesForVehicle:(id)arg1;	// IMP=0x0010000000005a0f
+ (id)_allKeychainAttributesForVehicle:(id)arg1;	// IMP=0x00100000000059a4
+ (void)_addKeychainAttributesForVehicle:(id)arg1 toDictionary:(id)arg2;	// IMP=0x00100000000057f8
+ (id)_identifyingKeychainAttributesForVehicle:(id)arg1;	// IMP=0x0010000000005755
+ (id)_itemClassKeychainAttributes;	// IMP=0x00100000000056be
- (void).cxx_destruct;	// IMP=0x002000000000af52
@property(readonly, nonatomic) CARObserverHashTable *observers; // @synthesize observers=_observers;
@property(copy, nonatomic) NSSet *cachedVehicles; // @synthesize cachedVehicles=_cachedVehicles;
- (id)vehicleForCertificateSerial:(id)arg1;	// IMP=0x001000000000ad14
- (id)vehicleForBluetoothAddress:(id)arg1;	// IMP=0x001000000000aaf9
- (id)vehicleForIdentifier:(id)arg1;	// IMP=0x001000000000a914
- (void)handleAvailabilityDidChange:(id)arg1;	// IMP=0x001000000000a810
- (id)_matchingKeychainItemForIdentifier:(id)arg1 inKeychainItems:(id)arg2;	// IMP=0x001000000000a62b
- (id)allStoredVehicles;	// IMP=0x001000000000a095
- (_Bool)removeVehicle:(id)arg1;	// IMP=0x0010000000009f14
- (id)saveVehicle:(id)arg1 withMergePolicy:(CDUnknownBlockType)arg2;	// IMP=0x0010000000009b39
- (id)saveVehicle:(id)arg1;	// IMP=0x0010000000009b25
- (void)removeObserver:(id)arg1;	// IMP=0x0010000000009abc
- (void)addObserver:(id)arg1;	// IMP=0x0010000000009a53
- (void)_invalidateCachedVehicles;	// IMP=0x0010000000009a3f
- (void)dealloc;	// IMP=0x00100000000099ca
- (id)init;	// IMP=0x00100000000098f5

@end

