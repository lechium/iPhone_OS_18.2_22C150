//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADServiceStatistics, AFInstanceContext, NSCountedSet, NSDictionary, NSMutableDictionary, NSString, NSXPCConnection;
@protocol ADServiceConnectionDelegate, OS_dispatch_queue;

@interface ADServiceConnection : NSObject
{
    NSObject<OS_dispatch_queue> *_targetQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_syncQueue;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSString *_path;	// 32 = 0x20
    NSXPCConnection *_connection;	// 40 = 0x28
    _Bool _serviceLoaded;	// 48 = 0x30
    ADServiceStatistics *_stats;	// 56 = 0x38
    NSDictionary *_commandMap;	// 64 = 0x40
    NSDictionary *_anchorKeyClassMap;	// 72 = 0x48
    NSString *_domainObjectClearingClassName;	// 80 = 0x50
    NSString *_maintenanceClassName;	// 88 = 0x58
    _Bool _preheated;	// 96 = 0x60
    NSMutableDictionary *_watchdogTimersByUUID;	// 104 = 0x68
    NSCountedSet *_suspendedWatchdogTimerUUIDs;	// 112 = 0x70
    AFInstanceContext *_instanceContext;	// 120 = 0x78
    id <ADServiceConnectionDelegate> _delegate;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00200000002750ed
@property(nonatomic) __weak id <ADServiceConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)_getTimeoutSuspendedWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000274fde
- (void)_handleCommand:(id)arg1 executionInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000274ebc
- (void)_getWatchAuthenticationWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000274dde
- (void)_getStarkModeWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000274d00
- (void)_getCarDNDModeWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000274c22
- (void)_getLockStateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000274b44
- (void)_openURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000274a32
- (CDUnknownBlockType)_stopTimersWithContinuation;	// IMP=0x0010000000274947
- (void)reloadServiceBundleAtPath:(id)arg1;	// IMP=0x00100000002748de
- (void)invalidate;	// IMP=0x0010000000274833
- (void)runMaintenanceWorkWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000274745
- (void)preheatServiceBundle;	// IMP=0x00100000002746ed
- (void)sendClearDomainObjects;	// IMP=0x0010000000274697
- (void)sendFetchSyncSnapshotForInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000274437
- (void)sendBeginSyncWithInfo:(id)arg1 chunkHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000273f4b
- (id)_syncClassForAnchorKey:(id)arg1;	// IMP=0x0010000000273f35
- (void)sendClientBoundCommand:(id)arg1 domain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000002738d4
- (double)_timeoutForCommand:(id)arg1;	// IMP=0x0010000000273774
- (void)_removeTimerForUUID:(id)arg1;	// IMP=0x00100000002736dd
- (void)_addWatchdogTimer:(id)arg1 forUUID:(id)arg2;	// IMP=0x001000000027360a
- (id)_bundleClassForDomain:(id)arg1 commandName:(id)arg2;	// IMP=0x0010000000273584
- (id)_providerServiceDelegate;	// IMP=0x0010000000273534
- (id)_providerServiceWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000002734ba
- (id)_providerService;	// IMP=0x001000000027346a
- (id)_connection;	// IMP=0x0000000000273240
- (void)dealloc;	// IMP=0x00100000002731fe
- (id)initWithIdentifier:(id)arg1 path:(id)arg2 commandMap:(id)arg3 anchorMap:(id)arg4 clearingClass:(id)arg5 maintenanceClass:(id)arg6 instanceContext:(id)arg7 queue:(id)arg8;	// IMP=0x0010000000272f81

@end
