//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSRecursiveLock, NSSet, NSString, TaskQueue;
@protocol OS_dispatch_queue;

@interface UpdatesManager_ObjC : NSObject
{
    _Bool _agentRequestedUpdateAll;	// 8 = 0x8
    _Bool _automaticDownloadsAreDisabled;	// 9 = 0x9
    NSNumber *_currentAccountDSID;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_badgeQueue;	// 40 = 0x28
    _Bool _hasLoadedTVProviderApps;	// 48 = 0x30
    NSSet *_tvProviderApps;	// 56 = 0x38
    NSRecursiveLock *_DSIDLessAppsLock;	// 64 = 0x40
    TaskQueue *_taskQueue;	// 72 = 0x48
}

+ (id)sharedManager;	// IMP=0x00200000002014b9
- (void).cxx_destruct;	// IMP=0x0020000000202765
- (void)verifyUpdatesForRemovedBundleIDs:(id)arg1;	// IMP=0x001000000020238e
- (void)verifyUpdatesFollowingExternalAppInstall:(id)arg1;	// IMP=0x0010000000202388
- (void)verifyPendingUpdates:(id)arg1;	// IMP=0x0010000000202382
- (void)verifyAllPendingUpdates;	// IMP=0x001000000020209a
- (void)updateAllWithOrder:(id)arg1 requestToken:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000020202b
- (void)showPendingUpdatesBadge;	// IMP=0x0010000000202025
- (void)setupFollowingMigration;	// IMP=0x001000000020201f
- (void)setAutoUpdateEnabled:(_Bool)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000201f43
- (void)reloadUpdatesWithContext:(id)arg1;	// IMP=0x0010000000201e91
- (void)reloadManagedUpdatesWithRequestToken:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000201e24
- (void)reloadFromServerWithRequestToken:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000201dbc
- (void)reloadFromServerInBackgroundWithToken:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000201d4f
- (void)refreshUpdateForApp:(long long)arg1 token:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000201ce9
- (void)refreshUpdateCountWithRequestToken:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000201c81
- (void)reloadApplicationBadgeWithReason:(id)arg1;	// IMP=0x0010000000201c7b
- (void)performPostRestoreUpdatesCheck;	// IMP=0x0010000000201c75
- (void)performBackgroundSoftwareUpdateCheck;	// IMP=0x0010000000201c6f
- (void)postProcessBackgroundUpdateMetrics;	// IMP=0x0010000000201c69
- (void)noteUpdatesStateChangedWithReason:(id)arg1 logKey:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000201c5e
- (void)noteUpdatesStateChanged:(id)arg1 logKey:(id)arg2;	// IMP=0x0010000000201c49
- (void)hidePendingUpdatesBadge;	// IMP=0x0010000000201c43
- (void)getUpdatesWithRequestToken:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000201c2e
- (void)getUpdateMetadataForBundleID:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000201c1e
- (void)getUpdatesWithContext:(id)arg1;	// IMP=0x0010000000201b6c
- (void)getManagedUpdatesWithRequestToken:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000201aff
- (void)dropAllUpdatesIncludingVPP:(_Bool)arg1;	// IMP=0x0010000000201759
- (void)confirmAgentRequestedUpdateAll:(CDUnknownBlockType)arg1;	// IMP=0x0010000000201743
- (void)autoUpdateEnabled:(CDUnknownBlockType)arg1;	// IMP=0x00100000002016ff
- (void)isTVProviderApp:(long long)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000002016ef
- (id)init;	// IMP=0x001000000020150e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
