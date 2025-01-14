//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FileProviderDaemon/FPXOperationService-Protocol.h>
#import <FileProviderDaemon/FPXVendorObservation-Protocol.h>

@class FPCTLTermDumper, FPExtensionEnumerationSettings, FPItem, FPItemID, FPProviderDomain, FPSandboxingURLWrapper, NSArray, NSDate, NSDictionary, NSFileHandle, NSFileProviderDomain, NSFileProviderDomainVersion, NSFileProviderItemVersion, NSFileProviderRequest, NSProgress, NSString, NSURL, NSValue;
@protocol FPDDomainServicing, FPXEnumeratorObserver;

@protocol FPXVendor <FPXOperationService, FPXVendorObservation>
- (void)shouldConnectExternalDomainWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)_test_callFileProviderManagerAPIs:(void (^)(NSError *))arg1;
- (void)forceUpdateBlockedProcessNamesFromDomain:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)waitForStabilizationWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)getKnownFolderLocations:(unsigned long long)arg1 completionHandler:(void (^)(NSFileProviderKnownFolderLocations *, NSError *))arg2;
- (void)listRemoteVersionsWithSettings:(FPExtensionEnumerationSettings *)arg1 observer:(id <FPXEnumeratorObserver>)arg2 request:(NSFileProviderRequest *)arg3 completionHandler:(void (^)(id <FPXEnumerator>, NSError *))arg4;
- (void)importDidFinishWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)signalEnumeratorForPendingItemsWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)signalEnumeratorForMaterializedItemsWithCompletionHandler:(void (^)(NSError *))arg1;
- (NSProgress *)deleteItemWithID:(FPItemID *)arg1 baseVersion:(NSFileProviderItemVersion *)arg2 options:(unsigned long long)arg3 request:(NSFileProviderRequest *)arg4 completionHandler:(void (^)(FPExtensionResponse *, NSError *))arg5;
- (NSProgress *)createItemBasedOnTemplate:(FPItem *)arg1 fields:(unsigned long long)arg2 contents:(FPSandboxingURLWrapper *)arg3 options:(unsigned long long)arg4 request:(NSFileProviderRequest *)arg5 bounce:(_Bool)arg6 completionHandler:(void (^)(FPItem *, unsigned long long, _Bool, FPExtensionResponse *, NSError *))arg7;
- (NSProgress *)modifyItem:(FPItem *)arg1 baseVersion:(NSFileProviderItemVersion *)arg2 changedFields:(unsigned long long)arg3 contents:(FPSandboxingURLWrapper *)arg4 options:(unsigned long long)arg5 request:(NSFileProviderRequest *)arg6 completionHandler:(void (^)(FPItem *, unsigned long long, _Bool, FPExtensionResponse *, NSError *))arg7;
- (NSProgress *)fetchContentsForItemWithID:(FPItemID *)arg1 version:(NSFileProviderItemVersion *)arg2 usingExistingContentsAtURL:(FPSandboxingURLWrapper *)arg3 existingVersion:(NSFileProviderItemVersion *)arg4 request:(NSFileProviderRequest *)arg5 estimatedItemSize:(long long)arg6 isSymlink:(_Bool)arg7 completionHandler:(void (^)(FPSandboxingURLWrapper *, FPItem *, FPExtensionResponse *, unsigned long long, NSError *))arg8;
- (NSProgress *)fetchContentsForItemWithID:(FPItemID *)arg1 version:(NSFileProviderItemVersion *)arg2 request:(NSFileProviderRequest *)arg3 estimatedItemSize:(long long)arg4 isSymlink:(_Bool)arg5 extent:(NSValue *)arg6 alignment:(unsigned long long)arg7 options:(unsigned long long)arg8 completionHandler:(void (^)(FPSandboxingURLWrapper *, FPItem *, FPExtensionResponse *, NSValue *, unsigned long long, NSError *))arg9;
- (void)movingItemAtURL:(NSURL *)arg1 requiresProvidingWithDestinationURL:(NSURL *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)dumpIndexStateForDomain:(NSString *)arg1 toFileHandler:(NSFileHandle *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)signalNeedsReindexItemsWithIdentifiers:(NSArray *)arg1 domainIdentifier:(NSString *)arg2 indexReason:(long long)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)dropIndexForDomain:(NSString *)arg1 dropReason:(unsigned long long)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)indexOneBatchInDomain:(NSString *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)dumpInternalStateToTermDumper:(FPCTLTermDumper *)arg1 domainIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)removeTrashedItemsOlderThanDate:(NSDate *)arg1 domainIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)deleteSearchableItemsWithSpotlightDomainIdentifiers:(NSArray *)arg1 domainIdentifier:(NSString *)arg2 indexReason:(long long)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)fetchAlternateContentsURLWrapperForURL:(NSURL *)arg1 completionHandler:(void (^)(FPSandboxingURLWrapper *, NSError *))arg2;
- (void)didUpdateAlternateContentsDocumentForDocumentWithURL:(NSURL *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)setAlternateContentsURL:(FPSandboxingURLWrapper *)arg1 forDocumentWithURL:(NSURL *)arg2 completionHandler:(void (^)(FPItemID *, NSError *))arg3;
- (void)URLForItemID:(FPItemID *)arg1 creatingPlaceholderIfMissing:(_Bool)arg2 ignoreAlternateContentsURL:(_Bool)arg3 completionHandler:(void (^)(FPSandboxingURLWrapper *, FPSandboxingURLWrapper *, NSError *))arg4;
- (void)didChangeItemID:(FPItemID *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)valuesForAttributes:(NSArray *)arg1 forItemID:(FPItemID *)arg2 completionHandler:(void (^)(NSDictionary *, NSError *))arg3;
- (void)wakeForPushWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)fetchCustomPushTopicsWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)dropDomainWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)fetchOperationServiceEndpoint:(void (^)(NSXPCListenerEndpoint *, NSError *))arg1;
- (void)fetchVendorEndpoint:(void (^)(NSXPCListenerEndpoint *, NSError *))arg1;
- (void)fetchServicesForItemID:(FPItemID *)arg1 allowRestrictedSources:(_Bool)arg2 completionHandler:(void (^)(NSXPCListenerEndpoint *, NSArray *, NSError *))arg3;
- (void)bulkEvictItemsWithItemIDs:(NSArray *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)trashItemAtURL:(NSURL *)arg1 completionHandler:(void (^)(NSURL *, NSError *))arg2;
- (void)itemForURL:(NSURL *)arg1 completionHandler:(void (^)(FPItem *, NSError *))arg2;
- (void)itemForItemID:(FPItemID *)arg1 request:(NSFileProviderRequest *)arg2 completionHandler:(void (^)(FPItem *, FPExtensionResponse *, NSError *))arg3;
- (void)identifierForItemAtURL:(NSURL *)arg1 completionHandler:(void (^)(FPItemID *, NSError *))arg2;
- (void)itemChangedAtURL:(NSURL *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)evictItemAtURL:(NSURL *)arg1 completionHandler:(void (^)(FPItemID *, NSError *))arg2;
- (void)startProvidingItemAtURL:(NSURL *)arg1 readingOptions:(unsigned long long)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)providePlaceholderAtURL:(NSURL *)arg1 completionHandler:(void (^)(NSURL *, NSError *))arg2;
- (void)beginRequestWithDomain:(NSFileProviderDomain *)arg1 alternateContentsDictionary:(NSDictionary *)arg2 domainServicer:(id <FPDDomainServicing>)arg3 providerDomain:(FPProviderDomain *)arg4 domainVersion:(NSFileProviderDomainVersion *)arg5 completionHandler:(void (^)(NSError *))arg6;
@end

