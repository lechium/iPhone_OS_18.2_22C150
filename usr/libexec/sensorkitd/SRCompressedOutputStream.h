//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOutputStream.h>

@class MISSING_TYPE, NSFileHandle, NSMutableData;

@interface SRCompressedOutputStream : NSOutputStream
{
    int _algorithm;	// 8 = 0x8
    struct {
        char *dst_ptr;
        unsigned long long dst_size;
        char *src_ptr;
        unsigned long long src_size;
        void *state;
    } _compression_stream;	// 16 = 0x10
    unsigned long long _streamStatus;	// 56 = 0x38
    unsigned long long _bufferSize;	// 64 = 0x40
    NSFileHandle *_outputFileHandle;	// 72 = 0x48
    NSMutableData *_buffer;	// 80 = 0x50
}

+ (void)initialize;	// IMP=0x004000000001f1a0
- (unsigned long long)streamStatus;	// IMP=0x002000000001f9c0
- (_Bool)hasSpaceAvailable;	// IMP=0x001000000001f9b0
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;	// IMP=0x001000000001f7e0
- (void)close;	// IMP=0x001000000001f4f0
- (MISSING_TYPE *)open;	// IMP=0x001000000001f3e0
- (void)dealloc;	// IMP=0x001000000001f380

@end
