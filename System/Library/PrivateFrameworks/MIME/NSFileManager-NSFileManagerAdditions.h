//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (NSFileManagerAdditions)
+ (id)mf_defaultVolumeMountPoint;	// IMP=0x00300000000337ce
- (id)mf_verifyProtectionClassesForFilesInDirectory:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000003489c
- (id)mf_valueForExtendedAttribute:(id)arg1 ofItemAtPath:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000345c9
- (_Bool)mf_setValue:(id)arg1 forExtendedAttribute:(id)arg2 ofItemAtPath:(id)arg3 error:(id *)arg4;	// IMP=0x001000000003438c
- (_Bool)mf_protectFileAtPath:(id)arg1 withClass:(long long)arg2 error:(id *)arg3;	// IMP=0x0010000000034375
- (id)mf_pathsAtDirectory:(id)arg1 beginningWithString:(id)arg2;	// IMP=0x00100000000340c6
- (long long)mf_sizeForDirectoryAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000033f0d
- (long long)mf_sizeForDirectoryAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000033e9a
- (id)mf_fileModificationDateAtPath:(id)arg1 traverseLink:(_Bool)arg2;	// IMP=0x0010000000033da4
- (id)mf_copyFileAtURLToContainer:(id)arg1 securityScoped:(_Bool)arg2 preferredFileName:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000033af3
- (_Bool)mf_canWriteToDirectoryAtPath:(id)arg1;	// IMP=0x0010000000033a26
- (_Bool)mf_makeCompletePath:(id)arg1 mode:(int)arg2;	// IMP=0x0010000000033a17
- (id)mf_makeUniqueFileInDirectory:(id)arg1;	// IMP=0x00100000000337db
@end
