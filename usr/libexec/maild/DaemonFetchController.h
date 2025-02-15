//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EmailDaemon/EDFetchController.h>

@class FavoritesPersistence, FetchXPCActivityScheduler, NSObject, NSSet, NSString;
@protocol EFScheduler, OS_dispatch_queue, OS_dispatch_source;

@interface DaemonFetchController : EDFetchController
{
    NSObject<OS_dispatch_source> *_throttleTimer;	// 8 = 0x8
    _Bool _schedulePeriodicFetches;	// 16 = 0x10
    int _pcPollInterval;	// 20 = 0x14
    struct os_unfair_lock_s _fetchSchedulerLock;	// 24 = 0x18
    FavoritesPersistence *_favoritesPersistence;	// 32 = 0x20
    NSSet *_currentAlertContexts;	// 40 = 0x28
    NSSet *_currentAlertSuppresionContexts;	// 48 = 0x30
    FetchXPCActivityScheduler *_powerNapScheduler;	// 56 = 0x38
    FetchXPCActivityScheduler *_periodicScheduler;	// 64 = 0x40
    FetchXPCActivityScheduler *_compactScheduler;	// 72 = 0x48
    NSObject *_backFillScheduler;	// 80 = 0x50
    id <EFScheduler> _pendingFetchOTCScheduler;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_queue;	// 96 = 0x60
}

+ (id)log;	// IMP=0x0020000000011a2b
- (void).cxx_destruct;	// IMP=0x0020000000013de7
- (id)visibleMailboxes;	// IMP=0x0010000000013c96
- (id)diagnosticInformation;	// IMP=0x0010000000013c2b
- (void)setSuppressedContexts:(id)arg1;	// IMP=0x0010000000013ba2
- (void)resetPushStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000013b19
- (void)downloadMessageBodiesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000013a27
- (void)performFetchOfType:(int)arg1 mailboxObjectIds:(id)arg2;	// IMP=0x00100000000135f7
- (void)performFetchOfType:(int)arg1 accountIds:(id)arg2;	// IMP=0x0010000000013525
- (void)performFetchForOTC;	// IMP=0x0010000000013352
- (void)performFetchOfType:(int)arg1;	// IMP=0x00100000000132eb
- (void)accountsAdded:(id)arg1;	// IMP=0x001000000001303c
- (void)_autoFetchProcessFinished:(id)arg1;	// IMP=0x0010000000012ad0
- (void)fetchSchedulerDidTrigger:(id)arg1;	// IMP=0x0010000000012a6d
- (id)initWithAccountsProvider:(id)arg1 favoritesPersistence:(id)arg2 hookRegistry:(id)arg3;	// IMP=0x0010000000011b08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

