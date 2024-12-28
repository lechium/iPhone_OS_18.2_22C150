//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSProxyConnection, NSString, __CFN_SocksHandshake;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _NSCFSocksProxy : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    int _outPort;	// 16 = 0x10
    NSString *_outHost;	// 24 = 0x18
    __CFN_SocksHandshake *_socksHandshake;	// 32 = 0x20
    NSProxyConnection *_inbound;	// 40 = 0x28
    NSProxyConnection *_outbound;	// 48 = 0x30
    NSDictionary *_configuration;	// 56 = 0x38
}

+ (void)handleIncomingConnection:(id)arg1 queue:(id)arg2 configuration:(id)arg3;	// IMP=0x00100000001146be
- (void).cxx_destruct;	// IMP=0x00000000001143d6
- (void)outboundConnectionCompleteWithError:(int)arg1;	// IMP=0x00000000001143a2
- (void)outboundConnectionReceivedData:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001142fb
- (void)dealloc;	// IMP=0x00000000001141f5
- (void)cleanup;	// IMP=0x0000000000114179
- (void)connected:(int)arg1;	// IMP=0x00000000001140e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
