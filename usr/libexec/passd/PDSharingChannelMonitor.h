//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PDDatabaseManager, PDPaymentWebServiceCoordinator, PDPushNotificationManager;
@protocol OS_dispatch_queue, PDSharingChannelMonitorDelegate;

@interface PDSharingChannelMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_replyQueue;	// 16 = 0x10
    PDPaymentWebServiceCoordinator *_webServiceCoordinator;	// 24 = 0x18
    PDDatabaseManager *_databaseManager;	// 32 = 0x20
    PDPushNotificationManager *_pushNotificationManager;	// 40 = 0x28
    id <PDSharingChannelMonitorDelegate> _delegate;	// 48 = 0x30
    _Bool _isCheckingForOutstandingMessages;	// 56 = 0x38
    _Bool _didDeferCheckForOutstandingMessages;	// 57 = 0x39
    _Bool _disabled;	// 58 = 0x3a
}

- (void).cxx_destruct;	// IMP=0x00200000004b589f
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
- (void)_updateEndpointHasOutstandingMessages:(id)arg1 hasOutstandingMessages:(_Bool)arg2 didCheckForNewMessages:(_Bool)arg3;	// IMP=0x00100000004b57d6
- (_Bool)_canEndpointBePolledOrCleanUpEndpoint:(id)arg1;	// IMP=0x00100000004b55ff
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2;	// IMP=0x00100000004b55e9
- (void)applyPushNotificationToken:(id)arg1;	// IMP=0x00100000004b55e3
- (void)handlePushNotificationForTopic:(id)arg1 userInfo:(id)arg2;	// IMP=0x00100000004b54b6
- (id)pushNotificationTopics;	// IMP=0x00100000004b5465
- (void)_processOutstandingEndpointsAndMessagesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000004b46c9
- (id)_checkEndpointsToBePolledOrDetermineNextPollDate:(id *)arg1;	// IMP=0x00100000004b4292
- (void)checkForNewSharingMessagesWithShouldCheckAllEndpoint:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000004b3d39
- (void)scheduleNextCheckIfNeeded;	// IMP=0x00100000004b3aca
- (void)start;	// IMP=0x00100000004b3ab4
- (void)dealloc;	// IMP=0x00100000004b3a6f
- (id)initWithQueue:(id)arg1 webServiceCoordinator:(id)arg2 databaseManager:(id)arg3 pushNotificationManager:(id)arg4 delegate:(id)arg5;	// IMP=0x00100000004b3921
- (id)init;	// IMP=0x00100000004b3913

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

