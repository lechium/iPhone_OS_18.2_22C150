//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_activity : NSObject
{
    unsigned char token[16];	// 8 = 0x8
    unsigned long long investigation_identifier;	// 24 = 0x18
    unsigned long long start_time;	// 32 = 0x20
    unsigned long long end_time;	// 40 = 0x28
    unsigned int fragments_quenched;	// 48 = 0x30
    struct retained_ptr<NWConcrete_nw_activity *> parent;	// 56 = 0x38
    char *underlying_error_domain_string;	// 72 = 0x48
    struct unfair_mutex lock;	// 80 = 0x50
    struct description_cache description_cache;	// 88 = 0x58
    unsigned int label;	// 112 = 0x70
    unsigned int domain;	// 116 = 0x74
    unsigned int client_metric_count;	// 120 = 0x78
    int underlying_error_domain;	// 124 = 0x7c
    int underlying_error_code;	// 128 = 0x80
    int reporting_strategy;	// 132 = 0x84
    int completion_reason;	// 136 = 0x88
    unsigned int is_retry:1;	// 140 = 0x8c
    unsigned int is_lightweight:1;	// 140 = 0x8c
    unsigned int activated:1;	// 140 = 0x8c
    unsigned int completed:1;	// 140 = 0x8c
}

- (id).cxx_construct;	// IMP=0x00000000008d9460
- (void).cxx_destruct;	// IMP=0x00000000008d93c0
- (id)redactedDescription;	// IMP=0x00000000008d93a0
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000008d9200

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
