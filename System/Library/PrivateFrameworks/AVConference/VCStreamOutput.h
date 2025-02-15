//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCStreamOutput
{
    long long _streamToken;	// 88 = 0x58
    struct opaqueVCRemoteImageQueue *_remoteQueue;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;	// 104 = 0x68
    int _clientProcessID;	// 112 = 0x70
    struct __CFDictionary *_attributes;	// 120 = 0x78
    id _delegate;	// 128 = 0x80
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 136 = 0x88
    _Bool _isClientInProcess;	// 144 = 0x90
    _Bool _useFigRemoteQueue;	// 145 = 0x91
    struct __CFAllocator *_backingBufferAllocator;	// 152 = 0x98
}

@property(readonly) struct __CFAllocator *backingBufferAllocator; // @synthesize backingBufferAllocator=_backingBufferAllocator;
@property(readonly) _Bool isClientInProcess; // @synthesize isClientInProcess=_isClientInProcess;
@property(readonly, nonatomic) long long streamToken; // @synthesize streamToken=_streamToken;
- (int)processID;	// IMP=0x00000000001abb2d
- (void)didUpdateAttachments:(struct __CFDictionary *)arg1;	// IMP=0x00000000001aba36
- (void)didSuspend:(_Bool)arg1;	// IMP=0x00000000001ab93d
- (void)didStall:(_Bool)arg1;	// IMP=0x00000000001ab844
- (void)didReceiveSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x00000000001ab74d
- (void)didInvalidate;	// IMP=0x00000000001ab65e
- (void)didDegrade:(_Bool)arg1;	// IMP=0x00000000001ab565
- (void)didPause:(_Bool)arg1;	// IMP=0x00000000001ab46c
- (_Bool)initXPCCommandQueue;	// IMP=0x00000000001ab3da
- (id)copyXpcSenderQueue;	// IMP=0x00000000001ab0e5
- (_Bool)createRemoteQueue;	// IMP=0x00000000001ab014
- (void)dealloc;	// IMP=0x00000000001aaf55
- (void)invalidate;	// IMP=0x00000000001aaec7
- (id)initWithStreamToken:(long long)arg1 clientProcessID:(int)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;	// IMP=0x00000000001aaa66

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

