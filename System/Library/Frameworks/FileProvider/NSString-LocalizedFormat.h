//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (LocalizedFormat)
+ (id)fp_coordinatorReadingOptions:(unsigned long long)arg1;	// IMP=0x0020000000097764
+ (id)fp_hashForToken:(id)arg1;	// IMP=0x00200000000975f1
+ (struct __CFStringTokenizer *)fp_wordTokenizer;	// IMP=0x00200000000973e7
+ (id)fp_representableHFSFileNameWithBase:(id)arg1 suffix:(id)arg2 extension:(id)arg3 makeDotFile:(_Bool)arg4;	// IMP=0x0020000000096b6d
+ (unsigned long long)fp_maximumBounceLevel;	// IMP=0x0020000000095635
+ (id)fp_commonParentPathForItemURLs:(id)arg1;	// IMP=0x0020000000095083
+ (id)fp_pathWithFileSystemRepresentation:(const char *)arg1;	// IMP=0x0020000000095009
+ (id)_fpd_pathWithFileSystemRepresentation:(const char *)arg1;	// IMP=0x0020000000094e3d
+ (id)fp_fromParsedDiskIdentifier:(long long)arg1;	// IMP=0x00200000000948ee
+ (id)fp_providerDomainIDFromProviderID:(id)arg1 domainIdentifier:(id)arg2;	// IMP=0x00200000000a47ac
+ (id)fpfs_initWithFSEventsFlags:(unsigned int)arg1;	// IMP=0x00200000000eb786
+ (id)fp_defaultProviderDomainID;	// IMP=0x00200000001391e2
+ (void)setFp_defaultProviderDomainID:(id)arg1;	// IMP=0x002000000013913b
- (id)fp_formatStringWithValues:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000003b81
- (id)fp_localizedFormatWithKeys:(id)arg1 fromDictionary:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000037d4
- (_Bool)fp_isValidProviderIdentifierWithError:(id *)arg1;	// IMP=0x0010000000085ab2
- (_Bool)fp_usesDSCopyEngine;	// IMP=0x0010000000085a13
- (_Bool)fp_isValidDomainIdentifierWithError:(id *)arg1;	// IMP=0x001000000008b647
- (id)fp_relativePathWithRealpath:(id)arg1;	// IMP=0x001000000009796d
- (id)fp_valueForKeyPath:(id)arg1;	// IMP=0x001000000009791c
- (_Bool)fp_splitKeyPathInProperty:(id *)arg1 remainder:(id *)arg2;	// IMP=0x0010000000097836
- (_Bool)fp_isCJKLanguageIdentifier;	// IMP=0x001000000009758c
- (void)fp_enumerateTokensInRange:(struct _NSRange)arg1 tokenizer:(struct __CFStringTokenizer *)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000009743d
- (id)fp_stringByDeletingPathExtension;	// IMP=0x001000000009733e
- (id)fp_pathExtension;	// IMP=0x001000000009729a
- (id)fp_representableHFSFileNameWithNumber:(id)arg1 addedExtension:(id)arg2 makeDotFile:(_Bool)arg3;	// IMP=0x001000000009720b
- (id)fp_representableHFSFileNameWithNumber:(id)arg1 addedExtension:(id)arg2 makeDotFile:(_Bool)arg3 isDir:(_Bool)arg4;	// IMP=0x0010000000097179
- (id)fp_representableHFSFileNameWithSuffix:(id)arg1 addedExtension:(id)arg2 makeDotFile:(_Bool)arg3 isDir:(_Bool)arg4;	// IMP=0x001000000009701a
- (const char *)fp_fileSystemRepresentation;	// IMP=0x0010000000096b26
- (id)fp_bouncedNameWithIndex:(long long)arg1;	// IMP=0x0010000000096b12
- (id)fp_bouncedNameWithIndex:(long long)arg1 isDir:(_Bool)arg2;	// IMP=0x001000000009698f
@property(readonly, nonatomic) NSString *fp_obfuscatedProviderDomainID;
- (id)fp_obfuscatedPath;	// IMP=0x0010000000096874
- (id)fp_alwaysObfuscatedPath;	// IMP=0x0010000000096868
- (id)fp_prettyPath;	// IMP=0x0010000000096841
- (id)fp_prettyPathWithObfuscation:(_Bool)arg1;	// IMP=0x001000000009633c
- (id)fp_alwaysObfuscatedExtendedAttributeName;	// IMP=0x0010000000096017
- (id)fp_obfuscatedExtendedAttributeName;	// IMP=0x0010000000095fce
- (id)fp_alwaysObfuscatedDotSeparatedComponents;	// IMP=0x0010000000095e81
- (id)fp_obfuscatedDotSeparatedComponents;	// IMP=0x0010000000095e38
- (id)fp_alwaysObfuscatedFilename;	// IMP=0x0010000000095b34
- (id)fp_obfuscatedFilename;	// IMP=0x0010000000095aeb
- (id)fp_stringByDeletingPathBounceNo:(id *)arg1 andPathExtension:(id *)arg2 isFolder:(_Bool)arg3;	// IMP=0x0010000000095655
- (id)fp_stringByDeletingPathBounceNo:(id *)arg1 andPathExtension:(id *)arg2;	// IMP=0x0010000000095640
- (id)fp_filenameFromDisplayNameWithExtension:(id)arg1;	// IMP=0x0010000000094f45
- (id)fp_displayNameFromFilenameWithHiddenPathExtension:(_Bool)arg1 isFolder:(_Bool)arg2;	// IMP=0x0010000000094eb7
- (id)fp_libnotifyPerUserNotificationName;	// IMP=0x0010000000094e05
- (id)fp_realpath;	// IMP=0x0010000000094a07
- (_Bool)fp_getParsedDiskIdentifier:(long long *)arg1;	// IMP=0x0010000000094742
- (_Bool)fp_isiCloudDriveIdentifier;	// IMP=0x00100000000946ff
- (_Bool)fp_isLegacyCloudDocsIdentifier;	// IMP=0x00100000000946bc
- (_Bool)fp_isiCloudDriveOrCloudDocsIdentifier;	// IMP=0x001000000009464b
- (id)fp_fpIdentifier;	// IMP=0x0010000000094518
- (_Bool)fp_isCiconiaDomain;	// IMP=0x00100000000a49d8
- (id)fp_toProviderID;	// IMP=0x00100000000a4978
- (id)fp_toDomainIdentifier;	// IMP=0x00100000000a490e
- (id)_fp_escapedStringForSearchQuery;	// IMP=0x00100000000ff0e7
@end
