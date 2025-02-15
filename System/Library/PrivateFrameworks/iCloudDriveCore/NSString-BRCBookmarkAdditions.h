//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (BRCBookmarkAdditions)
+ (id)bookmarkDataWithDocumentID:(id)arg1 serverZone:(id)arg2;	// IMP=0x0080000000006276
+ (id)itemResolutionStringWithDocumentID:(id)arg1;	// IMP=0x008000000000621c
+ (id)bookmarkDataWithItemResolutionString:(id)arg1 serverZone:(id)arg2;	// IMP=0x0080000000006132
+ (id)unsaltedBookmarkDataWithItemResolutionString:(id)arg1 serverZoneMangledID:(id)arg2;	// IMP=0x008000000000609c
+ (id)bookmarkDataWithItemResolutionString:(id)arg1 serverZoneMangledID:(id)arg2 saltAccountDSID:(id)arg3;	// IMP=0x0080000000005f65
+ (id)brc_groupDownloadStagePath;	// IMP=0x0080000000101183
+ (id)_brc_fileProviderStoragePath;	// IMP=0x00800000001010cd
+ (id)br_currentMobileDocumentsDirWithRefreshCache:(_Bool)arg1;	// IMP=0x00800000001008b7
+ (id)br_currentMobileDocumentsDir;	// IMP=0x00800000001008a3
+ (id)brc_locateUbiquityTokenSaltInOldAccountPath:(id)arg1;	// IMP=0x0080000000100435
+ (id)ubiquityTokenSaltFilename;	// IMP=0x0080000000100428
+ (id)brc_accountIDPathForAccountPath:(id)arg1;	// IMP=0x008000000010040c
+ (id)brc_currentCachesDir;	// IMP=0x0080000000100195
+ (id)brc_hexadecimalStringWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0080000000196945
+ (void)brc_addForcedPackageExtension:(id)arg1;	// IMP=0x00800000001fc18e
+ (void)brc_loadForcedPackageExtensionsForCurrentPersona;	// IMP=0x00800000001fb7e4
+ (void)brc_closeForcedPackageExtensionsForPersona:(id)arg1;	// IMP=0x00800000001fb796
+ (id)bookmarkDataWithItemResolutionString:(id)arg1 serverZoneName:(id)arg2 ownerName:(id)arg3 accountDSID:(id)arg4 salted:(_Bool)arg5;	// IMP=0x00800000002048a9
- (_Bool)parseBookmarkDataWithAccountSession:(id)arg1 docID:(id *)arg2 itemID:(id *)arg3 mangledID:(id *)arg4 unsaltedBookmarkData:(id *)arg5 error:(id *)arg6;	// IMP=0x00100000000067e3
- (_Bool)parseUnsaltedBookmarkDataWithItemID:(id *)arg1 mangledID:(id *)arg2 error:(id *)arg3;	// IMP=0x0010000000006302
- (id)brc_dataFromHexidecimalString;	// IMP=0x0010000000196cce
- (id)brc_SHA256WithSalt:(id)arg1;	// IMP=0x0010000000196bd2
- (id)brc_SHA1WithSalt:(id)arg1;	// IMP=0x0010000000196ae9
- (id)brc_SHA256;	// IMP=0x0010000000196a45
- (_Bool)brc_isBlacklistedPackageExtension;	// IMP=0x00100000001fc28d
- (_Bool)brc_isForcedPackageExtension;	// IMP=0x00100000001fc21a
- (id)brc_fixDocumentExtensionIfNeededForShareURL:(id)arg1;	// IMP=0x0010000000224617
- (id)brc_mangledNameFromURLFragment:(_Bool)arg1;	// IMP=0x001000000026ca98
@end

