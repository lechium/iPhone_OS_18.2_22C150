//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _LSDReadClient
{
}

- (void)getCurrentApplicationDefaultInfoForCategory:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ed499
- (void)getPreferredAppMarketplacesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ed28f
- (void)getHasEverChangedPreferredAppForCategory:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ed095
- (void)getEligibilityAnswerForDomain:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ecd4e
- (void)getRedactedAppexRecordForSystemAppexWithUUID:(id)arg1 node:(id)arg2 bundleIdentifier:(id)arg3 platform:(unsigned int)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000ec94a
- (void)getApplicationCategoryIdentifiersSetWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ec8d8
- (void)getSystemContentStoreWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ec5d2
- (void)getSessionLanguagesForImproperlyLocalizedProcessWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ec3ee
- (void)getSystemModeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ec352
- (void)getSettingsStoreConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ec1d9
- (void)getPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ec13e
- (void)mapPlugInBundleIdentifiersToContainingBundleIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000eba4d
- (void)mapBundleIdentifiers:(id)arg1 orMachOUUIDs:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000eaabe
- (void)getResourceValuesForKeys:(id)arg1 mimic:(id)arg2 preferredLocalizations:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000ea452
- (void)getAllUserActivityTypesAndDomainNamesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ea1cc
- (void)getBoundIconInfoForDocumentProxy:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e9e34
- (void)getWhetherTypeIdentifier:(id)arg1 conformsToTypeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000e9d73
- (void)getRelatedTypesOfTypeWithIdentifier:(id)arg1 maximumDegreeOfSeparation:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000e9af2
- (void)getTypeRecordForImportedTypeWithIdentifier:(id)arg1 conformingToIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000e9a13
- (void)getTypeRecordsWithTag:(id)arg1 ofClass:(id)arg2 conformingToIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000e990a
- (void)getTypeRecordWithTag:(id)arg1 ofClass:(id)arg2 conformingToIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000e9801
- (void)getTypeRecordsWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e9725
- (void)getTypeRecordWithIdentifier:(id)arg1 allowUndeclared:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000e9656
- (void)getExtensionPointRecordForCurrentProcessWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e94f7
- (void)getExtensionPointRecordWithIdentifier:(id)arg1 platform:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000e940c
- (void)getBundleRecordForCoreTypesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e9354
- (void)getBundleProxyForCurrentProcessWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e918c
- (void)getBundleRecordForCurrentProcessWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e8e33
- (void)resolveQueries:(id)arg1 legacySPI:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000e89ec
- (void)getKnowledgeUUIDAndSequenceNumberWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e883b
- (void)getDiskUsage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e8666
- (void)getKernelPackageExtensionsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e857f
- (void)getServerStoreNonBlockingWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e83bb
- (void)getServerStatusWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e836e
- (void)invokeServiceInvocation:(id)arg1 isReply:(_Bool)arg2;	// IMP=0x00000000000e8278
- (void)willHandleInvocation:(id)arg1 isReply:(_Bool)arg2;	// IMP=0x00000000000e819d

@end
