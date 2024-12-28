//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (TSUAdditions)
+ (id)tsu_fileURLWithPath:(id)arg1;	// IMP=0x001000000028016c
+ (id)URLWithPackagePart:(id)arg1;	// IMP=0x001000000018ff7d
@property(readonly, getter=tsu_isInTrash) _Bool tsu_inTrash;
- (void)tsu_removeCachedResourceValueForKeys:(id)arg1;	// IMP=0x0010000000280511
- (id)tsu_fileProviderBookmarkableString;	// IMP=0x00100000002801a1
- (_Bool)tsu_isOnSameVolumeAs:(id)arg1;	// IMP=0x001000000027fec3
- (id)tsu_reachableFileURLByDeletingUnreachablePathComponents;	// IMP=0x001000000027fdc4
- (_Bool)tsu_isOnAPFSVolume;	// IMP=0x001000000027fd54
- (_Bool)tsu_isOnForeignVolume;	// IMP=0x001000000027fd4c
- (id)tsu_fileSystemTypeName;	// IMP=0x001000000027fb90
- (id)tsu_fileTypeIdentifierHandlingFileCoordinationPromises;	// IMP=0x001000000027fb4b
- (_Bool)tsu_setNeedsDocumentIdentifierAndReturnError:(out id *)arg1;	// IMP=0x001000000027fa54
- (_Bool)tsu_shareOwnerName:(out id *)arg1 error:(id *)arg2;	// IMP=0x001000000027f9df
- (id)tsu_shareOwnerName;	// IMP=0x001000000027f9a5
- (_Bool)tsu_isDocumentUploaded:(out _Bool *)arg1 error:(id *)arg2;	// IMP=0x001000000027f52c
- (_Bool)tsu_isDocumentUploaded;	// IMP=0x001000000027f504
- (_Bool)tsu_displayName:(out id *)arg1 error:(id *)arg2;	// IMP=0x001000000027f3a7
- (id)tsu_displayName;	// IMP=0x001000000027f36d
- (_Bool)tsu_isShareOwner:(out _Bool *)arg1 error:(id *)arg2;	// IMP=0x001000000027f365
- (_Bool)tsu_isShareOwner;	// IMP=0x001000000027f33d
- (_Bool)tsu_isShareCollaborator:(out _Bool *)arg1 error:(id *)arg2;	// IMP=0x001000000027f335
- (_Bool)tsu_isShareCollaborator;	// IMP=0x001000000027f30d
- (_Bool)_isShareRole:(out _Bool *)arg1 role:(id)arg2 error:(id *)arg3;	// IMP=0x001000000027f279
- (_Bool)tsu_isShared:(out _Bool *)arg1 error:(id *)arg2;	// IMP=0x001000000027f251
- (_Bool)tsu_isShared;	// IMP=0x001000000027f229
- (_Bool)tsu_fileSize:(out unsigned long long *)arg1 error:(id *)arg2;	// IMP=0x001000000027ee91
- (unsigned long long)tsu_fileSize;	// IMP=0x001000000027ee64
- (_Bool)tsu_isFileSizeTooLargeForSharing;	// IMP=0x001000000027ee48
- (void)tsu_performSecurityScopedResourceAccessAsynchronouslyUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000027eda7
- (void)tsu_performSecurityScopedResourceAccessUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000027ed48
- (id)tsu_documentIdentifier;	// IMP=0x001000000027ecec
@property(readonly) NSURL *URL;
- (_Bool)isInternalToPackage;	// IMP=0x0010000000190233
- (id)initWithPackagePart:(id)arg1;	// IMP=0x001000000018ffda

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
