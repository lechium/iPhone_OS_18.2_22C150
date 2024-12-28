//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_nw_context, OS_nw_endpoint, OS_nw_interface, OS_nw_protocol_options;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_path_parameters : NSObject
{
    struct nw_parameters_process_path_value process_path_value;	// 8 = 0x8
    struct nw_parameters_path_value path_value;	// 72 = 0x48
    struct nw_parameters_joinable_path_value joinable_path_value;	// 102 = 0x66
    char *account_id;	// 112 = 0x70
    char *attribution_context;	// 120 = 0x78
    char *attributed_bundle;	// 128 = 0x80
    NSObject<OS_nw_context> *context;	// 136 = 0x88
    NSObject<OS_nw_protocol_options> *transport_options;	// 144 = 0x90
    NSObject<OS_nw_protocol_options> *internet_options;	// 152 = 0x98
    NSObject<OS_nw_endpoint> *local_address;	// 160 = 0xa0
    NSObject<OS_nw_interface> *required_interface;	// 168 = 0xa8
    struct nw_parameters_extended_objects *extended_objects;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x00000000003c7d40
- (void)dealloc;	// IMP=0x00000000003c7b00
- (id)init;	// IMP=0x00000000003c7830

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
