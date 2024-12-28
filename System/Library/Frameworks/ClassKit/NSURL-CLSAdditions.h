//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (CLSAdditions)
+ (id)cls_draftsURLAndReturnError:(id *)arg1;	// IMP=0x002000000001d049
+ (id)cls_draftsURL;	// IMP=0x002000000001d035
+ (id)cls_documentsURLAndReturnError:(id *)arg1;	// IMP=0x002000000001cf5d
+ (id)cls_documentsURL;	// IMP=0x002000000001cf49
+ (void)cls_getUbiquitousContainerURLWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x002000000001ce29
+ (id)cls_ubiquitousContainerURL;	// IMP=0x002000000001cd6f
+ (id)cls_configURL;	// IMP=0x002000000001cca0
+ (id)cls_libraryURL;	// IMP=0x002000000001cb74
+ (_Bool)cls_deleteFileAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x002000000001f1b5
+ (void)cls_deleteFileAtExpectedURL:(id)arg1 containerURL:(id)arg2 itemID:(id)arg3 ownerName:(id)arg4 zoneName:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x002000000001f049
+ (void)cls_urlSuitableForOpeningForExpectedURL:(id)arg1 containerURL:(id)arg2 itemID:(id)arg3 ownerName:(id)arg4 zoneName:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x002000000001dbc3
+ (id)cls_ubiquitousContainerURL_Imp:(id *)arg1;	// IMP=0x002000000001d972
- (unsigned long long)_cls_stableHash;	// IMP=0x001000000001d92e
- (void)cls_removeCachedResourceValueForKeys:(id)arg1;	// IMP=0x001000000001d804
- (id)cls_createDirectoryIfNeeded:(id *)arg1;	// IMP=0x001000000001d63e
- (_Bool)cls_isParentOfURL:(id)arg1;	// IMP=0x001000000001d5a6
@property(readonly, nonatomic) _Bool cls_fileExists;
@property(readonly, nonatomic) _Bool cls_isUploaded;
@property(readonly, nonatomic) _Bool cls_isUbiquitous;
- (id)cls_pathRelativeToURL:(id)arg1;	// IMP=0x001000000001d121
- (id)deleteContent;	// IMP=0x0010000000020f31
- (long long)totalAllocatedSizeIncludingSubDirectories:(_Bool)arg1 error:(id *)arg2;	// IMP=0x001000000002090f
- (void)attachSandboxExtensionToken:(id)arg1;	// IMP=0x0010000000020902
- (id)sandboxExtensionTokenForProcess:(CDStruct_6ad76789)arg1;	// IMP=0x001000000002085d
- (id)sandboxExtensionTokenForAnyProcess;	// IMP=0x00100000000207d1
- (void)cls_performWithSandboxAccess:(CDUnknownBlockType)arg1;	// IMP=0x0010000000020765
- (void)cls_checkForCKShareWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000201e1
- (void)cls_createShareIfNeededWithOrgAdminUserRecordID:(id)arg1 userRecordID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001f48f
@end
