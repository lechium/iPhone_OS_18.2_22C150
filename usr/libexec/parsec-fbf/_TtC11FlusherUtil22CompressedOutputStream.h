//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOutputStream.h>

@class MISSING_TYPE, NSError, NSString;

@interface _TtC11FlusherUtil22CompressedOutputStream : NSOutputStream
{
    MISSING_TYPE *outputStream;	// 8 = 0x8
    MISSING_TYPE *stream;	// 16 = 0x10
    MISSING_TYPE *status;	// 56 = 0x38
    MISSING_TYPE *destBuffer;	// 64 = 0x40
    MISSING_TYPE *shaContext;	// 72 = 0x48
    MISSING_TYPE *digest;	// 280 = 0x118
    MISSING_TYPE *_uncompressedBytesWritten;	// 288 = 0x120
    MISSING_TYPE *_compressedBytesWritten;	// 296 = 0x128
}

- (void).cxx_destruct;	// IMP=0x00400000000a3b6b
- (id)initWithURL:(id)arg1 append:(_Bool)arg2;	// IMP=0x00100000000a3b08
- (id)initToBuffer:(char *)arg1 capacity:(long long)arg2;	// IMP=0x00100000000a3add
- (id)initToMemory;	// IMP=0x00100000000a3ab2
- (void)close;	// IMP=0x00100000000a3a6b
- (void)open;	// IMP=0x00100000000a3744
@property(nonatomic, readonly) NSError *streamError;
@property(nonatomic, readonly) unsigned long long streamStatus;
@property(nonatomic, readonly) _Bool hasSpaceAvailable;
- (long long)write:(const char *)arg1 maxLength:(long long)arg2;	// IMP=0x00100000000a35f2
@property(nonatomic, readonly) NSString *dataDigestForStream;
- (id)initWithOutputStream:(id)arg1;	// IMP=0x00100000000a30fe
- (id)init;	// IMP=0x00100000000a2e9a
@property(nonatomic, readonly) long long compressedBytesWritten;
@property(nonatomic, readonly) long long uncompressedBytesWritten;
@property(nonatomic, readonly) NSOutputStream *outputStream; // @synthesize outputStream;

@end

