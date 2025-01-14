//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HAPSystemKeychainStore, HMDAccessoryBrowser, NSMutableSet, NSString;
@protocol HAP2StorageDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDHAP2Storage : NSObject
{
    id <HAP2StorageDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    HAPSystemKeychainStore *_storage;	// 24 = 0x18
    NSMutableSet *_registeredIdentifiers;	// 32 = 0x20
    HMDAccessoryBrowser *_accessoryBrowser;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000017bf5d
@property(nonatomic) __weak id <HAP2StorageDelegate> delegate; // @synthesize delegate=_delegate;
- (void)saveKeysForIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000017be7f
- (void)removeCacheForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000017bdb7
- (void)saveCacheForIdentifier:(id)arg1 data:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000017bcc1
- (void)fetchCacheForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000017bbf9
- (void)saveControllerIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000017bb35
- (void)_removeKeysForIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000017b9c7
- (void)removeKeysForIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000017b8ff
- (void)removeControllerKeyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000017b84b
- (void)fetchKeysForIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000017b783
- (void)fetchControllerKeyForDeviceId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000017b6bb
- (void)hasKeysForIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000017b5f3
- (void)deregisterPairedAccessoryWithIdentifier:(id)arg1;	// IMP=0x000000000017b4cf
- (void)registerPairedAccessoryWithIdentifier:(id)arg1;	// IMP=0x000000000017b43d
- (void)resetPairedAccessoryIdentifiers;	// IMP=0x000000000017b3e9
- (id)initWithAccessoryBrowser:(id)arg1;	// IMP=0x000000000017b2d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

