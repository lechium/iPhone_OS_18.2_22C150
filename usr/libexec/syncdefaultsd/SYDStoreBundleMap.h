//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol OS_dispatch_queue;

@interface SYDStoreBundleMap : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSDictionary *_cachedStoreBundleMap;	// 16 = 0x10
}

+ (id)disabledStoreIdentifiers;	// IMP=0x0040000000003478
+ (id)sharedInstance;	// IMP=0x0010000000002b8e
- (void).cxx_destruct;	// IMP=0x00200000000046c4
@property(retain, nonatomic) NSDictionary *cachedStoreBundleMap; // @synthesize cachedStoreBundleMap=_cachedStoreBundleMap;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)installedAppsDidChange:(id)arg1;	// IMP=0x001000000000457d
- (id)generateStoreBundleMap;	// IMP=0x0010000000003c35
- (id)storeIdentifiersForInstalledBundles;	// IMP=0x0010000000003a39
- (void)clearCachedStoreBundleMap;	// IMP=0x0010000000003939
- (void)generateStoreBundleMapIfNecessary;	// IMP=0x001000000000386f
- (id)bundleIdentifiersForStoreIdentifier:(id)arg1;	// IMP=0x0010000000003607
- (_Bool)isStoreIdentifierUsedOnThisDevice:(id)arg1;	// IMP=0x00100000000034f2
- (void)setCloudSyncUserDefaultEnabled:(_Bool)arg1 storeIdentifier:(id)arg2;	// IMP=0x00100000000031b0
- (_Bool)isCloudSyncUserDefaultEnabledForStoreIdentifier:(id)arg1;	// IMP=0x0010000000002eac
- (_Bool)shouldSyncStoreWithIdentifier:(id)arg1;	// IMP=0x0010000000002d72
- (void)dealloc;	// IMP=0x0010000000002cfd
- (id)init;	// IMP=0x0010000000002be3

@end
