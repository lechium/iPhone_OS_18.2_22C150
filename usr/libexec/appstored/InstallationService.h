//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AppInstallsDatabaseStore, NSString, RequestThrottle, TaskQueue;
@protocol OS_dispatch_queue;

@interface InstallationService : NSObject
{
    id _bagChangedNotification;	// 8 = 0x8
    AppInstallsDatabaseStore *_databaseStore;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    RequestThrottle *_requestThrottle;	// 32 = 0x20
    TaskQueue *_taskQueue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000d6e46
- (void)installWatchApps:(id)arg1 onPairedDevice:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d675c
- (void)installTestFlightApps:(id)arg1 onPairedDevice:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d6635
- (void)installSystemApps:(id)arg1 onPairedDevice:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d64a4
- (void)installEnterpriseApps:(id)arg1 onPairedDevice:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d637f
- (void)installAppReviewApps:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d615b
- (void)setShouldPostNotificationOnDefaultBrowserInstallation:(_Bool)arg1;	// IMP=0x00100000000d5f9e
- (void)shouldPostNotificationOnDefaultBrowserInstallationWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d5dbe
- (void)setInitialContentDownloadsEnabled:(_Bool)arg1;	// IMP=0x00100000000d5c01
- (void)areInitialContentDownloadsEnabledWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d5a1e
- (id)_init;	// IMP=0x00100000000d5966
- (void)dealloc;	// IMP=0x00100000000d58f1
- (id)init;	// IMP=0x00100000000d58df

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
