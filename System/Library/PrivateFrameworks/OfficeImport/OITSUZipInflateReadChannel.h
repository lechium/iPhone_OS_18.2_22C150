//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol TSUStreamReadChannel;

__attribute__((visibility("hidden")))
@interface OITSUZipInflateReadChannel : NSObject
{
    id <TSUStreamReadChannel> _readChannel;	// 8 = 0x8
    unsigned long long _remainingUncompressedSize;	// 16 = 0x10
    unsigned int _CRC;	// 24 = 0x18
    _Bool _validateCRC;	// 28 = 0x1c
    struct z_stream_s _stream;	// 32 = 0x20
    unsigned long long _outBufferSize;	// 144 = 0x90
    char *_outBuffer;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x000000000029fb01
- (void)close;	// IMP=0x000000000029facf
- (void)handleFailureWithHandler:(CDUnknownBlockType)arg1 error:(id)arg2;	// IMP=0x000000000029fa3a
- (_Bool)processData:(id)arg1 inflateResult:(int *)arg2 CRC:(unsigned int *)arg3 isDone:(_Bool)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x000000000029f3dc
- (void)readWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000029f038
- (void)prepareBuffer;	// IMP=0x000000000029ef1e
- (void)dealloc;	// IMP=0x000000000029eecb
- (id)initWithReadChannel:(id)arg1 uncompressedSize:(unsigned long long)arg2 CRC:(unsigned int)arg3 validateCRC:(_Bool)arg4;	// IMP=0x000000000029eda6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
