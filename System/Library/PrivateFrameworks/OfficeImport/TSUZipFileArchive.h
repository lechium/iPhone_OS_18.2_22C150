//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSURL, TSUZipFileDescriptorWrapper;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSUZipFileArchive
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    unsigned long long _archiveLength;	// 16 = 0x10
    TSUZipFileDescriptorWrapper *_fdWrapper;	// 24 = 0x18
    NSURL *_temporaryDirectoryURL;	// 32 = 0x20
    NSURL *_URL;	// 40 = 0x28
}

+ (id)zipArchiveFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00600000002ab211
+ (void)readArchiveFromURL:(id)arg1 options:(unsigned long long)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00600000002ab085
+ (_Bool)isZipArchiveAtFD:(int)arg1;	// IMP=0x00600000002aafcf
+ (_Bool)isZipArchiveAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x00600000002aae54
- (void).cxx_destruct;	// IMP=0x00000000002acdf1
- (id)debugDescription;	// IMP=0x00000000002acce5
- (_Bool)isValid;	// IMP=0x00000000002acbdd
- (id)newArchiveReadChannel;	// IMP=0x00000000002ac93d
- (unsigned long long)archiveLength;	// IMP=0x00000000002ac889
- (_Bool)copyToTemporaryLocationRelativeToURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002abfc6
- (_Bool)reopenWithTemporaryURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002abefc
- (void)removeTemporaryDirectory;	// IMP=0x00000000002abe03
- (void)createTemporaryDirectoryRelativeToURL:(id)arg1;	// IMP=0x00000000002abce0
- (void)dealloc;	// IMP=0x00000000002abc7d
- (id)initWithWriter:(id)arg1 forReadingFromURL:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x00000000002aba5f
- (_Bool)openWithURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002ab6aa
- (id)initForReadingFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000002ab52c
- (id)URL;	// IMP=0x00000000002ab070

@end
