//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, UpdatesControllerInterface;

@interface UpdatesService : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    id <UpdatesControllerInterface> _updatesInterface;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000272dbb
- (void)updateAllGettingJobResultsWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000272ca1
- (void)updateAllWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000272b24
- (void)showApplicationBadgeForPendingUpdates;	// IMP=0x0010000000272a2c
- (void)reloadForSettingsFromServerWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000272861
- (void)hideApplicationBadgeForPendingUpdates;	// IMP=0x0010000000272769
- (void)getUpdatesIncludingMetricsWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000027259c
- (void)getMetricsWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000002723d6
- (void)getUpdateMetricsEventsWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000271f12
- (void)shouldUseModernUpdatesWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000271d34
- (void)reloadFromServerInBackgroundWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000027198d
- (void)updateAllWithOrder:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000002715b5
- (void)setAutoUpdateEnabled:(_Bool)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000027131a
- (void)requestAutomaticUpdateAuthorizationIfNecessaryForProcessHandle:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000271017
- (void)reloadManagedUpdatesWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000270cdc
- (void)reloadFromServerWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000027094d
- (void)refreshUpdateForApp:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000027057f
- (void)refreshUpdateCountWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000270203
- (void)getUpdatesWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000026ff02
- (void)getUpdateMetadataForBundleID:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000026fbb7
- (void)getManagedUpdatesWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000026f87c
- (void)compatibilityUpdateForBundleIDs:(id)arg1 userInitiated:(_Bool)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000026f652
- (void)autoUpdateEnabled:(CDUnknownBlockType)arg1;	// IMP=0x001000000026f542
- (id)init;	// IMP=0x001000000026f499

@end
