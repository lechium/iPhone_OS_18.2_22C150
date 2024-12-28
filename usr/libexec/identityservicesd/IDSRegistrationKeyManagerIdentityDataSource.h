//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSKeychainWrapper, MISSING_TYPE;

@interface IDSRegistrationKeyManagerIdentityDataSource : NSObject
{
    IDSKeychainWrapper *_keychainWrapper;	// 8 = 0x8
}

+ (id)containerStorageItemNameForKTDataAtKeyIndex:(unsigned short)arg1 isRegistered:(_Bool)arg2;	// IMP=0x00400000004992ab
+ (id)containerStorageItemNameForIsRegisteredAtApplicationKeyIndex:(unsigned short)arg1;	// IMP=0x001000000049927f
+ (id)containerStorageItemNameForContainerIdentityIdentifier:(long long)arg1 applicationKeyIndex:(unsigned short)arg2;	// IMP=0x0010000000499204
+ (id)containerStorageItemNameForContainerIdentityIdentifier:(long long)arg1;	// IMP=0x00100000004991ce
+ (id)legacyStorageItemNameForContainerIdentityIdentifier:(long long)arg1;	// IMP=0x0010000000499198
+ (id)storageItemNameForLegacyIdentityIdentifier:(long long)arg1;	// IMP=0x0010000000499173
- (MISSING_TYPE *).cxx_destruct;	// IMP=0x002000000049d09f
@property(readonly, nonatomic) IDSKeychainWrapper *keychainWrapper; // @synthesize keychainWrapper=_keychainWrapper;
- (unsigned int)ngmVersionFromDataRepresentation:(id)arg1;	// IMP=0x001000000049cfa8
- (id)dataRepresentationForNGMVersion:(unsigned int)arg1;	// IMP=0x001000000049ceba
- (unsigned int)ngmVersion;	// IMP=0x001000000049cde8
- (id)_loadContainerWithIdentifier:(id)arg1 serializationDidChage:(_Bool *)arg2 deserializationDidFail:(_Bool *)arg3 needsEncryptionIdentityRoll:(_Bool *)arg4 error:(id *)arg5;	// IMP=0x001000000049c8b9
- (id)_loadIdentityWithIdentifier:(id)arg1 serializationDidChage:(_Bool *)arg2 deserializationDidFail:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x001000000049c3fe
- (id)_loadLegacyIdentityWithIdentifier:(id)arg1 serializationDidChange:(_Bool *)arg2 deserializationDidFail:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x001000000049c0b2
- (id)_retrying_loadLegacyIdentityWithIdentifier:(id)arg1 serializationDidChange:(_Bool *)arg2 deserializationDidFail:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x001000000049bde4
- (_Bool)removeIdentityContainer:(id)arg1 withIdentifier:(long long)arg2 dataProtectionClass:(long long)arg3 error:(id *)arg4;	// IMP=0x001000000049bb9d
- (_Bool)removeIdentityWithApplicationKeyIndex:(unsigned short)arg1 error:(id *)arg2;	// IMP=0x001000000049ba69
- (_Bool)_removeDataFromKeychainForIdentifier:(id)arg1 dataProtectionClass:(long long)arg2 error:(id *)arg3;	// IMP=0x001000000049b8f6
- (void)_eraseNGMIdentityFromKeychain:(id)arg1;	// IMP=0x001000000049b7e0
- (_Bool)removeKTRegistrationDataForKeyIndex:(unsigned short)arg1 isRegistered:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000049b746
- (_Bool)saveKTRegistrationData:(id)arg1 forKeyIndex:(unsigned short)arg2 isRegistered:(_Bool)arg3 error:(id *)arg4;	// IMP=0x001000000049b680
- (id)loadKTRegistrationDataForKeyIndex:(unsigned short)arg1 isRegistered:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000049b5dc
- (_Bool)saveIsRegistered:(_Bool)arg1 forApplicationKeyIndex:(unsigned short)arg2 error:(id *)arg3;	// IMP=0x001000000049b4b0
- (_Bool)loadIsIdentityRegisteredForApplicationKeyIndex:(unsigned short)arg1 error:(id *)arg2;	// IMP=0x001000000049b3fc
- (id)loadIdentityContainerWithIdentifier:(long long)arg1 withLegacyFallback:(_Bool)arg2 serializationDidChange:(_Bool *)arg3 deserializationDidFail:(_Bool *)arg4 needsEncryptionIdentityRoll:(_Bool *)arg5 nonLegacyError:(id *)arg6 error:(id *)arg7;	// IMP=0x001000000049abe2
- (struct __SecKey *)copyIdentityFromKeychainWithApplicationKeyIndex:(unsigned short)arg1 error:(id *)arg2;	// IMP=0x001000000049a779
- (_Bool)saveIdentityContainer:(id)arg1 withIdentifier:(long long)arg2 dataProtectionClass:(long long)arg3 error:(id *)arg4;	// IMP=0x001000000049a4b4
- (id)generateIdentityContainerWithIdentifier:(long long)arg1 existingLegacyIdentity:(id)arg2 existingNGMIdentity:(id)arg3 dataProtectionClass:(long long)arg4 nonLegacyError:(id *)arg5 error:(id *)arg6;	// IMP=0x0010000000499ff0
- (struct __SecKey *)createIdentityForApplicationKeyIndex:(unsigned short)arg1 error:(id *)arg2;	// IMP=0x0010000000499d4e
- (_Bool)removeLegacyIdentity:(id)arg1 withIdentifier:(long long)arg2 dataProtectionClass:(long long)arg3 error:(id *)arg4;	// IMP=0x0010000000499a0e
- (id)loadLegacyIdentityWithIdentifier:(long long)arg1 serializationDidChange:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x00100000004998f6
- (_Bool)saveLegacyIdentity:(id)arg1 withIdentifier:(long long)arg2 dataProtectionClass:(long long)arg3 error:(id *)arg4;	// IMP=0x0010000000499549
- (id)generateLegacyIdentityWithIdentifier:(long long)arg1 dataProtectionClass:(long long)arg2 error:(id *)arg3;	// IMP=0x0010000000499362
- (id)initWithKeychainWrapper:(id)arg1;	// IMP=0x00100000004992f7

@end
