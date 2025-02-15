//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSInputStream, NSString, OspreyBufferedOutputStream, OspreyMessageReader, OspreyMessageWriter;
@protocol OS_dispatch_queue;

@interface OspreyGRPCStreamingContext : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    CDUnknownBlockType _completion;	// 16 = 0x10
    OspreyMessageReader *_messageReader;	// 24 = 0x18
    OspreyMessageWriter *_messageWriter;	// 32 = 0x20
    NSInputStream *_inputStream;	// 40 = 0x28
    OspreyBufferedOutputStream *_outputStream;	// 48 = 0x30
    _Bool _closed;	// 56 = 0x38
    _Bool _compressionEnabled;	// 57 = 0x39
}

- (void).cxx_destruct;	// IMP=0x0000000000002394
@property(nonatomic, getter=isCompressionEnabled) _Bool compressionEnabled; // @synthesize compressionEnabled=_compressionEnabled;
- (void)_writeFrame:(id)arg1 compressed:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000000021bd
- (void)handleResponseData:(id)arg1;	// IMP=0x0000000000002121
- (void)completeWithError:(id)arg1;	// IMP=0x0000000000002046
- (void)bindToUrlRequest:(id)arg1;	// IMP=0x0000000000002022
- (void)finishWriting;	// IMP=0x0000000000001f9f
- (void)writeFrame:(id)arg1 compressed:(_Bool)arg2;	// IMP=0x0000000000001f8a
- (void)writeFrame:(id)arg1;	// IMP=0x0000000000001f71
- (id)initWithQueue:(id)arg1 responseHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000001cc0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

