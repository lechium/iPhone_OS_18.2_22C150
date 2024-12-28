//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOutputStream.h>

@class NSMutableData, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface OspreyBufferedOutputStream : NSOutputStream
{
    NSMutableData *_outputBuffer;	// 8 = 0x8
    NSOutputStream *_outputStream;	// 16 = 0x10
    _Bool _closed;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000002acf
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;	// IMP=0x00000000000029ec
- (_Bool)_flushBuffer;	// IMP=0x00000000000027c7
- (void)_closeUnderlying;	// IMP=0x000000000000273d
- (void)dealloc;	// IMP=0x00000000000026ff
- (void)close;	// IMP=0x0000000000002647
- (id)streamError;	// IMP=0x000000000000262a
- (_Bool)hasBufferedData;	// IMP=0x0000000000002606
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;	// IMP=0x0000000000002533
- (_Bool)hasSpaceAvailable;	// IMP=0x00000000000024e2
- (id)initWithBufferSize:(unsigned long long)arg1 underlyingOutputStream:(id)arg2 queue:(id)arg3;	// IMP=0x00000000000023e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
