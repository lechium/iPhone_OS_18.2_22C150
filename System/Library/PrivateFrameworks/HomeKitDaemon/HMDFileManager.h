//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface HMDFileManager : HMFObject
{
}

- (_Bool)createFileAtPath:(id)arg1 contents:(id)arg2 attributes:(id)arg3;	// IMP=0x0000000000aac02c
- (id)attributesOfItemAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000aabf9f
- (_Bool)moveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000aabf0a
- (id)contentsOfDirectoryAtURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0000000000aabe63
- (void)enumerateItemsAtURL:(id)arg1 includingPropertiesForKeys:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000aabcb4
- (_Bool)isDeletableFileAtPath:(id)arg1;	// IMP=0x0000000000aabc42
- (id)fileHandleForReadingFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000aabc29
- (_Bool)linkItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000aabb94
- (_Bool)writeJSONObject:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000aaba9c
- (id)JSONObjectWithURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000aab9c8
- (_Bool)zipItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000aab7f7
- (_Bool)unzipItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000aab59d
- (_Bool)removeItemAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000aab51e
- (_Bool)writeDictionary:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000aab503
- (_Bool)writeData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0000000000aab4e5
- (id)dataWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000aab4cc
- (_Bool)fileExistsAtURL:(id)arg1;	// IMP=0x0000000000aab433
- (_Bool)fileExistsAtPath:(id)arg1 isDirectory:(_Bool *)arg2;	// IMP=0x0000000000aab3b4
- (_Bool)fileExistsAtPath:(id)arg1;	// IMP=0x0000000000aab342
- (_Bool)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000aab2ad
- (_Bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(_Bool)arg2 attributes:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000aab214
@property(readonly, copy) NSURL *legacyHeroFrameStoreDirectoryURL;
@property(readonly, copy) NSURL *heroFrameStoreDirectoryURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

