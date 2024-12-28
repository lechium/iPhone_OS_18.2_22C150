//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDDevice, HMDHome, HMDHomeWalletKeyAccessoryManager, HMFMessageDispatcher, NAFuture, NSMutableSet, NSObject, NSString, NSUUID;
@protocol HAPSystemKeychainStore, HMDHomeWalletDataSource, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDHomeNFCReaderKeyManager : HMFObject
{
    HMDHomeWalletKeyAccessoryManager *_accessoryManager;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    id <HAPSystemKeychainStore> _keychainStore;	// 24 = 0x18
    NSUUID *_uuid;	// 32 = 0x20
    HMDHome *_home;	// 40 = 0x28
    HMFMessageDispatcher *_messageDispatcher;	// 48 = 0x30
    id <HMDHomeWalletDataSource> _dataSource;	// 56 = 0x38
    NAFuture *_createKeychainItemFuture;	// 64 = 0x40
    NSMutableSet *_keyIdentifiersAlreadyUpdated;	// 72 = 0x48
}

+ (id)logCategory;	// IMP=0x0010000000b04e7c
- (void).cxx_destruct;	// IMP=0x0000000000b016f1
@property(retain) NSMutableSet *keyIdentifiersAlreadyUpdated; // @synthesize keyIdentifiersAlreadyUpdated=_keyIdentifiersAlreadyUpdated;
@property(retain) NAFuture *createKeychainItemFuture; // @synthesize createKeychainItemFuture=_createKeychainItemFuture;
@property(readonly) id <HMDHomeWalletDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property __weak HMDHome *home; // @synthesize home=_home;
@property(readonly, copy) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly) id <HAPSystemKeychainStore> keychainStore; // @synthesize keychainStore=_keychainStore;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) HMDHomeWalletKeyAccessoryManager *accessoryManager; // @synthesize accessoryManager=_accessoryManager;
- (id)logIdentifier;	// IMP=0x0000000000b01591
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSObject<OS_dispatch_queue>",?,R,N

@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)requestPrimaryResidentToFetchOrCreateReaderKeyWithFlow:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000b010a5
- (void)requestDevice:(id)arg1 toCreateKeychainItemForReaderKeyWithFlow:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000b00c43
@property(readonly) HMDDevice *primaryResidentDevice;
- (void)removeKeychainItemForReaderKey:(id)arg1 home:(id)arg2 flow:(id)arg3;	// IMP=0x0000000000b00566
- (id)createNFCReaderKeyModelWithHome:(id)arg1 nfcReaderKey:(id)arg2;	// IMP=0x0000000000b00441
- (void)createReaderKeyKeychainItemForHome:(id)arg1 isForceUpdate:(_Bool)arg2 flow:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000aff72a
- (id)readerKeyWithKeychainItemIdentifier:(id)arg1 error:(id *)arg2 flow:(id)arg3;	// IMP=0x0000000000aff4d4
- (void)deleteKeychainItemForNFCReaderKeyIsForceUpdate:(_Bool)arg1 withFlow:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000afefe1
- (id)requestPrimaryResidentToFetchOrCreateReaderKeyWithFlow:(id)arg1;	// IMP=0x0000000000afed36
- (void)handleSystemKeychainStoreUpdatedNotification:(id)arg1;	// IMP=0x0000000000afea48
- (void)handleHomeRemovedNotification:(id)arg1;	// IMP=0x0000000000afe44f
- (void)handleHomeDidUpdateNFCReaderKeyNotification:(id)arg1;	// IMP=0x0000000000afe15c
- (void)unconfigure;	// IMP=0x0000000000afe0ae
- (void)rollReaderKeyWithFlow:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000afdfd0
- (id)fetchOrCreateReaderKeyForPairingWithFlow:(id)arg1;	// IMP=0x0000000000afd519
- (void)fetchOrCreateReaderKeyWithRequiresPrivateKey:(_Bool)arg1 flow:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000afc916
- (void)fetchOrCreateReaderKeyOnQueueWithRequiresPrivateKey:(_Bool)arg1 flow:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000afc82f
- (void)handleCreateKeychainItemForReaderKeyMessage:(id)arg1;	// IMP=0x0000000000afc19c
- (void)handleFetchOrCreateReaderKeyMessage:(id)arg1;	// IMP=0x0000000000afbf8b
- (void)handleDeleteKeychainItemForNFCReaderKey:(id)arg1;	// IMP=0x0000000000afbdd7
- (void)configureWithHome:(id)arg1;	// IMP=0x0000000000afb836
- (id)initWithUUID:(id)arg1 workQueue:(id)arg2 keychainStore:(id)arg3 dataSource:(id)arg4;	// IMP=0x0000000000afb6c9
- (id)initWithUUID:(id)arg1 workQueue:(id)arg2;	// IMP=0x0000000000afb616

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
