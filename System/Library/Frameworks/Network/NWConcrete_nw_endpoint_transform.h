//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NWConcrete_nw_endpoint_handler;
@protocol OS_nw_array, OS_nw_endpoint, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_endpoint_transform : NSObject
{
    NSObject<OS_nw_array> *child_endpoint_handlers;	// 8 = 0x8
    NSObject<OS_nw_array> *failed_child_endpoint_handlers;	// 16 = 0x10
    NSObject<OS_xpc_object> *fallback_modes;	// 24 = 0x18
    NSObject<OS_nw_array> *blocked_protocols;	// 32 = 0x20
    unsigned int next_child_endpoint_index;	// 40 = 0x28
    NWConcrete_nw_endpoint_handler *connected_child;	// 48 = 0x30
    NSObject<OS_nw_endpoint> *primary_endpoint;	// 56 = 0x38
    void *child_timer;	// 64 = 0x40
    unsigned long long last_timeout_ms;	// 72 = 0x48
    unsigned int first_protocol;	// 80 = 0x50
    unsigned int connected_protocol;	// 84 = 0x54
    unsigned int connected_protocol_index;	// 88 = 0x58
    _Bool quic_deferred;	// 92 = 0x5c
    _Bool quic_application_deferred;	// 93 = 0x5d
    _Bool quic_denied;	// 94 = 0x5e
    _Bool quic_alternative_present;	// 95 = 0x5f
    _Bool quic_updated_alternative;	// 96 = 0x60
    _Bool quic_speculative_attempt;	// 97 = 0x61
}

- (void).cxx_destruct;	// IMP=0x0000000000ad3820
- (_Bool)applyWithHandler:(id)arg1 toChildren:(CDUnknownBlockType)arg2;	// IMP=0x0000000000ad2ef0
- (void)updatePathWithHandler:(id)arg1;	// IMP=0x0000000000ad2860
- (void)cancelWithHandler:(id)arg1 forced:(_Bool)arg2;	// IMP=0x0000000000ad2100
- (void)startWithHandler:(id)arg1;	// IMP=0x0000000000ad1680
- (void)dealloc;	// IMP=0x0000000000ad1650
- (id)init;	// IMP=0x0000000000ad1380

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

