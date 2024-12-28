//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebKit/WKWebsiteDataStore.h>

@class NSString;

@interface WKWebsiteDataStore (SafariSharedExtras)
+ (id)safari_dataStoreWithConfiguration:(id)arg1;	// IMP=0x00200000000e8e93
+ (id)safari_defaultDataStore;	// IMP=0x00200000000e8dd9
+ (id)safari_nonPersistentDataStore;	// IMP=0x00200000000e8d67
+ (id)safari_dataStoreForAutomationSessionWithIdentifier:(id)arg1;	// IMP=0x00200000000e8c23
+ (id)_newDataStoreForAutomationSessionIdentifier:(id)arg1;	// IMP=0x00200000000e8abc
+ (id)_dataStoresByAutomationSessionIdentifier;	// IMP=0x00200000000e8a6f
+ (id)_newDataStoreForProfileIdentifier:(id)arg1;	// IMP=0x00200000000e89ac
+ (id)_dataStoresByProfileIdentifier;	// IMP=0x00200000000e895f
+ (id)safari_allPersistentDataStores;	// IMP=0x00200000000e88b0
+ (void)safari_fetchExistingDataStoresForProfilesWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00200000000e851f
+ (void)safari_removeDataStoreForProfileWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00200000000e844c
+ (id)safari_dataStoreForProfileWithIdentifierIfExists:(id)arg1;	// IMP=0x00200000000e8435
+ (id)safari_dataStoreWithoutCachingForProfileWithIdentifier:(id)arg1;	// IMP=0x00200000000e841b
+ (id)safari_dataStoreForProfileWithIdentifier:(id)arg1;	// IMP=0x00200000000e83fe
+ (id)_safari_dataStoreForProfileWithIdentifier:(id)arg1 createIfNecessary:(_Bool)arg2 cacheNewDataStoreInMemory:(_Bool)arg3;	// IMP=0x00200000000e82c0
+ (void)safari_setCommonProperties:(id)arg1;	// IMP=0x00200000000e8269
+ (void)safari_clearHSTSSuperCookies;	// IMP=0x00200000000e7fcc
+ (id)safari_allDataTypes;	// IMP=0x00200000000e7efb
+ (id)safari_webViewForDownloadsForProfileWithIdentifier:(id)arg1;	// IMP=0x00200000000e7dc3
@property(readonly, nonatomic) NSString *safari_profileIdentifier;
@end
