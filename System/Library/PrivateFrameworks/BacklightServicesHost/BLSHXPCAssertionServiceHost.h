//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSProcessHandle, NSMutableDictionary, NSString;
@protocol BLSAssertionService;

__attribute__((visibility("hidden")))
@interface BLSHXPCAssertionServiceHost : NSObject
{
    id <BLSAssertionService> _localService;	// 8 = 0x8
    BSProcessHandle *_remoteProcessHandle;	// 16 = 0x10
    NSMutableDictionary *_assertionProxies;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 32 = 0x20
    _Bool _valid;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x000000000003ca0e
- (oneway void)destroyAssertion:(id)arg1;	// IMP=0x000000000003ca01
- (oneway void)restartAssertionTimeoutTimer:(id)arg1;	// IMP=0x000000000003c9c3
- (oneway void)cancelAssertion:(id)arg1 withError:(id)arg2;	// IMP=0x000000000003c959
- (oneway void)acquireAssertion:(id)arg1;	// IMP=0x000000000003c91b
- (id)acquireAssertionForDescriptor:(id)arg1 error:(out id *)arg2;	// IMP=0x000000000003c66d
- (void)invalidate;	// IMP=0x000000000003c396
- (void)dealloc;	// IMP=0x000000000003c2df
- (id)initWithLocalService:(id)arg1 peer:(id)arg2;	// IMP=0x000000000003c1e6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

