//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GCDTimer, NSMutableSet, _TtC8MapsSync13MapsSyncStore, _TtC8MapsSync23MapsSyncStoreController;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MSPSharedTripBlocklist : NSObject
{
    NSMutableSet *_blockedIdentifiers;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_isolationQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_storeQueue;	// 24 = 0x18
    _TtC8MapsSync23MapsSyncStoreController *_storeController;	// 32 = 0x20
    _TtC8MapsSync13MapsSyncStore *_store;	// 40 = 0x28
    _Bool _waitingForStoreToLoad;	// 48 = 0x30
    GCDTimer *_storeLoadTimeoutTimer;	// 56 = 0x38
}

+ (void)migrateFromiCloudKVSIfNeeded;	// IMP=0x0010000000020163
+ (id)sharedInstance;	// IMP=0x001000000001c690
- (void).cxx_destruct;	// IMP=0x0000000000020911
- (void)storeControllerWithDataChanged:(id)arg1;	// IMP=0x0000000000020014
- (void)storeControllerWithFailedToLoad:(id)arg1;	// IMP=0x000000000001feba
- (void)storeControllerWithDidLoad:(id)arg1;	// IMP=0x000000000001fc57
- (void)_cancelTimeoutTimer;	// IMP=0x000000000001fb32
- (void)_resumeIsolationQueueIfNeeded;	// IMP=0x000000000001f93f
- (id)_fetchSyncedIdentifiers;	// IMP=0x000000000001f757
- (void)_reloadBlockedIdentifiersFromSync;	// IMP=0x000000000001f2d0
- (void)_purgeExpiredIdentifiersIn:(id)arg1;	// IMP=0x000000000001e746
- (void)purgeExpiredIdentifiers;	// IMP=0x000000000001e5a3
- (void)clearBlockedIdentifiers;	// IMP=0x000000000001e2d2
- (void)unblockIdentifiers:(id)arg1;	// IMP=0x000000000001dc53
- (void)blockIdentifiers:(id)arg1;	// IMP=0x000000000001d479
- (void)blockIdentifier:(id)arg1;	// IMP=0x000000000001d3cc
- (_Bool)containsIdentifier:(id)arg1;	// IMP=0x000000000001d184
- (_Bool)containsAnyIdentifiersInArray:(id)arg1;	// IMP=0x000000000001ce97
- (id)description;	// IMP=0x000000000001cac4
- (id)init;	// IMP=0x000000000001c715

@end

