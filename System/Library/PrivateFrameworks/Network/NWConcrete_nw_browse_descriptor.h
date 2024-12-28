//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_data, OS_nw_array;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_browse_descriptor : NSObject
{
    int type;	// 8 = 0x8
    char *bonjour_type;	// 16 = 0x10
    char *bonjour_domain;	// 24 = 0x18
    char *description;	// 32 = 0x20
    char *logging_description;	// 40 = 0x28
    struct mutex lock;	// 48 = 0x30
    NSObject<OS_dispatch_data> *custom_data;	// 56 = 0x38
    CDUnknownBlockType browse_block;	// 64 = 0x40
    char *application_service_name;	// 72 = 0x48
    char *bundle_id;	// 80 = 0x50
    unsigned int device_types;	// 88 = 0x58
    unsigned int scope;	// 92 = 0x5c
    int invitation_scope;	// 96 = 0x60
    NSObject<OS_nw_array> *device_filters;	// 104 = 0x68
    unsigned int include_txt_record:1;	// 112 = 0x70
    unsigned int sign_results:1;	// 112 = 0x70
    unsigned int discover_application_service_endpoints_only:1;	// 112 = 0x70
    unsigned int __pad_bits:5;	// 112 = 0x70
}

- (id).cxx_construct;	// IMP=0x0000000000bdea40
- (void).cxx_destruct;	// IMP=0x0000000000bdea00
- (id)redactedDescription;	// IMP=0x0000000000bde9c0
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000bde8b0
- (id)init;	// IMP=0x0000000000bde5e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
