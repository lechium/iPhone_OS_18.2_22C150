//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRCThrottler, BRDSIDString, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCAccountOnlinePerformer : NSObject
{
    BRDSIDString *_dsid;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    BRCThrottler *_throttler;	// 24 = 0x18
}

+ (void)removePerformer:(id)arg1;	// IMP=0x0010000000044cb3
+ (_Bool)addPerformer:(id)arg1;	// IMP=0x0010000000044b8e
- (void).cxx_destruct;	// IMP=0x0000000000045149
- (void)_close;	// IMP=0x00000000000450ce
- (void)perform;	// IMP=0x000000000004500f
- (void)resumeAndAutoClose;	// IMP=0x0000000000044e63
- (void)networkReachabilityChanged:(_Bool)arg1;	// IMP=0x0000000000044e2b
- (id)initWithDSID:(id)arg1;	// IMP=0x0000000000044d55
- (id)_key;	// IMP=0x0000000000044b1c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
