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

+ (void)removePerformer:(id)arg1;	// IMP=0x0010000000036702
+ (_Bool)addPerformer:(id)arg1;	// IMP=0x00100000000365dd
- (void).cxx_destruct;	// IMP=0x0000000000036b98
- (void)_close;	// IMP=0x0000000000036b1d
- (void)perform;	// IMP=0x0000000000036a5e
- (void)resumeAndAutoClose;	// IMP=0x00000000000368b2
- (void)networkReachabilityChanged:(_Bool)arg1;	// IMP=0x000000000003687a
- (id)initWithDSID:(id)arg1;	// IMP=0x00000000000367a4
- (id)_key;	// IMP=0x000000000003656b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
