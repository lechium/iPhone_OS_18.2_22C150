//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (SafariNSFileManagerExtras)
- (_Bool)safari_imageExistsAtFileURL:(id)arg1;	// IMP=0x0070000000049cbf
- (_Bool)safari_zipContentsFromDirectory:(id)arg1 toZipFileURL:(id)arg2 error:(id *)arg3;	// IMP=0x0070000000049655
- (id)safari_topLevelDirectoriesAtURL:(id)arg1;	// IMP=0x0070000000048fe7
- (id)safari_createTemporaryDirectoryAppropriateForURL:(id)arg1 error:(id *)arg2;	// IMP=0x0070000000048fa6
- (void)safari_removeContentsOfDirectory:(id)arg1;	// IMP=0x0070000000048f92
- (void)safari_removeContentsOfDirectory:(id)arg1 preservingContainerManagerMetadata:(_Bool)arg2;	// IMP=0x0070000000048785
- (_Bool)safari_removeDirectoryIfEmpty:(id)arg1;	// IMP=0x007000000004875a
- (id)safari_frameworksDirectoryURLs;	// IMP=0x00700000000485c2
- (id)safari_pathWithUniqueFilenameForPath:(id)arg1;	// IMP=0x0070000000048416
- (_Bool)_safari_removeFileAtURL:(id)arg1 onlyIfFileExists:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00700000000482bb
- (_Bool)safari_removeFileOnlyAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x00700000000482a1
- (_Bool)safari_removeFileAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x007000000004828a
- (id)safari_moveFileAtSubpath:(id)arg1 relativeToFileHandle:(id)arg2 toUniqueSubpath:(id)arg3 relativeToFileHandle:(id)arg4 error:(id *)arg5 usingExistingFileRecoveryBlock:(CDUnknownBlockType)arg6;	// IMP=0x0070000000047b03
- (id)safari_moveFileAtSubpath:(id)arg1 relativeToFileHandle:(id)arg2 toUniqueSubpath:(id)arg3 relativeToFileHandle:(id)arg4 error:(id *)arg5;	// IMP=0x0070000000047aca
- (id)safari_createDirectoryWithUniqueName:(id)arg1 relativeToDirectoryFileHandle:(id)arg2 error:(id *)arg3;	// IMP=0x007000000004774c
- (id)safari_subpathOfURL:(id)arg1 relativeToDirectoryAtURL:(id)arg2 error:(id *)arg3;	// IMP=0x00700000000472e2
- (id)safari_createTemporaryDirectoryWithTemplate:(id)arg1;	// IMP=0x007000000004718c
- (id)safari_autoFillQuirksDownloadDirectoryURL;	// IMP=0x007000000004710d
- (id)safari_productionSafariSettingsDirectory;	// IMP=0x0070000000047029
- (id)safari_nonContaineredSettingsDirectoryURL;	// IMP=0x0070000000046f6e
- (id)safari_profileDirectoryURLWithID:(id)arg1 createIfNeeded:(_Bool)arg2;	// IMP=0x0070000000046e3f
- (id)safari_profilesDirectoryURL;	// IMP=0x0070000000046d60
- (id)safari_settingsDirectoryURL;	// IMP=0x0070000000046c79
- (id)safari_settingsDirectoryForHomeDirectory:(id)arg1;	// IMP=0x0070000000046c06
- (id)safari_canonicalSettingsDirectoryURL;	// IMP=0x0070000000046bf4
- (id)safari_webExtensionsSettingsDirectoryURL;	// IMP=0x0070000000046aee
- (id)safari_settingsDirectoryForLibraryDirectory:(id)arg1;	// IMP=0x0070000000046abd
- (id)safari_safariLibraryDirectory;	// IMP=0x007000000004692d
- (id)_safari_libraryDirectoryForHomeDirectory:(id)arg1;	// IMP=0x00700000000468fc
- (_Bool)safari_currentProcessIsContainerized;	// IMP=0x00700000000468d4
- (id)safari_mobileSafariGroupContainerDirectoryURL;	// IMP=0x00700000000467fa
- (id)safari_passwordsAppContainerDirectoryURL;	// IMP=0x00700000000467c0
- (id)safari_mobileSafariContainerDirectoryURL;	// IMP=0x0070000000046786
- (id)safari_subdirectoryWithName:(id)arg1 inUserDomainOfDirectory:(unsigned long long)arg2;	// IMP=0x007000000004663f
- (id)safari_ensureDirectoryExists:(id)arg1;	// IMP=0x0070000000046454
- (void)_safari_getPasswordsAppContainerDirectoryURL:(id *)arg1 isContainerized:(_Bool *)arg2;	// IMP=0x007000000004623b
- (id)safari_mobileSafariAppContainerDirectoryURLFromOutsideSafariAppContainer;	// IMP=0x007000000004614f
- (void)_safari_getMobileSafariContainerDirectoryURL:(id *)arg1 isContainerized:(_Bool *)arg2;	// IMP=0x0070000000045ecc
- (id)safari_startPageBackgroundImageFolderURL;	// IMP=0x0070000000045e5c
- (id)safari_startPageBackgroundImageThumbnailMobileAssetFolderURL;	// IMP=0x0070000000045dec
- (id)safari_startPageBackgroundImageMobileAssetFolderURL;	// IMP=0x0070000000045d7c
- (id)safari_startPageBackgroundImageFileURLForIdentifier:(id)arg1;	// IMP=0x0070000000045ce2
- (id)safari_startPageBackgroundImageFileURLForDefaultProfile;	// IMP=0x0070000000045c75
@end
