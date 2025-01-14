//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface FilesystemDownloadDataConsumer
{
    long long _bytesWritten;	// 8 = 0x8
    int _fd;	// 16 = 0x10
    _Bool _hasConsumedData;	// 20 = 0x14
    NSArray *_hashes;	// 24 = 0x18
    struct CC_MD5state_st _md5Context;	// 32 = 0x20
    long long _numberOfBytesToHash;	// 128 = 0x80
    NSString *_path;	// 136 = 0x88
    unsigned long long _resumptionOffset;	// 144 = 0x90
    long long _verifiedBytes;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x0020000000118d00
- (unsigned long long)resumptionOffset;	// IMP=0x0010000000118cef
- (_Bool)hasConsumedData;	// IMP=0x0010000000118cdf
- (void)_truncateToSize:(long long)arg1;	// IMP=0x0010000000118c7c
- (_Bool)_openFile;	// IMP=0x0010000000118a56
- (_Bool)_hashAndWriteData:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000118837
- (_Bool)_checkHashForByteCount:(long long)arg1;	// IMP=0x0010000000118341
- (void)truncate;	// IMP=0x001000000011832d
- (void)suspend;	// IMP=0x0010000000118301
- (void)reset;	// IMP=0x00100000001182bd
- (_Bool)finish:(id *)arg1;	// IMP=0x00100000001181dd
- (unsigned long long)diskUsage;	// IMP=0x00100000001181cc
- (_Bool)consumeData:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000118054
- (void)dealloc;	// IMP=0x001000000011800f
- (id)initWithPath:(id)arg1 MD5Hashes:(id)arg2 numberOfBytesToHash:(long long)arg3;	// IMP=0x0010000000117efc

@end

