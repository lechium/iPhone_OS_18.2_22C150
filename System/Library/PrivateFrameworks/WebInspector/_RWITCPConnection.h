//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableData, _RWITCPServer;
@protocol OS_dispatch_queue, OS_dispatch_source, _RWITCPConnectionDelegate;

__attribute__((visibility("hidden")))
@interface _RWITCPConnection : NSObject
{
    int _socket;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_inputSource;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_outputSource;	// 32 = 0x20
    _Bool _shutdown;	// 40 = 0x28
    _Bool _outputSourceSuspended;	// 41 = 0x29
    _Bool _inputSourceCancelled;	// 42 = 0x2a
    _Bool _outputSourceCancelled;	// 43 = 0x2b
    NSMutableArray *_outputMessageQueue;	// 48 = 0x30
    NSMutableData *_incomingData;	// 56 = 0x38
    _RWITCPServer *_server;	// 64 = 0x40
    long long _type;	// 72 = 0x48
    id <_RWITCPConnectionDelegate> _delegate;	// 80 = 0x50
}

+ (id)TCPConnectionWithSocketPath:(id)arg1;	// IMP=0x00600000000033da
- (void).cxx_destruct;	// IMP=0x00000000000044b0
@property(nonatomic) __weak id <_RWITCPConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_processIncomingBytes:(const char *)arg1 length:(long long)arg2;	// IMP=0x00000000000041f9
- (void)_handleInput;	// IMP=0x0000000000004065
- (void)_closeInputStream;	// IMP=0x000000000000402f
- (void)_createInputSource;	// IMP=0x0000000000003f56
- (void)_handleOutput;	// IMP=0x0000000000003d56
- (void)_setOutputSourceSuspended:(_Bool)arg1;	// IMP=0x0000000000003d2b
- (void)_closeOutputStream;	// IMP=0x0000000000003be8
- (void)_createOutputSource;	// IMP=0x0000000000003aed
- (void)startReceiving;	// IMP=0x0000000000003adf
- (void)sendMessage:(id)arg1;	// IMP=0x000000000000396a
- (void)_dispatchSourceCancelled;	// IMP=0x0000000000003934
- (void)_shutdown;	// IMP=0x00000000000038bd
- (void)dealloc;	// IMP=0x000000000000382e
- (void)_commonInitializationWithServer:(id)arg1 socket:(int)arg2 type:(long long)arg3;	// IMP=0x0000000000003758
- (id)initWithServer:(id)arg1 socket:(int)arg2;	// IMP=0x00000000000036a8

@end
