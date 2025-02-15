//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, NSXPCListener, SWCDatabase, SWCDownloadScheduler, SWCDownloader;

@interface SWCManager : NSObject
{
    NSXPCListener *_xpcListener;	// 8 = 0x8
    struct optional<bool> _developerModeEnabled;	// 16 = 0x10
    SWCDatabase *_database;	// 24 = 0x18
    SWCDownloader *_downloader;	// 32 = 0x20
    SWCDownloadScheduler *_downloadScheduler;	// 40 = 0x28
}

+ (id)beginListening;	// IMP=0x00200000000180f6
+ (id)new;	// IMP=0x00100000000180c8
- (id).cxx_construct;	// IMP=0x002000000001eea3
- (void).cxx_destruct;	// IMP=0x001000000001ee65
@property(readonly) SWCDownloadScheduler *downloadScheduler; // @synthesize downloadScheduler=_downloadScheduler;
@property(readonly) SWCDownloader *downloader; // @synthesize downloader=_downloader;
@property(readonly) SWCDatabase *database; // @synthesize database=_database;
- (void)setAdditionalServiceDetailsForApplicationIdentifiers:(id)arg1 usingContentsOfDictionary:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001e751
- (void)setDeveloperModeEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001e310
- (void)getDeveloperModeEnabledWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000001e276
- (void)getTrackingDomains:(id)arg1 sources:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001dfb8
- (void)removeSettingsForKeys:(id)arg1 serviceSpecifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001dc15
- (void)removeSettingsForKeys:(id)arg1 serviceType:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001d8ad
- (void)commitServiceSettings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001d306
- (void)getServiceSettingsWithServiceSpecifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001d03a
- (void)resetWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000001cde1
- (void)showWithVerbosity:(unsigned char)arg1 isTTY:(_Bool)arg2 fileDescriptor:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000001b882
- (void)addAllAppsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000001b60c
- (void)setUserApprovalState:(unsigned char)arg1 forServiceWithServiceSpecifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001b159
- (MISSING_TYPE *)setDetails:forServiceWithServiceSpecifier:completionHandler: /* Error: Ran out of types for this method. */;	// IMP=0x001000000001aad2
- (void)removeServiceWithServiceSpecifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001a456
- (void)addServiceWithServiceSpecifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000019d7a
- (void)getDetailsWithServiceSpecifier:(id)arg1 URL:(id)arg2 limit:(unsigned long long)arg3 callerAuditToken:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000001993a
- (void)waitForSiteApprovalWithServiceSpecifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000197b9
- (void)downloader:(id)arg1 failedToDownloadAASAFileFromDomain:(id)arg2 error:(id)arg3;	// IMP=0x0010000000019471
- (void)downloader:(id)arg1 didDownloadAASAFileContainingJSONObject:(id)arg2 fromDomain:(id)arg3 downloadRoute:(unsigned char)arg4;	// IMP=0x00100000000192af
- (void)downloader:(id)arg1 willDownloadAASAFileFromDomain:(id)arg2;	// IMP=0x0010000000019199
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000018c1f
- (void)updateEntriesForAllBundlesIgnoringCurrentState:(_Bool)arg1;	// IMP=0x001000000001837a
- (void)receiveSIGTERMSignal;	// IMP=0x001000000001833f
- (id)init;	// IMP=0x00100000000180d1
- (id)initWithDatabase:(id)arg1;	// IMP=0x0010000000017fcc
- (_Bool)_copyStagingDirectoryAtURL:(id)arg1 toAdditionalServiceDetailsDirectoriesForApplicationIdentifiers:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000022331
- (_Bool)_addJSONDataInDictionary:(id)arg1 toStagingDirectoryAtURL:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000021ee2
- (id)_createStagingDirectoryForAdditionalServiceDetailsReturningError:(id *)arg1;	// IMP=0x0010000000021c52
- (id)_filterApplicationIdentifiers:(id)arg1 toMatchEntitlementOfXPCConnection:(id)arg2;	// IMP=0x001000000002182c
- (_Bool)_isDeveloperModeEnabled;	// IMP=0x0010000000021824
- (_Bool)_setDeveloperModeEnabled:(_Bool)arg1 error:(id *)arg2;	// IMP=0x00100000000214bb
- (void)_authorizeDeveloperModeChangeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000214a6
- (id)_developerModeSemaphoreURL;	// IMP=0x00100000000213fa
- (_Bool)_connectionMayConnect:(id)arg1;	// IMP=0x00100000000213e6
- (_Bool)_connectionIsEntitled:(id)arg1 forMutation:(_Bool)arg2;	// IMP=0x0010000000021361
- (void)_waitForSiteApprovalWithServiceSpecifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000020889
- (id)_serviceDetailsWithEntry:(id)arg1;	// IMP=0x00100000000207d1
- (id)_entriesWithServiceSpecifier:(id)arg1 URL:(id)arg2 limit:(unsigned long long)arg3 auditToken:(CDStruct_6ad76789)arg4;	// IMP=0x001000000001ff74
- (void)_updateAllEntries:(id)arg1;	// IMP=0x001000000001f34e
- (id)_eligibleSystemPlaceholderRecords;	// IMP=0x001000000001f14c
- (void)_addEntriesForAllBundlesWithEnumerator:(id)arg1 toWorkingSet:(id)arg2 enterpriseContext:(id)arg3 developerModeEnabled:(_Bool)arg4;	// IMP=0x001000000001eeb2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

