//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LibraryQueryPlanner, NSDictionary, NSString, ProgressCache;
@protocol LibraryCatalogObserver, OS_dispatch_queue;

@interface LaunchServicesCatalog : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    id <LibraryCatalogObserver> _observer;	// 16 = 0x10
    LibraryQueryPlanner *_planner;	// 24 = 0x18
    ProgressCache *_progressCache;	// 32 = 0x20
    _Bool _systemAppMappingsUpToDate;	// 40 = 0x28
    NSDictionary *_systemAppMappingByBundleID;	// 48 = 0x30
    NSDictionary *_systemAppMappingByItemID;	// 56 = 0x38
    _Bool _systemAppMappingsForWatchUpToDate;	// 64 = 0x40
    NSDictionary *_systemAppMappingForWatchByBundleID;	// 72 = 0x48
    NSDictionary *_systemAppMappingForWatchByItemID;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00200000001d4c2b
@property __weak id <LibraryCatalogObserver> observer; // @synthesize observer=_observer;
- (void)_handleBagInvalidatedNotification:(id)arg1;	// IMP=0x00100000001d4b6e
- (void)_handleBagChangedNotification:(id)arg1;	// IMP=0x00100000001d4ad8
- (void)_handleAppUnregisteredNotification:(id)arg1;	// IMP=0x00100000001d4720
- (void)_handleAppRegisteredNotification:(id)arg1;	// IMP=0x00100000001d43c6
- (id)resultsWithItemIDs:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001d2f7b
- (id)resultsWithBundleIDs:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001d2cba
- (id)resultsMatchingPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001d2aee
- (void)launchApp:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d24c0
- (void)launchApp:(id)arg1 onPairedDevice:(id)arg2 withResultHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001d24ab
- (void)launchApp:(id)arg1 extensionType:(long long)arg2 withResultHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001d2052
- (void)executeQueryForUpdatesReloadingFromServer:(_Bool)arg1 logKey:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000001d18f8
- (void)executeQuery:(id)arg1 excludingBundleIDs:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000001d16d9
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x00100000001d14e5
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x00100000001d0b67
- (void)dealloc;	// IMP=0x00100000001cf5fe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

