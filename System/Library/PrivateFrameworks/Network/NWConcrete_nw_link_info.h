//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_link_info : NSObject
{
    int flow_control_status;	// 8 = 0x8
    unsigned char link_quality;	// 12 = 0xc
}

- (void)dealloc;	// IMP=0x00000000005b04d0
- (id)init;	// IMP=0x00000000005b0200

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
