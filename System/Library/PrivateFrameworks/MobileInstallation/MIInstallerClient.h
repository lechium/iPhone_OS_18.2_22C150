//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MIInstallerClient : NSObject
{
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _delegatesCompleteCondMutex;	// 8 = 0x8
    struct _opaque_pthread_cond_t {
        long long __sig;
        char __opaque[40];
    } _delegatesCompleteCond;	// 72 = 0x48
    _Bool _delegatesComplete;	// 120 = 0x78
    NSXPCConnection *_connection;	// 128 = 0x80
    NSObject<OS_dispatch_queue> *_queue;	// 136 = 0x88
    CDUnknownBlockType _progressBlock;	// 144 = 0x90
    CDUnknownBlockType _appDictionaryEnumBlock;	// 152 = 0x98
    CDUnknownBlockType _releaseTerminationAssertBlock;	// 160 = 0xa0
    NSError *_delegatesCompleteError;	// 168 = 0xa8
}

+ (id)installerWithAppDictionaryEnumerator:(CDUnknownBlockType)arg1;	// IMP=0x001000000001031a
+ (id)installerWithProgressBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000102c7
+ (id)installerWithProgressBlock:(CDUnknownBlockType)arg1 releaseTerminationAssertionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000010237
- (void).cxx_destruct;	// IMP=0x0000000000019427
@property(retain, nonatomic) NSError *delegatesCompleteError; // @synthesize delegatesCompleteError=_delegatesCompleteError;
@property(nonatomic) _Bool delegatesComplete; // @synthesize delegatesComplete=_delegatesComplete;
@property(copy, nonatomic) CDUnknownBlockType releaseTerminationAssertBlock; // @synthesize releaseTerminationAssertBlock=_releaseTerminationAssertBlock;
@property(copy, nonatomic) CDUnknownBlockType appDictionaryEnumBlock; // @synthesize appDictionaryEnumBlock=_appDictionaryEnumBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (_Bool)setEligibilityTestOverrides:(id)arg1 withError:(id *)arg2;	// IMP=0x00000000000191a9
- (_Bool)clearTestFlags:(unsigned long long)arg1 withError:(id *)arg2;	// IMP=0x0000000000019007
- (_Bool)setTestFlags:(unsigned long long)arg1 withError:(id *)arg2;	// IMP=0x0000000000018e65
- (_Bool)getTestModeEnabled:(_Bool *)arg1 outError:(id *)arg2;	// IMP=0x0000000000018b7c
- (_Bool)endTestMode:(id *)arg1;	// IMP=0x0000000000018935
- (_Bool)setTestMode:(id *)arg1;	// IMP=0x00000000000186ee
- (id)raiseException;	// IMP=0x0000000000018549
- (void)dieForTesting;	// IMP=0x0000000000018488
- (int)pidForTesting;	// IMP=0x000000000001832c
- (void)referencesForBundleWithIdentifier:(id)arg1 inDomain:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000017fab
- (void)linkedBundleIDsForAppIdentity:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000017c37
- (void)waitForSystemAppMigratorWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000017910
- (void)waitForSystemAppMigratorToComplete:(CDUnknownBlockType)arg1;	// IMP=0x00000000000175e9
- (void)systemAppMigratorHasCompleted:(CDUnknownBlockType)arg1;	// IMP=0x00000000000172b3
- (void)setSystemAppMigrationComplete:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016f8c
- (void)snapshotWKAppInCompanionAppID:(id)arg1 toURL:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000016bcd
- (void)getAppMetadataForApp:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000016859
- (void)updatePlaceholderMetadataForApp:(id)arg1 installType:(unsigned long long)arg2 failureReason:(unsigned long long)arg3 underlyingError:(id)arg4 failureSource:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000000164dc
- (void)checkCapabilities:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000016145
- (void)listSafeHarborsOfType:(unsigned long long)arg1 forPersona:(id)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000015da6
- (void)removeSafeHarborForIdentity:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000015a3d
- (void)registerSafeHarborAtPath:(id)arg1 forIdentity:(id)arg2 ofType:(unsigned long long)arg3 withOptions:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000156ac
- (void)updateiTunesMetadataForIXWithIdentifier:(id)arg1 metadata:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001534b
- (void)updateSinfForIXWithIdentifier:(id)arg1 withOptions:(id)arg2 sinfData:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000014f8c
- (void)fetchInfoForContainerizedAppWithBundleID:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000014bd6
- (void)fetchInfoForFrameworkAtURL:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001483f
- (void)enumerateInstalledAppsWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014478
- (void)updateSystemAppStateForIdentifier:(id)arg1 appState:(int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001412f
- (void)lookupSystemAppStateWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013dbb
- (void)clearUninstalledIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000013a5a
- (void)lookupUninstalledWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000136e6
- (void)invalidateReference:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000133ab
- (void)acquireReferenceforInstalledAppWithIdentity:(id)arg1 inDomain:(unsigned long long)arg2 matchingInstallSessionID:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x000000000001300c
- (void)finalizeReference:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012c98
- (void)uninstallIdentity:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000012937
- (void)uninstallIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000012540
- (void)revertIdentity:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000012106
- (void)revertForLSWithIdentifier:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000011ccc
- (void)registerPlaceholderForReference:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000011958
- (void)cancelUpdateForStagedUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001160b
- (void)finalizeStagedInstallForUUID:(id)arg1 returningResultInfo:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000111e9
- (void)stageInstallURL:(id)arg1 identity:(id)arg2 targetingDomain:(unsigned long long)arg3 withOptions:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000010da4
- (void)installURL:(id)arg1 identity:(id)arg2 targetingDomain:(unsigned long long)arg3 withOptions:(id)arg4 returningResultInfo:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000010834
- (id)_waitForPendingDelegateMessages;	// IMP=0x0000000000010787
- (void)releaseTerminationAssertion;	// IMP=0x00000000000106da
- (void)delegateMessageDeliveryCompleteWithError:(id)arg1;	// IMP=0x0000000000010652
- (void)enumerateAppDictionary:(id)arg1 error:(id)arg2;	// IMP=0x000000000001049d
- (void)reportProgress:(id)arg1;	// IMP=0x000000000001036b
- (void)dealloc;	// IMP=0x00000000000101f4
- (id)init;	// IMP=0x000000000000fcbc
- (void)_invalidateObject;	// IMP=0x000000000000fbe5

@end

