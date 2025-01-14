//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor, NSCountedSet, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, SSXPCConnection;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SpringBoardUtility : NSObject
{
    BKSApplicationStateMonitor *_applicationStateMonitor;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NSDictionary *_enabledRemoteNotificationTypes;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 32 = 0x20
    long long _observeAllIdentifiersCount;	// 40 = 0x28
    NSCountedSet *_observedApplicationIdentifiers;	// 48 = 0x30
    NSMutableArray *_pendingAlerts;	// 56 = 0x38
    SSXPCConnection *_pluginConnection;	// 64 = 0x40
    NSObject<OS_dispatch_source> *_pluginConnectionTimeout;	// 72 = 0x48
    NSMutableArray *_pluginDeferredBlocks;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_springBoardQueue;	// 88 = 0x58
    NSMutableDictionary *_stateCache;	// 96 = 0x60
}

+ (void)_sendUnentitledResponseToMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0040000000157fec
+ (_Bool)_hasEntitlements:(id)arg1;	// IMP=0x00100000001576b1
+ (void)testPluginAlertWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001569d6
+ (void)testLockscreenAccountSheetWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000015696e
+ (void)testBadgingWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001566ed
+ (void)registerPluginConnectionWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000156684
+ (void)restartApplicationWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000156545
+ (void)observeXPCServer:(id)arg1;	// IMP=0x001000000015646a
+ (void)dequeueAlertWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001563b1
+ (id)sharedInstance;	// IMP=0x0010000000152f56
- (void).cxx_destruct;	// IMP=0x00200000001588d5
- (void)_timeoutPluginConnection;	// IMP=0x0010000000158701
- (void)_setApplicationStatesWithDictionary:(id)arg1;	// IMP=0x0010000000158479
- (void)_setApplicationState:(unsigned int)arg1 forClientID:(id)arg2;	// IMP=0x0010000000158249
- (void)_requestPluginConnectionWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000157b4d
- (void)_registerPluginConnectionWithMessage:(id)arg1;	// IMP=0x00100000001576c8
- (_Bool)_getProcessID:(int *)arg1 forApplicationIdentifier:(id)arg2;	// IMP=0x0010000000157634
- (id)_getApplicationInfoForIdentifier:(id)arg1 key:(id)arg2;	// IMP=0x001000000015741f
- (void)_fireDeferredPluginBlocksWithConnection:(id)arg1;	// IMP=0x001000000015721a
- (void)_disconnectPluginConnection:(id)arg1;	// IMP=0x0010000000156f85
- (id)_applicationStateMonitor;	// IMP=0x0010000000156dcd
- (void)sendPluginMessage:(id)arg1 withReplyBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000156c2f
- (void)sendPluginMessage:(id)arg1;	// IMP=0x0010000000156b85
- (void)_dequeueAlertWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000015601f
- (void)wakeAppUsingRequest:(id)arg1;	// IMP=0x0010000000155312
- (void)suspendFrontApplication;	// IMP=0x0010000000155308
- (void)setBadgeValue:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x0010000000154feb
- (void)resetEnabledRemoteNotificationTypes;	// IMP=0x0010000000154f85
- (void)removeDefaultPNGSnapshotsForIdentifier:(id)arg1;	// IMP=0x0010000000154c0d
- (unsigned int)mostElevatedApplicationStateForPID:(int)arg1;	// IMP=0x0010000000154b1e
- (_Bool)launchApplicationWithIdentifier:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001548e4
@property(readonly, getter=isScreenLocked) _Bool screenLocked;
@property(readonly) NSString *frontmostClientIdentifier;
- (void)endGeneratingStateChangeNotificationsForIdentifiers:(id)arg1;	// IMP=0x0010000000154273
- (void)endGeneratingStateChangeNotifications;	// IMP=0x00100000001540e5
- (id)copyBundleInfoValueForKey:(id)arg1 PID:(int)arg2;	// IMP=0x0010000000153f21
- (void)beginGeneratingStateChangeNotificationsForIdentifiers:(id)arg1;	// IMP=0x0010000000153baf
- (void)beginGeneratingStateChangeNotificationsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000153832
- (unsigned int)applicationStateForIdentifier:(id)arg1;	// IMP=0x00100000001535f0
- (void)activateAlertWithDescription:(id)arg1 options:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000152fe3
- (void)dealloc;	// IMP=0x0010000000152edb
- (id)init;	// IMP=0x0010000000152e18

@end

