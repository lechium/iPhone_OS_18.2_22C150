//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRCAccountSession, BRCClientPrivilegesDescriptor, BRMangledID, NSCountedSet, NSMutableDictionary, NSOperationQueue, NSSet, NSString, NSXPCConnection, brc_task_tracker;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCXPCClient : NSObject
{
    brc_task_tracker *_tracker;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    BRCAccountSession *__session;	// 24 = 0x18
    unsigned int _invalidated:1;	// 32 = 0x20
    BRCClientPrivilegesDescriptor *_clientPriviledgesDescriptor;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_foregroundBackgroundHandlingQueue;	// 48 = 0x30
    NSCountedSet *_appLibraries;	// 56 = 0x38
    NSOperationQueue *_operationQueue;	// 64 = 0x40
    int _clientPid;	// 72 = 0x48
    CDStruct_4c969caf auditToken;	// 76 = 0x4c
    _Bool _dieOnInvalidate;	// 108 = 0x6c
    unsigned int _isForeground:1;	// 109 = 0x6d
    NSMutableDictionary *_personaMonitorCounts;	// 112 = 0x70
    _Bool _isUsingUbiquity;	// 120 = 0x78
    NSXPCConnection *_connection;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000000002b8328
@property(nonatomic) _Bool isUsingUbiquity; // @synthesize isUsingUbiquity=_isUsingUbiquity;
@property(retain, nonatomic) BRCAccountSession *session; // @synthesize session=__session;
@property(readonly, nonatomic) _Bool dieOnInvalidate; // @synthesize dieOnInvalidate=_dieOnInvalidate;
@property(readonly, nonatomic) __weak NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) BRCClientPrivilegesDescriptor *clientPriviledgesDescriptor; // @synthesize clientPriviledgesDescriptor=_clientPriviledgesDescriptor;
- (void)_startSharingOperationAfterAcceptation:(id)arg1 client:(id)arg2 item:(id)arg3;	// IMP=0x00000000002b8085
- (void)setupNonSandboxedAccessForUbiquityContainers:(id)arg1 forBundleID:(id)arg2;	// IMP=0x00000000002b7eca
- (void)_setupAppLibraryAndZoneWithID:(id)arg1 recreateDocumentsIfNeeded:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000002b7a30
- (void)_waitForContainerToBeForcedIngestWithContainerID:(id)arg1 containerURL:(id)arg2 sandboxExtension:(id)arg3 bundleVersion:(id)arg4 error:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x00000000002b78a2
- (id)_setupAppLibrary:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002b73d2
- (id)issueContainerExtensionForURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002b7357
- (_Bool)canAccessPhysicalURL:(id)arg1;	// IMP=0x00000000002b72ec
- (void)_finishedXPCClientOfSession:(id)arg1;	// IMP=0x00000000002b708f
- (void)_becameXPCCLientOfSession:(id)arg1;	// IMP=0x00000000002b6e9b
- (void)performBlockWithAnySession:(CDUnknownBlockType)arg1;	// IMP=0x00000000002b6c63
- (_Bool)canAccessPath:(const char *)arg1 accessKind:(long long)arg2;	// IMP=0x00000000002b6889
- (id)_auditedURLFromPath:(id)arg1;	// IMP=0x00000000002b6837
- (void)_auditURL:(id)arg1;	// IMP=0x00000000002b66bd
@property(readonly, nonatomic) _Bool isSandboxed;
@property(readonly, nonatomic) NSString *bundleID;
@property(readonly, nonatomic) _Bool hasPrivateSharingInterfaceEntitlement;
- (_Bool)_isAutomationEntitled;	// IMP=0x00000000002b65a1
- (_Bool)_isAppLibraryProxyEntitled;	// IMP=0x00000000002b6549
@property(readonly, nonatomic) NSSet *entitledAppLibraryIDs;
@property(readonly, nonatomic) BRMangledID *defaultMangledID;
- (_Bool)_entitlementBooleanValueForKey:(id)arg1;	// IMP=0x00000000002b6394
- (id)_entitlementValueForKey:(id)arg1 ofClass:(Class)arg2;	// IMP=0x00000000002b62fe
- (_Bool)_hasPrivateIPCEntitlementForSelector:(SEL)arg1 error:(id *)arg2;	// IMP=0x00000000002b6125
- (_Bool)_isAppLibraryProxyWithError:(id *)arg1;	// IMP=0x00000000002b6016
- (_Bool)_canCreateAppLibraryWithID:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002b5ed8
- (_Bool)_hasAccessToAppLibraryID:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002b5c94
- (BOOL)cloudEnabledStatus;	// IMP=0x00000000002b5c03
- (void)notificationPipe:(id)arg1 didObserveAppLibrary:(id)arg2;	// IMP=0x00000000002b4309
- (void)notificationPipe:(id)arg1 willObserveAppLibrary:(id)arg2;	// IMP=0x00000000002b42f4
- (void)_stopMonitoringProcess;	// IMP=0x00000000002b422d
- (void)removeAppLibrary:(id)arg1;	// IMP=0x00000000002b3f4b
- (void)addAppLibrary:(id)arg1;	// IMP=0x00000000002b3c55
- (_Bool)checkTCCAccessForSession:(id)arg1;	// IMP=0x00000000002b3c4d
- (_Bool)checkTCCAccess;	// IMP=0x00000000002b3bfc
- (void)_startMonitoringProcessIfNeeded;	// IMP=0x00000000002b3b0c
- (void)process:(int)arg1 didBecomeForeground:(_Bool)arg2;	// IMP=0x00000000002b39bd
- (void)_process:(int)arg1 didBecomeForeground:(_Bool)arg2;	// IMP=0x00000000002b3717
@property(readonly, nonatomic) NSString *identifier;
- (void)addOperation:(id)arg1;	// IMP=0x00000000002b35a0
- (void)dumpToContext:(id)arg1;	// IMP=0x00000000002b351c
@property(readonly, copy) NSString *description;
- (void)wait;	// IMP=0x00000000002b3436
- (void)invalidate;	// IMP=0x00000000002b3057
- (id)initWithConnection:(id)arg1;	// IMP=0x00000000002b2dfa
- (void)setPrivilegesDescriptor:(id)arg1;	// IMP=0x00000000002b2c52
- (void)accessLogicalOrPhysicalURL:(id)arg1 accessKind:(long long)arg2 dbAccessKind:(long long)arg3 synchronouslyIfPossible:(_Bool)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000244c10
- (void)performBlock:(CDUnknownBlockType)arg1 withSessionFromURL:(id)arg2;	// IMP=0x00000000002449fd
- (_Bool)canAccessLogicalOrPhysicalURL:(id)arg1 accessKind:(long long)arg2 session:(id)arg3;	// IMP=0x0000000000244748
- (id)_overrideSessionForURL:(id)arg1;	// IMP=0x00000000002444fa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

