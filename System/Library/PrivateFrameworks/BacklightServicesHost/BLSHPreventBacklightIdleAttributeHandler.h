//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BLSHLocalCountingAssertionAttributeHandler.h"

@class BLSHBacklightIdleProvider;

__attribute__((visibility("hidden")))
@interface BLSHPreventBacklightIdleAttributeHandler : BLSHLocalCountingAssertionAttributeHandler
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _active[3];	// 12 = 0xc
    BLSHBacklightIdleProvider *_provider;	// 16 = 0x10
}

+ (Class)attributeBaseClass;	// IMP=0x006000000000e2b2
+ (id)attributeClasses;	// IMP=0x006000000000e246
+ (id)registerHandlerForService:(id)arg1 provider:(id)arg2;	// IMP=0x006000000000e13e
- (void).cxx_destruct;	// IMP=0x000000000000e811
@property(readonly, nonatomic) __weak BLSHBacklightIdleProvider *provider; // @synthesize provider=_provider;
- (void)activate:(_Bool)arg1 withEntry:(id)arg2;	// IMP=0x000000000000e4d4
- (void)deactivateWithFinalEntry:(id)arg1;	// IMP=0x000000000000e4bd
- (void)activateWithFirstEntry:(id)arg1;	// IMP=0x000000000000e4a3
- (id)countingTargetForEntry:(id)arg1;	// IMP=0x000000000000e468
- (long long)typeForEntry:(id)arg1;	// IMP=0x000000000000e2c3
- (id)initForService:(id)arg1 provider:(id)arg2;	// IMP=0x000000000000e1c6

@end

