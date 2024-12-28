//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface PETServiceMessageCompressor : NSObject
{
    NSMutableData *_srcBuf;	// 8 = 0x8
    NSMutableData *_dstBuf;	// 16 = 0x10
    struct {
        char *dst_ptr;
        unsigned long long dst_size;
        char *src_ptr;
        unsigned long long src_size;
        void *state;
    } _stream;	// 24 = 0x18
    _Bool _closed;	// 64 = 0x40
    NSMutableData *_compressedMessages;	// 72 = 0x48
}

+ (id)decompress:(id)arg1;	// IMP=0x0040000000002266
- (void).cxx_destruct;	// IMP=0x0020000000002233
@property(retain) NSMutableData *compressedMessages; // @synthesize compressedMessages=_compressedMessages;
- (void)close;	// IMP=0x00100000000020d6
- (void)_errorClose;	// IMP=0x00100000000020a8
- (void)_flushBuffer;	// IMP=0x0010000000001f22
- (void)addMessage:(id)arg1;	// IMP=0x0010000000001e4a
- (id)init;	// IMP=0x0010000000001cf3

@end
