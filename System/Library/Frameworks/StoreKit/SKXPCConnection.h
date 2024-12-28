//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface SKXPCConnection : NSObject
{
    NSObject<OS_xpc_object> *_connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    CDUnknownBlockType _disconnectBlock;	// 24 = 0x18
    CDUnknownBlockType _messageBlock;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001c085
- (void)_reloadEventHandler;	// IMP=0x000000000001be08
@property(copy) CDUnknownBlockType messageBlock;
@property(copy) CDUnknownBlockType disconnectBlock;
- (void)sendSynchronousMessage:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000000001bb4a
- (void)sendMessage:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000000001baff
- (void)sendMessage:(id)arg1;	// IMP=0x000000000001baee
- (id)createXPCEndpoint;	// IMP=0x000000000001b889
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x000000000001b816
- (id)initWithServiceName:(id)arg1;	// IMP=0x000000000001b7af
- (id)init;	// IMP=0x000000000001b79b
- (id)_initSKXPCConnection;	// IMP=0x000000000001b743

@end
