//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class NSPersonNameComponents, NSString;

@interface NSURL (BRCPathAdditions)
+ (id)brc_ciconiaDumpDirForCurrentPersona;	// IMP=0x002000000000cd69
+ (id)brc_ciconiaWorkDirForCurrentPersona;	// IMP=0x002000000000c9f2
+ (id)brc_fileURLWithVolumeDeviceID:(id)arg1 fileID:(id)arg2 isDirectory:(_Bool)arg3;	// IMP=0x002000000000c7a7
+ (id)brc_fileURLWithVolumeDeviceID:(id)arg1 fileID:(id)arg2 isDirectory:(_Bool)arg3 withError:(id *)arg4;	// IMP=0x002000000000c681
+ (id)brc_fileURLWithFileDescriptor:(int)arg1;	// IMP=0x002000000000c4eb
+ (void)br_containerIDsWithExternalReferencesTo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x002000000005bf61
+ (id)br_documentURLFromBookmarkableString:(id)arg1 error:(id *)arg2;	// IMP=0x002000000005ba20
+ (void)br_documentURLFromBookmarkableString:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x002000000005b845
+ (id)br_documentURLFromFileObjectID:(id)arg1 error:(id *)arg2;	// IMP=0x002000000005b678
+ (void)br_bookmarkableStringForURL:(id)arg1 withEtag:(_Bool)arg2 onlyAllowItemKnowByServer:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x002000000005b2ad
+ (void)br_bookmarkableStringForURL:(id)arg1 withEtag:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x002000000005b28e
+ (void)_br_bookmarkableStringForURL:(id)arg1 remoteOpeningAppWithBundleID:(id)arg2 onlyAllowItemKnowByServer:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x002000000005add0
+ (void)br_datalessMaterializationOffForBlock:(CDUnknownBlockType)arg1;	// IMP=0x002000000005a372
+ (void)br_setIOPolicy:(int)arg1 type:(int)arg2 forBlock:(CDUnknownBlockType)arg3;	// IMP=0x002000000005a16f
+ (_Bool)br_isURL:(id)arg1 syncRootOwnedByICloudDrive:(_Bool *)arg2 withError:(id *)arg3;	// IMP=0x002000000005fafe
- (_Bool)brc_isDirectory:(_Bool *)arg1 isExists:(_Bool *)arg2 withError:(id *)arg3;	// IMP=0x001000000000d04e
- (id)brc_issueSandboxExtensionOfClass:(const char *)arg1 error:(id *)arg2;	// IMP=0x001000000000c7bc
- (id)_br_clientSideCollaborationServiceSyncProxy;	// IMP=0x00100000000492cf
- (void)_br_fetchItemServiceSyncProxy:(CDUnknownBlockType)arg1;	// IMP=0x00100000000492b0
- (id)_br_itemServiceSyncProxy;	// IMP=0x0010000000049294
- (_Bool)br_setTagNames:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004acb3
- (_Bool)br_getTagNames:(id *)arg1 error:(id *)arg2;	// IMP=0x001000000004a1f2
- (id)br_addFakeConflictLoserFromItemAtURL:(id)arg1 lastEditorDeviceName:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000058962
- (id)br_addFakeConflictLoserFromItemAtURL:(id)arg1 lastEditorDeviceName:(id)arg2 lastEditorUserName:(id)arg3 error:(id *)arg4;	// IMP=0x001000000005894d
@property(readonly, nonatomic) NSPersonNameComponents *br_lastEditorNameComponents;
@property(readonly, nonatomic) NSString *br_lastEditorName;
@property(readonly, nonatomic) NSString *br_lastEditorDeviceName;
- (id)br_getSyncRootWithError:(id *)arg1;	// IMP=0x001000000005f71b
- (id)br_isDatalessWithError:(id *)arg1;	// IMP=0x001000000005f709
- (id)br_creatorNameComponentsWithError:(id *)arg1;	// IMP=0x001000000005f2a8
- (_Bool)br_isModifiedSinceShared;	// IMP=0x001000000005f246
- (_Bool)br_isTopLevelSharedItem;	// IMP=0x001000000005f1e4
- (unsigned short)br_capabilityToMoveToURL:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005f01b
- (_Bool)br_isSymLink;	// IMP=0x001000000005ef96
- (_Bool)br_wouldBeExcludedFromSync;	// IMP=0x001000000005ef4d
- (id)br_typeIdentifierWithError:(id *)arg1;	// IMP=0x001000000005eee2
- (_Bool)br_setAccessTime:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x001000000005ec57
- (void)br_addPhysicalProperty;	// IMP=0x001000000005ebd0
- (_Bool)br_isPromiseURL;	// IMP=0x001000000005ebc0
- (id)br_logicalURL;	// IMP=0x001000000005eb78
- (id)br_documentRecordIDWithError:(id *)arg1;	// IMP=0x001000000005eb57
- (id)br_itemID;	// IMP=0x001000000005ea00
- (id)br_URLByResolvingExternalDocumentReferenceWithError:(id *)arg1;	// IMP=0x001000000005e382
- (id)br_URLByResolvingInProcessExternalDocumentReferenceWithProperties:(id)arg1;	// IMP=0x001000000005dd33
- (id)br_externalDocumentPropertiesWithError:(id *)arg1;	// IMP=0x001000000005dbac
- (_Bool)br_isExternalDocumentReference;	// IMP=0x001000000005da7a
- (id)br_cloudDocsContainer;	// IMP=0x001000000005d891
- (_Bool)br_mightBeBRAlias;	// IMP=0x001000000005d7fc
- (_Bool)br_isDocumentsContainer;	// IMP=0x001000000005d7c9
- (id)br_containerIDIfIsDesktopOrDocumentsURL;	// IMP=0x001000000005d7c1
- (id)br_containerIDIfIsDocumentsContainerURL;	// IMP=0x001000000005d163
- (id)br_containerID;	// IMP=0x001000000005d04b
- (_Bool)br_isInSharedDocsContainer;	// IMP=0x001000000005d043
- (void)br_isConflictedWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000005cf7b
- (_Bool)br_isInCloudDocsPrivateStoragesForRemoteDocumentVersions;	// IMP=0x001000000005cdd7
- (_Bool)br_isInCloudDocsPrivateStorages;	// IMP=0x001000000005cc5c
- (_Bool)_br_isInSyncedLocationStrictly:(_Bool)arg1;	// IMP=0x001000000005cb85
- (_Bool)_br_isInSyncedLocationWithCurrentPersonaID:(id)arg1 strictly:(_Bool)arg2 foundHomeDirectory:(_Bool)arg3 adoptionError:(id)arg4;	// IMP=0x001000000005cb73
- (_Bool)_br_mightBeInSyncedLocationUnderCurrentPersonaID:(id)arg1 strictly:(_Bool)arg2;	// IMP=0x001000000005ca0a
- (_Bool)br_isStrictlyInSyncedLocation;	// IMP=0x001000000005c9f3
- (_Bool)br_isInSyncedLocation;	// IMP=0x001000000005c9df
- (_Bool)br_isInSyncedDocuments;	// IMP=0x001000000005c8d8
- (_Bool)br_isInSyncedDesktop;	// IMP=0x001000000005c7d1
- (_Bool)br_isInMobileDocuments;	// IMP=0x001000000005c7bf
- (_Bool)br_isInTrash;	// IMP=0x001000000005c68e
- (id)br_debugDescription;	// IMP=0x001000000005c35f
- (id)br_pathRelativeToMobileDocuments;	// IMP=0x001000000005c1e3
- (id)br_pathRelativeToSyncedRootURLForContainerID:(id)arg1;	// IMP=0x001000000005c0b6
- (void)br_containerIDsWithExternalReferencesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000005bdf2
- (void)br_bookmarkableStringForRemoteOpeningAppWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005b5be
- (void)br_bookmarkableStringWithEtag:(_Bool)arg1 onlyAllowItemKnowByServer:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005b26a
- (void)br_bookmarkableStringWithEtag:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005b253
- (id)br_cachedBookmarkData;	// IMP=0x001000000005ad8e
- (void)br_preCacheBookmarkData:(id)arg1 versionEtag:(id)arg2;	// IMP=0x001000000005ad09
- (_Bool)br_isExistWithNonMateralizingIOPolicy:(_Bool)arg1;	// IMP=0x001000000005abaa
- (_Bool)br_isParentOfURL:(id)arg1 ignoreHomeDirectoryCheck:(_Bool)arg2;	// IMP=0x001000000005ab56
- (_Bool)br_isParentOfURL:(id)arg1;	// IMP=0x001000000005ab42
- (_Bool)br_isParentOfURL:(id)arg1 strictly:(_Bool)arg2;	// IMP=0x001000000005aaee
- (_Bool)_br_isParentOfURL:(id)arg1 strictly:(_Bool)arg2 withNonMateralizingIOPolicy:(_Bool)arg3 ignoreHomeDirectoryCheck:(_Bool)arg4;	// IMP=0x001000000005a975
- (_Bool)_br_isParentOfURL:(id)arg1 strictly:(_Bool)arg2 ignoreHomeDirectoryCheck:(_Bool)arg3;	// IMP=0x001000000005a5a7
- (_Bool)br_isInLocalHomeDirectory;	// IMP=0x001000000005a4c8
- (id)br_realpathURLWithIsDirectory:(_Bool)arg1;	// IMP=0x001000000005a428
- (id)br_realpathURL;	// IMP=0x001000000005a398
- (_Bool)br_isRootOwned;	// IMP=0x0010000000060260
- (_Bool)br_isIgnoredByFileProviderWithError:(id *)arg1;	// IMP=0x0010000000060124
- (_Bool)br_isIgnoredByFileProvider;	// IMP=0x0010000000060110
- (_Bool)br_getBirthDate:(long long *)arg1;	// IMP=0x001000000005ffe7
- (id)_br_getAttributeValue:(id)arg1 withSecondaryConnection:(_Bool)arg2 withError:(id *)arg3;	// IMP=0x001000000005fc04
- (_Bool)br_mightBeOnDataSeparatedVolume;	// IMP=0x001000000006089a
- (id)br_containerIDWithCurrentPersonaID:(id)arg1 needsPersonaSwitch:(_Bool)arg2;	// IMP=0x0010000000060733
- (id)br_containerIDWithCurrentPersonaID:(id)arg1;	// IMP=0x001000000006071f
- (id)br_pathRelativeToSyncedRootURL:(id)arg1 currentPersonaID:(id)arg2;	// IMP=0x00100000000605b5
- (_Bool)_br_isInLocalHomeDirectoryUnderCurrentPersona;	// IMP=0x0010000000060559
- (_Bool)_br_isInLocalHomeDirectoryUnderPersona:(id)arg1 needsPersonaSwitch:(_Bool)arg2;	// IMP=0x0010000000060491
- (_Bool)_br_isInPersonaRoot:(id)arg1;	// IMP=0x00100000000602cc
- (id)br_physicalURL;	// IMP=0x0010000000078a45
@end
