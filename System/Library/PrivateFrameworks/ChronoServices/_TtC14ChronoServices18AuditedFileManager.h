//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFileManager.h>

@class MISSING_TYPE;

@interface _TtC14ChronoServices18AuditedFileManager : NSFileManager
{
    MISSING_TYPE *_lock;	// 8 = 0x8
    MISSING_TYPE *_lock_urls;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000007e680
- (id)init;	// IMP=0x000000000007e5a0
- (id)URLForDirectory:(unsigned long long)arg1 inDomain:(unsigned long long)arg2 appropriateForURL:(id)arg3 create:(_Bool)arg4 error:(id *)arg5;	// IMP=0x000000000007c5f0
- (_Bool)copyItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;	// IMP=0x000000000007bdf0
- (_Bool)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x000000000007bb90
- (_Bool)moveItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;	// IMP=0x000000000007b9f0
- (_Bool)moveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x000000000007b8a0
- (_Bool)removeItemAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x000000000007b760
- (_Bool)removeItemAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000007b580
- (_Bool)createDirectoryAtPath:(id)arg1 withIntermediateDirectories:(_Bool)arg2 attributes:(id)arg3 error:(id *)arg4;	// IMP=0x000000000007b390
- (_Bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(_Bool)arg2 attributes:(id)arg3 error:(id *)arg4;	// IMP=0x000000000007b0d0
- (_Bool)createFileAtPath:(id)arg1 contents:(id)arg2 attributes:(id)arg3;	// IMP=0x000000000007ae00

@end

