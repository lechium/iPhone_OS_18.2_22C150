//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCMPOSIXUser, MCMUserIdentity, NSString, NSURL;
@protocol MCMAMFI, MCMClientCodeSignInfo, MCMClientIdentity;

__attribute__((visibility("hidden")))
@interface MCMClientIdentity : NSObject
{
    Class _amfiClass;	// 8 = 0x8
    id <MCMAMFI> _amfi;	// 16 = 0x10
    _Bool _testClient;	// 24 = 0x18
    _Bool _sandboxed;	// 25 = 0x19
    _Bool _kernel;	// 26 = 0x1a
    _Bool _cached;	// 27 = 0x1b
    int _posixPID;	// 28 = 0x1c
    unsigned int _platform;	// 32 = 0x20
    MCMPOSIXUser *_posixUser;	// 40 = 0x28
    id <MCMClientIdentity> _proximateClient;	// 48 = 0x30
    MCMUserIdentity *_userIdentity;	// 56 = 0x38
    NSURL *_sandboxContainerURL;	// 64 = 0x40
    id <MCMClientCodeSignInfo> _codeSignInfo;	// 72 = 0x48
    CDStruct_4c969caf _auditToken;	// 80 = 0x50
}

+ (id)privilegedClientIdentityWithUserIdentity:(id)arg1 kernel:(_Bool)arg2;	// IMP=0x001000000000c04c
+ (id)anonymousPrivilegedClientIdentityWithUserIdentity:(id)arg1;	// IMP=0x001000000000c017
- (void).cxx_destruct;	// IMP=0x000000000000b473
@property(readonly, nonatomic) _Bool cached; // @synthesize cached=_cached;
@property(readonly, nonatomic) id <MCMClientCodeSignInfo> codeSignInfo; // @synthesize codeSignInfo=_codeSignInfo;
@property(readonly, nonatomic) NSURL *sandboxContainerURL; // @synthesize sandboxContainerURL=_sandboxContainerURL;
@property(readonly, nonatomic) unsigned int platform; // @synthesize platform=_platform;
@property(readonly, nonatomic, getter=isKernel) _Bool kernel; // @synthesize kernel=_kernel;
@property(readonly, nonatomic) MCMUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
@property(readonly, nonatomic) CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
@property(readonly, nonatomic, getter=isSandboxed) _Bool sandboxed; // @synthesize sandboxed=_sandboxed;
@property(readonly, nonatomic) MCMPOSIXUser *posixUser; // @synthesize posixUser=_posixUser;
@property(readonly, nonatomic) int posixPID; // @synthesize posixPID=_posixPID;
@property(readonly, nonatomic, getter=isTestClient) _Bool testClient; // @dynamic testClient;
@property(retain, nonatomic, setter=setAMFIClass:) Class amfiClass; // @dynamic amfiClass;
- (id)shortDescription;	// IMP=0x000000000000b14a
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000afb5
- (char *)issueSandboxExtensionWithIdentity:(id)arg1 containerPath:(id)arg2 legacyExtensionPolicy:(_Bool)arg3 extensionsUseProxiedClient:(_Bool)arg4 extensionsPolicyUsesProxiedClient:(_Bool)arg5 error:(id *)arg6;	// IMP=0x000000000000ab22
- (_Bool)_checkShouldIssueExtensionForIdentity:(id)arg1 containerPath:(id)arg2 legacyExtensionPolicy:(_Bool)arg3 extensionsPolicyUsesProxiedClient:(_Bool)arg4 issueExtension:(_Bool *)arg5 error:(id *)arg6;	// IMP=0x000000000000a96c
- (_Bool)_shouldAttemptToIssueSandboxExtensionUsingLegacyPolicyForContainerConfig:(id)arg1 identifier:(id)arg2;	// IMP=0x000000000000a83d
- (_Bool)_isClientAffordedSandboxForContainerIdentifier:(id)arg1 containerConfig:(id)arg2;	// IMP=0x000000000000a6e3
- (_Bool)_isAllowedAccessToNonRestrictedProtectedContainerWithIdentifier:(id)arg1 clientIdentifier:(id)arg2 containerConfig:(id)arg3;	// IMP=0x000000000000a427
- (_Bool)_checkIsAllowedToHaveSandboxExtensionForRestrictedContainerPath:(id)arg1 identifier:(id)arg2 containerConfig:(id)arg3 allowed:(_Bool *)arg4 error:(id *)arg5;	// IMP=0x0000000000009e24
- (_Bool)_checkIsAllowedToHaveSandboxExtensionForIdentity:(id)arg1 containerPath:(id)arg2 containerConfig:(id)arg3 allowed:(_Bool *)arg4 error:(id *)arg5;	// IMP=0x0000000000009b58
- (_Bool)isAllowedToChangeReferences;	// IMP=0x0000000000009ac4
- (_Bool)isAllowedToReadReferences;	// IMP=0x0000000000009a30
- (_Bool)isAllowedToAccessUserAssets;	// IMP=0x000000000000999c
- (_Bool)isAllowedToStageSharedContent;	// IMP=0x0000000000009908
- (_Bool)isAllowedToStartUserDataMigration;	// IMP=0x0000000000009874
- (_Bool)isAllowedToStartDataMigration;	// IMP=0x00000000000097e0
- (_Bool)isAllowedToRestoreContainer;	// IMP=0x000000000000974c
- (_Bool)isAllowedToSetDataProtection;	// IMP=0x00000000000096b8
- (_Bool)isAllowedToAccessCodesignMapping;	// IMP=0x0000000000009624
- (_Bool)isAllowedToTest;	// IMP=0x0000000000009590
- (_Bool)isAllowedToWipeAnyDataContainer;	// IMP=0x00000000000094fc
- (_Bool)isAllowedToDelete;	// IMP=0x0000000000009468
- (_Bool)isAllowedToRegenerateDirectoryUUIDs;	// IMP=0x00000000000093d4
- (_Bool)isAllowedToRecreateContainerStructure;	// IMP=0x0000000000009340
- (_Bool)isAllowedToAccessInfoMetadata;	// IMP=0x00000000000092ac
- (_Bool)isAllowedToReplaceContainers;	// IMP=0x0000000000009218
- (_Bool)isAllowedToControlCaches;	// IMP=0x0000000000009184
- (_Bool)isAllowedToWipePlugInDataContainerWithIdentifier:(id)arg1;	// IMP=0x00000000000090ce
- (_Bool)isAllowedToLookupViaPrivateEntitlementWithClass:(unsigned long long)arg1 identifier:(id)arg2;	// IMP=0x0000000000009012
- (_Bool)isAllowedToLookupGroupContainersOfClass:(unsigned long long)arg1 ownedByIdentifiers:(id)arg2;	// IMP=0x0000000000008f56
- (_Bool)isAllowedToAccessContainerIdentity:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x0000000000008f11
- (_Bool)isAllowedToLookupContainerIdentity:(id)arg1;	// IMP=0x0000000000008da4
- (_Bool)isAllowedToLookupAllContainersOfClass:(unsigned long long)arg1;	// IMP=0x0000000000008d07
- (id)clientIdentityByChangingCached:(_Bool)arg1;	// IMP=0x0000000000008cbe
@property(readonly, nonatomic) id <MCMClientIdentity> proximateClient; // @synthesize proximateClient=_proximateClient;
@property(readonly, nonatomic) id <MCMAMFI> amfi;
- (struct container_client *)createLibsystemClient;	// IMP=0x0000000000008865
- (id)initWithPOSIXUser:(id)arg1 POSIXPID:(int)arg2 platform:(unsigned int)arg3 userIdentity:(id)arg4 proximateClient:(id)arg5 auditToken:(CDStruct_4c969caf)arg6 codeSignInfo:(id)arg7 sandboxed:(_Bool)arg8 sandboxContainerURL:(id)arg9 testClient:(_Bool)arg10 kernel:(_Bool)arg11;	// IMP=0x00000000000086f0
- (id)initInternal;	// IMP=0x000000000000869e
- (id)init;	// IMP=0x00000000000085fb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

