//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHome, NSData, NSDictionary, NSMutableDictionary, NSNumber, NSRecursiveLock, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface HMDCHIPHomeDataSource : HMFObject
{
    NSNumber *_fabricID;	// 8 = 0x8
    HMDHome *_home;	// 16 = 0x10
    NSMutableDictionary *_pendingKeyValueStore;	// 24 = 0x18
    unsigned long long _pendingKeyValueStoreTransactionsCount;	// 32 = 0x20
    NSRecursiveLock *_lock;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x0010000000438e12
- (void).cxx_destruct;	// IMP=0x0000000000438750
@property(readonly, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(nonatomic) unsigned long long pendingKeyValueStoreTransactionsCount; // @synthesize pendingKeyValueStoreTransactionsCount=_pendingKeyValueStoreTransactionsCount;
@property(retain, nonatomic) NSMutableDictionary *pendingKeyValueStore; // @synthesize pendingKeyValueStore=_pendingKeyValueStore;
@property __weak HMDHome *home; // @synthesize home=_home;
@property(readonly, copy, nonatomic) NSNumber *fabricID; // @synthesize fabricID=_fabricID;
- (id)logIdentifier;	// IMP=0x0000000000438600
- (id)identifier;	// IMP=0x0000000000438573
- (id)allStorageDataSourcesForDeviceWithNodeID:(id)arg1;	// IMP=0x00000000004382c9
- (id)storageDataSourceForDeviceWithNodeID:(id)arg1;	// IMP=0x00000000004380d8
@property(readonly, copy, nonatomic) NSSet *allNodeIDs;
- (void)updateKeyValueStoreWithBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000437ac7
- (void)updateKeyValueStore:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000437a2f
@property(readonly, copy, nonatomic) NSDictionary *keyValueStore;
- (void)updateIntermediateCertificate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000437831
@property(readonly, copy, nonatomic) NSData *intermediateCertificate;
- (void)updateOperationalCertificate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000437633
@property(readonly, copy, nonatomic) NSData *operationalCertificate;
- (void)updateRootCertificate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000437435
@property(readonly, copy, nonatomic) NSData *rootCertificate;
- (void)updateLastNodeID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000437237
@property(readonly, copy, nonatomic) NSNumber *lastNodeID;
- (void)updateFabricID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000437039
- (void)_updateHomeModelWithLabel:(id)arg1 completion:(CDUnknownBlockType)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000436b34
- (id)initWithFabricID:(id)arg1 home:(id)arg2;	// IMP=0x0000000000436a47

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
