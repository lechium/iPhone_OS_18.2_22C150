//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessageTransport.h>

@class HMDAccountRegistry, HMDDevice, NSArray, NSMutableArray, NSObject, NSString;
@protocol HMDSecureRemoteSessionDataSource, HMFMessageTransportDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDSecureRemoteSession : HMFMessageTransport
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableArray *_pendingMessages;	// 16 = 0x10
    NSMutableArray *_clientStreams;	// 24 = 0x18
    NSMutableArray *_serverStreams;	// 32 = 0x20
    HMDDevice *_device;	// 40 = 0x28
    id <HMDSecureRemoteSessionDataSource> _dataSource;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_clientQueue;	// 56 = 0x38
    HMDAccountRegistry *_accountRegistry;	// 64 = 0x40
    unsigned long long _maximumRemoteStreams;	// 72 = 0x48
    long long _state;	// 80 = 0x50
}

+ (id)logCategory;	// IMP=0x0010000000620771
+ (_Bool)isSecureRemoteSessionMessage:(id)arg1;	// IMP=0x00100000006206e6
- (void).cxx_destruct;	// IMP=0x000000000061e765
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) unsigned long long maximumRemoteStreams; // @synthesize maximumRemoteStreams=_maximumRemoteStreams;
@property(readonly, nonatomic) HMDAccountRegistry *accountRegistry; // @synthesize accountRegistry=_accountRegistry;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, nonatomic) id <HMDSecureRemoteSessionDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) HMDDevice *device; // @synthesize device=_device;
- (void)timerDidFire:(id)arg1;	// IMP=0x000000000061e3b6
- (id)logIdentifier;	// IMP=0x000000000061e33c
- (id)dumpState;	// IMP=0x000000000061e260
- (void)messageTransport:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x000000000061e059
- (void)secureRemoteStream:(id)arg1 receivedRequestToSendMessage:(id)arg2;	// IMP=0x000000000061de41
- (void)secureRemoteStream:(id)arg1 didCloseWithError:(id)arg2;	// IMP=0x000000000061dd63
- (void)secureRemoteStreamIsIdle:(id)arg1;	// IMP=0x000000000061dcab
- (void)_closeServerStream:(id)arg1 error:(id)arg2;	// IMP=0x000000000061d659
- (void)_openServerStreamWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000061d390
- (void)_closeClientStream:(id)arg1 error:(id)arg2;	// IMP=0x000000000061cef7
- (void)_openClientStreamWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000061c87b
- (id)_serverStreamWithIdentifier:(id)arg1;	// IMP=0x000000000061c6a8
- (id)_clientStreamForMessage:(id)arg1;	// IMP=0x000000000061c4bc
- (id)_clientStreamWithIdentiifer:(id)arg1;	// IMP=0x000000000061c2e9
- (void)_handleStreamInvalidationMessage:(id)arg1;	// IMP=0x000000000061bd81
- (void)_handleSecureServerMessage:(id)arg1 fromDevice:(id)arg2 transport:(id)arg3;	// IMP=0x000000000061ba77
- (void)_handleSecureClientMessage:(id)arg1 fromDevice:(id)arg2 transport:(id)arg3;	// IMP=0x000000000061b719
- (void)receivedSecureMessage:(id)arg1 fromDevice:(id)arg2 fromTransport:(id)arg3;	// IMP=0x000000000061b5c7
- (id)_dequeMessage;	// IMP=0x000000000061b3dc
- (void)_queueMessage:(id)arg1;	// IMP=0x000000000061ae9d
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000061ad7e
- (void)_closeWithError:(id)arg1;	// IMP=0x000000000061a655
- (void)close;	// IMP=0x000000000061a5e4
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000061a52c
@property(readonly, copy, nonatomic) NSArray *serverStreams;
@property(readonly, copy, nonatomic) NSArray *clientStreams;
@property(readonly, copy, nonatomic) NSArray *pendingMessages;
- (void)dealloc;	// IMP=0x000000000061a2d2
- (id)initWithDevice:(id)arg1 accountRegistry:(id)arg2 dataSource:(id)arg3;	// IMP=0x0000000000619f7e
- (id)initWithDevice:(id)arg1 accountRegistry:(id)arg2;	// IMP=0x0000000000619ef8
- (id)init;	// IMP=0x0000000000619e50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property __weak id <HMFMessageTransportDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
