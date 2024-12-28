//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _LSDModifyClient
{
}

- (void)setPreferredAppMarketplaces:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000de28b
- (void)forceSaveForTestingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000de0c0
- (void)performUpdateOfPersonasOfBundleIDs:(id)arg1 toPersonaUniqueStrings:(id)arg2 operationUUID:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000000000ddf37
- (void)performPostUninstallationUnregistrationOfBundleID:(id)arg1 operationUUID:(id)arg2 unregisterType:(unsigned int)arg3 precondition:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x00000000000dda4a
- (void)performPostInstallationRegistration:(id)arg1 personaUniqueStrings:(id)arg2 operationUUID:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000000000dd289
- (_Bool)clientIsEntitledForPostInstallationOperations;	// IMP=0x00000000000dd12b
- (void)performShimmedUninstallOfApplicationWithIdentifier:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000dcfb5
- (void)performShimmedInstallOfArtifact:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000dce3f
- (void)setPreferenceValueForCallingApplication:(id)arg1 forKey:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000dc711
- (void)setPreferenceValue:(id)arg1 forKey:(id)arg2 forApplicationAtURL:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000dbe42
- (void)garbageCollectDatabaseWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000dba47
- (void)setUpdateAvailabilities:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000db75a
- (void)refreshContentInFrameworkAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000db3b1
- (void)unregisterApplicationAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000daf00
- (void)unregisterApplicationsAtMountPoint:(id)arg1 operationUUID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000d9e4f
- (void)uninstallApplication:(id)arg1 withOptions:(id)arg2 uninstallType:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000000000d9dbd
- (void)installApplication:(id)arg1 atURL:(id)arg2 withOptions:(id)arg3 installType:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x00000000000d9d2a
- (void)rebuildApplicationDatabasesForSystem:(_Bool)arg1 internal:(_Bool)arg2 user:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000d97dd
- (void)synchronizeWithMobileInstallation;	// IMP=0x00000000000d965d
- (void)updateRecordForApp:(id)arg1 withSINF:(id)arg2 iTunesMetadata:(id)arg3 placeholderMetadata:(id)arg4 sendNotification:(int)arg5 operationUUID:(id)arg6 returnSaveToken:(_Bool)arg7 completionHandler:(CDUnknownBlockType)arg8;	// IMP=0x00000000000d8b32
- (_Bool)clientHasMIEntitlement:(id)arg1;	// IMP=0x00000000000d8a73
- (void)resetServerStoreWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d887f
- (void)relaxApplicationTypeRequirements:(_Bool)arg1 forBundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000d8250
- (void)removeAllHandlerPrefsForBundleID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d7f83
- (void)removeAllHandlersWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d7b0f
- (void)removeHandlerForURLScheme:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d7681
- (void)setHandler:(id)arg1 version:(struct LSVersionNumber)arg2 forURLScheme:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000d6f3e
- (void)removeHandlerForContentType:(id)arg1 roles:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000d698e
- (void)setHandler:(id)arg1 version:(struct LSVersionNumber)arg2 roles:(unsigned int)arg3 forContentType:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000d6130
- (void)unregisterExtensionPoint:(id)arg1 platform:(unsigned int)arg2 withVersion:(id)arg3 parentBundleUnit:(unsigned int)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000d5e58
- (void)registerExtensionPoint:(id)arg1 platform:(unsigned int)arg2 declaringURL:(id)arg3 withInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000d59a9
- (void)updateContainerUnit:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d54fd
- (void)registerContainerURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d517f
- (void)unregisterBundleUnit:(unsigned int)arg1 options:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000d4c3f
- (void)registerItemInfo:(id)arg1 alias:(id)arg2 diskImageAlias:(id)arg3 bundleURL:(id)arg4 installationPlist:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000000d3e16
- (void)setDatabaseIsSeeded:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d3c38
- (void)willHandleInvocation:(id)arg1 isReply:(_Bool)arg2;	// IMP=0x00000000000d3ba4
- (_Bool)canRegisterContainer;	// IMP=0x00000000000d3b8e
- (_Bool)canRegisterURL:(id)arg1 withOptions:(unsigned int)arg2;	// IMP=0x00000000000d3b7c
- (_Bool)canUnregisterWithOptions:(unsigned int)arg1;	// IMP=0x00000000000d3b66
- (_Bool)_canRegisterOrUnregisterURL:(id)arg1 withOptions:(unsigned int)arg2;	// IMP=0x00000000000d3adf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
